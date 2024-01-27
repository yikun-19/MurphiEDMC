  /**CFile***********************************************************************

  FileName    [mu_system.cpp]

  Synopsis    [File for visiting procedures]

  Author      [Igor Melatti]

  Copyright   [
  This file is part of the original verifier package of CMurphi. 
  Copyright (C) 2009-2012 by Sapienza University of Rome. 

  CMurphi is free software; you can redistribute it and/or 
  modify it under the terms of the GNU Lesser General Public 
  License as published by the Free Software Foundation; either 
  of the License, or (at your option) any later version.

  CMurphi is distributed in the hope that it will be useful, 
  but WITHOUT ANY WARRANTY; without even the implied warranty of 
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public 
  License along with this library; if not, write to the Free Software 
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.

  To contact the CMurphi development board, email to <melatti@di.uniroma1.it>. ]

******************************************************************************/

/************************************************************/
/* StateManager */
/************************************************************/
StateManager::StateManager(bool createqueue, unsigned long NumStates)
:NumStates(NumStates), statesCurrentLevel(0), statesNextLevel(0), currentLevel(0), pno(1.0)
{
#if __WORDSIZE == 64
  if (!args->print_64bit_info.value) {
#endif
    if (createqueue) {
        // if (args->main_alg.mode == argmain_alg::Verify_bfs) 
          queue = new state_queue((unsigned long) (gPercentActiveStates * NumStates));
        // else if (args->main_alg.mode == argmain_alg::Verify_ls) 
        //   queue = new state_priority_queue((unsigned long) (gPercentActiveStates * NumStates)); // max_active_states
    } else {
        // queue = new state_stack((unsigned long) (gPercentActiveStates * NumStates)); // TODO, queue defined state_priority_queue, non-uniform
    }
#if __WORDSIZE == 64
  }
#endif
  the_states = new state_set(NumStates);
}

StateManager_LS::StateManager_LS(bool createqueue, unsigned long NumStates)
:NumStates(NumStates), statesCurrentLevel(0), statesNextLevel(0), currentLevel(0), pno(1.0)
{
#if __WORDSIZE == 64
  if (!args->print_64bit_info.value) {
#endif
    if (createqueue) {
          queue = new state_priority_queue((unsigned long) (gPercentActiveStates * NumStates)); // max_active_states
    } else {
        // queue = new state_stack((unsigned long) (gPercentActiveStates * NumStates)); // TODO, queue defined state_priority_queue, non-uniform
    }
#if __WORDSIZE == 64
  }
#endif
  // now: 
  the_states = new state_set(NumStates);
  // the_states = new state_set(1000);  // 猜测：削弱了驱动探索新区域的能力，导致重复在旧区域探索
}

StateManager::~StateManager()
{
  if (queue != NULL)
    delete queue;
  if (the_states != NULL)
    delete the_states;
}

StateManager_LS::~StateManager_LS()
{
  if (queue != NULL)
    delete queue;
  if (the_states != NULL)
    delete the_states;
}

static std::vector<std::string> false_invs_list {};

bool check_is_false(std::string inv_name)
{
    for (int i = 0; i < false_invs_list.size(); i++)
    {
        if (inv_name == false_invs_list[i])
            return TRUE;
    }

    return FALSE;
}


bool StateManager::Add(state * s, bool valid, bool permanent)
{
  if (!the_states->was_present(s, valid, permanent)) {

    // Uli: invariant check moved here
    if (!Properties->CheckInvariants()) 
    {
        curstate = s;

#ifdef HASHC
    if (args->trace_file.value)
	      NumCurState = TraceFile->numLast();
#endif

//      Error.Deadlocked("Invariant \"%s\" failed p2-add.",
//		       Properties->LastInvariantName());

    }

    if (args->trace_all.value)
        Reporter->print_trace_all();

    statesNextLevel++;
    queue->enqueue(s);  // 
    Reporter->print_progress();
    return TRUE;
  } else
    return FALSE;
}

void StateManager_LS::elts_clear()
{
  queue->elts_clear();
}

bool StateManager_LS::Add(state * s, bool valid, bool permanent)
{
  // now: whether to move hashtable
  if (!the_states->was_present(s, valid, permanent)) {  // was_present & num_elts & new state_set(NumStates)  
    
    // the_states->print_capacity();
    
    // Uli: invariant check moved here
    if (!Properties->CheckInvariants()) 
    {
        curstate = s;

#ifdef HASHC
    if (args->trace_file.value)
	      NumCurState = TraceFile->numLast();
#endif

//      Error.Deadlocked("Invariant \"%s\" failed p2-add.",
//		       Properties->LastInvariantName());

    }

    if (args->trace_all.value)
        Reporter->print_trace_all();
    statesNextLevel++;
    queue->enqueue(s);
    Reporter->print_progress_Ls();
    return TRUE;
  } else
    return FALSE;
}

// now:
void StateManager_LS::CutOff(int hope_num)
{
  if (queue->NumElts() > 10000)
  {
    vector<state *> vec;
    state* s_remain; 
    for (int i = 0; i < hope_num; i++)
    {
      s_remain = queue->dequeue();
      vec.push_back(s_remain);
    }
    queue->newHeap(vec); 
  }

}

bool StateManager::QueueIsEmpty()
{
  return queue->isempty();
}

bool StateManager_LS::QueueIsEmpty()
{
  return queue->isempty();
}

state *StateManager::QueueTop()
{
  return queue->top();
}

state *StateManager_LS::QueueTop()
{
  return queue->top();
}


state *StateManager::QueueDequeue()
{
  return queue->dequeue();
}

state *StateManager_LS::QueueDequeue()
{
  return queue->dequeue();
}

unsigned StateManager::NextRuleToTry()	// Uli: unsigned short -> unsigned
{
  return queue->NextRuleToTry();
}

unsigned StateManager_LS::NextRuleToTry()	// Uli: unsigned short -> unsigned
{
  return queue->NextRuleToTry();
}

void StateManager::NextRuleToTry(unsigned r)
{
  queue->NextRuleToTry(r);
}

void StateManager_LS::NextRuleToTry(unsigned r)
{
  queue->NextRuleToTry(r);
}

