
/**************************************************
  The Heuristic Search verification main routines.
  *************************************************/

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <regex>

double SA_T = 0.0;
const int heuristic_mode = 3;
int state_no = 1;

unordered_map<std::string, int> var_marked;
std::unordered_map<std::string, int> careValMap;
vector<int> careValCnts;
vector<int> weights;

int checkStringLevel(string & str) {
    if (str.find("Tree[1]") != std::string::npos) {
        return 1;
    } else if (str.find("Tree[2]") != std::string::npos || str.find("Tree[3]") != std::string::npos) {
        return 2;
    } else if (str.find("Tree[4]") != std::string::npos || str.find("Tree[5]") != std::string::npos ||
               str.find("Tree[6]") != std::string::npos || str.find("Tree[7]") != std::string::npos) {
        return 3;
    } else {
        return -1;  // Return -1 if the string does not match any category
    }
}

void initAttrMap() {

    for (int i = 0; i < carelists.size(); i++) {
        for (int j = 0; j < carelists[i].size(); j++) {
            careValMap[carelists[i][j]] = i;
        }
        weights.push_back(pow(2, carelists.size() - i));
    }

    // get carelist0 weights with Tree level
//    for (int j = 0; j < carelists[0].size(); j++) {
//        if (checkStringLevel(carelists[0][j]) != -1) {
//            careValMap[carelists[0][j]] = checkStringLevel(carelists[0][j])-1;
//        } else {
//            careValMap[carelists[0][j]] = 0;
//        }
//    }
//    int num = max(3, (int) carelists.size());
//    for (int i = 0; i < num; i++) {
//        weights.push_back(pow(2, num - i));
//    }

    for (auto const & attr_vec: careValMap) {
        const std::string& attr_name = attr_vec.first;
        const int attrLayer = attr_vec.second;
        cout << "Attr: " << attr_name << " Level: " << attrLayer << " Wi: " << weights[attrLayer] << endl;
    }

    careValCnts.resize(carelists.size(), 0);
}

// get those var_i -> var
vector<std::string> getFrontVars(std::string &var) {

    std::regex pattern_tmp(R"(\[\d+\])");
    std::string var_normalized = std::regex_replace(var, pattern_tmp, "[node]");

    vector<std::string> res_normalized;
    for (auto r : rules) {
        if (std::find(r.action.begin(), r.action.end(), var_normalized) != r.action.end()) {
            for (auto f_var : r.guard) {
                if (var_marked.count(f_var) == 0) {
                    res_normalized.push_back(f_var);
                    var_marked[f_var] = 1;
                }
            }
        }
    }

//    vector<std::string> res;
//    for (const auto & var_normal : res_normalized) {
//        std::string var_insts = std::regex_replace(var_normal, std::regex(R"(\[node\])"), "[\\d+]");
//        res.push_back(var_insts);
//    }

    return res_normalized;
}

void getCarelists() {
    int max_layer = 10;

    // put carelist_i into carelists
    for (int i = 0; i < max_layer; i++) {
        vector<std::string> carelist_tmp;

        for (auto& var : carelists[i]) {
            vector<std::string> var_fronts = getFrontVars(var);
            for (auto & f_var : var_fronts) {
                carelist_tmp.push_back(f_var);
            }
        }

        if (carelist_tmp.empty())
            break;
        else {
            carelists.push_back(carelist_tmp);
        }
    }

    for (int i = 0; i < carelists.size(); i++) {
        cout << "Carelist Layer " << i << ": ";
        for (auto &var : carelists[i]) {
            cout << var << " ";
        }
        cout << endl;
    }
    initAttrMap();  // init careValMap
}

void calCareCnts(state *s) {
    for (auto const & attr_vec: careValMap) {
        const std::string& attr_name = attr_vec.first;
//        cout << attr_name << " ";
        if (!checkFuncAttr(attr_name)) {
//            cout << attr_name << " ";
            if (careValMap.count(attr_name) > 0) {
                const int attrLayer = careValMap[attr_name];
                careValCnts[attrLayer] += 1;
            }
        }
    }
//    cout << endl;
}

int calHamming() {
    int res = 0;
    for (auto &cnt_i : careValCnts) {
        res += cnt_i;
    }
    return res;
}

int calDependency() {
    int res = 0;
    for (int i = 0; i < careValCnts.size(); i++) {
        res += weights[i] * careValCnts[i];
//        cout << " " << weights[i] << " * " << careValCnts[i];
    }
//    cout << endl;
    return res;
}

int h(int mode, state *s) {

    if (mode == 0) return 0;

    int now_depth = s->d;

    std::fill(careValCnts.begin(), careValCnts.end(), 0);
    calCareCnts(s);

    int res = 0;
    switch (mode) {
        case 1:
            res = calHamming();  // Hamming Distance
            break;
        case 2: // A*
            res = calHamming() + now_depth;
            break;
        case 3:
//            res = calDependency() + weights[0] *now_depth;
            res = calDependency() + now_depth;  // 浅层的状态比较重要，inv3 是只有一个是 Tip 的
            break;
        default: // else: option is out of range.
            res = 0;
            break;
    }
    return res;
}


