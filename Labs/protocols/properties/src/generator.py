import itertools

invs_list = []


def generate_flash_invs(node):
    states = ['CACHE_I', 'CACHE_S', 'CACHE_E']
    combinations = list(itertools.product(states, repeat=node))
    inv_no = 0
    for i, combination in enumerate(combinations, start=1):
        if (combination.count('CACHE_E') == 0 or
                (combination.count('CACHE_E') == 1 and
                 all(state == 'CACHE_I' or state == 'CACHE_E' for state in combination))):
            inv_no = inv_no + 1
            cache_states = ' & '.join(f'Sta.Proc[{j+1}].CacheState = {state}' for j, state in enumerate(combination))
            inv_i_str = f'invariant "test_{inv_no}"\n  !({cache_states});'
            invs_list.append(inv_i_str)


def generate_german_invs(node):
    states = ['I', 'S', 'E']
    combinations = list(itertools.product(states, repeat=node))
    inv_no = 0
    for i, combination in enumerate(combinations, start=1):
        if (combination.count('E') == 0 or
            (combination.count('E') == 1 and
             all(state == 'I' or state == 'E' for state in combination))):
            inv_no = inv_no + 1
            cache_states = ' & '.join(f'Cache[{j+1}].State = {state}' for j, state in enumerate(combination))
            inv_i_str = f'invariant "test_{inv_no}"\n  !({cache_states});'
            invs_list.append(inv_i_str)


if __name__ == '__main__':

    generate_flash_invs(8)

    content = ''
    for inv in invs_list:
        content += inv + "\n\n"

    with open('../Flash_node8_invs.txt', 'w') as file:
        file.write(content)