// -------------------------------------------------------------------------
// Uli: added omission probability calculation & printing

#ifdef HASHC

#include <math.h>

double StateManager::harmonic(double n)
// return harmonic number H_n
{
  return (n <
	  1) ? 0 : log(n) + 0.577215665 + 1 / (2 * n) - 1 / (12 * n * n);
}

void StateManager::CheckLevel()
// check if we are done with the level currently expanded
{
  static double p = 1.0;	// current bound on state omission probability
  static double l = pow(2, double (args->num_bits.value));	// l=2^b
  static double k = -1;		// sum of the number of states - 1
  static double m = NumStates;	// size of the state table

  if (--statesCurrentLevel <= 0)
    // all the states of the current level have been expanded
  {
    // proceed to next level
    statesCurrentLevel = statesNextLevel;
    statesNextLevel = 0;

    // check if there are states in the following level
    if (statesCurrentLevel != 0) {
      currentLevel++;

      // calculate p_k with equation (2) from FORTE/PSTV paper for
      // the following level
      k += statesCurrentLevel;
      double pk = 1 - 2 / l * (harmonic(m + 1) - harmonic(m - k))
	  + ((2 * m) + k * (m - k)) / (m * l * (m - k + 1));
      pno *= pk;
    }
  }
}

void StateManager::PrintProb()
{
  // calculate Pr(not even one omission) with equation (12) from CHARME
  //  paper
  double l = pow(2, double (args->num_bits.value));
  double m = NumStates;
  double n = the_states->NumElts();
  double exp = (m + 1) * (harmonic(m + 1) - harmonic(m - n + 1)) - n;
  double pNO =
      pow(1 - 1 / l,
	  (m + 1) * (harmonic(m + 1) - harmonic(m - n + 1)) - n);

  // print omission probabilities
  cout.precision(6);
  cout << "Omission Probabilities (caused by Hash Compaction):\n\n"
      << "\tPr[even one omitted state]    <= " << 1 - pNO << "\n";
  if (args->main_alg.mode == argmain_alg::Verify_bfs)
    cout << "\tPr[even one undetected error] <= " << 1 - pno << "\n"
	<< "\tDiameter of reachability graph: " << currentLevel -
	1 << "\n\n";
  // remark: startstates had incremented the currentLevel counter
  else
    cout << "\n";
}

#endif

// -------------------------------------------------------------------------

void StateManager::print_capacity()
{
  if (args->main_alg.mode == argmain_alg::Verify_dfs
      || args->main_alg.mode == argmain_alg::Verify_bfs
      || args->main_alg.mode == argmain_alg::Verify_ls) {
    cout << "\nMemory usage:\n\n";
    cout << "\t* The size of each state is " << BITS_IN_WORLD << " bits "
	<< "(rounded up to " << BLOCKS_IN_WORLD << " bytes).\n";
    the_states->print_capacity();
    queue->print_capacity();
  }
}

void StateManager_LS::print_capacity()
{
  if (args->main_alg.mode == argmain_alg::Verify_dfs
      || args->main_alg.mode == argmain_alg::Verify_bfs
      || args->main_alg.mode == argmain_alg::Verify_ls) {
    cout << "\nMemory usage:\n\n";
    cout << "\t* The size of each state is " << BITS_IN_WORLD << " bits "
	<< "(rounded up to " << BLOCKS_IN_WORLD << " bytes).\n";
    the_states->print_capacity();
    queue->print_capacity();
  }
}

void StateManager::print_all_states()
{
  the_states->print();
}

void StateManager_LS::print_all_states()
{
  // the_states->print();
}

unsigned long StateManager::NumElts()
{
  return the_states->NumElts();
}

unsigned long StateManager_LS::NumElts_LS()
{
  return the_states->NumElts(); // flag: hash table
}

unsigned long StateManager::NumEltsReduced()
{
  return the_states->NumEltsReduced();
}

unsigned long StateManager_LS::NumEltsReduced()
{
  return the_states->NumEltsReduced();
}

unsigned long StateManager::QueueNumElts()
{
  return queue->NumElts();
}

unsigned long StateManager_LS::QueueNumElts()  // now: cutoff openlist
{
  return queue->NumElts();
}

void StateManager::print_trace_aux(StatePtr p)	// changes by Uli
{
  state original;
  char *s;

  if (p.isStart()) {
    // this is a startstate
    // expand it into global variable `theworld`
    // StateCopy(workingstate, s);   // Uli: workingstate is set in 
    //      StateName()

    // output startstate
    cout << "Startstate " << (s = StartState->StateName(p))
	<< " fired.\n";
    delete[]s;			// Uli: avoid memory leak
    theworld.print();
    cout << "----------\n\n";
  } else {
    // print the prefix
    print_trace_aux(p.previous());

    // print the next state, which should be equivalent to state s
    // and set theworld to that state.
    // FALSE: no need to print full state
    Rules->print_world_to_state(p, FALSE);
  }
}

void StateManager_LS::print_trace_aux(StatePtr p)	// changes by Uli
{
  state original;
  char *s;

  if (p.isStart()) {
    // this is a startstate
    // expand it into global variable `theworld`
    // StateCopy(workingstate, s);   // Uli: workingstate is set in 
    //      StateName()

    // output startstate
    cout << "Startstate " << (s = StartState->StateName(p)) << " fired." << "\n";
    delete[]s;			// Uli: avoid memory leak
    theworld.print();
    cout << "----------\n\n";
  } else {
    // print the prefix
    print_trace_aux(p.previous());

    // print the next state, which should be equivalent to state s
    // and set theworld to that state.
    // FALSE: no need to print full state
    Rules->print_world_to_state(p, FALSE);
  }
}

void StateManager::print_trace(StatePtr p)
{
  // print the prefix 
  if (p.isStart()) {
    print_trace_aux(p);
  } else {
    print_trace_aux(p.previous());

    // print the next state, which should be equivalent to state s
    // and set theworld to that state.
    // TRUE: print full state please;
    Rules->print_world_to_state(p, TRUE);
  }
}