bool simulatedAnnealing(double T, int delta_E) {
    if ((int) exp(delta_E / T) * 1000 < 0)
        return true;                                           // type 'int' overflow
    int pr = (int) (exp(delta_E / T) * 1000) - rand() % 1000; // P = e^(delta_E/T)
    // cout << "Pr is " << pr << endl;
    return (pr > 0);
}

bool checkHeuVal(int nextH, int curH) {
    if (nextH <= curH) {
        return true;
    } else if (nextH > curH && simulatedAnnealing(SA_T, nextH - curH)) {
        return true;
    } else {
        return false;
    }
}


//bool RuleManager::GetNextStatesByHeuristicWithSA() {
//
//    setofrules *fire;
//    fire = EnabledTransition();
//
//    static state *originalstate = new state;    // buffer for workingstate
//    state *nextstate;
//    bool deadlocked_so_far = TRUE;
//    bool permanent;
//
//    StateCopy(originalstate, workingstate);    // make copy of workingstate
//
//    for (what_rule = 0; what_rule < numrules; what_rule++) {
//        if (fire->in(what_rule) && generator->Priority(what_rule) <= minp) {
//            nextstate = NextState();
//            if (StateCmp(curstate, nextstate) != 0) {
//                nextstate->h = h(heuristic_mode, nextstate);
//                nextstate->d = curstate->d + 1;
//                if (checkHeuVal(nextstate->h, curstate->h)) {
//                    deadlocked_so_far = FALSE;
//                    permanent = (generator->Priority(what_rule) < 50);
//                    nextstate->no = state_no ++;
//                    (void) StateSet->Add(nextstate, TRUE, permanent);
//                }
//                StateCopy(workingstate, originalstate);    // restore workingstate
//            }
//        }
//    }
//    return deadlocked_so_far;
//}

bool RuleManager::GetNextStatesByHeuristic() {

    setofrules *fire;
    fire = EnabledTransition();

    static state *originalstate = new state;    // buffer for workingstate
    state *nextstate;
    bool deadlocked_so_far = TRUE;
    bool permanent;

    StateCopy(originalstate, workingstate);    // make copy of workingstate

    for (what_rule = 0; what_rule < numrules; what_rule++) {
        if (fire->in(what_rule) && generator->Priority(what_rule) <= minp) {
            nextstate = NextState();
            if (StateCmp(curstate, nextstate) != 0) {
                nextstate->h = h(heuristic_mode, nextstate);
                nextstate->d = curstate->d + 1;
                deadlocked_so_far = FALSE;
                permanent = (generator->Priority(what_rule) < 50);
                nextstate->no = state_no ++;
                (void) StateSet->Add(nextstate, TRUE, permanent);
                StateCopy(workingstate, originalstate);    // restore workingstate
            }
        }
    }
    return deadlocked_so_far;
}


void AlgorithmManager::verify_edmc() {

    cout << "===========================================" << endl;
    cout << "  You are using EDMC algorithm.  " << endl;
    cout << "===========================================" << endl;

    setofrules fire;  // set of rules to be fired
    bool deadlocked;  // boolean for checking deadlock

    if (args->verbose.value)
        Reporter->print_verbose_header();

    cout.flush();

    srand(0);
    double SA_T0 = 10000.0;
    double SA_k = 0.995;
    int SA_t = 0;
    SA_T = SA_T0; // pow(k, t) * T0;
    long long SA_cnt = 1;

    theworld.to_state(NULL);  // trick : marks variables in world

    StartState->AllStartStates();
    cout << "\n===== Startstates are generated! =====" << endl;

    initHeuristics();
    getCarelists();

    cout << "\n===== Init heuristics! =====" << endl;

    // search state space
    while (!StateSet->QueueIsEmpty()) {

        // please make sure that global variable curstate does not change throughout the iteration

        SA_cnt++;
        if (SA_cnt % 10000 == 0) {
            SA_T *= SA_k;
            SA_cnt = 1;
        }

        curstate = StateSet->QueueDequeue(); // get priority queue front and pop

//        cout << "  pop: " << curstate->no << "  of  " << StateSet->QueueNumElts()
//             << "  depth: " << curstate->d << "  h-value: " << curstate->h << endl;

        NumCurState++;
        StateCopy(workingstate, curstate);

        if (args->verbose.value)
            Reporter->print_curstate();

        deadlocked = Rules->GetNextStatesByHeuristic();

        // if (deadlocked && !args->no_deadlock.value)
        //     Error.Deadlocked("Deadlocked state found.");  // check deadlock

    } // end of while

    Reporter->print_final_report();  // report no error
}


