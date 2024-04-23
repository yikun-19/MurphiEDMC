/******************************
  Program "./test/cache_err.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Apr 18 2024"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Apr 18 2024"
#define PROTOCOL_NAME "./test/cache_err"
#define BITS_IN_WORLD 888
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_message: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_message& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_message& val)
  {
    if (val.defined())
      return ( s << mu_1_message::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_message (const char *name, int os): mu__byte(1, 7, 3, name, os) {};
  mu_1_message (void): mu__byte(1, 7, 3) {};
  mu_1_message (int val): mu__byte(1, 7, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_message::values[] = {"empty","req_shared","req_exclusive","invalidate","invalidate_ack","grant_shared","grant_exclusive",NULL };

/*** end of enum declaration ***/
mu_1_message mu_1_message_undefined_var;

class mu_1_cache_state: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_cache_state& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_cache_state& val)
  {
    if (val.defined())
      return ( s << mu_1_cache_state::values[ int(val) - 8] );
    else return ( s << "Undefined" );
  };

  mu_1_cache_state (const char *name, int os): mu__byte(8, 10, 2, name, os) {};
  mu_1_cache_state (void): mu__byte(8, 10, 2) {};
  mu_1_cache_state (int val): mu__byte(8, 10, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -8]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -8] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_cache_state::values[] = {"invalid","shared","exclusive",NULL };

/*** end of enum declaration ***/
mu_1_cache_state mu_1_cache_state_undefined_var;