void StateManager_LS::print_trace(StatePtr p)
{
  // print the prefix 
  if (p.isStart()) {
    print_trace_aux(p);
  } else {
    print_trace_aux(p.previous());

    // print the next state, which should be equivalent to state s
    // and set theworld to that state.
    // TRUE: print full state please;
    Rules->print_world_to_state(p, TRUE);
  }
}


/************************************************************/
/* StartStateManager */
/************************************************************/
StartStateManager::StartStateManager()
{
    generator = new StartStateGenerator;    // 
}

state *StartStateManager::RandomStartState()
{
  what_startstate = (unsigned short) (random.next() % numstartstates);
  return StartState();
}

void StartStateManager::AllStartStates()
{
  state *nextstate = NULL;

  for (what_startstate = 0; what_startstate < numstartstates; what_startstate++) 
  {
      nextstate = StartState();	// nextstate points to internal data at theworld.getstate()
      if (args->main_alg.mode == argmain_alg::Verify_ls)
      {
        (void) StateSet_Ls->Add(nextstate, FALSE, TRUE);
      }
      else
      {
        (void) StateSet->Add(nextstate, FALSE, TRUE);
      }
      
  }
}

bool judge_list(string attr_name, vector<string> vec)
{
  for (auto it = vec.begin(); it != vec.end(); it++)
  {
    if ((*it) == attr_name)
      return true;
  }
  return false;
}

state *StartStateManager::NextStartState()
{
  static int next_startstate = 0;
  if (next_startstate >= numstartstates)
    return NULL;
  what_startstate = next_startstate++;
  return StartState();
}

state *StartStateManager::StartState()
{

  state *next_state = NULL;

  category = STARTSTATE;

  // preparation
  theworld.reset();

  // fire state rule
  generator->Code(what_startstate);

  // print verbose message
  if (args->verbose.value)
    Reporter->print_fire_startstate();

  // Uli: invariant check moved

  // Uli: mark as startstate
  workingstate->previous.clear();
  workingstate->d = 1; 
  workingstate->h = h(workingstate, 1);

  if (goal_value_flag == false)
  { 
    // StateCopy(goalstate, workingstate);  // TODO: goalstate's partial variable assignment from invariants
    for(int i = 0; i < BLOCKS_IN_WORLD; i++)
    {
        tmpbits[i] = workingstate->bits[i];
    }

    // hacker: modify workingstate to make error, goalstate will be bound with workingstate addly 
    generator->Goal_value();

    cout << "\n------------- Show Goalstate: ------------------" << endl;
    workingstate->print();     // init attr_list, DON'T DELETE! first mark theworld.

    for(int i = 0; i < BLOCKS_IN_WORLD; i++)
    {
        goalbits[i] = workingstate->bits[i];
        workingstate->bits[i] = tmpbits[i];
    }
    cout << "\n------------- Show a heuristic value: ------------------" << endl;
    cout << h(workingstate, 1) << endl;

    cout << "\n------------- Show Initstate: ------------------" << endl;
    // workingstate->print();     // init attr_list

    goal_value_flag = true;
  
  }

  // if (!StateEquivalent(goalstate, workingstate))
  // {
  //   cout << "111111" << endl;
  //   goalstate->print();
  // }else{
  //   cout << "222222" << endl;
  //   goalstate->print();
  //   cout << "======================================" << endl;
  //   workingstate->print();
  // }

  /****
  // in class StartStateGenerator
  void Goal_value()  // makun: set goalstate
{
    static mu_1_client mu_i;
    // r-value is int type
    mu_i.goal_value(1);
    // r-value is other type
    mu_n[1].goal_value(mu_I);
}
  ******/

//   if (startstate_flag == true)
//   {
    
//     for(int i = 0; i < BLOCKS_IN_WORLD; i++)
//     {
//         tmpbits[i] = workingstate->bits[i];
//     } 
//     // generator->Goal_value1(); 
//     // for(int i = 0; i < BLOCKS_IN_WORLD; i++)
//     // {
//     //     goalbits[i] = workingstate->bits[i];
//     //     workingstate->bits[i] = tmpbits[i];
//     // }
    
//     // A flow in German: SendReqS(1)、RecvReqS(1)、SendGntE(1)、RecvGntE(1)、Store(1, 1)
//     // rb10、rb8、rb4、rb2、rb11 ==> 20, 16, 8, 4, 22
//     generator->FlowSetter(); 
//     for (int i = 0; i < flows.size(); i++)
//     {
//       // run a flow 
//       generator->Code(0); // Startstate Init
//       for (int j = 0; j < flows[i].size(); j++)
//       {
//         cout << flows[i][j] << endl;
//         Rules->RuleCode(flows[i][j]);  // generator should be NextStateGenerator object, not StartStateGenerator object 
//       }

//       for(int k = 0; k < BLOCKS_IN_WORLD; k++)
//       {
//         flowbits[k] = workingstate->bits[k];
//       }

//       workingstate->print();

//       for(int k = 0; k < BLOCKS_IN_WORLD; k++)
//       { 
//         if (flowbits[k] != goalbits[k])
//         {
//           if (goalbits[k] = tmpbits[k])
//           {
//             goalbits[k] = flowbits[k]; 
//           }
//         }
//       }
//     }

//     for(int i = 0; i < BLOCKS_IN_WORLD; i++)
//     {
//         workingstate->bits[i] = tmpbits[i];
//     }

//     for (int i = 0; i < BLOCKS_IN_WORLD; i++)
//     {
//       if (flowbits[i] != tmpbits[i])
//       {
//         for (int j = 0; j < attr_list.size(); j++)
//         {
//           if(attr_list[j].first / 8 <= i && ( j == attr_list.size() - 1 || attr_list[j+1].first / 8 > i))
//             carelist_flow.push_back(attr_list[j].second); 
//         }
//       }
//     }

//     cout << "Carelist by flow: " << endl;
//     for (int i = 0; i < carelist_flow.size(); i++)
//     {
//       cout << carelist_flow[i] << endl;
//     }

//     startstate_flag = false;
//   }

  return workingstate;
}

char *StartStateManager::LastStateName()
{
  return generator->Name(what_startstate);
}

