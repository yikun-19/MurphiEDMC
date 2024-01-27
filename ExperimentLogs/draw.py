#! python3

import subprocess as sp
import multiprocessing
import re
import csv
import time
import os
import random

Murphis_path = '../../Murphis/'

mu_compile_origin = Murphis_path + 'cmurphi5.5.0/src/mu'
mu_include_origin = Murphis_path + 'cmurphi5.5.0/include'

mu_compile = Murphis_path + 'tilelink_ls/src/mu'
mu_include_0 = Murphis_path + 'tilelink_ls/include-0'
mu_include_1 = Murphis_path + 'tilelink_ls/include-1'
mu_include_2 = Murphis_path + 'tilelink_ls/include-2'
mu_include_3 = Murphis_path + 'tilelink_ls/include-3'

def getFiles(model, algorithm, option):
    if model == 'TL-C_In_S_nodata':
        if option == 'states_cpp':
            return './TL_states/states_In_S_cpp_goalstates.txt'
        if option == 'model_cpp':
            return './models/' + algorithm + '/TL-C_In_S_nodata.cpp'
    if model == 'TL-C_In_S_data':
        if option == 'states_cpp':
            return './TL_states/states_In_S_cpp_goalstates.txt'
        if option == 'model_cpp':
            return './models/' + algorithm + '/TL-C_In_S_data.cpp'
    if model == 'TL-C_NonIn_S_nodata':
        if option == 'states_cpp':
            return './TL_states/states_NonIn_S_cpp_goalstates.txt'
        if option == 'model_cpp':
            return './models/' + algorithm + '/TL-C_NonIn_S_nodata.cpp'
    if model == 'TL-C_NonIn_S_data':
        if option == 'states_cpp':
            return './TL_states/states_NonIn_S_cpp_goalstates.txt'
        if option == 'model_cpp':
            return './models/' + algorithm + '/TL-C_NonIn_S_data.cpp'
    if model == 'TL-C_NonIn_M_data':
        if option == 'states_cpp':
            return './TL_states/states_NonIn_M_cpp_goalstates.txt'
        if option == 'model_cpp':
            return './models/' + algorithm + '/TL-C_NonIn_M_data.cpp'
    if model == 'TL-C_v4.3.1':
        if option == 'states_cpp':
            return './TL_states/states_NonIn_M_v4.3.1_cpp_goalstates.txt'
        if option == 'model_cpp':
            return './models/' + algorithm + '/TL-C_v4.3.1.cpp'
    else:
        return 'errors'

def getNums(model, i):
    
    # Level 3: 
    # inclusive_noData: 925 - i * 8                inclusive_Data: 932 - i * 8
    # non-inclusive_noData: 2388 - i * 8           non-inclusive_Data: 2390 - i * 8
    if model == 'TL-C_In_S_nodata':
        return 725 - i * 8 
    if model == 'TL-C_In_S_data':
        return 732 - i * 8 
    if model == 'TL-C_NonIn_S_nodata':
        return 2388 - i * 8 
    if model == 'TL-C_NonIn_S_data':
        return 2390 - i * 8 
    if model == 'TL-C_NonIn_M_data':
        return 2815 - i * 9   # return 2813 - i * 9 
    if model == 'TL-C_v4.3.1':
        return 2470 - i * 10 
    else:
        return 0

def get_result_from_log(dir_path, model, i):
    
    result_list = {'model_name': model, 'inv_no': 'inv_'+str(i), 'result': 'None', 'states': str(0), 'time': str(0)}

    result_file_handle = open(dir_path + 'state_' + str(i) + '.log', "r")
    result_txt = result_file_handle.read()

    if re.findall('Internal Error: Too many active states.', result_txt) != []:
        result_list['result'] = 'MemoryOut'
        return result_list
    if re.findall('The undefined value at ', result_txt) != []:
        result_list['result'] = 'UndefineError'
        return result_list
    if re.findall('No error found.', result_txt) != []:
        result_list['result'] = 'LSExit'
        return result_list
    if re.findall('State Space Explored:\n\n.*\n\nAnalysis of State Space:', result_txt) == []:
        result_list['result'] = 'Interrupt'
        return result_list

    # get states and time
    time_txt = re.findall('State Space Explored:\n\n.*\n\nAnalysis of State Space:', result_txt)[0]
    states_a = time_txt.split('states')[0]
    states = re.findall('\d+', states_a)[0]
    run_time_a = time_txt.split('rules fired in ')[1]
    run_time = re.findall('\d+.\d+', run_time_a)[0] # run_time = re.findall('\d+.\d+s', run_time_a)[0]
    result_list['states'] = str(states)
    result_list['time'] = str(run_time)

    if re.findall('Invariant\s+".*?"\s+failed.', result_txt) != []:
        result_list['result'] = 'Found'
    else:
        result_list['result'] = 'NotFound'

    return result_list