class mu_1_client: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_client& val) { return mu__byte::operator=((int) val); };
  mu_1_client (const char *name, int os): mu__byte(1, 18, 5, name, os) {};
  mu_1_client (void): mu__byte(1, 18, 5) {};
  mu_1_client (int val): mu__byte(1, 18, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_client mu_1_client_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_message array[ 18 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 18 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 18; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<18; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<18; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 18; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 18; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 18; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 18; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 18; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 18; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 18; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_message array[ 18 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 18 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 18; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<18; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<18; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 18; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 18; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 18; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 18; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 18; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 18; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 18; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_message array[ 18 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 18 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 18; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<18; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<18; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 18; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 18; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 18; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 18; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 18; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 18; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 18; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_0_boolean array[ 18 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 18 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 18; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<18; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<18; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 18; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 18; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 18; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 18; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 18; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 18; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 18; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_cache_state array[ 18 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_cache_state& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 18 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 18; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<18; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<18; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<18; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 18; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 18; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 18; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 18; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 18; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 18; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 18; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

const int mu_num_clients = 18;
const int mu_empty = 1;
const int mu_req_shared = 2;
const int mu_req_exclusive = 3;
const int mu_invalidate = 4;
const int mu_invalidate_ack = 5;
const int mu_grant_shared = 6;
const int mu_grant_exclusive = 7;
const int mu_invalid = 8;
const int mu_shared = 9;
const int mu_exclusive = 10;
/*** Variable declaration ***/
mu_1__type_0 mu_channel1("channel1",0);

/*** Variable declaration ***/
mu_1__type_1 mu_channel2_4("channel2_4",144);

/*** Variable declaration ***/
mu_1__type_2 mu_channel3("channel3",288);

/*** Variable declaration ***/
mu_1__type_3 mu_home_sharer_list("home_sharer_list",432);

/*** Variable declaration ***/
mu_1__type_3 mu_home_invalidate_list("home_invalidate_list",576);

/*** Variable declaration ***/
mu_0_boolean mu_home_exclusive_granted("home_exclusive_granted",720);

/*** Variable declaration ***/
mu_1_message mu_home_current_command("home_current_command",728);

/*** Variable declaration ***/
mu_1_client mu_home_current_client("home_current_client",736);

/*** Variable declaration ***/
mu_1__type_4 mu_cache("cache",744);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_channel1.clear();
  mu_channel2_4.clear();
  mu_channel3.clear();
  mu_home_sharer_list.clear();
  mu_home_invalidate_list.clear();
  mu_home_exclusive_granted.clear();
  mu_home_current_command.clear();
  mu_home_current_client.clear();
  mu_cache.clear();
}
void world_class::undefine()
{
  mu_channel1.undefine();
  mu_channel2_4.undefine();
  mu_channel3.undefine();
  mu_home_sharer_list.undefine();
  mu_home_invalidate_list.undefine();
  mu_home_exclusive_granted.undefine();
  mu_home_current_command.undefine();
  mu_home_current_client.undefine();
  mu_cache.undefine();
}
void world_class::reset()
{
  mu_channel1.reset();
  mu_channel2_4.reset();
  mu_channel3.reset();
  mu_home_sharer_list.reset();
  mu_home_invalidate_list.reset();
  mu_home_exclusive_granted.reset();
  mu_home_current_command.reset();
  mu_home_current_client.reset();
  mu_cache.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_channel1.print();
  mu_channel2_4.print();
  mu_channel3.print();
  mu_home_sharer_list.print();
  mu_home_invalidate_list.print();
  mu_home_exclusive_granted.print();
  mu_home_current_command.print();
  mu_home_current_client.print();
  mu_cache.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_channel1.print_statistic();
  mu_channel2_4.print_statistic();
  mu_channel3.print_statistic();
  mu_home_sharer_list.print_statistic();
  mu_home_invalidate_list.print_statistic();
  mu_home_exclusive_granted.print_statistic();
  mu_home_current_command.print_statistic();
  mu_home_current_client.print_statistic();
  mu_cache.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_channel1.print_diff(prevstate);
    mu_channel2_4.print_diff(prevstate);
    mu_channel3.print_diff(prevstate);
    mu_home_sharer_list.print_diff(prevstate);
    mu_home_invalidate_list.print_diff(prevstate);
    mu_home_exclusive_granted.print_diff(prevstate);
    mu_home_current_command.print_diff(prevstate);
    mu_home_current_client.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_channel1.to_state( newstate );
  mu_channel2_4.to_state( newstate );
  mu_channel3.to_state( newstate );
  mu_home_sharer_list.to_state( newstate );
  mu_home_invalidate_list.to_state( newstate );
  mu_home_exclusive_granted.to_state( newstate );
  mu_home_current_command.to_state( newstate );
  mu_home_current_client.to_state( newstate );
  mu_cache.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("home sends reply to client -- exclusive");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr5;
bool mu__boolexpr6;
  if (!((mu_home_current_command) == (mu_req_exclusive))) mu__boolexpr6 = FALSE ;
  else {
bool mu__quant7; 
mu__quant7 = TRUE;
{
for(int mu_i = 1; mu_i <= 18; mu_i++) {
if ( !((mu_home_sharer_list[mu_i]) == (mu_false)) )
  { mu__quant7 = FALSE; break; }
};
};
  mu__boolexpr6 = (mu__quant7) ; 
}
  if (!(mu__boolexpr6)) mu__boolexpr5 = FALSE ;
  else {
  mu__boolexpr5 = ((mu_channel2_4[mu_home_current_client]) == (mu_empty)) ; 
}
    return mu__boolexpr5;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    while (what_rule < 1 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr8;
bool mu__boolexpr9;
  if (!((mu_home_current_command) == (mu_req_exclusive))) mu__boolexpr9 = FALSE ;
  else {
bool mu__quant10; 
mu__quant10 = TRUE;
{
for(int mu_i = 1; mu_i <= 18; mu_i++) {
if ( !((mu_home_sharer_list[mu_i]) == (mu_false)) )
  { mu__quant10 = FALSE; break; }
};
};
  mu__boolexpr9 = (mu__quant10) ; 
}
  if (!(mu__boolexpr9)) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_channel2_4[mu_home_current_client]) == (mu_empty)) ; 
}
	      if (mu__boolexpr8) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    }
  }

  void Code(unsigned r)
  {
mu_home_sharer_list[mu_home_current_client] = mu_true;
mu_home_current_command = mu_empty;
mu_channel2_4[mu_home_current_client] = mu_grant_exclusive;
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("home sends reply to client -- shared");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr11;
bool mu__boolexpr12;
  if (!((mu_home_current_command) == (mu_req_shared))) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = (!(mu_home_exclusive_granted)) ; 
}
  if (!(mu__boolexpr12)) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_channel2_4[mu_home_current_client]) == (mu_empty)) ; 
}
    return mu__boolexpr11;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1;
    while (what_rule < 2 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr13;
bool mu__boolexpr14;
  if (!((mu_home_current_command) == (mu_req_shared))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = (!(mu_home_exclusive_granted)) ; 
}
  if (!(mu__boolexpr14)) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_channel2_4[mu_home_current_client]) == (mu_empty)) ; 
}
	      if (mu__boolexpr13) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1;
    }
  }

  void Code(unsigned r)
  {
mu_home_sharer_list[mu_home_current_client] = mu_true;
mu_home_current_command = mu_empty;
mu_channel2_4[mu_home_current_client] = mu_grant_shared;
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("client received exclusive grant, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return (mu_channel2_4[mu_cl]) == (mu_grant_exclusive);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 20 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_channel2_4[mu_cl]) == (mu_grant_exclusive)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_cache[mu_cl] = mu_exclusive;
mu_channel2_4[mu_cl] = mu_empty;
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("client receives shared grant, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return (mu_channel2_4[mu_cl]) == (mu_grant_shared);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 20;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 38 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_channel2_4[mu_cl]) == (mu_grant_shared)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 20;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_cache[mu_cl] = mu_shared;
mu_channel2_4[mu_cl] = mu_empty;
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("sharer invalidates cache, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
bool mu__boolexpr15;
  if (!((mu_channel2_4[mu_cl]) == (mu_invalidate))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_channel3[mu_cl]) == (mu_empty)) ; 
}
    return mu__boolexpr15;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 38;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 56 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr16;
  if (!((mu_channel2_4[mu_cl]) == (mu_invalidate))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_channel3[mu_cl]) == (mu_empty)) ; 
}
	      if (mu__boolexpr16) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 38;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_channel2_4[mu_cl] = mu_empty;