char *StartStateManager::StateName(StatePtr p)
{
  state nextstate;
  if (!p.isStart())
    Error.Notrace
	("Internal: Cannot find startstate name for non startstate");
  for (what_startstate = 0; what_startstate < numstartstates; what_startstate++) {
      StartState();
      StateCopy(&nextstate, workingstate);

      if (StateEquivalent(&nextstate, p))   // action, not judgement
          return LastStateName();
  }

//  Norris: it is very funny, but the following code is supposed to work, but it doesn't
//
//   state * nextstate;
//   for(what_startstate=0; what_startstate<numstartstates; what_startstate++)
//     {
//       nextstate = StartState();                  // nextstate points to internal data at theworld.getstate()
//       if (p.compare(nextstate))
//      return LastStateName();
//     }

  Error.Notrace
      ("Internal: Cannot find startstate name for funny startstate");
  return NULL;
}

/************************************************************/
/* RuleManager */
/************************************************************/
RuleManager::RuleManager():rules_fired(0)
{
  NumTimesFired = new unsigned long[RULES_IN_WORLD];
  generator = new NextStateGenerator;

  // initialize check timesfired
  for (int i = 0; i < RULES_IN_WORLD; i++)
    NumTimesFired[i] = 0;
};

RuleManager::~RuleManager()
{
  delete[OLD_GPP(RULES_IN_WORLD)] NumTimesFired;
}

void RuleManager::ResetRuleNum()
{
  what_rule = 0;
}

void RuleManager::RuleCode(unsigned r)
{
  generator->Code(r);
} 

void RuleManager::SetRuleNum(unsigned r)
{
  what_rule = r;
}

state *RuleManager::SeqNextState()
{
  state *ret;

  if (args->main_alg.mode == argmain_alg::Verify_ls)
  {
    what_rule = StateSet_Ls->NextRuleToTry();
  }
  else
  {
    what_rule = StateSet->NextRuleToTry();
  }

  generator->SetNextEnabledRule(what_rule);

  if (what_rule < numrules) {
    ret = NextState();
    if (args->main_alg.mode == argmain_alg::Verify_ls)
    {
      StateSet_Ls->NextRuleToTry(what_rule + 1);
    }
    else
    {
      StateSet->NextRuleToTry(what_rule + 1);
    }
    return ret;
  } else
    return NULL;
}

// Uli: un-commented, fixed memory leak
state *RuleManager::RandomNextState()
{
  unsigned PickARule;
  setofrules rulesleft;
  static state *originalstate = new state;	// buffer, for deadlock checking

  // save workingstate
  StateCopy(originalstate, workingstate);

  // setup set of rules to be checked
  rulesleft.includeall();

  // nondeterministically fire rules until a different state is obtained
  // or no rule available
  category = CONDITION;

  while (StateCmp(originalstate, curstate) == 0 && rulesleft.size() != 0) {
    PickARule = (unsigned) (random.next() % rulesleft.size());
    what_rule = rulesleft.getnthrule(PickARule);
    if (generator->Condition(what_rule)) {
      category = RULE;
      generator->Code(what_rule);
    }
    curstate = workingstate;
  }

  // if deadlock occurs
  if (!args->no_deadlock.value && StateCmp(originalstate, curstate) == 0) {
    cout << "\nStatus:\n\n";
    cout << "\t" << rules_fired << " rules fired in simulation in "
	<< SecondsSinceStart() << "s.\n";
    Error.Notrace("Deadlocked state found.");
  }

  rules_fired++;

  // print verbose message
  if (args->verbose.value & !args->full_trace.value)
    Reporter->print_fire_rule_diff(originalstate);
  if (args->verbose.value & args->full_trace.value)
    Reporter->print_fire_rule();

  if (!Properties->CheckInvariants()) {
    cout << "\nStatus:\n\n";
    cout << "\t" << rules_fired << " rules fired in simulation in " << SecondsSinceStart() << "s.\n";
	string inv_name(Properties->LastInvariantName());
    false_invs_list.push_back(inv_name);
    Error.Notrace("Invariant %s failed p1-next_state.", Properties->LastInvariantName());
  }
  // progress report
  if (!args->verbose.value
      && rules_fired % args->progress_count.value == 0) {
    cout << "\t" << rules_fired << " rules fired in simulation in " <<
	SecondsSinceStart() << "s.\n";
    cout.flush();
  }
  return curstate;
}

bool RuleManager::AllNextStates()
{
  setofrules *fire;

  // get set of rules to fire
  fire = EnabledTransition();

  // generate the set of next states
  return AllNextStates(fire);
}

/****************************************
  Generate set of transitions to be made:
  setofrules transitionset_enabled()
  -- future extension
  -- setofrules transitionset_sleepset_rr(sleepset s)
  -- setofrules transitionset_gode_dl(setofrules rs)
  ****************************************/
setofrules *RuleManager::EnabledTransition()
{
  static setofrules ret;
  int p;			// Priority of the current rule

  ret.removeall();

  // record what kind of analysis is currently carried out
  category = CONDITION;

  // Minimum priority among all rules
  minp = INT_MAX;
  // get enabled
  for (what_rule = 0; what_rule < numrules; what_rule++) {
    generator->SetNextEnabledRule(what_rule);
    if (what_rule < numrules) {
      ret.add(what_rule);

      // Compute minimum priority
      if ((p = generator->Priority(what_rule)) < minp)
	minp = p;
    }
  }
  return &ret;
}

/****************************************
  The BFS verification supporting routines:
  void generate_startstateset()
  bool generate_nextstateset_standard(setofrules fire)
  -- future extension
  -- bool generate_nextstateset_sym() 
  -- bool generate_nextstateset_gode_dl() 
  -- bool generate_nextstateset_sleepset_rr(setofrules fire, sleepset cursleepset)
  -- bool generate_nextstateset_gode_sleepset_dl(sleepset cursleepset)
  ****************************************/