bool RuleManager::StatePropagate() {

    setofrules *fire;
    fire = EnabledTransition();

    state *nextstate;
    bool deadlocked_so_far = TRUE;
    bool flag = TRUE;
    bool next_flag = TRUE;
    int flag_rule = 0;

    static state *originalstate = new state;
    StateCopy(originalstate, workingstate);

    static state *tmpstate = new state;

    bool ls_end = FALSE;
    while (ls_end != TRUE) {
        ls_end = TRUE;
        flag = TRUE;
        fire = EnabledTransition();
        bool max_param = true;

        for (what_rule = numrules - 1; what_rule >= 0; what_rule--) {
//            cout << "rule: " << what_rule << endl;
            if (fire->in(what_rule) && generator->Priority(what_rule) <= minp) {
                nextstate = NextState();
                if (StateCmp(curstate, nextstate) != 0) {
                    nextstate->h = h(heuristic_mode, nextstate);
                    if (max_param) {
//                        nextstate->h = 1;
                        max_param = false;
                    }
                    nextstate->d = curstate->d + 1;
                    next_flag = StateSet->Add(nextstate, TRUE, TRUE); // add backtracking points
                    StateCopy(workingstate, originalstate);
                    if (next_flag && flag) {
                        StateCopy(tmpstate, workingstate);
                        flag = false;
                        flag_rule = what_rule;
                    }
                }
            }
            if (what_rule == 0) break;
        }

        if (!flag) {
            StateCopy(workingstate, tmpstate); // step forward
//            cout << "forward one step by " << flag_rule << " " << StateSet->NumElts() << endl;
            ls_end = FALSE;
        }

    }

//    cout << "backtracking point." << endl;

    return deadlocked_so_far;
}

void AlgorithmManager::verify_ls() {

    cout << "===========================================" << endl;
    cout << "  You are using LS algorithm.  " << endl;
    cout << "===========================================" << endl;

    setofrules fire;  // set of rules to be fired
    bool deadlocked;  // boolean for checking deadlock

    if (args->verbose.value)
        Reporter->print_verbose_header();

    cout.flush();

    srand(0);

    theworld.to_state(NULL);

    StartState->AllStartStates();
    cout << "\n===== Startstates are generated! =====" << endl;

    initHeuristics();
    getCarelists();

    cout << "\n===== Init heuristics! =====" << endl;

    // search state space
    while (!StateSet->QueueIsEmpty()) {

        curstate = StateSet->QueueDequeue();

//        cout << "  pop: " << curstate->no << "  of  " << StateSet->QueueNumElts()
//             << "  depth: " << curstate->d << "  h-value: " << curstate->h << endl;

        NumCurState++;
        StateCopy(workingstate, curstate);

        if (args->verbose.value)
            Reporter->print_curstate();

        deadlocked = Rules->StatePropagate();

    } // end of while

    Reporter->print_final_report();  // report no error
}


bool RuleManager::GetNextStatesNoHash() {

    setofrules *fire;
    fire = EnabledTransition();

    static state *originalstate = new state;    // buffer for workingstate
    state *nextstate;
    bool deadlocked_so_far = TRUE;
    bool permanent;

    StateCopy(originalstate, workingstate);    // make copy of workingstate

    for (what_rule = 0; what_rule < numrules; what_rule++) {
        if (fire->in(what_rule) && generator->Priority(what_rule) <= minp) {
            nextstate = NextState();
            if (StateCmp(curstate, nextstate) != 0) {
                nextstate->h = h(heuristic_mode, nextstate);
                nextstate->d = curstate->d + 1;
                deadlocked_so_far = FALSE;
                permanent = (generator->Priority(what_rule) < 50);
                nextstate->no = state_no ++;
                (void) StateSet->QueueEnqueue(nextstate);
                StateCopy(workingstate, originalstate);    // restore workingstate
            }
        }
    }
    return deadlocked_so_far;
}


void AlgorithmManager::verify_idastar() {

    cout << "===========================================" << endl;
    cout << "  You are using IDAStar algorithm.  " << endl;
    cout << "===========================================" << endl;

    setofrules fire;  // set of rules to be fired
    bool deadlocked;  // boolean for checking deadlock

    if (args->verbose.value)
        Reporter->print_verbose_header();

    cout.flush();

    theworld.to_state(NULL);

    StartState->AllStartStates();
    cout << "\n===== Startstates are generated! =====" << endl;

    initHeuristics();
    getCarelists();

    cout << "\n===== Init heuristics! =====" << endl;

    state * initstate = StateSet->QueueDequeue();
    initstate->h = h(heuristic_mode, initstate);
    initstate->d = 0;
    initstate->no = state_no ++;
    unsigned long pathLimit = initstate->h - 1;

    while (1) {

        cout << "===> Path limit: " << pathLimit << " <===" << endl;
        pathLimit ++;
        StateSet->QueueEnqueue(initstate);

        while (!StateSet->QueueIsEmpty()) {

            curstate = StateSet->QueueDequeue();

            NumCurState++;
            StateCopy(workingstate, curstate);

            if (args->verbose.value)
                Reporter->print_curstate();

            if (pathLimit >= curstate->h + curstate->d) {
                (void) Rules->GetNextStatesNoHash();
            }

        }

    }

    Reporter->print_final_report();  // report no error
}