mu_channel3[mu_cl] = mu_invalidate_ack;
mu_cache[mu_cl] = mu_invalid;
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("home receives invalidate acknowledgement, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
bool mu__boolexpr17;
  if (!((mu_home_current_command) != (mu_empty))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_channel3[mu_cl]) == (mu_invalidate_ack)) ; 
}
    return mu__boolexpr17;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 56;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 74 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr18;
  if (!((mu_home_current_command) != (mu_empty))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_channel3[mu_cl]) == (mu_invalidate_ack)) ; 
}
	      if (mu__boolexpr18) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 56;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_home_sharer_list[mu_cl] = mu_false;
mu_home_exclusive_granted = mu_false;
mu_channel3[mu_cl] = mu_empty;
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("home sends invalidate message, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_home_current_command) == (mu_req_shared))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (mu_home_exclusive_granted) ; 
}
  if (mu__boolexpr22) mu__boolexpr21 = TRUE ;
  else {
  mu__boolexpr21 = ((mu_home_current_command) == (mu_req_exclusive)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_home_invalidate_list[mu_cl]) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_channel2_4[mu_cl]) == (mu_empty)) ; 
}
    return mu__boolexpr19;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 74;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 92 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
bool mu__boolexpr26;
  if (!((mu_home_current_command) == (mu_req_shared))) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = (mu_home_exclusive_granted) ; 
}
  if (mu__boolexpr26) mu__boolexpr25 = TRUE ;
  else {
  mu__boolexpr25 = ((mu_home_current_command) == (mu_req_exclusive)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = (mu_home_invalidate_list[mu_cl]) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_channel2_4[mu_cl]) == (mu_empty)) ; 
}
	      if (mu__boolexpr23) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 74;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_channel2_4[mu_cl] = mu_invalidate;
mu_home_invalidate_list[mu_cl] = mu_false;
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("home picks new request, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
bool mu__boolexpr27;
  if (!((mu_home_current_command) == (mu_empty))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_channel1[mu_cl]) != (mu_empty)) ; 
}
    return mu__boolexpr27;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 92;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 110 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr28;
  if (!((mu_home_current_command) == (mu_empty))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_channel1[mu_cl]) != (mu_empty)) ; 
}
	      if (mu__boolexpr28) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 92;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_home_current_command = mu_channel1[mu_cl];
mu_channel1[mu_cl] = mu_empty;
mu_home_current_client = mu_cl;
{
for(int mu_i = 1; mu_i <= 18; mu_i++) {
mu_home_invalidate_list[mu_i] = mu_home_sharer_list[mu_i];
};
};
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("client requests exclusive access, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if ((mu_cache[mu_cl]) == (mu_invalid)) mu__boolexpr30 = TRUE ;
  else {
  mu__boolexpr30 = ((mu_cache[mu_cl]) == (mu_shared)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_channel1[mu_cl]) == (mu_empty)) ; 
}
    return mu__boolexpr29;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 110;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 128 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr31;