// Uli: corrected a memory-leak, improved performance
bool RuleManager::AllNextStates(setofrules * fire)
{
  // this will unconditionally fire rule in "fire"
  // please make sure the conditions are true for the rules in "fire"
  // before calling this function.

  static state *originalstate = new state;	// buffer for workingstate
  state *nextstate;
  bool deadlocked_so_far = TRUE;
  bool permanent;

  bool find_target = TRUE;
  for(int i = 0; i < BLOCKS_IN_WORLD; i++)
  {
    if (goalbits[i] != workingstate->bits[i]) 
    {
      for (int j = 0; j < attr_list.size(); j++)
      {
        if(attr_list[j].first / 8 <= i && ( j == attr_list.size() - 1 || attr_list[j+1].first / 8 > i))
          // judge (i, attr) is care
          if (judge_list(attr_list[j].second, carelist)) 
          {
            find_target = FALSE;
          }
      }
    }
  }
  // if (find_target == TRUE)
  // {
  //   cout << "\nProcess ends!" << endl;
  //   Error.Notrace("Target state found.");
  // }

  StateCopy(originalstate, workingstate);	// make copy of workingstate

  /*
     for ( what_rule=0; what_rule<numrules; what_rule++)
     {
     if (generator->Condition(what_rule) !=
     fire->in(what_rule)) {
     if (!fire->in(what_rule)) {
     cout << "Condition for rule " << what_rule << " is true ";
     cout << "but it is not in fire!\n";
     exit(89);
     }
     else {
     cout << "Rule " << what_rule << " is in fire ";
     cout << "but its condition is false!\n";
     exit(99);
     }
     }
     }
   */

    for (what_rule = 0; what_rule < numrules; what_rule++)
    {
        if (fire->in(what_rule) && generator->Priority(what_rule) <= minp)
        // if (fire->in(what_rule) )   
        {
            nextstate = NextState();  // get one nextstate and fired_rule_ptr++
            if (StateCmp(curstate, nextstate) != 0) 
            {
	              deadlocked_so_far = FALSE;
	              permanent = (generator->Priority(what_rule) < 50);	// Uli
                if (args->main_alg.mode == argmain_alg::Verify_ls)
                {
                  // if (nextstate->h <= curstate->h && curstate->h != 0 && rand()%(curstate->h) <= (curstate->h - nextstate->h) + 10 )  // P = (cur->h - next->h) / cur->h  // TODO: pow(P, 1/2)?
                  if (nextstate->h <= curstate->h)
                  {
                    stateNo += 1;
                    nextstate->d = stateNo; // TODO1: 
                    // cout << "  push: " << nextstate->d << endl;
                    (void) StateSet_Ls->Add(nextstate, TRUE, permanent); // 做实验确定
                  }
                  // 跑10遍、20遍，
                  else if (nextstate->h > curstate->h && simulated_annealing(SA_T, (nextstate->h - curstate->h) * (-1)))  // Simulated Annealing
                  {
                    stateNo += 1;
                    nextstate->d = stateNo; // TODO1: 
                    // cout << "  push: " << nextstate->d << endl;
                    (void) StateSet_Ls->Add(nextstate, TRUE, permanent);
                  }
                  else if (nextstate->h == 0)
                  {
                    stateNo += 1;
                    nextstate->d = stateNo; // TODO1: 
                    // cout << "  push: " << nextstate->d << endl;
                    (void) StateSet_Ls->Add(nextstate, TRUE, permanent);
                    // Error.Notrace("Target state found.");
                  }
                  // (void) StateSet_Ls->Add(nextstate, TRUE, permanent);
                }
                else
                {
                  (void) StateSet->Add(nextstate, TRUE, permanent); 
                }
                StateCopy(workingstate, originalstate);	// restore workingstate
            }
            // cout << "Its h-value is: " << workingstate->h << endl;
        }
    }

    return deadlocked_so_far;

}

// the following global variables have been set:
// theworld, curstate and what_rule
state *RuleManager::NextState()
{

    category = RULE;

    // fire rule
    generator->Code(what_rule);
    rules_fired++;

    // update timesfired record
    NumTimesFired[what_rule]++;

    // print verbose message
    if (args->verbose.value)
        Reporter->print_fire_rule();

    // makun: invariant check on
    if (!Properties->CheckInvariants())
    {
        // theworld->print();
        Error.Error("Invariant \"%s\" failed.",Properties->LastInvariantName());
    }

    // // now: 
    // if (!goal_value_flag1 && !(*invariants[0].condition) ())
    // {
    //   cout << "\n== Stage1: Invariant \" " << invariants[0].name << " \" failed." << endl;
    //   cout << "==== Stage1: state num: " << StateSet_Ls->NumElts_LS() << endl;
    //   StateSet_Ls->elts_clear(); 
      
    //   startstate_flag = true;
    //   StartState->StartState(); 
    //   startstate_flag = false;
    //   (void) StateSet_Ls->Add(workingstate, TRUE, TRUE); 
    //   cout << "====== Show first state: ======" << endl;
    //   // StateSet_Ls->QueueTop()->print();
    // }

    // if (!(*invariants[1].condition) ())
    // {
    //   cout << "\n== Stage2: Invariant \" " << invariants[1].name << " \" failed." << endl;
    //   cout << "==== Stage2: state num: " << StateSet_Ls->NumElts_LS() << endl;
    //   Error.Error("Two Target states are all found!");
    // }

    // get next state
#ifdef HASHC
    if (args->trace_file.value)
        workingstate->previous.set(NumCurState);
    else
#endif
        workingstate->previous.set(curstate);  // according to previous to set workingstate
    if(args->main_alg.mode == argmain_alg::Verify_ls)
    {
      workingstate->d = curstate->d + 1;
      workingstate->h = h(workingstate, 1);
    }
      

    return workingstate;
}

void RuleManager::print_world_to_state(StatePtr p, bool fullstate)
{
  state original;
  state nextstate;
  char *s;

  // save last state
  StateCopy(&original, workingstate);

  // generate next state
  for (what_rule = 0; what_rule < numrules; what_rule++) {
    category = CONDITION;
    if (generator->Condition(what_rule)) {
      category = RULE;
      generator->Code(what_rule);
      StateCopy(&nextstate, workingstate);

      if (StateEquivalent(&nextstate, p)) {
	      // output the name of the rule and the last state in full
  	    // << rules[ what_rule ].name
	      cout << "Rule(" << what_rule << ") " << (s = generator->Name(what_rule)) << " fired." << "\n"; // makun: 
        delete[]s;		// Uli: avoid memory leak
        if (fullstate)
          cout << "The last state of the trace (in full) is:\n";
        if (args->full_trace.value || fullstate)
          theworld.print();
        else
          theworld.print_diff(&original);
        cout << "----------\n\n";
        return;
      } else
	    StateCopy(workingstate, &original);
    }
  }
  Error.Notrace("Internal Error:print_world_to_state().");
}

