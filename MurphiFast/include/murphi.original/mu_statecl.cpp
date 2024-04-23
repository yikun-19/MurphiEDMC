
/****************************************
  class StatePtr and state related stuff.
  ****************************************/

inline void StatePtr::sCheck() {
#ifdef HASHC
    if (args->trace_file.value)
      Error.Notrace("Internal: Illegal Access to StatePtr.");
#endif
}

inline void StatePtr::lCheck() {
#ifdef HASHC
    if (!args->trace_file.value)
      Error.Notrace("Internal: Illegal Access to StatePtr.");
#endif
}

StatePtr::StatePtr(state *s) {
    sCheck();
    sp = s;
}

StatePtr::StatePtr(unsigned long l) {
    lCheck();
    lv = l;
}

void
StatePtr::set(state *s) {
    sCheck();
    sp = s;
}

void StatePtr::set(unsigned long l) {
    lCheck();
    lv = l;
}

void StatePtr::clear() {
#ifdef HASHC
    if (args->trace_file.value)
      lv = 0;
    else
#endif
    sp = NULL;
}

state *StatePtr::sVal() {
    sCheck();
    return sp;
}

unsigned long StatePtr::lVal() {
    lCheck();
    return lv;
}

StatePtr StatePtr::previous() {                // return StatePtr to previous state
#ifdef HASHC
    if (args->trace_file.value)
      return TraceFile->read(lv)->previous;
    else
#endif
    return sp->previous.sp;
}

bool StatePtr::isStart() {                // check if I point to a startstate
#ifdef HASHC
    if (args->trace_file.value) {
      if (TraceFile->read(lv)->previous == 0)
        return TRUE;
      return FALSE;
    } else
#endif
    {
        if (sp->previous.sp == NULL)
            return TRUE;
        return FALSE;
    }
}

#define BITUNSIGNED 32        //sizeof(Unsigned32)*CHAR_BIT

bool StatePtr::compare(state *s) {                // compare the state I point to with s
#ifdef HASHC
    if (args->trace_file.value) {
#if __WORDSIZE == 32
      unsigned long *
#else
      unsigned int *
#endif
      key = h3->hash(s, FALSE);
#if __WORDSIZE == 32
      unsigned long
#else
      unsigned int
#endif
      c1 = key[1] &
#if __WORDSIZE == 32
      ((~0UL) <<
       (args->num_bits.value >
        BITUNSIGNED ? 0UL : BITUNSIGNED - args->num_bits.value));
#else
      ((~0) <<
       (args->num_bits.value >
        BITUNSIGNED ? 0 : BITUNSIGNED - args->num_bits.value));
#endif
#if __WORDSIZE == 32
      unsigned long
#else
      unsigned int
#endif
      c2 = key[2] & (args->num_bits.value >
#if __WORDSIZE == 32
                 BITUNSIGNED ? (~0UL) << (2 * BITUNSIGNED -
                          args->num_bits.
                          value) : 0UL);
#else
                 BITUNSIGNED ? (~0) << (2 * BITUNSIGNED -
                            args->num_bits.value) : 0);
#endif

      return (c1 == TraceFile->read(lv)->c1 &&
          c2 == TraceFile->read(lv)->c2);
    } else
#endif
    return (StateCmp(sp, s) == 0);
}