bool mu__boolexpr32;
  if ((mu_cache[mu_cl]) == (mu_invalid)) mu__boolexpr32 = TRUE ;
  else {
  mu__boolexpr32 = ((mu_cache[mu_cl]) == (mu_shared)) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_channel1[mu_cl]) == (mu_empty)) ; 
}
	      if (mu__boolexpr31) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 110;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_channel1[mu_cl] = mu_req_exclusive;
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    return tsprintf("client requests shared access, cl:%s", mu_cl.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
bool mu__boolexpr33;
  if (!((mu_cache[mu_cl]) == (mu_invalid))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_channel1[mu_cl]) == (mu_empty)) ; 
}
    return mu__boolexpr33;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 128;
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    while (what_rule < 146 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr34;
  if (!((mu_cache[mu_cl]) == (mu_invalid))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_channel1[mu_cl]) == (mu_empty)) ; 
}
	      if (mu__boolexpr34) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 128;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_client mu_cl;
    mu_cl.value((r % 18) + 1);
    r = r / 18;
mu_channel1[mu_cl] = mu_req_shared;
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<2)
    { R1.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<20)
    { R2.NextRule(what_rule);
      if (what_rule<20) return; }
  if (what_rule>=20 && what_rule<38)
    { R3.NextRule(what_rule);
      if (what_rule<38) return; }
  if (what_rule>=38 && what_rule<56)
    { R4.NextRule(what_rule);
      if (what_rule<56) return; }
  if (what_rule>=56 && what_rule<74)
    { R5.NextRule(what_rule);
      if (what_rule<74) return; }
  if (what_rule>=74 && what_rule<92)
    { R6.NextRule(what_rule);
      if (what_rule<92) return; }
  if (what_rule>=92 && what_rule<110)
    { R7.NextRule(what_rule);
      if (what_rule<110) return; }
  if (what_rule>=110 && what_rule<128)
    { R8.NextRule(what_rule);
      if (what_rule<128) return; }
  if (what_rule>=128 && what_rule<146)
    { R9.NextRule(what_rule);
      if (what_rule<146) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=1) return R1.Condition(r-1);
  if (r>=2 && r<=19) return R2.Condition(r-2);
  if (r>=20 && r<=37) return R3.Condition(r-20);
  if (r>=38 && r<=55) return R4.Condition(r-38);
  if (r>=56 && r<=73) return R5.Condition(r-56);
  if (r>=74 && r<=91) return R6.Condition(r-74);
  if (r>=92 && r<=109) return R7.Condition(r-92);
  if (r>=110 && r<=127) return R8.Condition(r-110);
  if (r>=128 && r<=145) return R9.Condition(r-128);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code(r-1); return; } 
  if (r>=2 && r<=19) { R2.Code(r-2); return; } 
  if (r>=20 && r<=37) { R3.Code(r-20); return; } 
  if (r>=38 && r<=55) { R4.Code(r-38); return; } 
  if (r>=56 && r<=73) { R5.Code(r-56); return; } 
  if (r>=74 && r<=91) { R6.Code(r-74); return; } 
  if (r>=92 && r<=109) { R7.Code(r-92); return; } 
  if (r>=110 && r<=127) { R8.Code(r-110); return; } 
  if (r>=128 && r<=145) { R9.Code(r-128); return; } 
}
int Priority(unsigned short r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=1) { return R1.Priority(); } 
  if (r>=2 && r<=19) { return R2.Priority(); } 
  if (r>=20 && r<=37) { return R3.Priority(); } 
  if (r>=38 && r<=55) { return R4.Priority(); } 
  if (r>=56 && r<=73) { return R5.Priority(); } 
  if (r>=74 && r<=91) { return R6.Priority(); } 
  if (r>=92 && r<=109) { return R7.Priority(); } 
  if (r>=110 && r<=127) { return R8.Priority(); } 
  if (r>=128 && r<=145) { return R9.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=1) return R1.Name(r-1);
  if (r>=2 && r<=19) return R2.Name(r-2);
  if (r>=20 && r<=37) return R3.Name(r-20);
  if (r>=38 && r<=55) return R4.Name(r-38);
  if (r>=56 && r<=73) return R5.Name(r-56);
  if (r>=74 && r<=91) return R6.Name(r-74);
  if (r>=92 && r<=109) return R7.Name(r-92);
  if (r>=110 && r<=127) return R8.Name(r-110);
  if (r>=128 && r<=145) return R9.Name(r-128);
  return NULL;
}
};
const unsigned numrules = 146;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 146


