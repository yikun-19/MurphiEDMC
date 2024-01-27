from functools import reduce
from typing import List
import graphviz
import itertools
from enum import Enum, unique
from anytree import Node, RenderTree, NodeMixin

from const import *
from rule import *
from tltree import *


def state_collect(tltree: TLTreeNode):
    if not tltree.children:
        return [tltree.state]
    state = [tltree.state]
    for child in tltree.children:
        state = state + state_collect(child)
    return state


def get_max_priv(state):
    if TLState.TIP in state:
        return TLState.TIP
    if TLState.TRUNK in state:
        return TLState.TRUNK
    if TLState.BRANCH in state:
        return TLState.BRANCH
    return TLState.INVALID


def leaf_filter(tltree: TLTreeNode):
    rules = [
        leaf_is_not_trunk
    ]
    if not tltree.children:
        for r in rules:
            if not r(tltree.state):
                return False
    for child in tltree.children:
        if not leaf_filter(child):
            return False
    return True


def incl_inter_level_filter(tltree: TLTreeNode):
    if not tltree.children:
        return True
    rules = [
        invalid_not_have_valid_child_r,
        # trunk_not_have_branch_child_r,
        # branch_not_have_t_child_r,
        # trunk_have_t_child_r
    ]
    for r in rules:
        if not r(tltree, tltree.children):
            return False
    for child in tltree.children:
        if not incl_inter_level_filter(child):
            return False
    return True


def global_filter(tltree: TLTreeNode):
    state = state_collect(tltree)
    if state.count(TLState.TIP) > 1:
        return False
    return True

def root_fileter(tltree: TLTreeNode):
    if tltree.state == TLState.BRANCH:
        return False
    return True

def nine_fork_filter(tltree: TLTreeNode):
    if not tltree.children:
        return True
    child_states = []
    for child in tltree.children:
        child_states += state_collect(child)
    max_priv = get_max_priv(child_states)

    for child in tltree.children:
        state = state_collect(child)
        priv = get_max_priv(state)
        if priv == TLState.TRUNK:
            return False
        if (priv == TLState.BRANCH and max_priv == TLState.TIP):
            return False
    if tltree.state == TLState.BRANCH and max_priv == TLState.TIP:
        return False
    if tltree.state == TLState.TRUNK and max_priv != TLState.TIP:
        return False
    for child in tltree.children:
        if not nine_fork_filter(child):
            return False
    return True

def isEuqal(root1: TLTreeNode, root2: TLTreeNode):
    if not root1 and not root2:
        return True
    elif not root1 and root2 or root1 and not root2:
        return False
    if root1.state != root2.state:
        return False
    # print(root1.children)
    child1, child2 = root1.children[0] if root1.children else None , root2.children[0] if root2.children else None
    if not isEuqal(child1, child2):
        return False 
    child1, child2 = root1.children[1] if root1.children else None , root2.children[1] if root2.children else None
    if not isEuqal(child1, child2):
        return False 
    return True