char *RuleManager::LastRuleName()
{
  return generator->Name(what_rule);
}

unsigned long RuleManager::NumRulesFired()
{
  return rules_fired;
}

void RuleManager::print_rules_information()
{
  bool exist;

  if (args->print_rule.value) {

    cout << "Rules Information:\n\n";
    for (int i = 0; i < RULES_IN_WORLD; i++)
      cout << "\tFired " << NumTimesFired[i] << " times\t- Rule \""
	  << generator->Name(i)
	  << "\"\n";
  } else {
    for (int i = 0; i < RULES_IN_WORLD; i++)
      if (NumTimesFired[i] == 0)
	exist = TRUE;
    if (exist)
      cout << "Analysis of State Space:\n\n"
	  << "\tThere are rules that are never fired.\n"
	  <<
	  "\tIf you are running with symmetry, this may be why.  Otherwise,\n"
	  <<
	  "\tplease run this program with \"-pr\" for the rules information.\n";
  }
}

/************************************************************/
/* PropertyManager */
/************************************************************/
PropertyManager::PropertyManager()
{
}

bool PropertyManager::CheckInvariants()
{
  category = INVARIANT;
  int false_flag = 0;
  int what_invariant_backup = 0;

  for (what_invariant_backup = 0; what_invariant_backup < numinvariants; what_invariant_backup++)
  {
    if (!(*invariants[what_invariant_backup].condition) ())
      /* Uh oh, invariant blown. */
    {
      
      string inv_name(invariants[what_invariant_backup].name);

      if (!check_is_false(inv_name))
      {
          false_invs_list.push_back(inv_name);
          // cout << "This invariant failed p3-check: " << inv_name << endl;
      }
      if (false_flag == 0)
      {
          what_invariant = what_invariant_backup;  
      }
      false_flag = 1;

    }
  }

  if (false_flag == 1)
  {
      return FALSE;
  }

  return TRUE;

}

const char *PropertyManager::LastInvariantName()
{
  return invariants[what_invariant].name;
}

/************************************************************/
/* SymmetryManager */
/************************************************************/
SymmetryManager::SymmetryManager()
{
}

/************************************************************/
/* POManager */
/************************************************************/
POManager::POManager()
{
}

/************************************************************/
/* AlgorithmManager */
/************************************************************/
AlgorithmManager::AlgorithmManager()
{
    // why exists? (Norris)
    // oldnh = set_new_handler(&err_new_handler);

    // create managers
    StartState = new StartStateManager;
    Rules = new RuleManager;
    Properties = new PropertyManager;
    Symmetry = new SymmetryManager;
    PO = new POManager;
    Reporter = new ReportManager;

#ifdef HASHC
  h3 = new hash_function(BLOCKS_IN_WORLD);
#endif

    Reporter->CheckConsistentVersion();
    if (args->main_alg.mode != argmain_alg::Nothing)
        Reporter->print_header();
    Reporter->print_algorithm();


    if (args->main_alg.mode == argmain_alg::Verify_ls)
    {
      // state_priority_queue
      // if (StateSet != NULL) delete StateSet;
      StateSet_Ls = new StateManager_LS(TRUE, NumStatesGivenBytes(args->mem.value));
      StateSet_Ls->print_capacity();
    }
    else if (args->main_alg.mode == argmain_alg::Verify_bfs)
    {
      // state_queue
      StateSet = new StateManager(TRUE, NumStatesGivenBytes(args->mem.value));
      StateSet->print_capacity();
    }
    else if (args->main_alg.mode == argmain_alg::Verify_dfs)
    {
      // state_stack
      StateSet = new StateManager(FALSE, NumStatesGivenBytes(args->mem.value));
      StateSet->print_capacity();
    }
    else if (args->main_alg.mode == argmain_alg::Simulate)
    {
      StateSet = NULL;
    }
    else
    {

    }

    // switch (args->main_alg.mode) 
    // {
    //     case argmain_alg::Verify_ls:
    //         // state_priority_queue
    //         if (StateSet != NULL) delete StateSet;
    //         StateManager_LS* StateSet = new StateManager_LS(TRUE, NumStatesGivenBytes(args->mem.value));
    //         StateSet->print_capacity();
    //         break;
    //     case argmain_alg::Verify_bfs:
    //         // state_queue
    //         StateSet = new StateManager(TRUE, NumStatesGivenBytes(args->mem.value));
    //         StateSet->print_capacity();
    //         break;
    //     case argmain_alg::Verify_dfs:
    //         // state_stack
    //         StateSet = new StateManager(FALSE, NumStatesGivenBytes(args->mem.value));
    //         StateSet->print_capacity();
    //         break;
    //     case argmain_alg::Simulate:
    //         StateSet = NULL;
    //         break;
    //     default:
    //         break;
    // }

    Reporter->print_warning();

    signal(SIGFPE, &catch_div_by_zero);

};

/****************************************
  The BFS verification main routines:
  void verify_bfs_standard()
  -- future extension:
  -- void verify_bfs_gode_dl()
  -- void verify_bfs_sleepset_rr()
  -- void verify_bfs_gode_sleepset_dl()
  ****************************************/
