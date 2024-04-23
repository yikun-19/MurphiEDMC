#include "mu.hpp"

/********************
  code for expr
 ********************/
const char *expr::get_string() {
    if (constval)
        if (type_equal(type, realtype)) {
            return tsprintf("%le", rvalue);    // AP: value of a real constant
        }
        else {
            return tsprintf("%d", value);
        }
    else {
        Error.Error
                ("Internal: a basic expression that wasn't a constant called expr::generate_code().");
        return "ERROR!";
    }
}

//IM: for math functions
const char *mathexpr::get_string() {
    if (constval)
        return tsprintf("%le", rvalue);
    switch (getfuntype()) {
        case mylog: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", log(arg1->getrvalue()));
                else
                    return tsprintf("%le", log(arg1->getvalue()));
            } else
                return tsprintf("log((double)%s)", arg1->get_string());
            break;
        }
        case mylog10: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", log10(arg1->getrvalue()));
                else
                    return tsprintf("%le", log10(arg1->getvalue()));
            } else
                return tsprintf("log10((double)%s)", arg1->get_string());
            break;
        }
        case myexp: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", exp(arg1->getrvalue()));
                else
                    return tsprintf("%le", exp(arg1->getvalue()));
            } else
                return tsprintf("exp((double)%s)", arg1->get_string());
            break;
        }
        case mysin: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", sin(arg1->getrvalue()));
                else
                    return tsprintf("%le", sin(arg1->getvalue()));
            } else
                return tsprintf("sin((double)%s)", arg1->get_string());
            break;
        }
        case mycos: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", cos(arg1->getrvalue()));
                else
                    return tsprintf("%le", cos(arg1->getvalue()));
            } else
                return tsprintf("cos((double)%s)", arg1->get_string());
            break;
        }
        case mytan: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", tan(arg1->getrvalue()));
                else
                    return tsprintf("%le", tan(arg1->getvalue()));
            } else
                return tsprintf("tan((double)%s)", arg1->get_string());
            break;
        }
        case myfabs: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", fabs(arg1->getrvalue()));
                else
                    return tsprintf("%le", fabs(arg1->getvalue()));
            } else
                return tsprintf("fabs((double)%s)", arg1->get_string());
            break;
        }
        case myfloor: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", floor(arg1->getrvalue()));
                else
                    return tsprintf("%le", floor(arg1->getvalue()));
            } else
                return tsprintf("floor((double)%s)", arg1->get_string());
            break;
        }
        case myceil: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", ceil(arg1->getrvalue()));
                else
                    return tsprintf("%le", ceil(arg1->getvalue()));
            } else
                return tsprintf("ceil((double)%s)", arg1->get_string());
            break;
        }
        case mysqrt: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", sqrt(arg1->getrvalue()));
                else
                    return tsprintf("%le", sqrt(arg1->getvalue()));
            } else
                return tsprintf("sqrt((double)%s)", arg1->get_string());
            break;
        }
        case myfmod: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype)) {
                    if (type_equal(arg2->gettype(), realtype))
                        return tsprintf("%le",
                                        fmod(arg1->getrvalue(), arg2->getrvalue()));
                    else
                        return tsprintf("%le",
                                        fmod(arg1->getrvalue(), arg2->getvalue()));
                } else {
                    if (type_equal(arg2->gettype(), realtype))
                        return tsprintf("%le",
                                        fmod(arg1->getvalue(), arg2->getrvalue()));
                    else
                        return tsprintf("%le",
                                        fmod(arg1->getvalue(), arg2->getvalue()));
                }
            } else
                return tsprintf("fmod((double)%s,(double)%s)",
                                arg1->get_string(), arg2->get_string());
            break;
        }
        case mypow: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype)) {
                    if (type_equal(arg2->gettype(), realtype))
                        return tsprintf("%le",
                                        pow(arg1->getrvalue(), arg2->getrvalue()));
                    else
                        return tsprintf("%le",
                                        pow(arg1->getrvalue(), arg2->getvalue()));
                } else {
                    if (type_equal(arg2->gettype(), realtype))
                        return tsprintf("%le",
                                        pow(arg1->getvalue(), arg2->getrvalue()));
                    else
                        return tsprintf("%le",
                                        pow(arg1->getvalue(), arg2->getvalue()));
                }
            } else
                return tsprintf("pow((double)%s,(double)%s)",
                                arg1->get_string(), arg2->get_string());
            break;
        }
        case myasin: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", asin(arg1->getrvalue()));
                else
                    return tsprintf("%le", asin(arg1->getvalue()));
            } else
                return tsprintf("asin((double)%s)", arg1->get_string());
            break;
        }
        case myacos: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", acos(arg1->getrvalue()));
                else
                    return tsprintf("%le", acos(arg1->getvalue()));
            } else
                return tsprintf("acos((double)%s)", arg1->get_string());
            break;
        }
        case myatan: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", atan(arg1->getrvalue()));
                else
                    return tsprintf("%le", atan(arg1->getvalue()));
            } else
                return tsprintf("atan((double)%s)", arg1->get_string());
            break;
        }
        case mysinh: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", sinh(arg1->getrvalue()));
                else
                    return tsprintf("%le", sinh(arg1->getvalue()));
            } else
                return tsprintf("sinh((double)%s)", arg1->get_string());
            break;
        }
        case mycosh: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", cosh(arg1->getrvalue()));
                else
                    return tsprintf("%le", cosh(arg1->getvalue()));
            } else
                return tsprintf("cosh((double)%s)", arg1->get_string());
            break;
        }
        case mytanh: {
            if (constval) {
                if (type_equal(arg1->gettype(), realtype))
                    return tsprintf("%le", tanh(arg1->getrvalue()));
                else
                    return tsprintf("%le", tanh(arg1->getvalue()));
            } else
                return tsprintf("tanh((double)%s)", arg1->get_string());
            break;
        }
    }
    return NULL;
}