if __name__ == '__main__':

    # TOPO = Topo.SINGLE
    TOPO = Topo.DUAL
    # INCLUSION = Inclusion.INCLUSIVE
    INCLUSION = Inclusion.NONINCLUSIVE

    # Traverse all possible states
    states = [TLState] * 3 if TOPO == Topo.SINGLE else [TLState] * 7
    all_trees = []
    for x in itertools.product(*states):
        tlTree = TLTree(x)
        all_trees.append(tlTree.tree)
    print("Total states: " + str(len(all_trees)))

    # Filters
    incl_checkers = [
        leaf_filter,
        nine_fork_filter,
        incl_inter_level_filter,
        global_filter,
        root_fileter
    ]

    nine_checkers = [
        leaf_filter,
        nine_fork_filter,
        global_filter
    ]

    # Filter all illegal tree states
    if INCLUSION == Inclusion.INCLUSIVE:
        for c in incl_checkers:
            all_trees = list(filter(c, all_trees))
            print(f"filter: {retrieve_name(c)} states: {len(all_trees)}")
    else:
        for c in nine_checkers:
            all_trees = list(filter(c, all_trees))
            print(f"filter: {retrieve_name(c)} states: {len(all_trees)}")

    # # Visualization
    # mu_file = ''
    # it = 0
    # mu_file_handle = open('states_NonIn_S_visualization.txt', "w")
    # for tree in all_trees:
    #     it = it + 1
    #     res = ''
    #     for pre, fill, node in RenderTree(tree):
    #         # print("%s%s" % (pre, node.state))
    #         res = res + "%s%s\n" % (pre, node.state)
    #     mu_file_handle.write(str(it) + '\n' + res + "\n")
    #     # print()

    # mu_dict1 = ["L3.cache[a].state", 
    #            "L3.L2[i].cache[a].state", 
    #            "L3.L2[i].L1[i].cache[a].state", "L3.L2[i].L1[j].cache[a].state", 
    #            "L3.L2[j].cache[a].state", 
    #            "L3.L2[j].L1[i].cache[a].state", "L3.L2[j].L1[j].cache[a].state"]
    # mu_dict = ["mu_Ln[1].mu_cache.mu_line[1].mu_state", 
    #                 "mu_Ln[2].mu_cache.mu_line[1].mu_state",
    #                     "mu_L1[4].mu_cache.mu_line[1].mu_state", 
    #                     "mu_L1[5].mu_cache.mu_line[1].mu_state", 
    #                 "mu_Ln[3].mu_cache.mu_line[1].mu_state", 
    #                     "mu_L1[6].mu_cache.mu_line[1].mu_state", 
    #                     "mu_L1[7].mu_cache.mu_line[1].mu_state"]

    # single address
    # mu_dict = ["mu_Tree[1].mu_cache.mu_state",
    #                 "mu_Tree[2].mu_cache.mu_state",
    #                     "mu_Tree[4].mu_cache.mu_state",
    #                     "mu_Tree[5].mu_cache.mu_state",
    #                 "mu_Tree[3].mu_cache.mu_state",
    #                     "mu_Tree[6].mu_cache.mu_state",
    #                     "mu_Tree[7].mu_cache.mu_state"]

    # mu_file = ''
    # mu_file_handle = open('states_NonIn_S_cpp_Level2.m', "w")
    # for tree in all_trees:
    #     it = 0
    #     mu_file_handle.write('This states \n')
    #     for pre, fill, node in RenderTree(tree):
    #         if str(node.state) == "TLState.BRANCH":
    #             res = "%s.value(%s);" % (mu_dict[it], "mu_Branch")
    #         elif str(node.state) == "TLState.INVALID":
    #             res = "%s.value(%s);" % (mu_dict[it], "mu_None")
    #         elif str(node.state) == "TLState.TIP":
    #             res = "%s.value(%s);" % (mu_dict[it], "mu_Tip")
    #         elif str(node.state) == "TLState.TRUNK":
    #             res = "%s.value(%s);" % (mu_dict[it], "mu_Trunk")
    #         print(res)
    #         it = it + 1
    #         mu_file_handle.write(res + "\n")
    #     print()


    # multiple address
    # mu_dict = ["Tree[1].cache.state", 
    #     "Tree[2].cache.state", 
    #         "Tree[4].cache.state", 
    #         "Tree[5].cache.state", 
    #     "Tree[3].cache.state", 
    #         "Tree[6].cache.state", 
    #         "Tree[7].cache.state"]
    
    mu_dict = ["getState(Tree[1].cache, a)", 
                    "getState(Tree[2].cache, a)", 
                        "getState(Tree[4].cache, a)", "getState(Tree[5].cache, a)", 
                    "getState(Tree[3].cache, a)", 
                        "getState(Tree[6].cache, a)", "getState(Tree[7].cache, a)"]
    
    mu_file = ''
    mu_file_handle = open('states_NonIn_M_m_invariants.m', "w")
    inv_no = 0
    for tree in all_trees:
        it = 0
        inv_no = inv_no + 1
        # mu_file_handle.write('invariant \"test_reachable_state_%s\"\nforall i : child; j : child; a : addr do\n(i != j) -> !(' % inv_no)
        # mu_file_handle.write('invariant \"test_reachable_state_%s\"\nforall a : addr do\n !(' % inv_no)
        # mu_file_handle.write('invariant \"test_reachable_state_%s\"\n  forall a:addrType do\n  !(' % inv_no)
        mu_file_handle.write('invariant \"test_reachable_state_%s\"\n    !(' % inv_no)
        for pre, fill, node in RenderTree(tree):
            if str(node.state) == "TLState.BRANCH":
                res = " %s = %s " % (mu_dict[it], "Branch")
            elif str(node.state) == "TLState.INVALID":
                res = " %s = %s " % (mu_dict[it], "None")
            elif str(node.state) == "TLState.TIP":
                res = " %s = %s " % (mu_dict[it], "Tip")
            elif str(node.state) == "TLState.TRUNK":
                res = " %s = %s " % (mu_dict[it], "Trunk")
            print(res)
            if it != 0:
                mu_file_handle.write("&" + res)
            else:
                mu_file_handle.write(res)
            it = it + 1
        mu_file_handle.write(");\n\n")
        print()

    mu_file_handle.close()