#include <map>
#include <functional>
vector<rule_info> rules;

std::map<std::string, int> goalstateMap;
std::map<std::string, std::function<int()>> funcMap;

bool checkFuncAttr(string attr_name)
{
    if (goalstateMap.find(attr_name) != goalstateMap.end())
    {
        int curstate_val = funcMap[attr_name]();
        if (curstate_val == goalstateMap[attr_name])
            return true;
        else
            return false;
    }
    return false;
}

void initHeuristics() {
    // RuleName: home sends reply to client -- exclusive 
    rule_info rule_tmp_1; 
    rule_tmp_1.guard = {  }; 
    rule_tmp_1.action = {  }; 
    rules.push_back(rule_tmp_1); 
    // RuleName: home sends reply to client -- shared 
    rule_info rule_tmp_2; 
    rule_tmp_2.guard = {  }; 
    rule_tmp_2.action = {  }; 
    rules.push_back(rule_tmp_2); 
    // RuleName: client received exclusive grant 
    rule_info rule_tmp_3; 
    rule_tmp_3.guard = {  }; 
    rule_tmp_3.action = {  }; 
    rules.push_back(rule_tmp_3); 
    // RuleName: client receives shared grant 
    rule_info rule_tmp_4; 
    rule_tmp_4.guard = {  }; 
    rule_tmp_4.action = {  }; 
    rules.push_back(rule_tmp_4); 
    // RuleName: sharer invalidates cache 
    rule_info rule_tmp_5; 
    rule_tmp_5.guard = {  }; 
    rule_tmp_5.action = {  }; 
    rules.push_back(rule_tmp_5); 
    // RuleName: home receives invalidate acknowledgement 
    rule_info rule_tmp_6; 
    rule_tmp_6.guard = {  }; 
    rule_tmp_6.action = {  }; 
    rules.push_back(rule_tmp_6); 
    // RuleName: home sends invalidate message 
    rule_info rule_tmp_7; 
    rule_tmp_7.guard = {  }; 
    rule_tmp_7.action = {  }; 
    rules.push_back(rule_tmp_7); 
    // RuleName: home picks new request 
    rule_info rule_tmp_8; 
    rule_tmp_8.guard = {  }; 
    rule_tmp_8.action = {  }; 
    rules.push_back(rule_tmp_8); 
    // RuleName: client requests exclusive access 
    rule_info rule_tmp_9; 
    rule_tmp_9.guard = {  }; 
    rule_tmp_9.action = {  }; 
    rules.push_back(rule_tmp_9); 
    // RuleName: client requests shared access 
    rule_info rule_tmp_10; 
    rule_tmp_10.guard = {  }; 
    rule_tmp_10.action = {  }; 
    rules.push_back(rule_tmp_10); 

    // inv: !(((mu_cache[1]) == (mu_exclusive) & (mu_cache[2]) == (mu_shared)))
    vector<std::string> carelist_tmp; 
    carelists.push_back(carelist_tmp); 
    funcMap["cache[1]"] = []() -> int { return mu_cache[1]; }; 
    goalstateMap["cache[1]"] = mu_exclusive; 
    carelists[0].push_back("cache[1]"); 
    funcMap["cache[2]"] = []() -> int { return mu_cache[2]; }; 
    goalstateMap["cache[2]"] = mu_shared; 
    carelists[0].push_back("cache[2]"); 
}

/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
{
for(int mu_i = 1; mu_i <= 18; mu_i++) {
mu_channel1[mu_i] = mu_empty;
mu_channel2_4[mu_i] = mu_empty;
mu_channel3[mu_i] = mu_empty;
mu_cache[mu_i] = mu_invalid;
mu_home_sharer_list[mu_i] = mu_false;
mu_home_invalidate_list[mu_i] = mu_false;
};
};
mu_home_current_command = mu_empty;
mu_home_current_client = 1;
mu_home_exclusive_granted = mu_false;
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_35() // Invariant "coherent"
{
bool mu__boolexpr36;
  if (!((mu_cache[1]) == (mu_exclusive))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_cache[2]) == (mu_shared)) ; 
}
return !(mu__boolexpr36);
};