void
 AlgorithmManager::verify_bfs()
{
  cout << "==========================================================================" << endl;
  cout << "\nYou are using breath-first search algorithm:" << endl;
  
  // Use Global Variables: what_rule, curstate, theworld, queue, the_states
  setofrules fire;		// set of rule to be fired
  bool deadlocked;		// boolean for checking deadlock

  // print verbose message
  if (args->verbose.value)
    Reporter->print_verbose_header();

  cout.flush();

  theworld.to_state(NULL);	// trick : marks variables in world

  // Generate all start state
  StartState->AllStartStates();

#ifdef HASHC
  // omission probability calculation
  StateSet->CheckLevel();
#endif

  // search state space
  while (!StateSet->QueueIsEmpty()) {  
    // get and remove a state from the queue
    // please make sure that global variable curstate does not change 
    // throughout the iteration 
    curstate = StateSet->QueueDequeue();  
    NumCurState++;
    StateCopy(workingstate, curstate);

    // print verbose message
    if (args->verbose.value)
      Reporter->print_curstate();

    // generate all next state 
    deadlocked = Rules->AllNextStates();

    // check deadlock 
    if (deadlocked && !args->no_deadlock.value)
      Error.Deadlocked("Deadlocked state found.");

#ifdef HASHC
    // omission probability calculation
    StateSet->CheckLevel();

    delete curstate;
#endif
  }				// while

  cout << "==========================================================================" << endl;
  cout << "\nThese invariants are broken:" << endl;
  for (int i = 0; i < false_invs_list.size(); i++)
        cout << false_invs_list[i] << " " << endl;

  Reporter->print_final_report();  // no error

}

/****************************************
  The DFS verification routine:
  void verify_dfs()
  -- not changed yet 
  ****************************************/

void AlgorithmManager::verify_dfs()
{
  // use global variables: what_rule, curstate, theworld, queue, the_states
  state *nextstate;
  bool deadlocked_so_far = TRUE;

  // print verbose message
  if (args->verbose.value)
    Reporter->print_verbose_header();

  theworld.to_state(NULL);	// trick : marks variables in world

  // for each startstate start a DFS search
  while ((curstate = StartState->NextStartState()) != NULL) {
    (void) StateSet->Add(curstate, FALSE, TRUE);

    while (!StateSet->QueueIsEmpty()) {
      // get the last state from the stack
      curstate = StateSet->QueueTop();
      StateCopy(workingstate, curstate);

      // l) method:
      // get a different next state by incrementing what_rule
      // until a rule is enabled and the new state is different from the
      // old state or all the rules are exhausted
      // 2) setting of varibles
      // what_rule is set by previous iteration
      // curstate is set at the beginning of the iteration
      // theworld is set at the beginning of the iteration

      // get next rule that is enabled and fire it
      // set global variable what_rule

      nextstate = Rules->SeqNextState();

      if (nextstate != NULL) {
	if (StateCmp(curstate, nextstate) != 0) {
	  // curstate state does not deadlock
	  deadlocked_so_far = FALSE;

	  // check if the next state has been searched or not
	  if (StateSet->Add(nextstate, TRUE, TRUE)) {
	    // curstate state does not deadlock, but the next state might
	    deadlocked_so_far = TRUE;
	  } else {
	    // a rule has been fired and the next state has been searched
	    // ==> check next rule
	    if (args->verbose.value)
	      cout << "This state has been examined, try another rule.\n";
	  }
	} else if (args->verbose.value)
	  cout << "This state has been examined, try another rule.\n";
      } else {
	// check deadlock
	if (deadlocked_so_far && !args->no_deadlock.value) {
	  if (args->verbose.value)
	    Reporter->print_dfs_deadlock();
	  Error.Deadlocked("Deadlocked state found.");
	}
	// remove explored state
	(void) StateSet->QueueDequeue();

	// print verbose message
	if (args->verbose.value)
	  Reporter->print_retrack();

	// previous state does not deadlock, as it gives the state just removed
	deadlocked_so_far = FALSE;

#ifdef HASHC
	delete curstate;
#endif
      }				// if
    }				// while

    // print verbose message
    if (args->verbose.value)
      cout << "------------------------------\n"
	  << "Finished working on one statestate.\n"
	  << "------------------------------\n";
  }				// for

  for (int i = 0; i < false_invs_list.size(); i++)
      cout << false_invs_list[i] << " " << endl;
  Reporter->print_final_report();
}

/****************************************
  @ makun
  The Local Search verification main routines:
  void verify_ls_standard()
  -- future extension:
  -- void verify_ls_gode_dl()
  -- void verify_ls_sleepset_rr()
  -- void verify_ls_gode_sleepset_dl()
  ****************************************/

bool simulated_annealing(double T, int delta_E)
{
  if ((int)exp(delta_E / T) * 1000 < 0) return true;   // int type overflow
  int pr = (int)(exp(delta_E / T) * 1000) - rand() % 1000;  // P = e^(delta_E/T)
  return (pr > 0);
}


// state transition diagram
// dist_map = {"cache_shared" : 1, "cache_idle" : 1, "cache_exlusive" : 1}


int findattr(string attr_name)
{
  for (int i = 0; i < attr_list.size(); i++)
  {
    if (attr_name == attr_list[i].second)
    {
      return attr_list[i].first / 8;
    }
  }
  return 0;
}


/**
  option:
    1: BFS
    2: without adding depth
    3: add depth
    4: Dependency relationship between variables
    5: Improving the segmentation strategy of carelist based on message flow
    6: Prioritizing the importance of individual rules to escape the default sequential modeling
*/