def collect_result_1(dir_path, algorithm):
    
    # writer.writerow(['protocol_model', 'BFS', 'DFS', 'LS-H1', 'LS-H2', 'LS-H3', 'LS-H4', 'LS-H5'])

    csv_file = open(dir_path + "result.csv", 'w', newline='')
    writer = csv.writer(csv_file)
    writer.writerow(['protocol_model', 'inv_no', 'result', 'states', 'time'])
    csv_file.close()

    csv_file = open(dir_path + "result.csv", 'a', newline='')
    writer = csv.writer(csv_file)

    models_list = ['TL-C_In_S_nodata', 'TL-C_In_S_data', 'TL-C_NonIn_S_nodata', 'TL-C_NonIn_S_data', 'TL-C_NonIn_M_data', 'TL-C_v4.3.1']
    # models_list = ['TL-C_NonIn_M_data']

    for model in models_list:
        try: 
            inv_num = 38
            for i in range(1, inv_num):
                run_result = get_result_from_log(dir_path, model, i)
                writer.writerow([run_result['model_name'], run_result['inv_no'], run_result['result'], run_result['states'], run_result['time']])
        except:
            print('You didn\'t test model: ' + model)

    csv_file.close()

class ResultItem:
    def __init__(self, name=''):
        self.name = name
        self.found_num = 0
        self.notfound_num = 0
        self.interrupt_num = 0
        self.penalty = 0


def get_result_table(dir_path):
    csv_file = open(dir_path + "result.csv", 'r', newline='')
    reader = csv.reader(csv_file)  
    headers = next(reader) # skip table header

    file_result_dict = dict()
    models_list = ['TL-C_In_S_nodata', 'TL-C_In_S_data', 'TL-C_NonIn_S_nodata', 'TL-C_NonIn_S_data', 'TL-C_NonIn_M_data', 'TL-C_v4.3.1']
    for model_name in models_list:
        file_result_dict[model_name] = ResultItem(model_name)
    
    timeout = 3600
    # line: [protocol_model, inv_no, result, states, time]
    for line in reader:
        if len(line) != 0:
            res_item = file_result_dict[line[0]]
            if line[2] == 'Found':
                res_item.found_num = res_item.found_num + 1
                res_item.penalty = res_item.penalty + float(line[4])
            elif line[2] == 'NotFound':
                res_item.notfound_num = res_item.notfound_num + 1
                res_item.penalty = res_item.penalty + timeout * 2
            elif line[2] == 'Interrupt':
                res_item.interrupt_num = res_item.interrupt_num + 1
                res_item.penalty = res_item.penalty + timeout * 2
            else:
                pass

    for model_name in models_list:
        if file_result_dict[model_name].found_num != 0 :
            file_result_dict[model_name].penalty = file_result_dict[model_name].penalty / (file_result_dict[model_name].found_num + file_result_dict[model_name].notfound_num + file_result_dict[model_name].interrupt_num)

    print('CSV file: ' + dir_path + 'result.csv')   
    for res_name, res in file_result_dict.items():
        print(res.name + '  ' + str(res.found_num) + '  ' + str(res.notfound_num) + '  ' + str(res.interrupt_num) + '  ' + "{:.2f}".format(res.penalty))         

def get_trace_from_log():

    h_value_path = []
    with open("./Figure/s224_SA_1.txt", "r") as file:
        lines = file.readlines()

        for line in lines:
            if "The heuristic value is: " in line:
                x = line.split("is: ")[1].replace("\n", "")
                h_value_path.append(x)

    # for h in h_value_path:
    #     print(str(h) + ', ', end=' ') 
    print(h_value_path)

def get_figure_data_from_log():
    file_path = "./Figure/s224_SA_process_1.txt"
    pattern = r"h-value: (\d+)"

    result = []

    with open(file_path, 'r') as file:
        for line in file:
            match = re.search(pattern, line)
            if match:
                value = int(match.group(1))
                result.append(value)

    print(result)




def write_csv(model, algorithm, dir):
    
    dir_path = dir + model + '/' + algorithm + "/"

    with open(dir_path + "result.csv", 'w', newline='') as csv_file:

        writer = csv.writer(csv_file)
        writer.writerow(['protocol_model', 'inv_no', 'result', 'states', 'time'])

    with open(dir_path + "result.csv", 'a', newline='') as csv_file:
 
        writer = csv.writer(csv_file)

        try: 
            if 'NonInclusive' in model:
                invs_num = 224
            else:
                invs_num = 38
            for i in range(1, invs_num+1):
                run_result = get_result_from_log(dir_path, model, i)
                writer.writerow([run_result['model_name'], run_result['inv_no'], run_result['result'], run_result['states'], run_result['time']])
        except:
            print('You didn\'t test model: ' + model + ' algo: ' + algorithm)