bool mu__condition_37() // Condition for Rule "coherent"
{
  return mu__invariant_35( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"coherent", &mu__condition_37, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
home_current_command:NoScalarset
home_invalidate_list:NoScalarset
channel1:NoScalarset
channel2_4:NoScalarset
channel3:NoScalarset
home_sharer_list:NoScalarset
home_exclusive_granted:NoScalarset
home_current_client:NoScalarset
cache:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_home_current_command.MultisetSort();
        mu_home_invalidate_list.MultisetSort();
        mu_channel1.MultisetSort();
        mu_channel2_4.MultisetSort();
        mu_channel3.MultisetSort();
        mu_home_sharer_list.MultisetSort();
        mu_home_exclusive_granted.MultisetSort();
        mu_home_current_client.MultisetSort();
        mu_cache.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_message::Permute(PermSet& Perm, int i) {};
void mu_1_message::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_message::Canonicalize(PermSet& Perm) {};
void mu_1_message::SimpleLimit(PermSet& Perm) {};
void mu_1_message::ArrayLimit(PermSet& Perm) {};
void mu_1_message::Limit(PermSet& Perm) {};
void mu_1_message::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_cache_state::Permute(PermSet& Perm, int i) {};
void mu_1_cache_state::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cache_state::Canonicalize(PermSet& Perm) {};
void mu_1_cache_state::SimpleLimit(PermSet& Perm) {};
void mu_1_cache_state::ArrayLimit(PermSet& Perm) {};
void mu_1_cache_state::Limit(PermSet& Perm) {};
void mu_1_cache_state::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_client::Permute(PermSet& Perm, int i) {};
void mu_1_client::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_client::Canonicalize(PermSet& Perm) {};
void mu_1_client::SimpleLimit(PermSet& Perm) {};
void mu_1_client::ArrayLimit(PermSet& Perm) {};
void mu_1_client::Limit(PermSet& Perm) {};
void mu_1_client::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<18; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<18; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<18; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<18; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<18; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_home_current_command.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_home_current_command.MultisetSort();
              mu_home_invalidate_list.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_home_invalidate_list.MultisetSort();
              mu_channel1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_channel1.MultisetSort();
              mu_channel2_4.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_channel2_4.MultisetSort();
              mu_channel3.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_channel3.MultisetSort();
              mu_home_sharer_list.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_home_sharer_list.MultisetSort();
              mu_home_exclusive_granted.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_home_exclusive_granted.MultisetSort();
              mu_home_current_client.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_home_current_client.MultisetSort();
              mu_cache.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cache.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_home_current_command.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_home_current_command.MultisetSort();
          mu_home_invalidate_list.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_home_invalidate_list.MultisetSort();
          mu_channel1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_channel1.MultisetSort();
          mu_channel2_4.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_channel2_4.MultisetSort();
          mu_channel3.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_channel3.MultisetSort();
          mu_home_sharer_list.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_home_sharer_list.MultisetSort();
          mu_home_exclusive_granted.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_home_exclusive_granted.MultisetSort();
          mu_home_current_client.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_home_current_client.MultisetSort();
          mu_cache.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cache.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_home_current_command.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_home_current_command.MultisetSort();
              mu_home_invalidate_list.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_home_invalidate_list.MultisetSort();
              mu_channel1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_channel1.MultisetSort();
              mu_channel2_4.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_channel2_4.MultisetSort();
              mu_channel3.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_channel3.MultisetSort();
              mu_home_sharer_list.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_home_sharer_list.MultisetSort();
              mu_home_exclusive_granted.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_home_exclusive_granted.MultisetSort();
              mu_home_current_client.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_home_current_client.MultisetSort();
              mu_cache.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cache.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_home_current_command.MultisetSort();
      mu_home_invalidate_list.MultisetSort();
      mu_channel1.MultisetSort();
      mu_channel2_4.MultisetSort();
      mu_channel3.MultisetSort();
      mu_home_sharer_list.MultisetSort();
      mu_home_exclusive_granted.MultisetSort();
      mu_home_current_client.MultisetSort();
      mu_cache.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_home_current_command.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_home_current_command.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_home_invalidate_list.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_home_invalidate_list.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_channel1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_channel1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_channel2_4.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_channel2_4.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_channel3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_channel3.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_home_sharer_list.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_home_sharer_list.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_home_exclusive_granted.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_home_exclusive_granted.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_home_current_client.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_home_current_client.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_cache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_cache.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
