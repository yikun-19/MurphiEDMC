#! python3

import subprocess as sp
from multiprocessing import Pool, Manager
import re
import csv
import time
import os
import signal
import psutil

MACHINE_NAME = 'panda14'

Murphi_path = '../../Murphis/MurphiFast/'
mu_compile = Murphi_path + 'src/mu'
mu_include = Murphi_path + 'include/'

algorithms_list = ['BFS', 'DFS', 'IDAstar', 'EDMC', 'LS']
models_list = ['TL-C_In_S_nodata', 'TL-C_In_S_data', 'TL-C_NonIn_S_nodata', 'TL-C_NonIn_S_data',
                'TL-C_In_M_data', 'TL-C_NonIn_M_data',
                'German_node2', 'German_node4', 'German_node8', 'Flash_node2', 'Flash_node4', 'Flash_node8']
models_list1 = ['TL-C_In_S_nodata', 'TL-C_In_S_data', 'TL-C_NonIn_S_nodata', 'TL-C_NonIn_S_data',
               'TL-C_In_M_data', 'TL-C_NonIn_M_data']
models_list2 = ['German_node2', 'German_node4', 'German_node8', 'Flash_node2', 'Flash_node4', 'Flash_node8']
algo_option_dict = {'BFS':'-vbfs', 'DFS':'-vdfs', 'EDMC':'-edmc', 'LS':'-ls', 'IDAstar':'-idastar'}
models_inv_dict = {'TL-C_In_S_nodata':38, 'TL-C_In_S_data':38, 'TL-C_NonIn_S_nodata':224, 'TL-C_NonIn_S_data':224,
               'TL-C_In_M_data':38, 'TL-C_NonIn_M_data':224,
               'German_node2':6, 'German_node4':20, 'German_node8':264,
               'Flash_node2':6, 'Flash_node4':20, 'Flash_node8':264}


class ResultItem:
    def __init__(self, name=''):
        self.name = name
        self.found_num = 0
        self.notfound_num = 0
        self.interrupt_num = 0
        self.penalty = 0


def rename_exec_cppfile():
    folder_path = f'./protocols/exec/German_node4/'
    files = os.listdir(folder_path)
    pattern = r'german_(\d+)\.m'
    for file in files:
        if re.match(pattern, file):
            i = file.split('_')[1].split('.')[0]
            new_filename = f'German_node4_inv{i}.m'
            old_file_path = os.path.join(folder_path, file)
            new_file_path = os.path.join(folder_path, new_filename)
            os.rename(old_file_path, new_file_path)


def handle_murphi_file(model):

    with open(f'./protocols/properties/{model}_invs.txt', 'r') as f2:
        content = f2.read()
        invs_list = content.split("invariant ")[1:]
        invs_list = ["invariant " + invariant for invariant in invs_list]

    for inv_i in range(1, models_inv_dict[model] + 1):
        murphi_file = f'./protocols/exec/{model}/{model}_inv{inv_i}.m'
        if os.path.exists(murphi_file):
            os.remove(murphi_file)

        with open(f'./protocols/models/{model}.m', 'r') as f1, open(murphi_file, 'w') as fm:
            fm.write(f1.read())
            fm.write("\n" + invs_list[inv_i-1] + "\n")


def murphi_run(algorithm, model, inv_i, cutoff=60):
    try:
        print('====== Running: ' + model + ' inv_' + str(inv_i) + ' with algo: ' + algorithm + ' ======')

        server_name = MACHINE_NAME
        file_prefix = f'./protocols/exec/{model}/{model}_inv{inv_i}'

        cmd0 = f'{mu_compile} {file_prefix}.m'
        sp.run(cmd0, cwd='./', shell=True, check=True, timeout=60, stdout=sp.DEVNULL, stderr=sp.DEVNULL)

        cmd1 = f'g++ -ggdb -w -o {file_prefix}.o {file_prefix}.cpp -I {mu_include} -lm'
        sp.run(cmd1, cwd='./', shell=True, check=True, timeout=60)

        log_file = f'./results/Exp-2.1/{algorithm}/{model}/inv_{str(inv_i)}.log'
        cmd2 = f'{file_prefix}.o {algo_option_dict[algorithm]} -m10000 -p5 > {log_file}'
        murphi_process = sp.Popen(cmd2, shell=True)

        murphi_process.wait(timeout=cutoff)

        sp.run(f'rm {file_prefix}.cpp {file_prefix}.o', cwd='./', shell=True, check=True, timeout=60)

    except sp.TimeoutExpired:
        print(f'== Report: {model} inv_{str(inv_i)} (pid: {murphi_process.pid}) timeout.\n')

        subshell_process = psutil.Process(murphi_process.pid)  # get subshell process object
        children_process = subshell_process.children(recursive=False)
        for child in children_process:
            os.kill(child.pid, signal.SIGKILL)  # kill all relative processes
        os.kill(murphi_process.pid, signal.SIGKILL)

        print('== Report: kill ' + model + ' inv_' + str(inv_i) + "\n")

    except:
        print("Something unexpected happened.\n")


def murphi_callback(info):
    print("== Murphi called back. ==\n")