const char *boolexpr::get_string() {
    if (constval)
        return tsprintf("%d", value);
    else {
        switch (op) {
            case IMPLIES:
                return tsprintf("(!(%s) | %s)", left->get_string(), right->get_string());
                break;
            case '|':
                return tsprintf("(%s | %s)", left->get_string(), right->get_string());
                break;
            case '&':
                return tsprintf("(%s & %s)", left->get_string(), right->get_string());
                break;
            default:
                Error.Error
                        ("Internal: funky value for op in boolexpr::generate_code()");
                return "ERROR!";
                break;
        }
    }
}

const char *notexpr::get_string() {
    return tsprintf("!(%s)", left->get_string());
}

const char *equalexpr::get_string() {
    if (constval)
        return tsprintf("%d", value);
    else {
        switch (op) {
            case '=':
                return tsprintf("(%s) == (%s)",
                                left->get_string(), right->get_string());
                break;
            case NEQ:
                return tsprintf("(%s) != (%s)",
                                left->get_string(), right->get_string());
                break;
            default:
                Error.Error
                        ("Internal: exciting value for op in equalexpr::get_string().");
                return "ERROR!";
                break;
        }
    }
}

const char *compexpr::get_string() {
    if (constval)
        return tsprintf("%d", value);
    else {
        switch (op) {
            case '<':
                return tsprintf("(%s) < (%s)",
                                left->get_string(), right->get_string());
            case LEQ:
                return tsprintf("(%s) <= (%s)",
                                left->get_string(), right->get_string());
            case '>':
                return tsprintf("(%s) > (%s)",
                                left->get_string(), right->get_string());
            case GEQ:
                return tsprintf("(%s) >= (%s)",
                                left->get_string(), right->get_string());
            default:
                Error.Error("Internal: odd value in compexpr::generate_code()");
                return "ERROR!";
        }
    }
}

const char *arithexpr::get_string() {
    if (constval)
        if (type_equal(type, realtype))
            return tsprintf("%le", rvalue);    // AP: value of a real arithmetic expression (+,-)
        else
            return tsprintf("%d", value);
    else {
        switch (op) {
            case '+':
                return tsprintf("(%s) + (%s)",
                                left->get_string(), right->get_string());
            case '-':
                return tsprintf("(%s) - (%s)",
                                left->get_string(), right->get_string());
            default:
                Error.Error("Internal: bad operator in arithexpr::generate_code()");
                return "ERROR!";
        }
    }
};

const char *unexpr::get_string() {
    if (constval)
        if (type_equal(type, realtype))
            return tsprintf("%le", rvalue);    // AP: value of a real unary expression
        else
            return tsprintf("%d", value);
    else {
        switch (op) {
            case '+':
                return left->get_string();
            case '-':
                return tsprintf(" - (%s)", left->get_string());
            default:
                Error.Error("Internal: bad operator in arithexpr::generate_code()");
                return "ERROR!";
        }
    }
};