def parse_csv_for_algo(algorithm, dir):

    models_list = ['SingleAddr_Inclusive_Nodata', 'SingleAddr_Inclusive_Data',
                   'SingleAddr_NonInclusive_Nodata', 'SingleAddr_NonInclusive_Data',
                   'MultipleAddr_Inclusive_Data', 'MultipleAddr_NonInclusive_Data']

    file_result_dict = dict()
    for model_name in models_list:
        file_result_dict[model_name] = ResultItem(model_name)
    
    
    for model in models_list:

        dir_path = dir + model + '/' + algorithm + "/"
        
        print('CSV file: ' + dir_path + 'result.csv')   
        csv_file = open(dir_path + "result.csv", 'r', newline='')
        reader = csv.reader(csv_file)  
        headers = next(reader) # skip table header


        timeout = 3600
        # line: [protocol_model, inv_no, result, states, time]
        for line in reader:
            if len(line) != 0:
                res_item = file_result_dict[line[0]]
                if line[2] == 'Found':
                    res_item.found_num = res_item.found_num + 1
                    res_item.penalty = res_item.penalty + float(line[4])
                elif line[2] == 'NotFound':
                    res_item.notfound_num = res_item.notfound_num + 1
                    res_item.penalty = res_item.penalty + timeout * 2
                elif line[2] == 'Interrupt':
                    res_item.interrupt_num = res_item.interrupt_num + 1
                    res_item.penalty = res_item.penalty + timeout * 2
                else:
                    pass
    
    for model_name in models_list:
        if file_result_dict[model_name].found_num != 0 :
            file_result_dict[model_name].penalty = file_result_dict[model_name].penalty / (file_result_dict[model_name].found_num + file_result_dict[model_name].notfound_num + file_result_dict[model_name].interrupt_num)

    for res_name, res in file_result_dict.items():
        print(res.name + '  ' + str(res.found_num) + '  ' + str(res.notfound_num) + '  ' + str(res.interrupt_num) + '  ' + "{:.2f}".format(res.penalty))         



def get_comparison_data_from_csv(dir, algo_list):

    with open("./" + "result.csv", 'w', newline='') as csv_file:

        writer = csv.writer(csv_file)
        writer.writerow(['state_no', algo_list[0], algo_list[1], algo_list[2], algo_list[3]])

    algo1_list = []
    algo2_list = []
    algo3_list = []
    algo4_list = []
    result_csv_list = [algo1_list, algo2_list, algo3_list, algo4_list]

    models_list = ['SingleAddr_Inclusive_Nodata', 'SingleAddr_Inclusive_Data',       # pass
                   'SingleAddr_NonInclusive_Nodata', 'SingleAddr_NonInclusive_Data', # some timeout?
                   'MultipleAddr_Inclusive_Data', 'MultipleAddr_NonInclusive_Data']  # have timeout, but can pass? all have max_param
    # models_list = ['SingleAddr_Inclusive_Nodata', 'SingleAddr_Inclusive_Data']
    # models_list = ['MultipleAddr_NonInclusive_Data']


    for i in range(4):
        for model in models_list:

            dir_path = dir + model + '/' + algo_list[i] + "/"
            if os.path.exists(dir_path + "result.csv") == False:
                print("Csv file not found: "+ dir_path + "result.csv")
                continue

            with open(dir_path + "result.csv", 'r', newline='') as csv_file:

                reader = csv.reader(csv_file)  
                headers = next(reader) # skip table header
                timeout = 3600
                # line: [protocol_model, inv_no, result, states, time]
                for line in reader:
                    if len(line) != 0:
                        if line[2] == 'Found':
                            result_csv_list[i].append(line[4]) 
                        else:
                            result_csv_list[i].append(timeout) 

    with open("./" + "result.csv", 'a', newline='') as csv_file:
 
        writer = csv.writer(csv_file)

        print(len(result_csv_list[0]), len(result_csv_list[1]), len(result_csv_list[2]), len(result_csv_list[3]))
        for i in range(0, len(result_csv_list[0])):
            writer.writerow([str(i), result_csv_list[0][i], result_csv_list[1][i], result_csv_list[2][i], result_csv_list[3][i]])



if __name__ == '__main__':

    # cp ./results/lab1/DFS/TL-C_In_S_nodata/* ./experiments/Single_Address/Inclusive_Nodata/DFS/

    algorithm_options = ['BFS', 'DFS',                        # include_origin
                         'noSA-H0',                           # include-0
                         'SA-0', 'SA-H0', 'SA-H1', 'SA-H2', 'SA-H3',  # include-1
                         'SA-H1-OP',                          # include-2
                         'SA-H1-OP-TS']                       # include-3
    
    models_name = ['SingleAddr_Inclusive_Nodata', 'SingleAddr_Inclusive_Data',
                   'SingleAddr_NonInclusive_Nodata', 'SingleAddr_NonInclusive_Data',
                   'MultipleAddr_Inclusive_Data', 'MultipleAddr_NonInclusive_Data']

    """
        H1: Hamming Distance with funcMapping, without weights
        H2: Hamming Distance with funcMapping, with weights
    """
    
    # algo = 'H1' 
    # algo_list = ['non_non', 'sa_non', 'sa_op', 'sa_op']
    algo_list = ['H1', 'H2', 'H3', 'H4'] # H1: Hamming Distance; H2: Formula-based Distance + d ; H3: Depend + d; H4: H3
    
    dir1 = './Experiment2/Experiment2.1/'
    dir2 = './test1/'

    for model in models_name:
        for algo in algo_list:
            write_csv(model, algo, dir2)

    # parse_csv_for_algo(algo, dir2)

    # get_figure_data_from_log()

    get_comparison_data_from_csv(dir2, algo_list)