def run_lab(algorithm, model):

    cutoff_time = 3600
    max_pros = 10
    # lb = 224
    # rb = 225
    lb = 1
    rb = models_inv_dict[model] + 1

    pool = Pool(processes=max_pros)
    lock = Manager().Semaphore(max_pros)

    for i in range(lb, rb):

        lock.acquire()

        pool.apply_async(murphi_run,
                         args=(algorithm, model, i, cutoff_time),
                         callback=murphi_callback)
        lock.release()

        time.sleep(10)

    # wait for all subprocesses completed.
    pool.close()
    pool.join()


def check_a_murphi_log(algorithm, model, inv_i, n):

    result_list = {'algo_name': algorithm, 'model_name': model, 'inv_no': 'inv_'+str(inv_i),
                   'result': 'None', 'states': str(0), 'time': str(0)}
    log_file = f'./results/Exp-2.{n}/{algorithm}/{model}/inv_{str(inv_i)}.log'

    log_messages = {
        'Internal Error: Too many active states.': 'MemoryOut',
        'The undefined value at ': 'UndefinedError',
        'No error found.': 'SearchExit'
    }

    if os.path.exists(log_file):
        with open(log_file, 'r') as f:
            result_txt = f.read()

            for message, result in log_messages.items():
                if re.findall(message, result_txt):
                    result_list['result'] = result
                    return result_list

            if not re.findall('State Space Explored:\n\n.*\n\n', result_txt):
                result_list['result'] = 'Interrupt'
                return result_list

            # get states and time
            time_txt = re.findall('State Space Explored:\n\n.*\n\n', result_txt)[0]
            states_a = time_txt.split('states')[0]
            states = re.findall('\d+', states_a)[0]
            run_time_a = time_txt.split('rules fired in ')[1]
            run_time = re.findall('\d+.\d+', run_time_a)[0] # run_time = re.findall('\d+.\d+s', run_time_a)[0]
            result_list['states'] = str(states)
            result_list['time'] = str(run_time)

            if re.findall('Invariant\s+".*?"\s+failed.', result_txt):
                result_list['result'] = 'Found'
            else:
                result_list['result'] = 'NotFound'
            return result_list
    else:
        print(f'{log_file} not found.')
        result_list['result'] = 'NotTested'
        return result_list


def check_murphi_logs():

    result_csv = './result_all.csv'

    with open(result_csv, 'w', newline='') as csv_file:
        writer = csv.writer(csv_file)
        writer.writerow(['algorithm', 'protocol_model', 'inv_no', 'result', 'states', 'time'])

    with open(result_csv, 'a', newline='') as csv_file:
        writer = csv.writer(csv_file)

        for algo in algorithms_list:
            for model in models_list:
                for i in range(1, models_inv_dict[model]+1):
                    result_list = check_a_murphi_log(algo, model, i, 1)
                    writer.writerow([algo, model, f'inv_{str(i)}',
                                     result_list['result'], result_list['states'], result_list['time']])

        algorithms_list2 = ['EDMC+H0', 'EDMC+H1', 'EDMC+H2', 'EDMC+H3',
                            'LS+H0', 'LS+H1', 'LS+H2', 'LS+H3',
                            'LS+MP+H1', 'LS+MP+H2', 'LS+MP+H3']
        for algo in algorithms_list2:
            for model in models_list:
                for i in range(1, models_inv_dict[model]+1):
                    result_list = check_a_murphi_log(algo, model, i, 2)
                    writer.writerow([algo, model, f'inv_{str(i)}',
                                     result_list['result'], result_list['states'], result_list['time']])


def summary_results():

    with open('result_all.csv', 'r') as f:
        reader = csv.reader(f)
        next(reader)  # Skip the header
        data = list(reader)

    summary = {}
    for row in data:
        algorithm = row[0]
        model = row[1]
        time = float(row[5])
        result = row[3]

        if (algorithm, model) not in summary:
            summary[(algorithm, model)] = {'PAR2': 0, 'Solved': 0}

        if result == 'Found':
            summary[(algorithm, model)]['PAR2'] += time
        else:
            summary[(algorithm, model)]['PAR2'] += 3600 * 2

        if result == 'Found':
            summary[(algorithm, model)]['Solved'] += 1

    with open('result_summary.csv', 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['algorithm', 'protocol_model', 'PAR2', 'Solved'])
        for (algorithm, model), values in summary.items():
            writer.writerow([algorithm, model, values['PAR2']/models_inv_dict[model], values['Solved']])


if __name__ == '__main__':

    algo_test = 'LS'
    model_test = 'TL-C_NonIn_M_data'

    models_list_test = ['TL-C_In_S_nodata', 'TL-C_In_S_data', 'TL-C_NonIn_S_nodata',
                        'TL-C_NonIn_S_data', 'TL-C_In_M_data']

    # rename_exec_cppfile()

    # for model in models_list2:
    #     handle_murphi_file(model)
    # handle_murphi_file(model_test)

    for model in models_list:
        run_lab(algo_test, model)
    # run_lab(algo_test, model_test)

    # murphi_run(algo_test, model_test, 2, cutoff=3600)
    # carelist 的纠正，LS 调优，死锁场景的复现
    # check_murphi_logs()
    # summary_results()

