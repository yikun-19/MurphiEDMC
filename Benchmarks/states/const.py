from enum import Enum, unique
import inspect

@unique
class TLState(Enum):
    INVALID = 0
    BRANCH = 1
    TRUNK = 2
    TIP = 3


@unique
class DirtyState(Enum):
    CLEAN = 0
    DIRTY = 1


@unique
class Inclusion(Enum):
    INCLUSIVE = 0
    NONINCLUSIVE = 1


@unique
class Topo(Enum):
    SINGLE = 0
    DUAL = 1


def retrieve_name(var):
    for fi in reversed(inspect.stack()):
        names = [var_name for var_name, var_val in fi.frame.f_locals.items() if var_val is var]
        if len(names) > 0:
            return names[0]