int h(state* s, int option = 1)
{   
  if (option == 1) return 0;  // 1: BFS
  
  int res = 0;
  int a_i = 0, b_i = 0, c_i = 0, d_i = 0, e_i = 0, f_i = 0;
  int now_depth = s->d;

  for(int i = 0; i < BLOCKS_IN_WORLD; i++)  // BITS_IN_WORLD / 8 = BLOCKS_IN_WORLD - 8
  {
    if(s->bits[i] != goalbits[i])   // TODO: get information state structure
    { 
      res += 1;
      for (int j = 0; j < attr_list.size(); j++)
      {
        // match the attribute name where i place  
        if(attr_list[j].first / 8 <= i && ( j == attr_list.size() - 1 || attr_list[j+1].first / 8 > i))  // bit offset -> block offset
        {   
          // judge (i, attr) is care
          if (judge_list(attr_list[j].second, carelist)) 
          {
            if(s->bits[i] != goalbits[i]) 
              a_i += 1;
          }
          else if (judge_list(attr_list[j].second, data_attrlist))
          {
            for (int di = 0; di < data_equations.size(); di++)
            {
              if (attr_list[j].second == get<1>(data_equations[di]) || attr_list[j].second == get<2>(data_equations[di]))
              {
                unsigned char num1 = s->bits[findattr(get<1>(data_equations[di]))];  
                unsigned char num2 = s->bits[findattr(get<2>(data_equations[di]))];
                if (get<0>(data_equations[di]) == "=" && num1 == num2)
                {
                  b_i += 0;
                } 
                else if (get<0>(data_equations[di]) == "!=" && num1 != num2)
                {
                  b_i += 0;
                } 
                else
                {
                  b_i += 1;
                }
                break;
              }
            }
          }
          else if (judge_list(attr_list[j].second, carelist_rb))
          {
            if(s->bits[i] != goalbits[i]) 
              c_i += 1;
          }
          else if (judge_list(attr_list[j].second, carelist_3))
          {
            if(s->bits[i] != goalbits[i]) 
              e_i += 1;
          }
          else if (judge_list(attr_list[j].second, carelist_flow))
          {
            if(s->bits[i] != goalbits[i]) 
              f_i += 1;
          }
          else
          {
            if(s->bits[i] != goalbits[i]) 
              d_i += 1;
          }
        }
        
        if (j != attr_list.size() - 1)
        {
          i = attr_list[j+1].first / 8;
        } 
      }
      break;  // i in inner loop can not arrive at BLOCKS_IN_WORLD
    }
  }

  int w_a = 300, w_b = 1, w_c = 30, w_d = 1;

    switch (option) {
    case 2:  // 2: without adding depth. 
      res = w_a * a_i + w_b * b_i + w_c * c_i + w_e * e_i + w_d * d_i + now_depth * 0;
      break;
    case 3:  // 3: with depth
      res = w_a * a_i + w_b * b_i + w_c * c_i + w_e * e_i + w_d * d_i + now_depth;
      break;
    case 4:  // 4: Dependency relationship between variables (divide variables into different level carelists by dependency)
      res = w_a * a_i + w_b * b_i + w_c * c_i + w_e * e_i + w_d * d_i + now_depth;
      break;
    case 5:  // 5: Message flow (divide variables by flows)
      res = w_a * a_i + w_b * b_i + w_c * c_i + w_e * e_i + w_d * d_i + now_depth;
      break;
    case 6:  // 6: Prioritizing the importance of individual rules to escape the default sequential modeling (point the special priority)
      res = w_a * a_i + w_b * b_i + w_c * c_i + w_e * e_i + w_d * d_i + now_depth;
      break;
    case 7:
      res = 100 * a_i * now_depth + 50 * b_i + 30 * c_i * ceil(pow(now_depth, 1.0/2)) + 20 * e_i * ceil(pow(now_depth, 1.0/4)) + 10 * f_i + d_i; 
      break;
    default: // else: option is out of range. 
      res = 0;
      break;
  } 

  // cout << "a: " << a_i << " c: " << c_i << " d_i: " << d_i << " res: " << res << " dep: " << now_depth << endl;

  return res;
}


// makun: 
void AlgorithmManager::verify_ls() // add param with probability
{

    cout << "==========================================================================" << endl;
    cout << "\nYou are using local search algorithm ( Version 3: Two-stage search strategy ):" << endl;

    // Use Global Variables: what_rule, curstate, theworld, queue, the_states
    setofrules fire;		// set of rule to be fired
    bool deadlocked;		// boolean for checking deadlock

    // print verbose message
    if (args->verbose.value)
        Reporter->print_verbose_header();

    cout.flush();

    srand(time(0));

    double SA_T0 = 1000000.0;  // 100 还是10000，不行再缩小区间
    double SA_k = 0.999995;   // 颗粒度，（小于一定值(实验确定的阈值)就不行，之后的可以仔细比较(细调)）,实验最后加参数分析
    int SA_t = 0;
    SA_T = SA_T0;   // pow(k, t) * T0;

    theworld.to_state(NULL);	// trick : marks variables in world

    // Generate all start state
    StartState->AllStartStates();

    cout << endl << "===== Startstates generated! =====" << endl;

#ifdef HASHC
    // omission probability calculation
    StateSet->CheckLevel();
#endif

    // search state space
    while (!StateSet_Ls->QueueIsEmpty())
    {
        // get and remove a state from the queue
        // please make sure that global variable curstate does not change
        // throughout the iteration

        SA_T *= SA_k;

        curstate = StateSet_Ls->QueueDequeue();  // get priority queue front and pop
        // cout << "  pop: " << curstate->d  << "  of  " << StateSet_Ls->QueueNumElts() << endl; // TODO1: 
        NumCurState++;
        StateCopy(workingstate, curstate);  // get workingstate

        // print verbose message
        if (args->verbose.value)
            Reporter->print_curstate();

        // generate all next state
        deadlocked = Rules->AllNextStates();  // TODO: how to local search(guide)? 

        // // check deadlock
        // if (deadlocked && !args->no_deadlock.value)
        //     Error.Deadlocked("Deadlocked state found.");

#ifdef HASHC
    // omission probability calculation
    StateSet->CheckLevel();

    delete curstate;
#endif

      if (StateSet_Ls->QueueNumElts() > 10000) // now: 
      {
        StateSet_Ls->CutOff(1000);
        cout << "==========================================================================" << endl;
        cout << "      Now the openlist is cut off!      " << endl;
        cout << "==========================================================================" << endl;
      }

    }	// end of while

    // cout << "==========================================================================" << endl;
    // cout << "\nThese invariants are broken:" << endl;
    // for (int i = 0; i < false_invs_list.size(); i++)
    //     cout << false_invs_list[i] << " " << endl;

    Reporter->print_final_report();  // no error

}



/****************************************
  The simulation main routine:
  void simulate()
  ****************************************/

// Uli: added required call to theworld.to_state()
void AlgorithmManager::simulate()
{
  // progress report must be printed out so as to make sense 
  // otherwise, if there is no bug, the program just run on for ever
  // without any message.

  // print verbose message
  if (args->verbose.value)
    Reporter->print_verbose_header();

  Reporter->StartSimulation();

  theworld.to_state(NULL);	// trick: marks variables in world

  // GetRandomStartState will choose a Startstate randomly
  curstate = StartState->RandomStartState();

  // simulate
  while (1) {
    // SimulateRandomRule always executes a rule that leads to
    // a different state.
    curstate = Rules->RandomNextState();
  }
}
