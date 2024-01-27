from const import TLState

def invalid_not_have_valid_child_r(parent, children):
    for child in children:
        if parent.state == TLState.INVALID and child.state != TLState.INVALID:
            return False
    return True


def trunk_not_have_branch_child_r(parent, children):
    for child in children:
        if parent.state == TLState.TRUNK and child.state == TLState.BRANCH:
            return False
    return True


def trunk_have_t_child_r(parent, children):
    if parent.state == TLState.TRUNK:
        for child in children:
            if child.state == TLState.TRUNK or child.state == TLState.TIP:
                return True
        return False
    return True


def branch_not_have_t_child_r(parent, children):
    for child in children:
        if parent.state == TLState.BRANCH and (child.state == TLState.TRUNK or child.state == TLState.TIP):
            return False
    return True


def leaf_is_not_trunk(child):
    if child == TLState.TRUNK:
        return False
    return True