const char *mulexpr::get_string() {
    if (constval)
        if (type_equal(type, realtype))
            return tsprintf("%le", rvalue);    // AP: value of a real arithmetic expression (*,/)
        else
            return tsprintf("%d", value);
    else {
        switch (op) {
            case '*':
                return tsprintf("(%s) * (%s)",
                                left->get_string(), right->get_string());
            case '/':
                return tsprintf("(%s) / (%s)",
                                left->get_string(), right->get_string());
            case '%':
                return tsprintf("(%s) %% (%s)",    /* doubled % to accomodate printf. */
                                left->get_string(), right->get_string());
            default:
                Error.Error("Internal: bad operator in mulexpr::generate_code()");
                return "ERROR!";
        }
    }
}

const char *condexpr::get_string() {
    return tsprintf("(%s) ? (%s) : (%s)",
                    test->get_string(),
                    left->get_string(), right->get_string());
}

// TODO: forall, exists
const char *quantexpr::get_string() {
    return tsprintf("(%s)", left->get_string());;
}

const char *designator::get_string() {
    switch (dclass) {
        case Base:
            return origin->getvalue()->generate_code();
        case ArrayRef:
            return tsprintf("%s[%s]",
                            left->get_string(), arrayref->get_string());
            break;
        case FieldRef:
            return tsprintf("%s.%s",
                            left->get_string(), fieldref->getvalue()->mu_name);
            break;
        default:
            Error.Error
                    ("Internal: Strange and mysterious values for designator::dclass.");
            return "ERROR!";
            break;
    }
}

const char *multisetcount::get_string() {
    return tsprintf("%s", "0");
}

const char *ismember::get_string() {
    return tsprintf("(%s>=%d && %s<=%d)",
                    left->get_string(), t->getleft(),
                    left->get_string(), t->getright());
}

const char *isundefined::get_string() {
    return tsprintf("%s.isundefined()", left->get_string());
}

const char *funccall::get_string() {
    funcdecl *f = (funcdecl *) func->getvalue();
    return tsprintf("%s( %s )",
            //im: for imported functions, "mu_" does not have to be prefixed to the function name
                    f->extern_def ? &(func->
                            getvalue()->generate_code())[3] :
                    func->getvalue()->generate_code(),
                    actuals !=
                    NULL ? actuals->generate_code(func->getname()->getname(),
                                                  f->params) : "");
}


/********************
  code for stmt
 ********************/
const char *stmt::get_string() {
    return "ERROR!";
}

const char *assignment::get_string() {
    return tsprintf("%s = %s, ", target->get_string(), src->get_string());
}

const char *whilestmt::get_string() {
    return tsprintf("while %s, ", test->get_string());
}

const char *ifstmt::get_string() {
    std::string res_str = tsprintf("%s ", test->get_string());

    for (stmt *s = body; s != NULL; s = s->next)
        res_str += s->get_string();

    if (elsecode != NULL) {
        for (stmt *s = elsecode; s != NULL; s = s->next)
            res_str += s->get_string();
    }
    return tsprintf("if %s, ", res_str.c_str());
}

const char *caselist::get_string() {
    std::string res_str = tsprintf(" if ");

    for (exprlist *v = values; v != NULL; v = v->next)
        res_str += tsprintf("%s ", v->e->get_string());

    for (stmt *b = body; b != NULL; b = b->next)
        res_str += b->get_string();
    return tsprintf("%s, ", res_str.c_str());
}

const char *switchstmt::get_string() {
    return tsprintf("switch ");
}

const char *forstmt::get_string() {
    std::string res_str = tsprintf(" for ");

    for (stmt *b = body; b != NULL; b = b->next)
        res_str += b->get_string();
    return tsprintf("%s, ", res_str.c_str());
}

const char *proccall::get_string() {
    return tsprintf("proccall ");
}

const char *clearstmt::get_string() {
    return tsprintf("clear() ");
}

const char *undefinestmt::get_string() {
    return tsprintf("undefined() ");
}

const char *multisetaddstmt::get_string() {
    return tsprintf("multisetadd() ");
}

const char *multisetremovestmt::get_string() {
    return "multisetremove statement";
}

const char *errorstmt::get_string() {
    return "ERROR!";
}

const char *assertstmt::get_string() {
    return "assert";
}

const char *putstmt::get_string() {
    return "puts";
}

const char *alias::get_string()
/* not used right now. */
{
    return "alias";
}

const char *aliasstmt::get_string() {
    std::string res_str = tsprintf(" alias ");
    for (stmt *b = body; b != NULL; b = b->next)
        res_str += b->get_string();
    return tsprintf("%s, ", res_str.c_str());
}

const char *returnstmt::get_string() {
    std::string res_str = tsprintf(" return ");
    return tsprintf("%s, ", retexpr->get_string());
}

