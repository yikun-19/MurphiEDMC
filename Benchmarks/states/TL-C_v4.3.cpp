/******************************
  Program "./TL_states/TL-C_v4.3.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Dec 23 2022"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Dec 23 2022"
#define PROTOCOL_NAME "./TL_states/TL-C_v4.3"
#define BITS_IN_WORLD 1768
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_addr: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_addr& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_addr& val)
    {
      if (val.defined())
	return ( s << mu_1_addr::values[ int(val) - 1 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_addr (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_addr (void): mu__byte(1, 1, 1) {};
  mu_1_addr (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_addr& a, mu_1_addr& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_addr::values[] =
  { "addr_1",NULL };

/*** end scalarset declaration ***/
mu_1_addr mu_1_addr_undefined_var;

class mu_1_data_type: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_data_type& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_data_type& val)
    {
      if (val.defined())
	return ( s << mu_1_data_type::values[ int(val) - 2 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_data_type (const char *name, int os): mu__byte(2, 3, 2, name, os) {};
  mu_1_data_type (void): mu__byte(2, 3, 2) {};
  mu_1_data_type (int val): mu__byte(2, 3, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -2]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 2] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_data_type& a, mu_1_data_type& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_data_type::values[] =
  { "data_type_1","data_type_2",NULL };

/*** end scalarset declaration ***/
mu_1_data_type mu_1_data_type_undefined_var;

class mu_1_chan: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chan& val) { return mu__byte::operator=((int) val); };
  mu_1_chan (const char *name, int os): mu__byte(1, 5, 3, name, os) {};
  mu_1_chan (void): mu__byte(1, 5, 3) {};
  mu_1_chan (int val): mu__byte(1, 5, 3, "Parameter or function result.", 0)
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
mu_1_chan mu_1_chan_undefined_var;

class mu_1_child: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_child& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_child& val)
    {
      if (val.defined())
	return ( s << mu_1_child::values[ int(val) - 4 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_child (const char *name, int os): mu__byte(4, 5, 2, name, os) {};
  mu_1_child (void): mu__byte(4, 5, 2) {};
  mu_1_child (int val): mu__byte(4, 5, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -4]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 4] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_child& a, mu_1_child& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_child::values[] =
  { "child_1","child_2",NULL };

/*** end scalarset declaration ***/
mu_1_child mu_1_child_undefined_var;

class mu_1_cache_state: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_cache_state& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_cache_state& val)
  {
    if (val.defined())
      return ( s << mu_1_cache_state::values[ int(val) - 6] );
    else return ( s << "Undefined" );
  };

  mu_1_cache_state (const char *name, int os): mu__byte(6, 9, 3, name, os) {};
  mu_1_cache_state (void): mu__byte(6, 9, 3) {};
  mu_1_cache_state (int val): mu__byte(6, 9, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -6]; };
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
    if (defined()){
      cout << name << ":" << values[ value() -6] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_cache_state::values[] = {"None","Trunk","Branch","Tip",NULL };

/*** end of enum declaration ***/
mu_1_cache_state mu_1_cache_state_undefined_var;

class mu_1_op_type: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_op_type& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_op_type& val)
  {
    if (val.defined())
      return ( s << mu_1_op_type::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_op_type (const char *name, int os): mu__byte(10, 22, 4, name, os) {};
  mu_1_op_type (void): mu__byte(10, 22, 4) {};
  mu_1_op_type (int val): mu__byte(10, 22, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -10]; };
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
    if (defined()){
      cout << name << ":" << values[ value() -10] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_op_type::values[] = {"Empty","AcquireBlock","AcquirePerm","ProbeBlock","ProbePerm","ProbeAck","ProbeAckData","Grant","GrantData","GrantAck","Release","ReleaseData","ReleaseAck",NULL };

/*** end of enum declaration ***/
mu_1_op_type mu_1_op_type_undefined_var;

class mu_1_trans: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_trans& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_trans& val)
  {
    if (val.defined())
      return ( s << mu_1_trans::values[ int(val) - 23] );
    else return ( s << "Undefined" );
  };

  mu_1_trans (const char *name, int os): mu__byte(23, 34, 4, name, os) {};
  mu_1_trans (void): mu__byte(23, 34, 4) {};
  mu_1_trans (int val): mu__byte(23, 34, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -23]; };
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
    if (defined()){
      cout << name << ":" << values[ value() -23] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_trans::values[] = {"toN","toB","toT","NtoB","NtoT","BtoT","TtoB","TtoN","BtoN","TtoT","BtoB","NtoN",NULL };

/*** end of enum declaration ***/
mu_1_trans mu_1_trans_undefined_var;

class mu_1_msg_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_op_type mu_opcode;
  mu_1_trans mu_para;
  mu_1_child mu_src;
  mu_1_child mu_sink;
  mu_1_addr mu_address;
  mu_1_data_type mu_data;
  mu_1_msg_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_msg_type ( void ) {};

  virtual ~mu_1_msg_type(); 
friend int CompareWeight(mu_1_msg_type& a, mu_1_msg_type& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = CompareWeight(a.mu_src, b.mu_src);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sink, b.mu_sink);
    if (w!=0) return w;
    w = CompareWeight(a.mu_address, b.mu_address);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_msg_type& a, mu_1_msg_type& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = Compare(a.mu_src, b.mu_src);
    if (w!=0) return w;
    w = Compare(a.mu_sink, b.mu_sink);
    if (w!=0) return w;
    w = Compare(a.mu_address, b.mu_address);
    if (w!=0) return w;
    w = Compare(a.mu_data, b.mu_data);
    if (w!=0) return w;
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
    mu_opcode.MultisetSort();
    mu_para.MultisetSort();
    mu_src.MultisetSort();
    mu_sink.MultisetSort();
    mu_address.MultisetSort();
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_src.print_statistic();
    mu_sink.print_statistic();
    mu_address.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_src.clear();
    mu_sink.clear();
    mu_address.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_src.undefine();
    mu_sink.undefine();
    mu_address.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_src.reset();
    mu_sink.reset();
    mu_address.reset();
    mu_data.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_src.print();
    mu_sink.print();
    mu_address.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_src.print_diff(prevstate);
    mu_sink.print_diff(prevstate);
    mu_address.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_src.to_state(thestate);
    mu_sink.to_state(thestate);
    mu_address.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_msg_type& operator= (const mu_1_msg_type& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_src.value(from.mu_src.value());
    mu_sink.value(from.mu_sink.value());
    mu_address.value(from.mu_address.value());
    mu_data.value(from.mu_data.value());
    return *this;
  };
};

  void mu_1_msg_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msg_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msg_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_src.set_self_2(name, ".src", os + 16 ); else mu_src.set_self_2(NULL, NULL, 0);
  if (name) mu_sink.set_self_2(name, ".sink", os + 24 ); else mu_sink.set_self_2(NULL, NULL, 0);
  if (name) mu_address.set_self_2(name, ".address", os + 32 ); else mu_address.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 40 ); else mu_data.set_self_2(NULL, NULL, 0);
}

mu_1_msg_type::~mu_1_msg_type()
{
}

/*** end record declaration ***/
mu_1_msg_type mu_1_msg_type_undefined_var;

class mu_1_cache_record
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_cache_state mu_state;
  mu_1_data_type mu_data;
  mu_0_boolean mu_dirty;
  mu_1_cache_record ( const char *n, int os ) { set_self(n,os); };
  mu_1_cache_record ( void ) {};

  virtual ~mu_1_cache_record(); 
friend int CompareWeight(mu_1_cache_record& a, mu_1_cache_record& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dirty, b.mu_dirty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_cache_record& a, mu_1_cache_record& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = Compare(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = Compare(a.mu_dirty, b.mu_dirty);
    if (w!=0) return w;
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
    mu_state.MultisetSort();
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_state.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_cache_record& operator= (const mu_1_cache_record& from) {
    mu_state.value(from.mu_state.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_cache_record::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_cache_record::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_cache_record::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 8 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 16 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_cache_record::~mu_1_cache_record()
{
}

/*** end record declaration ***/
mu_1_cache_record mu_1_cache_record_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_cache_record array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_cache_record& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_op_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_L1_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_cache;
  mu_1__type_1 mu_pending;
  mu_1_L1_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_L1_cache ( void ) {};

  virtual ~mu_1_L1_cache(); 
friend int CompareWeight(mu_1_L1_cache& a, mu_1_L1_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pending, b.mu_pending);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_L1_cache& a, mu_1_L1_cache& b)
  {
    int w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_pending, b.mu_pending);
    if (w!=0) return w;
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
    mu_cache.MultisetSort();
    mu_pending.MultisetSort();
  }
  void print_statistic()
  {
    mu_cache.print_statistic();
    mu_pending.print_statistic();
  }
  void clear() {
    mu_cache.clear();
    mu_pending.clear();
 };
  void undefine() {
    mu_cache.undefine();
    mu_pending.undefine();
 };
  void reset() {
    mu_cache.reset();
    mu_pending.reset();
 };
  void print() {
    mu_cache.print();
    mu_pending.print();
  };
  void print_diff(state *prevstate) {
    mu_cache.print_diff(prevstate);
    mu_pending.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cache.to_state(thestate);
    mu_pending.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_L1_cache& operator= (const mu_1_L1_cache& from) {
    mu_cache = from.mu_cache;
    mu_pending = from.mu_pending;
    return *this;
  };
};

  void mu_1_L1_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_L1_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_L1_cache::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cache.set_self_2(name, ".cache", os + 0 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_pending.set_self_2(name, ".pending", os + 24 ); else mu_pending.set_self_2(NULL, NULL, 0);
}

mu_1_L1_cache::~mu_1_L1_cache()
{
}

/*** end record declaration ***/
mu_1_L1_cache mu_1_L1_cache_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_L1_cache array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_L1_cache& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 32 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 32 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_msg_type array[ 5 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_msg_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 5 ) )
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
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 5; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 5; i++)
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
  for(int i = 0; i < 5; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 48 + os);
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
  mu_1__type_3 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1__type_3& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 240 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 240 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_cache_record array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_cache_record& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_1_op_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_1__type_6 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1__type_6& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_op_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_1_cache_state array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1_cache_state& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_1__type_9 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1__type_9& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1_L2_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_2 mu_L1;
  mu_1__type_4 mu_link1;
  mu_1__type_5 mu_cache;
  mu_1__type_7 mu_slave_pending;
  mu_1__type_8 mu_master_pending;
  mu_1__type_10 mu_directory;
  mu_1_L2_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_L2_cache ( void ) {};

  virtual ~mu_1_L2_cache(); 
friend int CompareWeight(mu_1_L2_cache& a, mu_1_L2_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_L1, b.mu_L1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_link1, b.mu_link1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_slave_pending, b.mu_slave_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_master_pending, b.mu_master_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_L2_cache& a, mu_1_L2_cache& b)
  {
    int w;
    w = Compare(a.mu_L1, b.mu_L1);
    if (w!=0) return w;
    w = Compare(a.mu_link1, b.mu_link1);
    if (w!=0) return w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_slave_pending, b.mu_slave_pending);
    if (w!=0) return w;
    w = Compare(a.mu_master_pending, b.mu_master_pending);
    if (w!=0) return w;
    w = Compare(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
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
    mu_L1.MultisetSort();
    mu_link1.MultisetSort();
    mu_cache.MultisetSort();
    mu_slave_pending.MultisetSort();
    mu_master_pending.MultisetSort();
    mu_directory.MultisetSort();
  }
  void print_statistic()
  {
    mu_L1.print_statistic();
    mu_link1.print_statistic();
    mu_cache.print_statistic();
    mu_slave_pending.print_statistic();
    mu_master_pending.print_statistic();
    mu_directory.print_statistic();
  }
  void clear() {
    mu_L1.clear();
    mu_link1.clear();
    mu_cache.clear();
    mu_slave_pending.clear();
    mu_master_pending.clear();
    mu_directory.clear();
 };
  void undefine() {
    mu_L1.undefine();
    mu_link1.undefine();
    mu_cache.undefine();
    mu_slave_pending.undefine();
    mu_master_pending.undefine();
    mu_directory.undefine();
 };
  void reset() {
    mu_L1.reset();
    mu_link1.reset();
    mu_cache.reset();
    mu_slave_pending.reset();
    mu_master_pending.reset();
    mu_directory.reset();
 };
  void print() {
    mu_L1.print();
    mu_link1.print();
    mu_cache.print();
    mu_slave_pending.print();
    mu_master_pending.print();
    mu_directory.print();
  };
  void print_diff(state *prevstate) {
    mu_L1.print_diff(prevstate);
    mu_link1.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_slave_pending.print_diff(prevstate);
    mu_master_pending.print_diff(prevstate);
    mu_directory.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_L1.to_state(thestate);
    mu_link1.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_slave_pending.to_state(thestate);
    mu_master_pending.to_state(thestate);
    mu_directory.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_L2_cache& operator= (const mu_1_L2_cache& from) {
    mu_L1 = from.mu_L1;
    mu_link1 = from.mu_link1;
    mu_cache = from.mu_cache;
    mu_slave_pending = from.mu_slave_pending;
    mu_master_pending = from.mu_master_pending;
    mu_directory = from.mu_directory;
    return *this;
  };
};

  void mu_1_L2_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_L2_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_L2_cache::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_L1.set_self_2(name, ".L1", os + 0 ); else mu_L1.set_self_2(NULL, NULL, 0);
  if (name) mu_link1.set_self_2(name, ".link1", os + 64 ); else mu_link1.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 544 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 568 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 584 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 592 ); else mu_directory.set_self_2(NULL, NULL, 0);
}

mu_1_L2_cache::~mu_1_L2_cache()
{
}

/*** end record declaration ***/
mu_1_L2_cache mu_1_L2_cache_undefined_var;

class mu_1__type_11
{
 public:
  mu_1_L2_cache array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_L2_cache& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 608 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 608 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12
{
 public:
  mu_1_msg_type array[ 5 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1_msg_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 5 ) )
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
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 5; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 5; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_12::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_12::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_12::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 5; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 48 + os);
    delete[] s;
  }
};
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13
{
 public:
  mu_1__type_12 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_1__type_12& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_13::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_13::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_13::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 240 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 240 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14
{
 public:
  mu_1_cache_record array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1_cache_record& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_14::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_14::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_14::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15
{
 public:
  mu_1_op_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_15::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_15::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_15::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16
{
 public:
  mu_1__type_15 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_1__type_15& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_16& operator= (const mu_1__type_16& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_16& a, mu_1__type_16& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_16::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_16::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_16::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17
{
 public:
  mu_1_cache_state array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_17 (const char *n, int os) { set_self(n, os); };
  mu_1__type_17 ( void ) {};
  virtual ~mu_1__type_17 ();
  mu_1_cache_state& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_17::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_17::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_17::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18
{
 public:
  mu_1__type_17 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_18 (const char *n, int os) { set_self(n, os); };
  mu_1__type_18 ( void ) {};
  virtual ~mu_1__type_18 ();
  mu_1__type_17& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 5 ) )
      return array[ index - 4 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: child is internally represented from 4 to 5.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_18::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_18::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_18::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"child_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"child_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1_L3_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_11 mu_L2;
  mu_1__type_13 mu_link2;
  mu_1__type_14 mu_cache;
  mu_1__type_16 mu_pending;
  mu_1__type_18 mu_directory;
  mu_1_L3_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_L3_cache ( void ) {};

  virtual ~mu_1_L3_cache(); 
friend int CompareWeight(mu_1_L3_cache& a, mu_1_L3_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_L2, b.mu_L2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_link2, b.mu_link2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pending, b.mu_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_L3_cache& a, mu_1_L3_cache& b)
  {
    int w;
    w = Compare(a.mu_L2, b.mu_L2);
    if (w!=0) return w;
    w = Compare(a.mu_link2, b.mu_link2);
    if (w!=0) return w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_pending, b.mu_pending);
    if (w!=0) return w;
    w = Compare(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
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
    mu_L2.MultisetSort();
    mu_link2.MultisetSort();
    mu_cache.MultisetSort();
    mu_pending.MultisetSort();
    mu_directory.MultisetSort();
  }
  void print_statistic()
  {
    mu_L2.print_statistic();
    mu_link2.print_statistic();
    mu_cache.print_statistic();
    mu_pending.print_statistic();
    mu_directory.print_statistic();
  }
  void clear() {
    mu_L2.clear();
    mu_link2.clear();
    mu_cache.clear();
    mu_pending.clear();
    mu_directory.clear();
 };
  void undefine() {
    mu_L2.undefine();
    mu_link2.undefine();
    mu_cache.undefine();
    mu_pending.undefine();
    mu_directory.undefine();
 };
  void reset() {
    mu_L2.reset();
    mu_link2.reset();
    mu_cache.reset();
    mu_pending.reset();
    mu_directory.reset();
 };
  void print() {
    mu_L2.print();
    mu_link2.print();
    mu_cache.print();
    mu_pending.print();
    mu_directory.print();
  };
  void print_diff(state *prevstate) {
    mu_L2.print_diff(prevstate);
    mu_link2.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_pending.print_diff(prevstate);
    mu_directory.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_L2.to_state(thestate);
    mu_link2.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_pending.to_state(thestate);
    mu_directory.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_L3_cache& operator= (const mu_1_L3_cache& from) {
    mu_L2 = from.mu_L2;
    mu_link2 = from.mu_link2;
    mu_cache = from.mu_cache;
    mu_pending = from.mu_pending;
    mu_directory = from.mu_directory;
    return *this;
  };
};

  void mu_1_L3_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_L3_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_L3_cache::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_L2.set_self_2(name, ".L2", os + 0 ); else mu_L2.set_self_2(NULL, NULL, 0);
  if (name) mu_link2.set_self_2(name, ".link2", os + 1216 ); else mu_link2.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 1696 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_pending.set_self_2(name, ".pending", os + 1720 ); else mu_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 1736 ); else mu_directory.set_self_2(NULL, NULL, 0);
}

mu_1_L3_cache::~mu_1_L3_cache()
{
}

/*** end record declaration ***/
mu_1_L3_cache mu_1_L3_cache_undefined_var;

class mu_1__type_19
{
 public:
  mu_1_data_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_19 (const char *n, int os) { set_self(n, os); };
  mu_1__type_19 ( void ) {};
  virtual ~mu_1__type_19 ();
  mu_1_data_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_19& operator= (const mu_1__type_19& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_19::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_19::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_19::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20
{
 public:
  mu_1_data_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_20 (const char *n, int os) { set_self(n, os); };
  mu_1__type_20 ( void ) {};
  virtual ~mu_1__type_20 ();
  mu_1_data_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: addr is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_20::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_20::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_20::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"addr_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1__type_21: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_21& val) { return mu__byte::operator=((int) val); };
  mu_1__type_21 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1__type_21 (void): mu__byte(0, 1, 2) {};
  mu_1__type_21 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu_1__type_21 mu_1__type_21_undefined_var;

const int mu_child_num = 2;
const int mu_addr_num = 1;
const int mu_chan_num = 5;
const int mu_data_num = 2;
const int mu_addr_1 = 1;
const int mu_data_type_1 = 2;
const int mu_data_type_2 = 3;
const int mu_child_1 = 4;
const int mu_child_2 = 5;
const int mu_None = 6;
const int mu_Trunk = 7;
const int mu_Branch = 8;
const int mu_Tip = 9;
const int mu_Empty = 10;
const int mu_AcquireBlock = 11;
const int mu_AcquirePerm = 12;
const int mu_ProbeBlock = 13;
const int mu_ProbePerm = 14;
const int mu_ProbeAck = 15;
const int mu_ProbeAckData = 16;
const int mu_Grant = 17;
const int mu_GrantData = 18;
const int mu_GrantAck = 19;
const int mu_Release = 20;
const int mu_ReleaseData = 21;
const int mu_ReleaseAck = 22;
const int mu_toN = 23;
const int mu_toB = 24;
const int mu_toT = 25;
const int mu_NtoB = 26;
const int mu_NtoT = 27;
const int mu_BtoT = 28;
const int mu_TtoB = 29;
const int mu_TtoN = 30;
const int mu_BtoN = 31;
const int mu_TtoT = 32;
const int mu_BtoB = 33;
const int mu_NtoN = 34;
/*** Variable declaration ***/
mu_1_L3_cache mu_L3("L3",0);

/*** Variable declaration ***/
mu_1__type_19 mu_memdata("memdata",1752);

/*** Variable declaration ***/
mu_1__type_20 mu_auxdata("auxdata",1760);

void mu_link1_send(const mu_1_op_type& mu_op, const mu_1_trans& mu_para, const mu_1_child& mu_src, const mu_1_child& mu_sink, const mu_1_addr& mu_a, const mu_1_data_type& mu_d)
{
/*** Variable declaration ***/
mu_1_msg_type mu_msg("msg",0);

if (mu_op.isundefined())
  mu_msg.mu_opcode.undefine();
else
  mu_msg.mu_opcode = mu_op;
if (mu_para.isundefined())
  mu_msg.mu_para.undefine();
else
  mu_msg.mu_para = mu_para;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_sink.isundefined())
  mu_msg.mu_sink.undefine();
else
  mu_msg.mu_sink = mu_sink;
if (mu_a.isundefined())
  mu_msg.mu_address.undefine();
else
  mu_msg.mu_address = mu_a;
if (mu_d.isundefined())
  mu_msg.mu_data.undefine();
else
  mu_msg.mu_data = mu_d;
switch ((int) mu_op) {
case mu_AcquirePerm:
case mu_AcquireBlock:
mu_L3.mu_L2[mu_sink].mu_link1[mu_src][1] = mu_msg;
break;
case mu_ProbePerm:
case mu_ProbeBlock:
mu_L3.mu_L2[mu_sink].mu_link1[mu_src][2] = mu_msg;
break;
case mu_ProbeAckData:
case mu_ProbeAck:
case mu_ReleaseData:
case mu_Release:
mu_L3.mu_L2[mu_sink].mu_link1[mu_src][3] = mu_msg;
break;
case mu_ReleaseAck:
case mu_GrantData:
case mu_Grant:
mu_L3.mu_L2[mu_sink].mu_link1[mu_src][4] = mu_msg;
break;
case mu_GrantAck:
mu_L3.mu_L2[mu_sink].mu_link1[mu_src][5] = mu_msg;
break;
}
};
/*** end procedure declaration ***/

void mu_link2_send(const mu_1_op_type& mu_op, const mu_1_trans& mu_para, const mu_1_child& mu_src, const mu_1_child& mu_sink, const mu_1_addr& mu_a, const mu_1_data_type& mu_d)
{
/*** Variable declaration ***/
mu_1_msg_type mu_msg("msg",0);

if (mu_op.isundefined())
  mu_msg.mu_opcode.undefine();
else
  mu_msg.mu_opcode = mu_op;
if (mu_para.isundefined())
  mu_msg.mu_para.undefine();
else
  mu_msg.mu_para = mu_para;
if (mu_src.isundefined())
  mu_msg.mu_src.undefine();
else
  mu_msg.mu_src = mu_src;
if (mu_sink.isundefined())
  mu_msg.mu_sink.undefine();
else
  mu_msg.mu_sink = mu_sink;
if (mu_a.isundefined())
  mu_msg.mu_address.undefine();
else
  mu_msg.mu_address = mu_a;
if (mu_d.isundefined())
  mu_msg.mu_data.undefine();
else
  mu_msg.mu_data = mu_d;
switch ((int) mu_op) {
case mu_AcquirePerm:
case mu_AcquireBlock:
mu_L3.mu_link2[mu_src][1] = mu_msg;
break;
case mu_ProbePerm:
case mu_ProbeBlock:
mu_L3.mu_link2[mu_src][2] = mu_msg;
break;
case mu_ProbeAckData:
case mu_ProbeAck:
case mu_ReleaseData:
case mu_Release:
mu_L3.mu_link2[mu_src][3] = mu_msg;
break;
case mu_ReleaseAck:
case mu_GrantData:
case mu_Grant:
mu_L3.mu_link2[mu_src][4] = mu_msg;
break;
case mu_GrantAck:
mu_L3.mu_link2[mu_src][5] = mu_msg;
break;
}
};
/*** end procedure declaration ***/

mu_0_boolean mu_state_collect()
{
/*** Variable declaration ***/
mu_1__type_21 mu_tip_num("tip_num",0);

mu_tip_num = 0;
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
if ( (mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip) )
{
if ( (mu_tip_num) == (0) )
{
mu_tip_num = 1;
}
else
{
return mu_false;
}
}
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
if ( (mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip) )
{
if ( (mu_tip_num) == (0) )
{
mu_tip_num = 1;
}
else
{
return mu_false;
}
}
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( (mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip) )
{
if ( (mu_tip_num) == (0) )
{
mu_tip_num = 1;
}
else
{
return mu_false;
}
}
};
};
};
};
};
};
return mu_true;
	Error.Error("The end of function state_collect reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_L3.clear();
  mu_memdata.clear();
  mu_auxdata.clear();
}
void world_class::undefine()
{
  mu_L3.undefine();
  mu_memdata.undefine();
  mu_auxdata.undefine();
}
void world_class::reset()
{
  mu_L3.reset();
  mu_memdata.reset();
  mu_auxdata.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_L3.print();
  mu_memdata.print();
  mu_auxdata.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_L3.print_statistic();
  mu_memdata.print_statistic();
  mu_auxdata.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_L3.print_diff(prevstate);
    mu_memdata.print_diff(prevstate);
    mu_auxdata.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_L3.to_state( newstate );
  mu_memdata.to_state( newstate );
  mu_auxdata.to_state( newstate );
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
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("L3_send_Release3, a:%s", mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr22;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr22 = FALSE ;
  else {
bool mu__quant23; 
mu__quant23 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L3.mu_directory[mu_j][mu_a]) == (mu_Tip)) )
  { mu__quant23 = FALSE; break; }
};
};
  mu__boolexpr22 = (mu__quant23) ; 
}
    return mu__boolexpr22;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 1 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr24;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr24 = FALSE ;
  else {
bool mu__quant25; 
mu__quant25 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L3.mu_directory[mu_j][mu_a]) == (mu_Tip)) )
  { mu__quant25 = FALSE; break; }
};
};
  mu__boolexpr24 = (mu__quant25) ; 
}
	      if (mu__boolexpr24) {
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
    mu_a.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
  if (!((mu_L3.mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_L3.mu_pending[mu_k][mu_a]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_L3.mu_pending[mu_k][mu_a]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_L3.mu_pending[mu_k][mu_a]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr26 )
{
mu_link2_send ( mu_ProbeBlock, mu_toN, mu_k, mu_1_child_undefined_var, mu_a, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_k][mu_a] = mu_ProbeAck;
}
};
};
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
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("L3_send_Release2, a:%s", mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr29;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr29 = FALSE ;
  else {
bool mu__quant30; 
mu__quant30 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L3.mu_directory[mu_j][mu_a]) == (mu_Branch)) )
  { mu__quant30 = TRUE; break; }
};
};
  mu__boolexpr29 = (mu__quant30) ; 
}
    return mu__boolexpr29;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr31;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr31 = FALSE ;
  else {
bool mu__quant32; 
mu__quant32 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L3.mu_directory[mu_j][mu_a]) == (mu_Branch)) )
  { mu__quant32 = TRUE; break; }
};
};
  mu__boolexpr31 = (mu__quant32) ; 
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
    r = what_rule - 1;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr33;
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_L3.mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_L3.mu_pending[mu_k][mu_a]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_L3.mu_pending[mu_k][mu_a]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_L3.mu_pending[mu_k][mu_a]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr33 )
{
mu_link2_send ( mu_ProbePerm, mu_toN, mu_k, mu_1_child_undefined_var, mu_a, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_k][mu_a] = mu_ProbeAck;
}
};
};
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
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("L3_send_Release1, a:%s", mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr36;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr36 = FALSE ;
  else {
bool mu__quant37; 
mu__quant37 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L3.mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant37 = FALSE; break; }
};
};
  mu__boolexpr36 = (mu__quant37) ; 
}
    return mu__boolexpr36;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 3 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr38;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr38 = FALSE ;
  else {
bool mu__quant39; 
mu__quant39 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L3.mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant39 = FALSE; break; }
};
};
  mu__boolexpr38 = (mu__quant39) ; 
}
	      if (mu__boolexpr38) {
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
    mu_a.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
if ( mu_L3.mu_cache[mu_a].mu_dirty )
{
mu_memdata[mu_a] = mu_L3.mu_cache[mu_a].mu_data;
mu_L3.mu_cache[mu_a].mu_dirty = mu_false;
}
mu_L3.mu_cache[mu_a].mu_state = mu_None;
mu_L3.mu_cache[mu_a].mu_data.undefine();
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
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L3_receive_GrantAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr40;
  if ((mu_link[5].mu_opcode) == (mu_GrantAck)) mu__boolexpr40 = TRUE ;
  else {
  mu__boolexpr40 = ((mu_link[5].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr40;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 5 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr41;
  if ((mu_link[5].mu_opcode) == (mu_GrantAck)) mu__boolexpr41 = TRUE ;
  else {
  mu__boolexpr41 = ((mu_link[5].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr41) {
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
    r = what_rule - 3;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
mu_L3.mu_pending[mu_i][mu_link[5].mu_address] = mu_Empty;
mu_link[5].undefine();
mu_link[5].mu_opcode = mu_Empty;
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
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L3_receive_Release[Data], i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr42;
bool mu__boolexpr43;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr43 = TRUE ;
  else {
  mu__boolexpr43 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (mu__boolexpr43) mu__boolexpr42 = TRUE ;
  else {
bool mu__boolexpr44;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr44 = TRUE ;
  else {
  mu__boolexpr44 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
  mu__boolexpr42 = (mu__boolexpr44) ; 
}
    return mu__boolexpr42;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 7 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr45;
bool mu__boolexpr46;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr46 = TRUE ;
  else {
  mu__boolexpr46 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (mu__boolexpr46) mu__boolexpr45 = TRUE ;
  else {
bool mu__boolexpr47;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr47 = TRUE ;
  else {
  mu__boolexpr47 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
  mu__boolexpr45 = (mu__boolexpr47) ; 
}
	      if (mu__boolexpr45) {
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
    r = what_rule - 5;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[3];
mu_link[3].undefine();
mu_link[3].mu_opcode = mu_Empty;
if ( (mu_m.mu_para) == (mu_TtoN) )
{
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
if ( (mu_m.mu_opcode) == (mu_ReleaseData) )
{
mu_L3.mu_cache[mu_m.mu_address].mu_data = mu_m.mu_data;
mu_L3.mu_cache[mu_m.mu_address].mu_dirty = mu_true;
}
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_None;
mu_link2_send ( mu_ReleaseAck, mu_1_trans_undefined_var, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
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
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L3_receive_ProbeAck[Data], i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr48;
bool mu__boolexpr49;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAck)) mu__boolexpr49 = TRUE ;
  else {
  mu__boolexpr49 = ((mu_link[3].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (mu__boolexpr49) mu__boolexpr48 = TRUE ;
  else {
bool mu__boolexpr50;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) mu__boolexpr50 = TRUE ;
  else {
  mu__boolexpr50 = ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) ; 
}
  mu__boolexpr48 = (mu__boolexpr50) ; 
}
    return mu__boolexpr48;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 7;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 9 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr51;
bool mu__boolexpr52;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAck)) mu__boolexpr52 = TRUE ;
  else {
  mu__boolexpr52 = ((mu_link[3].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (mu__boolexpr52) mu__boolexpr51 = TRUE ;
  else {
bool mu__boolexpr53;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) mu__boolexpr53 = TRUE ;
  else {
  mu__boolexpr53 = ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) ; 
}
  mu__boolexpr51 = (mu__boolexpr53) ; 
}
	      if (mu__boolexpr51) {
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
    r = what_rule - 7;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[3];
mu_link[3].undefine();
mu_link[3].mu_opcode = mu_Empty;
if ( (mu_m.mu_para) == (mu_TtoN) )
{
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_None;
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
else
{
if ( (mu_m.mu_para) == (mu_TtoB) )
{
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_Branch;
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
else
{
bool mu__boolexpr54;
  if ((mu_m.mu_para) == (mu_BtoN)) mu__boolexpr54 = TRUE ;
  else {
  mu__boolexpr54 = ((mu_m.mu_para) == (mu_NtoN)) ; 
}
if ( mu__boolexpr54 )
{
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_None;
}
}
}
if ( (mu_m.mu_opcode) == (mu_ProbeAckData) )
{
mu_L3.mu_cache[mu_m.mu_address].mu_data = mu_m.mu_data;
mu_L3.mu_cache[mu_m.mu_address].mu_dirty = mu_true;
}
mu_L3.mu_pending[mu_i][mu_m.mu_address] = mu_Empty;
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
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L3_receive_AcquireBlock, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
    return (mu_link[1].mu_opcode) == (mu_AcquireBlock);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 11 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
	      if ((mu_link[1].mu_opcode) == (mu_AcquireBlock)) {
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
    r = what_rule - 9;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[1];
if ( (mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_None) )
{
mu_L3.mu_cache[mu_m.mu_address].mu_data = mu_memdata[mu_m.mu_address];
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Tip;
mu_auxdata[mu_m.mu_address] = mu_memdata[mu_m.mu_address];
}
else
{
if ( (mu_m.mu_para) == (mu_NtoB) )
{
bool mu__boolexpr55;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip))) mu__boolexpr55 = FALSE ;
  else {
bool mu__quant56; 
mu__quant56 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr57;
  if (!((mu_j) != (mu_i))) mu__boolexpr57 = TRUE ;
  else {
  mu__boolexpr57 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_None)) ; 
}
if ( !(mu__boolexpr57) )
  { mu__quant56 = FALSE; break; }
};
};
  mu__boolexpr55 = (mu__quant56) ; 
}
if ( mu__boolexpr55 )
{
bool mu__boolexpr58;
bool mu__quant59; 
mu__quant59 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr60;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr60) )
  { mu__quant59 = FALSE; break; }
};
};
  if (!(mu__quant59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr58 )
{
mu_link[1].undefine();
mu_link[1].mu_opcode = mu_Empty;
mu_link2_send ( mu_GrantData, mu_toB, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_L3.mu_cache[mu_m.mu_address].mu_data );
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_Branch;
mu_L3.mu_pending[mu_i][mu_m.mu_address] = mu_GrantAck;
}
}
else
{
bool mu__boolexpr61;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip))) mu__boolexpr61 = FALSE ;
  else {
bool mu__quant62; 
mu__quant62 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr63;
  if (!((mu_j) != (mu_i))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( (mu__boolexpr63) )
  { mu__quant62 = TRUE; break; }
};
};
  mu__boolexpr61 = (mu__quant62) ; 
}
if ( mu__boolexpr61 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr64;
  if (!((mu_j) != (mu_i))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( mu__boolexpr64 )
{
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr65 )
{
mu_link2_send ( mu_ProbePerm, mu_toN, mu_j, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_j][mu_m.mu_address] = mu_ProbeAckData;
}
}
};
};
}
}
}
else
{
if ( (mu_m.mu_para) == (mu_NtoT) )
{
if ( (mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__quant69; 
mu__quant69 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr70;
  if (!((mu_j) != (mu_i))) mu__boolexpr70 = TRUE ;
  else {
  mu__boolexpr70 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_None)) ; 
}
if ( !(mu__boolexpr70) )
  { mu__quant69 = FALSE; break; }
};
};
  if (!(mu__quant69)) mu__boolexpr68 = FALSE ;
  else {
bool mu__quant71; 
mu__quant71 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr72;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr72) )
  { mu__quant71 = FALSE; break; }
};
};
  mu__boolexpr68 = (mu__quant71) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr67 )
{
mu_link[1].undefine();
mu_link[1].mu_opcode = mu_Empty;
mu_link2_send ( mu_GrantData, mu_toT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_L3.mu_cache[mu_m.mu_address].mu_data );
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Trunk;
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_Tip;
mu_L3.mu_pending[mu_i][mu_m.mu_address] = mu_GrantAck;
}
else
{
bool mu__boolexpr73;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip))) mu__boolexpr73 = FALSE ;
  else {
bool mu__quant74; 
mu__quant74 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr75;
  if (!((mu_j) != (mu_i))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( (mu__boolexpr75) )
  { mu__quant74 = TRUE; break; }
};
};
  mu__boolexpr73 = (mu__quant74) ; 
}
if ( mu__boolexpr73 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr76;
  if (!((mu_j) != (mu_i))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( mu__boolexpr76 )
{
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr77 )
{
mu_link2_send ( mu_ProbePerm, mu_toN, mu_j, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_j][mu_m.mu_address] = mu_ProbeAck;
}
}
};
};
}
}
}
else
{
bool mu__boolexpr79;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr79 = FALSE ;
  else {
bool mu__quant80; 
mu__quant80 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr81;
  if (!((mu_j) != (mu_i))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( (mu__boolexpr81) )
  { mu__quant80 = TRUE; break; }
};
};
  mu__boolexpr79 = (mu__quant80) ; 
}
if ( mu__boolexpr79 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr82;
  if (!((mu_j) != (mu_i))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr82 )
{
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr83 )
{
mu_link2_send ( mu_ProbeBlock, mu_toN, mu_j, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_j][mu_m.mu_address] = mu_ProbeAckData;
}
}
};
};
}
}
}
}
}
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
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L3_receive_AcquirePerm, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
    return (mu_link[1].mu_opcode) == (mu_AcquirePerm);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 13 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
	      if ((mu_link[1].mu_opcode) == (mu_AcquirePerm)) {
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
    r = what_rule - 11;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[1];
if ( (mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__quant87; 
mu__quant87 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr88;
  if (!((mu_j) != (mu_i))) mu__boolexpr88 = TRUE ;
  else {
  mu__boolexpr88 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_None)) ; 
}
if ( !(mu__boolexpr88) )
  { mu__quant87 = FALSE; break; }
};
};
  if (!(mu__quant87)) mu__boolexpr86 = FALSE ;
  else {
bool mu__quant89; 
mu__quant89 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr90;
  if (!((mu_L3.mu_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_L3.mu_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr90) )
  { mu__quant89 = FALSE; break; }
};
};
  mu__boolexpr86 = (mu__quant89) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr85 )
{
mu_link[1].undefine();
mu_link[1].mu_opcode = mu_Empty;
if ( (mu_L3.mu_directory[mu_i][mu_m.mu_address]) == (mu_Branch) )
{
mu_link2_send ( mu_Grant, mu_toT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L3.mu_directory[mu_i][mu_m.mu_address]) == (mu_None) )
{
mu_link2_send ( mu_GrantData, mu_toT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_L3.mu_cache[mu_m.mu_address].mu_data );
}
}
mu_L3.mu_directory[mu_i][mu_m.mu_address] = mu_Tip;
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Trunk;
mu_L3.mu_pending[mu_i][mu_m.mu_address] = mu_GrantAck;
}
else
{
bool mu__quant91; 
mu__quant91 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr92;
  if (!((mu_j) != (mu_i))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( (mu__boolexpr92) )
  { mu__quant91 = TRUE; break; }
};
};
if ( mu__quant91 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!((mu_j) != (mu_i))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr93 )
{
mu_link2_send ( mu_ProbePerm, mu_toN, mu_j, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_j][mu_m.mu_address] = mu_ProbeAck;
}
};
};
}
}
}
else
{
if ( (mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_None) )
{
mu_L3.mu_cache[mu_m.mu_address].mu_data = mu_memdata[mu_m.mu_address];
mu_L3.mu_cache[mu_m.mu_address].mu_state = mu_Tip;
mu_auxdata[mu_m.mu_address] = mu_memdata[mu_m.mu_address];
}
}
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
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_send_Release3, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
bool mu__boolexpr97;
  if (!((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr97 = FALSE ;
  else {
bool mu__quant98; 
mu__quant98 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Tip)) )
  { mu__quant98 = TRUE; break; }
};
};
  mu__boolexpr97 = (mu__quant98) ; 
}
    return mu__boolexpr97;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 13;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 15 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
bool mu__boolexpr99;
  if (!((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr99 = FALSE ;
  else {
bool mu__quant100; 
mu__quant100 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Tip)) )
  { mu__quant100 = TRUE; break; }
};
};
  mu__boolexpr99 = (mu__quant100) ; 
}
	      if (mu__boolexpr99) {
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
    r = what_rule - 13;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr101 )
{
mu_link1_send ( mu_ProbeBlock, mu_toN, mu_k, mu_i, mu_a, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_k][mu_a] = mu_ProbeAck;
}
};
};
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
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_send_Release2, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr105 = TRUE ;
  else {
  mu__boolexpr105 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
bool mu__quant106; 
mu__quant106 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Branch)) )
  { mu__quant106 = TRUE; break; }
};
};
  mu__boolexpr104 = (mu__quant106) ; 
}
    return mu__boolexpr104;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 15;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 17 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
bool mu__boolexpr107;
bool mu__boolexpr108;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr108 = TRUE ;
  else {
  mu__boolexpr108 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
bool mu__quant109; 
mu__quant109 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Branch)) )
  { mu__quant109 = TRUE; break; }
};
};
  mu__boolexpr107 = (mu__quant109) ; 
}
	      if (mu__boolexpr107) {
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
    r = what_rule - 15;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr110 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_k, mu_i, mu_a, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_k][mu_a] = mu_ProbeAck;
}
};
};
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_send_Release1, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr117 = TRUE ;
  else {
  mu__boolexpr117 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
bool mu__quant118; 
mu__quant118 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant118 = FALSE; break; }
};
};
  mu__boolexpr116 = (mu__quant118) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_GrantAck)) ; 
}
    return mu__boolexpr113;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 19 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr123 = TRUE ;
  else {
  mu__boolexpr123 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
bool mu__quant124; 
mu__quant124 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant124 = FALSE; break; }
};
};
  mu__boolexpr122 = (mu__quant124) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_GrantAck)) ; 
}
	      if (mu__boolexpr119) {
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
    r = what_rule - 17;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
if ( (mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch) )
{
mu_link2_send ( mu_Release, mu_BtoN, mu_i, mu_1_child_undefined_var, mu_a, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip) )
{
mu_link2_send ( mu_ReleaseData, mu_TtoN, mu_i, mu_1_child_undefined_var, mu_a, mu_L2[mu_i].mu_cache[mu_a].mu_data );
}
}
mu_L2[mu_i].mu_cache[mu_a].mu_data.undefine();
mu_L2[mu_i].mu_cache[mu_a].mu_state = mu_None;
mu_L2[mu_i].mu_cache[mu_a].mu_dirty = mu_false;
mu_L2[mu_i].mu_master_pending[mu_a] = mu_ReleaseAck;
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_Probe(Perm/Block), i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr125;
  if ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr125 = TRUE ;
  else {
  mu__boolexpr125 = ((mu_link[2].mu_opcode) == (mu_ProbePerm)) ; 
}
    return mu__boolexpr125;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 19;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 21 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr126;
  if ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr126 = TRUE ;
  else {
  mu__boolexpr126 = ((mu_link[2].mu_opcode) == (mu_ProbePerm)) ; 
}
	      if (mu__boolexpr126) {
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
    r = what_rule - 19;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[2];
bool mu__boolexpr127;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr127 )
{
mu_link[2].undefine();
mu_link[2].mu_opcode = mu_Empty;
mu_link2_send ( mu_ProbeAck, mu_NtoN, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
bool mu__boolexpr128;
  if (!((mu_m.mu_opcode) == (mu_ProbePerm))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch)) ; 
}
if ( mu__boolexpr128 )
{
bool mu__boolexpr129;
bool mu__quant130; 
mu__quant130 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
if ( !((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_None)) )
  { mu__quant130 = FALSE; break; }
};
};
  if (!(mu__quant130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr129 )
{
mu_link[2].undefine();
mu_link[2].mu_opcode = mu_Empty;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_None;
mu_link2_send ( mu_ProbeAck, mu_BtoN, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_Branch))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr131 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_k, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address] = mu_ProbeAck;
}
};
};
}
}
else
{
if ( (mu_m.mu_opcode) == (mu_ProbeBlock) )
{
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr134;
bool mu__quant135; 
mu__quant135 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
if ( !((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_None)) )
  { mu__quant135 = FALSE; break; }
};
};
  if (!(mu__quant135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr134 )
{
mu_link[2].undefine();
mu_link[2].mu_opcode = mu_Empty;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_None;
if ( mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_dirty )
{
mu_link2_send ( mu_ProbeAckData, mu_TtoN, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data );
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_dirty = mu_false;
}
else
{
mu_link2_send ( mu_ProbeAck, mu_TtoN, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
}
}
else
{
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_Branch))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr136 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_k, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address] = mu_ProbeAck;
}
};
};
}
}
else
{
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk) )
{
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_Tip))) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr139 )
{
mu_link1_send ( mu_ProbeBlock, mu_toN, mu_k, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address] = mu_ProbeAck;
}
};
};
}
}
}
}
}
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_ReleaseAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
    return (mu_link[4].mu_opcode) == (mu_ReleaseAck);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 21;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 23 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
	      if ((mu_link[4].mu_opcode) == (mu_ReleaseAck)) {
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
    r = what_rule - 21;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[4];
mu_link[4].undefine();
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Empty;
mu_link[4].mu_opcode = mu_Empty;
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_Grant, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr142;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr142 = TRUE ;
  else {
  mu__boolexpr142 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
    return mu__boolexpr142;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 23;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 25 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
bool mu__boolexpr143;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr143 = TRUE ;
  else {
  mu__boolexpr143 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
	      if (mu__boolexpr143) {
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
    r = what_rule - 23;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_12& mu_link = mu_L3.mu_link2[mu_i];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[4];
if ( (mu_m.mu_opcode) == (mu_GrantData) )
{
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data = mu_m.mu_data;
}
if ( (mu_m.mu_para) == (mu_toB) )
{
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Branch;
}
else
{
if ( (mu_m.mu_para) == (mu_toT) )
{
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
}
mu_link[4].undefine();
mu_link[4].mu_opcode = mu_Empty;
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Empty;
mu_link2_send ( mu_GrantAck, mu_1_trans_undefined_var, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_GrantAck, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr144;
  if ((mu_link[5].mu_opcode) == (mu_GrantAck)) mu__boolexpr144 = TRUE ;
  else {
  mu__boolexpr144 = ((mu_link[5].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr144;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 25;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 29 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr145;
  if ((mu_link[5].mu_opcode) == (mu_GrantAck)) mu__boolexpr145 = TRUE ;
  else {
  mu__boolexpr145 = ((mu_link[5].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr145) {
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
    r = what_rule - 25;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_child mu_src("src",48);

mu_m = mu_link[5];
mu_src = mu_j;
mu_link[5].undefine();
mu_link[5].mu_opcode = mu_Empty;
mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address] = mu_Empty;
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_Release[Data], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr146;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr146 = TRUE ;
  else {
  mu__boolexpr146 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
    return mu__boolexpr146;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 29;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 33 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr147;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr147 = TRUE ;
  else {
  mu__boolexpr147 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
	      if (mu__boolexpr147) {
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
    r = what_rule - 29;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_child mu_src("src",48);

mu_m = mu_link[3];
mu_src = mu_j;
mu_link[3].undefine();
mu_link[3].mu_opcode = mu_Empty;
if ( (mu_m.mu_para) == (mu_TtoN) )
{
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
if ( (mu_m.mu_opcode) == (mu_ReleaseData) )
{
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data = mu_m.mu_data;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_dirty = mu_true;
}
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_None;
mu_link1_send ( mu_ReleaseAck, mu_1_trans_undefined_var, mu_src, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_ProbeAck[Data], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr148;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAck)) mu__boolexpr148 = TRUE ;
  else {
  mu__boolexpr148 = ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) ; 
}
    return mu__boolexpr148;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 37 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr149;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAck)) mu__boolexpr149 = TRUE ;
  else {
  mu__boolexpr149 = ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) ; 
}
	      if (mu__boolexpr149) {
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
    r = what_rule - 33;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_child mu_src("src",48);

mu_m = mu_link[3];
mu_src = mu_j;
mu_link[3].undefine();
mu_link[3].mu_opcode = mu_Empty;
if ( (mu_m.mu_para) == (mu_TtoN) )
{
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_None;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
else
{
if ( (mu_m.mu_para) == (mu_TtoB) )
{
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_Branch;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
else
{
bool mu__boolexpr150;
  if ((mu_m.mu_para) == (mu_BtoN)) mu__boolexpr150 = TRUE ;
  else {
  mu__boolexpr150 = ((mu_m.mu_para) == (mu_NtoN)) ; 
}
if ( mu__boolexpr150 )
{
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_None;
}
}
}
if ( (mu_m.mu_opcode) == (mu_ProbeAckData) )
{
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data = mu_m.mu_data;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_dirty = mu_true;
}
mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address] = mu_Empty;
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_AcquireBlock, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
    return (mu_link[1].mu_opcode) == (mu_AcquireBlock);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 37;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 41 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
	      if ((mu_link[1].mu_opcode) == (mu_AcquireBlock)) {
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
    r = what_rule - 37;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_child mu_src("src",48);

/*** Variable declaration ***/
mu_1_child mu_another("another",56);

{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
if ( (mu_k) != (mu_j) )
{
mu_another = mu_k;
}
};
};
mu_m = mu_link[1];
mu_src = mu_j;
if ( (mu_m.mu_para) == (mu_NtoB) )
{
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr151 )
{
mu_link2_send ( mu_AcquireBlock, mu_NtoB, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_GrantData;
}
else
{
bool mu__boolexpr154;
  if ((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch)) mu__boolexpr154 = TRUE ;
  else {
  mu__boolexpr154 = ((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip)) ; 
}
if ( mu__boolexpr154 )
{
bool mu__boolexpr155;
bool mu__boolexpr156;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_GrantAck))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( mu__boolexpr155 )
{
mu_link[1].undefine();
mu_link[1].mu_opcode = mu_Empty;
mu_link1_send ( mu_GrantData, mu_toB, mu_src, mu_i, mu_m.mu_address, mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data );
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_Branch;
mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address] = mu_GrantAck;
}
}
else
{
bool mu__boolexpr157;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr157 )
{
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr158 )
{
mu_link1_send ( mu_ProbeBlock, mu_toB, mu_another, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address] = mu_ProbeAckData;
}
}
}
}
}
else
{
if ( (mu_m.mu_para) == (mu_NtoT) )
{
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr160 )
{
mu_link2_send ( mu_AcquireBlock, mu_NtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_GrantData;
}
else
{
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch) )
{
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr163 )
{
mu_link2_send ( mu_AcquirePerm, mu_BtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Grant;
}
}
else
{
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_None))) mu__boolexpr166 = FALSE ;
  else {
bool mu__quant167; 
mu__quant167 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr168;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr168) )
  { mu__quant167 = FALSE; break; }
};
};
  mu__boolexpr166 = (mu__quant167) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr165 )
{
mu_link[1].undefine();
mu_link[1].mu_opcode = mu_Empty;
mu_link1_send ( mu_GrantData, mu_toT, mu_src, mu_i, mu_m.mu_address, mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data );
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Trunk;
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_Tip;
mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address] = mu_GrantAck;
}
else
{
if ( (mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_Branch) )
{
bool mu__boolexpr169;
bool mu__boolexpr170;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr169 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_another, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address] = mu_ProbeAck;
}
}
}
}
else
{
bool mu__boolexpr171;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr171 )
{
bool mu__boolexpr172;
bool mu__boolexpr173;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr172 )
{
mu_link1_send ( mu_ProbeBlock, mu_toN, mu_another, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address] = mu_ProbeAckData;
}
}
}
}
}
}
}
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("L2_receive_AcquirePerm, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
    return (mu_link[1].mu_opcode) == (mu_AcquirePerm);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 41;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 45 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
	      if ((mu_link[1].mu_opcode) == (mu_AcquirePerm)) {
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
    r = what_rule - 41;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_11& mu_L2 = mu_L3.mu_L2;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_child mu_src("src",48);

/*** Variable declaration ***/
mu_1_child mu_another("another",56);

{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
if ( (mu_k) != (mu_j) )
{
mu_another = mu_k;
}
};
};
mu_m = mu_link[1];
mu_src = mu_j;
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_None))) mu__boolexpr175 = FALSE ;
  else {
bool mu__quant176; 
mu__quant176 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr177;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr177) )
  { mu__quant176 = FALSE; break; }
};
};
  mu__boolexpr175 = (mu__quant176) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr174 )
{
mu_link[1].undefine();
mu_link[1].mu_opcode = mu_Empty;
if ( (mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address]) == (mu_Branch) )
{
mu_link1_send ( mu_Grant, mu_toT, mu_src, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address]) == (mu_None) )
{
mu_link1_send ( mu_GrantData, mu_toT, mu_src, mu_i, mu_m.mu_address, mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_data );
}
}
mu_L2[mu_i].mu_directory[mu_src][mu_m.mu_address] = mu_Tip;
mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state = mu_Trunk;
mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address] = mu_GrantAck;
}
else
{
if ( (mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_Branch) )
{
bool mu__boolexpr178;
bool mu__boolexpr179;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr178 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_another, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address] = mu_ProbeAck;
}
}
}
}
else
{
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr180 )
{
mu_link2_send ( mu_AcquirePerm, mu_BtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Grant;
}
else
{
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr183 )
{
mu_link2_send ( mu_AcquireBlock, mu_NtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Grant;
}
}
}
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("receive_ReleaseAck, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
    return (mu_link[4].mu_opcode) == (mu_ReleaseAck);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 45;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 49 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
	      if ((mu_link[4].mu_opcode) == (mu_ReleaseAck)) {
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
    r = what_rule - 45;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
mu_L1[mu_j].mu_pending[mu_link[4].mu_address] = mu_Empty;
mu_link[4].undefine();
mu_link[4].mu_opcode = mu_Empty;
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("respond_Probe, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if ((mu_link[2].mu_opcode) == (mu_ProbePerm)) mu__boolexpr188 = TRUE ;
  else {
  mu__boolexpr188 = ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
bool mu__boolexpr189;
  if ((mu_link[2].mu_para) == (mu_toN)) mu__boolexpr189 = TRUE ;
  else {
  mu__boolexpr189 = ((mu_link[2].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr187 = (mu__boolexpr189) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_L1[mu_j].mu_pending[mu_link[2].mu_address]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr186;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 49;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 53 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
  if ((mu_link[2].mu_opcode) == (mu_ProbePerm)) mu__boolexpr192 = TRUE ;
  else {
  mu__boolexpr192 = ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
bool mu__boolexpr193;
  if ((mu_link[2].mu_para) == (mu_toN)) mu__boolexpr193 = TRUE ;
  else {
  mu__boolexpr193 = ((mu_link[2].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr191 = (mu__boolexpr193) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_L1[mu_j].mu_pending[mu_link[2].mu_address]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr190) {
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
    r = what_rule - 49;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[2];
if ( (mu_m.mu_para) == (mu_toN) )
{
if ( (mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state) == (mu_None) )
{
mu_link1_send ( mu_ProbeAck, mu_NtoN, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch) )
{
mu_link1_send ( mu_ProbeAck, mu_BtoN, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
if ( (mu_m.mu_opcode) == (mu_ProbeBlock) )
{
if ( mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_dirty )
{
mu_link1_send ( mu_ProbeAckData, mu_TtoN, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_data );
}
else
{
mu_link1_send ( mu_ProbeAck, mu_TtoN, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_1_data_type_undefined_var );
}
}
}
}
}
mu_link[2].undefine();
mu_link[2].mu_opcode = mu_Empty;
mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state = mu_None;
}
else
{
if ( (mu_m.mu_para) == (mu_toB) )
{
if ( (mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state) == (mu_None) )
{
mu_link1_send ( mu_ProbeAck, mu_NtoN, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
if ( (mu_m.mu_opcode) == (mu_ProbeBlock) )
{
if ( mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_dirty )
{
mu_link1_send ( mu_ProbeAckData, mu_TtoB, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_data );
}
else
{
mu_link1_send ( mu_ProbeAck, mu_TtoB, mu_m.mu_src, mu_m.mu_sink, mu_m.mu_address, mu_1_data_type_undefined_var );
}
mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state = mu_Branch;
}
}
}
mu_link[2].undefine();
mu_link[2].mu_opcode = mu_Empty;
}
}
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("respond_Grant, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr194;
bool mu__boolexpr195;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr195 = TRUE ;
  else {
  mu__boolexpr195 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
bool mu__boolexpr196;
  if ((mu_link[4].mu_para) == (mu_toB)) mu__boolexpr196 = TRUE ;
  else {
  mu__boolexpr196 = ((mu_link[4].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr194 = (mu__boolexpr196) ; 
}
    return mu__boolexpr194;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 53;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 57 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr197;
bool mu__boolexpr198;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr198 = TRUE ;
  else {
  mu__boolexpr198 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
bool mu__boolexpr199;
  if ((mu_link[4].mu_para) == (mu_toB)) mu__boolexpr199 = TRUE ;
  else {
  mu__boolexpr199 = ((mu_link[4].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr197 = (mu__boolexpr199) ; 
}
	      if (mu__boolexpr197) {
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
    r = what_rule - 53;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

mu_m = mu_link[4];
if ( (mu_m.mu_opcode) == (mu_GrantData) )
{
mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_data = mu_m.mu_data;
}
if ( (mu_m.mu_para) == (mu_toB) )
{
mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state = mu_Branch;
}
else
{
if ( (mu_m.mu_para) == (mu_toT) )
{
mu_L1[mu_j].mu_cache[mu_m.mu_address].mu_state = mu_Tip;
}
}
mu_link[4].undefine();
mu_link[4].mu_opcode = mu_Empty;
mu_L1[mu_j].mu_pending[mu_m.mu_address] = mu_Empty;
mu_link1_send ( mu_GrantAck, mu_1_trans_undefined_var, mu_j, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("send_Release, a:%s, j:%s, i:%s", mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) mu__boolexpr204 = TRUE ;
  else {
  mu__boolexpr204 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_link[3].mu_opcode) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr200;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 57;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 61 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) mu__boolexpr209 = TRUE ;
  else {
  mu__boolexpr209 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_link[3].mu_opcode) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr205) {
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
    r = what_rule - 57;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
if ( (mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch) )
{
mu_link1_send ( mu_Release, mu_BtoN, mu_j, mu_i, mu_a, mu_1_data_type_undefined_var );
}
else
{
if ( (mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip) )
{
if ( !(mu_L1[mu_j].mu_cache[mu_a].mu_dirty) )
{
mu_link1_send ( mu_Release, mu_TtoN, mu_j, mu_i, mu_a, mu_1_data_type_undefined_var );
}
else
{
mu_link1_send ( mu_ReleaseData, mu_TtoN, mu_j, mu_i, mu_a, mu_L1[mu_j].mu_cache[mu_a].mu_data );
mu_L1[mu_j].mu_cache[mu_a].mu_dirty = mu_false;
}
}
}
mu_L1[mu_j].mu_cache[mu_a].mu_state = mu_None;
mu_L1[mu_j].mu_pending[mu_a] = mu_ReleaseAck;
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("send_Acquire_toT, a:%s, j:%s, i:%s", mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) mu__boolexpr213 = TRUE ;
  else {
  mu__boolexpr213 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr210;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 61;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 65 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) mu__boolexpr217 = TRUE ;
  else {
  mu__boolexpr217 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr214) {
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
    r = what_rule - 61;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
if ( (mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None) )
{
mu_link1_send ( mu_AcquireBlock, mu_NtoT, mu_j, mu_i, mu_a, mu_1_data_type_undefined_var );
mu_L1[mu_j].mu_pending[mu_a] = mu_GrantData;
}
else
{
if ( (mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch) )
{
mu_link1_send ( mu_AcquirePerm, mu_BtoT, mu_j, mu_i, mu_a, mu_1_data_type_undefined_var );
mu_L1[mu_j].mu_pending[mu_a] = mu_Grant;
}
}
  };

};
/******************** RuleBase24 ********************/
class RuleBase24
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("send_Acquire_toB, a:%s, j:%s, i:%s", mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr218;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 65;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 69 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
  if (!((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr221) {
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
    r = what_rule - 65;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
  mu_1__type_3& mu_link = mu_L3.mu_L2[mu_i].mu_link1[mu_j];
mu_link1_send ( mu_AcquireBlock, mu_NtoB, mu_j, mu_i, mu_a, mu_1_data_type_undefined_var );
mu_L1[mu_j].mu_pending[mu_a] = mu_GrantData;
  };

};
/******************** RuleBase25 ********************/
class RuleBase25
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 2);
    r = r / 2;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    return tsprintf("store, d:%s, a:%s, j:%s, i:%s", mu_d.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 2);
    r = r / 2;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
    return (mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 69;
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 2);
    r = r / 2;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    while (what_rule < 77 )
      {
	if ( ( TRUE  ) ) {
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
	      if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 2;
	}
	else
	  what_rule += 2;
    r = what_rule - 69;
    mu_d.value((r % 2) + 2);
    r = r / 2;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    mu_i.value((r % 2) + 4);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 2);
    r = r / 2;
    static mu_1_addr mu_a;
    mu_a.value((r % 1) + 1);
    r = r / 1;
    static mu_1_child mu_j;
    mu_j.value((r % 2) + 4);
    r = r / 2;
    static mu_1_child mu_i;
    mu_i.value((r % 2) + 4);
    r = r / 2;
  mu_1__type_2& mu_L1 = mu_L3.mu_L2[mu_i].mu_L1;
mu_L1[mu_j].mu_cache[mu_a].mu_dirty = mu_true;
mu_L1[mu_j].mu_cache[mu_a].mu_data = mu_d;
mu_auxdata[mu_a] = mu_d;
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
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
  RuleBase24 R24;
  RuleBase25 R25;
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
  if (what_rule>=2 && what_rule<3)
    { R2.NextRule(what_rule);
      if (what_rule<3) return; }
  if (what_rule>=3 && what_rule<5)
    { R3.NextRule(what_rule);
      if (what_rule<5) return; }
  if (what_rule>=5 && what_rule<7)
    { R4.NextRule(what_rule);
      if (what_rule<7) return; }
  if (what_rule>=7 && what_rule<9)
    { R5.NextRule(what_rule);
      if (what_rule<9) return; }
  if (what_rule>=9 && what_rule<11)
    { R6.NextRule(what_rule);
      if (what_rule<11) return; }
  if (what_rule>=11 && what_rule<13)
    { R7.NextRule(what_rule);
      if (what_rule<13) return; }
  if (what_rule>=13 && what_rule<15)
    { R8.NextRule(what_rule);
      if (what_rule<15) return; }
  if (what_rule>=15 && what_rule<17)
    { R9.NextRule(what_rule);
      if (what_rule<17) return; }
  if (what_rule>=17 && what_rule<19)
    { R10.NextRule(what_rule);
      if (what_rule<19) return; }
  if (what_rule>=19 && what_rule<21)
    { R11.NextRule(what_rule);
      if (what_rule<21) return; }
  if (what_rule>=21 && what_rule<23)
    { R12.NextRule(what_rule);
      if (what_rule<23) return; }
  if (what_rule>=23 && what_rule<25)
    { R13.NextRule(what_rule);
      if (what_rule<25) return; }
  if (what_rule>=25 && what_rule<29)
    { R14.NextRule(what_rule);
      if (what_rule<29) return; }
  if (what_rule>=29 && what_rule<33)
    { R15.NextRule(what_rule);
      if (what_rule<33) return; }
  if (what_rule>=33 && what_rule<37)
    { R16.NextRule(what_rule);
      if (what_rule<37) return; }
  if (what_rule>=37 && what_rule<41)
    { R17.NextRule(what_rule);
      if (what_rule<41) return; }
  if (what_rule>=41 && what_rule<45)
    { R18.NextRule(what_rule);
      if (what_rule<45) return; }
  if (what_rule>=45 && what_rule<49)
    { R19.NextRule(what_rule);
      if (what_rule<49) return; }
  if (what_rule>=49 && what_rule<53)
    { R20.NextRule(what_rule);
      if (what_rule<53) return; }
  if (what_rule>=53 && what_rule<57)
    { R21.NextRule(what_rule);
      if (what_rule<57) return; }
  if (what_rule>=57 && what_rule<61)
    { R22.NextRule(what_rule);
      if (what_rule<61) return; }
  if (what_rule>=61 && what_rule<65)
    { R23.NextRule(what_rule);
      if (what_rule<65) return; }
  if (what_rule>=65 && what_rule<69)
    { R24.NextRule(what_rule);
      if (what_rule<69) return; }
  if (what_rule>=69 && what_rule<77)
    { R25.NextRule(what_rule);
      if (what_rule<77) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=1) return R1.Condition(r-1);
  if (r>=2 && r<=2) return R2.Condition(r-2);
  if (r>=3 && r<=4) return R3.Condition(r-3);
  if (r>=5 && r<=6) return R4.Condition(r-5);
  if (r>=7 && r<=8) return R5.Condition(r-7);
  if (r>=9 && r<=10) return R6.Condition(r-9);
  if (r>=11 && r<=12) return R7.Condition(r-11);
  if (r>=13 && r<=14) return R8.Condition(r-13);
  if (r>=15 && r<=16) return R9.Condition(r-15);
  if (r>=17 && r<=18) return R10.Condition(r-17);
  if (r>=19 && r<=20) return R11.Condition(r-19);
  if (r>=21 && r<=22) return R12.Condition(r-21);
  if (r>=23 && r<=24) return R13.Condition(r-23);
  if (r>=25 && r<=28) return R14.Condition(r-25);
  if (r>=29 && r<=32) return R15.Condition(r-29);
  if (r>=33 && r<=36) return R16.Condition(r-33);
  if (r>=37 && r<=40) return R17.Condition(r-37);
  if (r>=41 && r<=44) return R18.Condition(r-41);
  if (r>=45 && r<=48) return R19.Condition(r-45);
  if (r>=49 && r<=52) return R20.Condition(r-49);
  if (r>=53 && r<=56) return R21.Condition(r-53);
  if (r>=57 && r<=60) return R22.Condition(r-57);
  if (r>=61 && r<=64) return R23.Condition(r-61);
  if (r>=65 && r<=68) return R24.Condition(r-65);
  if (r>=69 && r<=76) return R25.Condition(r-69);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code(r-1); return; } 
  if (r>=2 && r<=2) { R2.Code(r-2); return; } 
  if (r>=3 && r<=4) { R3.Code(r-3); return; } 
  if (r>=5 && r<=6) { R4.Code(r-5); return; } 
  if (r>=7 && r<=8) { R5.Code(r-7); return; } 
  if (r>=9 && r<=10) { R6.Code(r-9); return; } 
  if (r>=11 && r<=12) { R7.Code(r-11); return; } 
  if (r>=13 && r<=14) { R8.Code(r-13); return; } 
  if (r>=15 && r<=16) { R9.Code(r-15); return; } 
  if (r>=17 && r<=18) { R10.Code(r-17); return; } 
  if (r>=19 && r<=20) { R11.Code(r-19); return; } 
  if (r>=21 && r<=22) { R12.Code(r-21); return; } 
  if (r>=23 && r<=24) { R13.Code(r-23); return; } 
  if (r>=25 && r<=28) { R14.Code(r-25); return; } 
  if (r>=29 && r<=32) { R15.Code(r-29); return; } 
  if (r>=33 && r<=36) { R16.Code(r-33); return; } 
  if (r>=37 && r<=40) { R17.Code(r-37); return; } 
  if (r>=41 && r<=44) { R18.Code(r-41); return; } 
  if (r>=45 && r<=48) { R19.Code(r-45); return; } 
  if (r>=49 && r<=52) { R20.Code(r-49); return; } 
  if (r>=53 && r<=56) { R21.Code(r-53); return; } 
  if (r>=57 && r<=60) { R22.Code(r-57); return; } 
  if (r>=61 && r<=64) { R23.Code(r-61); return; } 
  if (r>=65 && r<=68) { R24.Code(r-65); return; } 
  if (r>=69 && r<=76) { R25.Code(r-69); return; } 
}
int Priority(unsigned short r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=1) { return R1.Priority(); } 
  if (r>=2 && r<=2) { return R2.Priority(); } 
  if (r>=3 && r<=4) { return R3.Priority(); } 
  if (r>=5 && r<=6) { return R4.Priority(); } 
  if (r>=7 && r<=8) { return R5.Priority(); } 
  if (r>=9 && r<=10) { return R6.Priority(); } 
  if (r>=11 && r<=12) { return R7.Priority(); } 
  if (r>=13 && r<=14) { return R8.Priority(); } 
  if (r>=15 && r<=16) { return R9.Priority(); } 
  if (r>=17 && r<=18) { return R10.Priority(); } 
  if (r>=19 && r<=20) { return R11.Priority(); } 
  if (r>=21 && r<=22) { return R12.Priority(); } 
  if (r>=23 && r<=24) { return R13.Priority(); } 
  if (r>=25 && r<=28) { return R14.Priority(); } 
  if (r>=29 && r<=32) { return R15.Priority(); } 
  if (r>=33 && r<=36) { return R16.Priority(); } 
  if (r>=37 && r<=40) { return R17.Priority(); } 
  if (r>=41 && r<=44) { return R18.Priority(); } 
  if (r>=45 && r<=48) { return R19.Priority(); } 
  if (r>=49 && r<=52) { return R20.Priority(); } 
  if (r>=53 && r<=56) { return R21.Priority(); } 
  if (r>=57 && r<=60) { return R22.Priority(); } 
  if (r>=61 && r<=64) { return R23.Priority(); } 
  if (r>=65 && r<=68) { return R24.Priority(); } 
  if (r>=69 && r<=76) { return R25.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=1) return R1.Name(r-1);
  if (r>=2 && r<=2) return R2.Name(r-2);
  if (r>=3 && r<=4) return R3.Name(r-3);
  if (r>=5 && r<=6) return R4.Name(r-5);
  if (r>=7 && r<=8) return R5.Name(r-7);
  if (r>=9 && r<=10) return R6.Name(r-9);
  if (r>=11 && r<=12) return R7.Name(r-11);
  if (r>=13 && r<=14) return R8.Name(r-13);
  if (r>=15 && r<=16) return R9.Name(r-15);
  if (r>=17 && r<=18) return R10.Name(r-17);
  if (r>=19 && r<=20) return R11.Name(r-19);
  if (r>=21 && r<=22) return R12.Name(r-21);
  if (r>=23 && r<=24) return R13.Name(r-23);
  if (r>=25 && r<=28) return R14.Name(r-25);
  if (r>=29 && r<=32) return R15.Name(r-29);
  if (r>=33 && r<=36) return R16.Name(r-33);
  if (r>=37 && r<=40) return R17.Name(r-37);
  if (r>=41 && r<=44) return R18.Name(r-41);
  if (r>=45 && r<=48) return R19.Name(r-45);
  if (r>=49 && r<=52) return R20.Name(r-49);
  if (r>=53 && r<=56) return R21.Name(r-53);
  if (r>=57 && r<=60) return R22.Name(r-57);
  if (r>=61 && r<=64) return R23.Name(r-61);
  if (r>=65 && r<=68) return R24.Name(r-65);
  if (r>=69 && r<=76) return R25.Name(r-69);
  return NULL;
}
};
const unsigned numrules = 77;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 77


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Init");
  }
  void Code(unsigned short r)
  {
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
mu_L3.mu_cache[mu_a].mu_state = mu_None;
mu_L3.mu_cache[mu_a].mu_dirty = mu_false;
mu_L3.mu_cache[mu_a].mu_data.undefine();
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
mu_L3.mu_link2[mu_i].undefine();
{
for(int mu_c = 1; mu_c <= 5; mu_c++) {
mu_L3.mu_link2[mu_i][mu_c].mu_opcode = mu_Empty;
};
};
mu_L3.mu_pending[mu_i][mu_a] = mu_Empty;
mu_L3.mu_directory[mu_i][mu_a] = mu_None;
mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state = mu_None;
mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_dirty = mu_false;
mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_data.undefine();
mu_L3.mu_L2[mu_i].mu_master_pending[mu_a] = mu_Empty;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
mu_L3.mu_L2[mu_i].mu_slave_pending[mu_j][mu_a] = mu_Empty;
mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a] = mu_None;
mu_L3.mu_L2[mu_i].mu_link1[mu_j].undefine();
{
for(int mu_c = 1; mu_c <= 5; mu_c++) {
mu_L3.mu_L2[mu_i].mu_link1[mu_j][mu_c].mu_opcode = mu_Empty;
};
};
mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state = mu_None;
mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_dirty = mu_false;
mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_data.undefine();
mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_pending[mu_a] = mu_Empty;
};
};
};
};
};
};
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
{
for(int mu_d = 2; mu_d <= 3; mu_d++) {
mu_memdata[mu_a] = mu_d;
mu_auxdata[mu_a] = mu_d;
};
};
};
};
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
void Goal_value() {  // makun: set goalstate
    if (goal_value_flag) return;
    goal_value_flag = true;

    // set goalstate value: 
    // set states
mu_L3.mu_cache[1].mu_state.value(mu_Branch);
mu_L3.mu_L2[4].mu_cache[1].mu_state.value(mu_Branch);
mu_L3.mu_L2[4].mu_L1[4].mu_cache[1].mu_state.value(mu_Branch);
mu_L3.mu_L2[4].mu_L1[5].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[5].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[5].mu_L1[4].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[5].mu_L1[5].mu_cache[1].mu_state.value(mu_None);
// set states

    // set carelist about invariant 
    carelist.clear();  
    carelist.push_back("L3.cache[addr_1].state");
    carelist.push_back("L3.L2[child_1].cache[addr_1].state");
    carelist.push_back("L3.L2[child_1].L1[child_1].cache[addr_1].state");
    carelist.push_back("L3.L2[child_1].L1[child_2].cache[addr_1].state");
    carelist.push_back("L3.L2[child_2].cache[addr_1].state");
    carelist.push_back("L3.L2[child_2].L1[child_1].cache[addr_1].state");
    carelist.push_back("L3.L2[child_2].L1[child_2].cache[addr_1].state");

    // set carelist about rulebase 
    carelist_rb.clear();  
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
int mu__invariant_224() // Invariant "trunk_have_t_child_r"
{
bool mu__boolexpr225;
bool mu__quant226; 
mu__quant226 = TRUE;
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr227;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr227 = TRUE ;
  else {
bool mu__quant228; 
mu__quant228 = FALSE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
bool mu__boolexpr229;
  if ((mu_L3.mu_directory[mu_i][mu_a]) == (mu_Trunk)) mu__boolexpr229 = TRUE ;
  else {
  mu__boolexpr229 = ((mu_L3.mu_directory[mu_i][mu_a]) == (mu_Tip)) ; 
}
if ( (mu__boolexpr229) )
  { mu__quant228 = TRUE; break; }
};
};
  mu__boolexpr227 = (mu__quant228) ; 
}
if ( !(mu__boolexpr227) )
  { mu__quant226 = FALSE; break; }
};
};
  if (!(mu__quant226)) mu__boolexpr225 = FALSE ;
  else {
bool mu__quant230; 
mu__quant230 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr231;
  if (!((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr231 = TRUE ;
  else {
bool mu__quant232; 
mu__quant232 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr233;
  if ((mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Trunk)) mu__boolexpr233 = TRUE ;
  else {
  mu__boolexpr233 = ((mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Tip)) ; 
}
if ( (mu__boolexpr233) )
  { mu__quant232 = TRUE; break; }
};
};
  mu__boolexpr231 = (mu__quant232) ; 
}
if ( !(mu__boolexpr231) )
  { mu__quant230 = FALSE; break; }
};
};
};
  mu__boolexpr225 = (mu__quant230) ; 
}
return mu__boolexpr225;
};

bool mu__condition_234() // Condition for Rule "trunk_have_t_child_r"
{
  return mu__invariant_224( );
}

/**** end rule declaration ****/

int mu__invariant_235() // Invariant "branch_not_have_t_child_r"
{
bool mu__boolexpr236;
bool mu__quant237; 
mu__quant237 = TRUE;
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr238;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr238 = TRUE ;
  else {
bool mu__quant239; 
mu__quant239 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
bool mu__boolexpr240;
  if (!((mu_L3.mu_directory[mu_i][mu_a]) != (mu_Tip))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_L3.mu_directory[mu_i][mu_a]) != (mu_Trunk)) ; 
}
if ( !(mu__boolexpr240) )
  { mu__quant239 = FALSE; break; }
};
};
  mu__boolexpr238 = (mu__quant239) ; 
}
if ( !(mu__boolexpr238) )
  { mu__quant237 = FALSE; break; }
};
};
  if (!(mu__quant237)) mu__boolexpr236 = FALSE ;
  else {
bool mu__quant241; 
mu__quant241 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr242;
  if (!((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr242 = TRUE ;
  else {
bool mu__quant243; 
mu__quant243 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr244;
  if (!((mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a]) != (mu_Tip))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a]) != (mu_Trunk)) ; 
}
if ( !(mu__boolexpr244) )
  { mu__quant243 = FALSE; break; }
};
};
  mu__boolexpr242 = (mu__quant243) ; 
}
if ( !(mu__boolexpr242) )
  { mu__quant241 = FALSE; break; }
};
};
};
  mu__boolexpr236 = (mu__quant241) ; 
}
return mu__boolexpr236;
};

bool mu__condition_245() // Condition for Rule "branch_not_have_t_child_r"
{
  return mu__invariant_235( );
}

/**** end rule declaration ****/

int mu__invariant_246() // Invariant "trunk_not_have_branch_child_r"
{
bool mu__boolexpr247;
bool mu__quant248; 
mu__quant248 = TRUE;
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr249;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr249 = TRUE ;
  else {
bool mu__quant250; 
mu__quant250 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
if ( !((mu_L3.mu_directory[mu_i][mu_a]) != (mu_Branch)) )
  { mu__quant250 = FALSE; break; }
};
};
  mu__boolexpr249 = (mu__quant250) ; 
}
if ( !(mu__boolexpr249) )
  { mu__quant248 = FALSE; break; }
};
};
  if (!(mu__quant248)) mu__boolexpr247 = FALSE ;
  else {
bool mu__quant251; 
mu__quant251 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr252;
  if (!((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr252 = TRUE ;
  else {
bool mu__quant253; 
mu__quant253 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a]) != (mu_Branch)) )
  { mu__quant253 = FALSE; break; }
};
};
  mu__boolexpr252 = (mu__quant253) ; 
}
if ( !(mu__boolexpr252) )
  { mu__quant251 = FALSE; break; }
};
};
};
  mu__boolexpr247 = (mu__quant251) ; 
}
return mu__boolexpr247;
};

bool mu__condition_254() // Condition for Rule "trunk_not_have_branch_child_r"
{
  return mu__invariant_246( );
}

/**** end rule declaration ****/

int mu__invariant_255() // Invariant "invalid_not_have_valid_child_r"
{
bool mu__boolexpr256;
bool mu__quant257; 
mu__quant257 = TRUE;
{
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr258;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr258 = TRUE ;
  else {
bool mu__quant259; 
mu__quant259 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
if ( !((mu_L3.mu_directory[mu_i][mu_a]) == (mu_None)) )
  { mu__quant259 = FALSE; break; }
};
};
  mu__boolexpr258 = (mu__quant259) ; 
}
if ( !(mu__boolexpr258) )
  { mu__quant257 = FALSE; break; }
};
};
  if (!(mu__quant257)) mu__boolexpr256 = FALSE ;
  else {
bool mu__quant260; 
mu__quant260 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr261;
  if (!((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr261 = TRUE ;
  else {
bool mu__quant262; 
mu__quant262 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L3.mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant262 = FALSE; break; }
};
};
  mu__boolexpr261 = (mu__quant262) ; 
}
if ( !(mu__boolexpr261) )
  { mu__quant260 = FALSE; break; }
};
};
};
  mu__boolexpr256 = (mu__quant260) ; 
}
return mu__boolexpr256;
};

bool mu__condition_263() // Condition for Rule "invalid_not_have_valid_child_r"
{
  return mu__invariant_255( );
}

/**** end rule declaration ****/

int mu__invariant_264() // Invariant "leaf_is_not_trunk"
{
bool mu__quant265; 
mu__quant265 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
if ( !((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) != (mu_Trunk)) )
  { mu__quant265 = FALSE; break; }
};
};
};
};
return mu__quant265;
};

bool mu__condition_266() // Condition for Rule "leaf_is_not_trunk"
{
  return mu__invariant_264( );
}

/**** end rule declaration ****/

int mu__invariant_267() // Invariant "global_filter"
{
return mu_state_collect(  );
};

bool mu__condition_268() // Condition for Rule "global_filter"
{
  return mu__invariant_267( );
}

/**** end rule declaration ****/

int mu__invariant_269() // Invariant "newest"
{
bool mu__quant270; 
mu__quant270 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr271;
bool mu__boolexpr272;
  if ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr272 = TRUE ;
  else {
  mu__boolexpr272 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = TRUE ;
  else {
bool mu__boolexpr273;
  if (!(!(mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_data.isundefined()))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_data) == (mu_auxdata[mu_a])) ; 
}
  mu__boolexpr271 = (mu__boolexpr273) ; 
}
if ( !(mu__boolexpr271) )
  { mu__quant270 = FALSE; break; }
};
};
};
};
return mu__quant270;
};

bool mu__condition_274() // Condition for Rule "newest"
{
  return mu__invariant_269( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"newest", &mu__condition_274, NULL, },
{"global_filter", &mu__condition_268, NULL, },
{"leaf_is_not_trunk", &mu__condition_266, NULL, },
{"invalid_not_have_valid_child_r", &mu__condition_263, NULL, },
{"trunk_not_have_branch_child_r", &mu__condition_254, NULL, },
{"branch_not_have_t_child_r", &mu__condition_245, NULL, },
{"trunk_have_t_child_r", &mu__condition_234, NULL, },
};
const unsigned short numinvariants = 7;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
memdata:ScalarsetVariable
auxdata:ScalarsetVariable
L3:Complex
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
  int class_mu_1_child[2];
  int undefined_class_mu_1_child;// has the highest class number

  void Print_class_mu_1_child();
  bool OnlyOneRemain_mu_1_child;
  bool MTO_class_mu_1_child()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_child)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_child[i]== class_mu_1_child[j])
	    return TRUE;
    OnlyOneRemain_mu_1_child = TRUE;
    return FALSE;
  }
  int class_mu_1_data_type[2];
  int undefined_class_mu_1_data_type;// has the highest class number

  void Print_class_mu_1_data_type();
  bool OnlyOneRemain_mu_1_data_type;
  bool MTO_class_mu_1_data_type()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_data_type)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_data_type[i]== class_mu_1_data_type[j])
	    return TRUE;
    OnlyOneRemain_mu_1_data_type = TRUE;
    return FALSE;
  }
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
  int * in_mu_1_child;
  typedef int arr_mu_1_child[2];
  arr_mu_1_child * perm_mu_1_child;
  arr_mu_1_child * revperm_mu_1_child;

  int size_mu_1_child[2];
  bool reversed_sorted_mu_1_child(int start, int end);
  void reverse_reversed_mu_1_child(int start, int end);

  int * in_mu_1_data_type;
  typedef int arr_mu_1_data_type[2];
  arr_mu_1_data_type * perm_mu_1_data_type;
  arr_mu_1_data_type * revperm_mu_1_data_type;

  int size_mu_1_data_type[2];
  bool reversed_sorted_mu_1_data_type(int start, int end);
  void reverse_reversed_mu_1_data_type(int start, int end);

  // procedure for explicit representation
  bool ok0(mu_1_child* perm, int size, mu_1_child k);
  void GenPerm0(mu_1_child* perm, int size, unsigned long& index);

  bool ok1(mu_1_data_type* perm, int size, mu_1_data_type k);
  void GenPerm1(mu_1_data_type* perm, int size, unsigned long& index);

  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
void PermSet::Print_class_mu_1_child()
{
  cout << "class_mu_1_child:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_child[i];
  cout << " " << undefined_class_mu_1_child << "\n";
}
void PermSet::Print_class_mu_1_data_type()
{
  cout << "class_mu_1_data_type:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_data_type[i];
  cout << " " << undefined_class_mu_1_data_type << "\n";
}
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_child[i]== class_mu_1_child[j])
	    return TRUE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_data_type[i]== class_mu_1_data_type[j])
	    return TRUE;
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
     || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
    mu_1_child Perm0[2];
    mu_1_data_type Perm1[2];

  /********************
   declaration of class variables
  ********************/
  in = new bool[4];
 in_mu_1_child = new int[4];
 perm_mu_1_child = new arr_mu_1_child[2];
 revperm_mu_1_child = new arr_mu_1_child[2];
 in_mu_1_data_type = new int[4];
 perm_mu_1_data_type = new arr_mu_1_data_type[2];
 revperm_mu_1_data_type = new arr_mu_1_data_type[2];

    // Set perm and revperm
    count = 0;
    for (i=4; i<=5; i++)
      {
        Perm0[0].value(i);
        GenPerm0(Perm0, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=4; j<=5; j++)
        for (k=4; k<=5; k++)
          if (revperm_mu_1_child[i][k-4]==j)   // k - base 
            perm_mu_1_child[i][j-4]=k; // j - base 
    count = 0;
    for (i=2; i<=3; i++)
      {
        Perm1[0].value(i);
        GenPerm1(Perm1, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=2; j<=3; j++)
        for (k=2; k<=3; k++)
          if (revperm_mu_1_data_type[i][k-2]==j)   // k - base 
            perm_mu_1_data_type[i][j-2]=k; // j - base 

    // setting up combination of permutations
    // for different scalarset
    int carry;
    int i_mu_1_child = 0;
    int i_mu_1_data_type = 0;
    size = 4;
    count = 4;
    for (i=0; i<4; i++)
      {
        carry = 1;
        in[i]= TRUE;
      in_mu_1_child[i] = i_mu_1_child;
      i_mu_1_child += carry;
      if (i_mu_1_child >= 2) { i_mu_1_child = 0; carry = 1; } 
      else { carry = 0; } 
      in_mu_1_data_type[i] = i_mu_1_data_type;
      i_mu_1_data_type += carry;
      if (i_mu_1_data_type >= 2) { i_mu_1_data_type = 0; carry = 1; } 
      else { carry = 0; } 
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
 in_mu_1_child = new int[1];
 perm_mu_1_child = new arr_mu_1_child[1];
 revperm_mu_1_child = new arr_mu_1_child[1];
 in_mu_1_data_type = new int[1];
 perm_mu_1_data_type = new arr_mu_1_data_type[1];
 revperm_mu_1_data_type = new arr_mu_1_data_type[1];
  in[0] = TRUE;
    in_mu_1_child[0] = 0;
    in_mu_1_data_type[0] = 0;
  }
}
void PermSet::ResetToSimple()
{
  int i;
  for (i=0; i<2; i++)
    class_mu_1_child[i]=0;
  undefined_class_mu_1_child=0;
  OnlyOneRemain_mu_1_child = FALSE;
  for (i=0; i<2; i++)
    class_mu_1_data_type[i]=0;
  undefined_class_mu_1_data_type=0;
  OnlyOneRemain_mu_1_data_type = FALSE;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<4; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;
  int start_mu_1_child[2];
  int size_mu_1_child[2];
  bool should_be_in_mu_1_child[2];
  int start_mu_1_data_type[2];
  int size_mu_1_data_type[2];
  bool should_be_in_mu_1_data_type[2];

  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_child; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_child[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_child[k]==j)
	  {
	    size_mu_1_child[k] = class_size;
	    start_mu_1_child[k] = start;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_data_type; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_data_type[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_data_type[k]==j)
	  {
	    size_mu_1_data_type[k] = class_size;
	    start_mu_1_data_type[k] = start;
	  }
      start+=class_size;
    }

  // To be In or not to be
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_child[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_child[i][k]-4 >=start_mu_1_child[k] 
	     && perm_mu_1_child[i][k]-4 < start_mu_1_child[k] + size_mu_1_child[k]) )
  	    {
	      should_be_in_mu_1_child[i] = FALSE;
	      break;
	    }
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_data_type[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_data_type[i][k]-2 >=start_mu_1_data_type[k] 
	     && perm_mu_1_data_type[i][k]-2 < start_mu_1_data_type[k] + size_mu_1_data_type[k]) )
  	    {
	      should_be_in_mu_1_data_type[i] = FALSE;
	      break;
	    }

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<4; i++)
    {
      in[i] = TRUE;
      if (in[i] && !should_be_in_mu_1_child[in_mu_1_child[i]]) in[i] = FALSE;
      if (in[i] && !should_be_in_mu_1_data_type[in_mu_1_data_type[i]]) in[i] = FALSE;
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
  start = 0;
  for (j=0; j<=undefined_class_mu_1_child; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_child[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_child[k]==j)
	  {
	    size_mu_1_child[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_data_type; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_data_type[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_data_type[k]==j)
	  {
	    size_mu_1_data_type[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_child; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_child[k]==j)
	      revperm_mu_1_child[0][start++] = k+4;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_child[0][k]==j+4)
        perm_mu_1_child[0][j]=k+4;
  start = 0;
  for (j=0; j<=undefined_class_mu_1_data_type; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_data_type[k]==j)
	      revperm_mu_1_data_type[0][start++] = k+2;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_data_type[0][k]==j+2)
        perm_mu_1_data_type[0][j]=k+2;
  Presentation = Explicit;
}
bool PermSet::ok0(mu_1_child* Perm, int size, mu_1_child k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm0(mu_1_child* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=4; i<=5; i++)
        if(ok0(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm0(Perm, size+1, count);
          }
    }
  else
    {
      for (i=4; i<=5; i++)
        revperm_mu_1_child[count][i-4]=Perm[i-4].value();// i - base
      count++;
    }
}
bool PermSet::ok1(mu_1_data_type* Perm, int size, mu_1_data_type k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm1(mu_1_data_type* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=2; i<=3; i++)
        if(ok1(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm1(Perm, size+1, count);
          }
    }
  else
    {
      for (i=2; i<=3; i++)
        revperm_mu_1_data_type[count][i-2]=Perm[i-2].value();// i - base
      count++;
    }
}
bool PermSet::reversed_sorted_mu_1_child(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_child[0][i]<revperm_mu_1_child[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_child(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_child[0][j];
      revperm_mu_1_child[0][j] = revperm_mu_1_child[0][i];
      revperm_mu_1_child[0][i] = temp;
    }
}
bool PermSet::reversed_sorted_mu_1_data_type(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_data_type[0][i]<revperm_mu_1_data_type[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_data_type(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_data_type[0][j];
      revperm_mu_1_data_type[0][j] = revperm_mu_1_data_type[0][i];
      revperm_mu_1_data_type[0][i] = temp;
    }
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
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_child[revperm_mu_1_child[0][start]-4];
      if (reversed_sorted_mu_1_child(start,end))
	       {
	  reverse_reversed_mu_1_child(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_child(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_child[0][j]<revperm_mu_1_child[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_child[0][j];
			  revperm_mu_1_child[0][j] = revperm_mu_1_child[0][k];
			  revperm_mu_1_child[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_child(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
if (!nexted) {
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_data_type[revperm_mu_1_data_type[0][start]-2];
      if (reversed_sorted_mu_1_data_type(start,end))
	       {
	  reverse_reversed_mu_1_data_type(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_data_type(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_data_type[0][j]<revperm_mu_1_data_type[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_data_type[0][j];
			  revperm_mu_1_data_type[0][j] = revperm_mu_1_data_type[0][k];
			  revperm_mu_1_data_type[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_data_type(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
}
if (!nexted) return FALSE;
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_child[0][k]==j+4)   // k - base 
	perm_mu_1_child[0][j]=k+4; // j - base 
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_data_type[0][k]==j+2)   // k - base 
	perm_mu_1_data_type[0][j]=k+2; // j - base 
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
        mu_memdata.MultisetSort();
        mu_auxdata.MultisetSort();
        mu_L3.MultisetSort();
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
void mu_1_addr::Permute(PermSet& Perm, int i) {}
void mu_1_addr::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_addr::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_addr::SimpleLimit(PermSet& Perm) {}
void mu_1_addr::ArrayLimit(PermSet& Perm) {}
void mu_1_addr::Limit(PermSet& Perm) {}
void mu_1_addr::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_data_type::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_data_type[Perm.in_mu_1_data_type[i]][value()-2]); // value - base
};
void mu_1_data_type::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_data_type[value()-2]==Perm.undefined_class_mu_1_data_type) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_data_type[i] == Perm.undefined_class_mu_1_data_type && i!=value()-2)
            Perm.class_mu_1_data_type[i]++;
        value(2 + Perm.undefined_class_mu_1_data_type++);
      }
    else 
      {
        value(Perm.class_mu_1_data_type[value()-2]+2);
      }
}
void mu_1_data_type::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_data_type::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_data_type[value()-2]==Perm.undefined_class_mu_1_data_type) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_data_type[i] == Perm.undefined_class_mu_1_data_type && i!=value()-2)
            Perm.class_mu_1_data_type[i]++;
        Perm.undefined_class_mu_1_data_type++;
      }
}
void mu_1_data_type::ArrayLimit(PermSet& Perm) {}
void mu_1_data_type::Limit(PermSet& Perm) {}
void mu_1_data_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_chan::Permute(PermSet& Perm, int i) {};
void mu_1_chan::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chan::Canonicalize(PermSet& Perm) {};
void mu_1_chan::SimpleLimit(PermSet& Perm) {};
void mu_1_chan::ArrayLimit(PermSet& Perm) {};
void mu_1_chan::Limit(PermSet& Perm) {};
void mu_1_chan::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_child::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_child[Perm.in_mu_1_child[i]][value()-4]); // value - base
};
void mu_1_child::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_child[value()-4]==Perm.undefined_class_mu_1_child) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_child[i] == Perm.undefined_class_mu_1_child && i!=value()-4)
            Perm.class_mu_1_child[i]++;
        value(4 + Perm.undefined_class_mu_1_child++);
      }
    else 
      {
        value(Perm.class_mu_1_child[value()-4]+4);
      }
}
void mu_1_child::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_child::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_child[value()-4]==Perm.undefined_class_mu_1_child) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_child[i] == Perm.undefined_class_mu_1_child && i!=value()-4)
            Perm.class_mu_1_child[i]++;
        Perm.undefined_class_mu_1_child++;
      }
}
void mu_1_child::ArrayLimit(PermSet& Perm) {}
void mu_1_child::Limit(PermSet& Perm) {}
void mu_1_child::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_cache_state::Permute(PermSet& Perm, int i) {};
void mu_1_cache_state::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cache_state::Canonicalize(PermSet& Perm) {};
void mu_1_cache_state::SimpleLimit(PermSet& Perm) {};
void mu_1_cache_state::ArrayLimit(PermSet& Perm) {};
void mu_1_cache_state::Limit(PermSet& Perm) {};
void mu_1_cache_state::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_op_type::Permute(PermSet& Perm, int i) {};
void mu_1_op_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_op_type::Canonicalize(PermSet& Perm) {};
void mu_1_op_type::SimpleLimit(PermSet& Perm) {};
void mu_1_op_type::ArrayLimit(PermSet& Perm) {};
void mu_1_op_type::Limit(PermSet& Perm) {};
void mu_1_op_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_trans::Permute(PermSet& Perm, int i) {};
void mu_1_trans::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_trans::Canonicalize(PermSet& Perm) {};
void mu_1_trans::SimpleLimit(PermSet& Perm) {};
void mu_1_trans::ArrayLimit(PermSet& Perm) {};
void mu_1_trans::Limit(PermSet& Perm) {};
void mu_1_trans::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_msg_type::Permute(PermSet& Perm, int i)
{
  mu_src.Permute(Perm,i);
  mu_sink.Permute(Perm,i);
  mu_data.Permute(Perm,i);
};
void mu_1_msg_type::SimpleCanonicalize(PermSet& Perm)
{
  mu_src.SimpleCanonicalize(Perm);
  mu_sink.SimpleCanonicalize(Perm);
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_msg_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_msg_type::SimpleLimit(PermSet& Perm)
{
  mu_src.SimpleLimit(Perm);
  mu_sink.SimpleLimit(Perm);
  mu_data.SimpleLimit(Perm);
};
void mu_1_msg_type::ArrayLimit(PermSet& Perm){}
void mu_1_msg_type::Limit(PermSet& Perm)
{
};
void mu_1_msg_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1_cache_record::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_cache_record::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_cache_record::Canonicalize(PermSet& Perm)
{
};
void mu_1_cache_record::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_cache_record::ArrayLimit(PermSet& Perm){}
void mu_1_cache_record::Limit(PermSet& Perm)
{
};
void mu_1_cache_record::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<1; j++)
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
void mu_1_L1_cache::Permute(PermSet& Perm, int i)
{
  mu_cache.Permute(Perm,i);
};
void mu_1_L1_cache::SimpleCanonicalize(PermSet& Perm)
{
  mu_cache.SimpleCanonicalize(Perm);
};
void mu_1_L1_cache::Canonicalize(PermSet& Perm)
{
};
void mu_1_L1_cache::SimpleLimit(PermSet& Perm)
{
  mu_cache.SimpleLimit(Perm);
};
void mu_1_L1_cache::ArrayLimit(PermSet& Perm){}
void mu_1_L1_cache::Limit(PermSet& Perm)
{
};
void mu_1_L1_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1_L1_cache value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_2::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_L1_cache value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_child, oldcount_mu_1_child;
  bool pos_mu_1_child[2][2];
  bool goodset_mu_1_child[2];
  int count_mu_1_data_type, oldcount_mu_1_data_type;
  bool pos_mu_1_data_type[2][2];
  bool goodset_mu_1_data_type[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_child[i][j]=FALSE;
  count_mu_1_child = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_child[i] == count_mu_1_child)
         {
           pos_mu_1_child[count_mu_1_child][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_child++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_data_type[i][j]=FALSE;
  count_mu_1_data_type = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_data_type[i] == count_mu_1_data_type)
         {
           pos_mu_1_data_type[count_mu_1_data_type][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_data_type++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_child() && count_mu_1_child<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2);
  while ( while_guard )
    {
      oldcount_mu_1_child = count_mu_1_child;
      oldcount_mu_1_data_type = count_mu_1_data_type;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
           || ( Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+4].mu_cache[mu_addr_1].mu_data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_child; i++) // scan through array index priority
                for (j=0; j<count_mu_1_data_type; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_child[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_data_type[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_child[i][k] 
                          && !(*this)[k+4].mu_cache[mu_addr_1].mu_data.isundefined()
                          && pos_mu_1_data_type[j][(*this)[k+4].mu_cache[mu_addr_1].mu_data-2])
                        {
                          exists = TRUE;
                          goodset_mu_1_child[k] = TRUE;
                          goodset_mu_1_data_type[(*this)[k+4].mu_cache[mu_addr_1].mu_data-2] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_child; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_child[z][k] = pos_mu_1_child[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                  pos_mu_1_child[i][k] = FALSE;
                                if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                  pos_mu_1_child[i+1][k] = FALSE;
                              }
                            count_mu_1_child++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_data_type; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_data_type[z][k] = pos_mu_1_data_type[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j][k] = FALSE;
                                if (pos_mu_1_data_type[j+1][k] && goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j+1][k] = FALSE;
                              }
                            count_mu_1_data_type++;
                          }
                      }
                  }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_child!=count_mu_1_child);
      while_guard = while_guard || (oldcount_mu_1_data_type!=count_mu_1_data_type);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_child<2;
      while_guard = while_guard || count_mu_1_data_type<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_child[i][j])
            Perm.class_mu_1_child[j] = i;
      Perm.undefined_class_mu_1_child=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_child[j]>Perm.undefined_class_mu_1_child)
          Perm.undefined_class_mu_1_child=Perm.class_mu_1_child[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_data_type())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_data_type[i][j])
            Perm.class_mu_1_data_type[j] = i;
      Perm.undefined_class_mu_1_data_type=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_data_type[j]>Perm.undefined_class_mu_1_data_type)
          Perm.undefined_class_mu_1_data_type=Perm.class_mu_1_data_type[j];
    }
}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<5; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<5; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<5; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_3 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_4::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1__type_3 value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_data_type, oldcount_mu_1_data_type;
  bool pos_mu_1_data_type[2][2];
  bool goodset_mu_1_data_type[2];
  int count_mu_1_child, oldcount_mu_1_child;
  bool pos_mu_1_child[2][2];
  bool goodset_mu_1_child[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_data_type[i][j]=FALSE;
  count_mu_1_data_type = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_data_type[i] == count_mu_1_data_type)
         {
           pos_mu_1_data_type[count_mu_1_data_type][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_data_type++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_child[i][j]=FALSE;
  count_mu_1_child = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_child[i] == count_mu_1_child)
         {
           pos_mu_1_child[count_mu_1_child][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_child++;
      else break;
    }
  // loop through elements of a array indexed by subrange
  for (i0 = 1; i0 <= 5; i0++)
  {

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+4][i0].mu_src.isundefined()
            ||(*this)[k+4][i0].mu_src!=k+4)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] 
                    && !(*this)[k+4][i0].mu_src.isundefined()
                    && (*this)[k+4][i0].mu_src==k+4)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_child; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                            pos_mu_1_child[i][k] = FALSE;
                          if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                            pos_mu_1_child[i+1][k] = FALSE;
                        }
                      count_mu_1_child++; i++;
                    }
                }
            }
        }
    }

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+4][i0].mu_sink.isundefined()
            ||(*this)[k+4][i0].mu_sink!=k+4)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] 
                    && !(*this)[k+4][i0].mu_sink.isundefined()
                    && (*this)[k+4][i0].mu_sink==k+4)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_child; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                            pos_mu_1_child[i][k] = FALSE;
                          if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                            pos_mu_1_child[i+1][k] = FALSE;
                        }
                      count_mu_1_child++; i++;
                    }
                }
            }
        }
    }
  }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_child() && count_mu_1_child<2);
  while ( while_guard )
    {
      oldcount_mu_1_data_type = count_mu_1_data_type;
      oldcount_mu_1_child = count_mu_1_child;
  // loop through elements of a array indexed by subrange
  for (i0 = 1; i0 <= 5; i0++)
  {

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
        {
          exists = FALSE;
          split = FALSE;
          // if there exists non-self/undefine loop
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+4][i0].mu_src.isundefined()
                &&(*this)[k+4][i0].mu_src!=k+4)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_child; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_child; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_child[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_child[i][k] 
                            && !(*this)[k+4][i0].mu_src.isundefined()
                            && (*this)[k+4][i0].mu_src!=k+4
                            && pos_mu_1_child[j][(*this)[k+4][i0].mu_src-4])
                          {
                            exists = TRUE;
                            goodset_mu_1_child[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_child; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                    pos_mu_1_child[i][k] = FALSE;
                                  if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                    pos_mu_1_child[i+1][k] = FALSE;                  
                                }
                              count_mu_1_child++;
                            }
                        }
                    }
                }
            }
        }

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
        {
          exists = FALSE;
          split = FALSE;
          // if there exists non-self/undefine loop
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+4][i0].mu_sink.isundefined()
                &&(*this)[k+4][i0].mu_sink!=k+4)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_child; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_child; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_child[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_child[i][k] 
                            && !(*this)[k+4][i0].mu_sink.isundefined()
                            && (*this)[k+4][i0].mu_sink!=k+4
                            && pos_mu_1_child[j][(*this)[k+4][i0].mu_sink-4])
                          {
                            exists = TRUE;
                            goodset_mu_1_child[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_child; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                    pos_mu_1_child[i][k] = FALSE;
                                  if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                    pos_mu_1_child[i+1][k] = FALSE;                  
                                }
                              count_mu_1_child++;
                            }
                        }
                    }
                }
            }
        }
  }
  // loop through elements of a array indexed by subrange
  for (i0 = 1; i0 <= 5; i0++)
  {

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
           || ( Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+4][i0].mu_data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_child; i++) // scan through array index priority
                for (j=0; j<count_mu_1_data_type; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_child[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_data_type[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_child[i][k] 
                          && !(*this)[k+4][i0].mu_data.isundefined()
                          && pos_mu_1_data_type[j][(*this)[k+4][i0].mu_data-2])
                        {
                          exists = TRUE;
                          goodset_mu_1_child[k] = TRUE;
                          goodset_mu_1_data_type[(*this)[k+4][i0].mu_data-2] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_child; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_child[z][k] = pos_mu_1_child[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                  pos_mu_1_child[i][k] = FALSE;
                                if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                  pos_mu_1_child[i+1][k] = FALSE;
                              }
                            count_mu_1_child++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_data_type; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_data_type[z][k] = pos_mu_1_data_type[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j][k] = FALSE;
                                if (pos_mu_1_data_type[j+1][k] && goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j+1][k] = FALSE;
                              }
                            count_mu_1_data_type++;
                          }
                      }
                  }
            }
        }
  }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_data_type!=count_mu_1_data_type);
      while_guard = while_guard || (oldcount_mu_1_child!=count_mu_1_child);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_data_type<2;
      while_guard = while_guard || count_mu_1_child<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_data_type())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_data_type[i][j])
            Perm.class_mu_1_data_type[j] = i;
      Perm.undefined_class_mu_1_data_type=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_data_type[j]>Perm.undefined_class_mu_1_data_type)
          Perm.undefined_class_mu_1_data_type=Perm.class_mu_1_data_type[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_child[i][j])
            Perm.class_mu_1_child[j] = i;
      Perm.undefined_class_mu_1_child=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_child[j]>Perm.undefined_class_mu_1_child)
          Perm.undefined_class_mu_1_child=Perm.class_mu_1_child[j];
    }
}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_6 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_child[2];
  int start_mu_1_child[2];
  // canonicalization
  static mu_1__type_7 temp;
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_child())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_child; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              {
                size_mu_1_child[k] = class_size;
                start_mu_1_child[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_child[j] 
             && i < start_mu_1_child[j] + size_mu_1_child[j])
           {
             array[i+0] = temp[j+4];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_child[j]+0] = temp[j+4];
    }
}
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_6 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_9 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_child[2];
  int start_mu_1_child[2];
  // canonicalization
  static mu_1__type_10 temp;
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_child())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_child; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              {
                size_mu_1_child[k] = class_size;
                start_mu_1_child[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_child[j] 
             && i < start_mu_1_child[j] + size_mu_1_child[j])
           {
             array[i+0] = temp[j+4];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_child[j]+0] = temp[j+4];
    }
}
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_9 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_L2_cache::Permute(PermSet& Perm, int i)
{
  mu_L1.Permute(Perm,i);
  mu_link1.Permute(Perm,i);
  mu_cache.Permute(Perm,i);
  mu_slave_pending.Permute(Perm,i);
  mu_directory.Permute(Perm,i);
};
void mu_1_L2_cache::SimpleCanonicalize(PermSet& Perm)
{
  mu_cache.SimpleCanonicalize(Perm);
};
void mu_1_L2_cache::Canonicalize(PermSet& Perm)
{
  mu_slave_pending.Canonicalize(Perm);
  mu_directory.Canonicalize(Perm);
};
void mu_1_L2_cache::SimpleLimit(PermSet& Perm)
{
  mu_cache.SimpleLimit(Perm);
};
void mu_1_L2_cache::ArrayLimit(PermSet& Perm)
{
  mu_L1.ArrayLimit(Perm);
  mu_link1.ArrayLimit(Perm);
  mu_slave_pending.ArrayLimit(Perm);
  mu_directory.ArrayLimit(Perm);
};
void mu_1_L2_cache::Limit(PermSet& Perm)
{
  mu_L1.Limit(Perm);
  mu_link1.Limit(Perm);
};
void mu_1_L2_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1_L2_cache value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_11::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_L2_cache value[2];
  // limit
  bool exists;
  bool split;
  int i0,i1;
  int count_mu_1_child, oldcount_mu_1_child;
  bool pos_mu_1_child[2][2];
  bool goodset_mu_1_child[2];
  int count_mu_1_data_type, oldcount_mu_1_data_type;
  bool pos_mu_1_data_type[2][2];
  bool goodset_mu_1_data_type[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_child[i][j]=FALSE;
  count_mu_1_child = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_child[i] == count_mu_1_child)
         {
           pos_mu_1_child[count_mu_1_child][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_child++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_data_type[i][j]=FALSE;
  count_mu_1_data_type = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_data_type[i] == count_mu_1_data_type)
         {
           pos_mu_1_data_type[count_mu_1_data_type][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_data_type++;
      else break;
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_child() && count_mu_1_child<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2);
  while ( while_guard )
    {
      oldcount_mu_1_child = count_mu_1_child;
      oldcount_mu_1_data_type = count_mu_1_data_type;

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
           || ( Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+4].mu_cache[mu_addr_1].mu_data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_child; i++) // scan through array index priority
                for (j=0; j<count_mu_1_data_type; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_child[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_data_type[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_child[i][k] 
                          && !(*this)[k+4].mu_cache[mu_addr_1].mu_data.isundefined()
                          && pos_mu_1_data_type[j][(*this)[k+4].mu_cache[mu_addr_1].mu_data-2])
                        {
                          exists = TRUE;
                          goodset_mu_1_child[k] = TRUE;
                          goodset_mu_1_data_type[(*this)[k+4].mu_cache[mu_addr_1].mu_data-2] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_child; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_child[z][k] = pos_mu_1_child[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                  pos_mu_1_child[i][k] = FALSE;
                                if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                  pos_mu_1_child[i+1][k] = FALSE;
                              }
                            count_mu_1_child++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_data_type; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_data_type[z][k] = pos_mu_1_data_type[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j][k] = FALSE;
                                if (pos_mu_1_data_type[j+1][k] && goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j+1][k] = FALSE;
                              }
                            count_mu_1_data_type++;
                          }
                      }
                  }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_child!=count_mu_1_child);
      while_guard = while_guard || (oldcount_mu_1_data_type!=count_mu_1_data_type);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_child<2;
      while_guard = while_guard || count_mu_1_data_type<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_child[i][j])
            Perm.class_mu_1_child[j] = i;
      Perm.undefined_class_mu_1_child=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_child[j]>Perm.undefined_class_mu_1_child)
          Perm.undefined_class_mu_1_child=Perm.class_mu_1_child[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_data_type())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_data_type[i][j])
            Perm.class_mu_1_data_type[j] = i;
      Perm.undefined_class_mu_1_data_type=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_data_type[j]>Perm.undefined_class_mu_1_data_type)
          Perm.undefined_class_mu_1_data_type=Perm.class_mu_1_data_type[j];
    }
}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<5; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<5; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<5; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_12::ArrayLimit(PermSet& Perm) {}
void mu_1__type_12::Limit(PermSet& Perm){}
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_13::Permute(PermSet& Perm, int i)
{
  static mu_1__type_13 temp("Permute_mu_1__type_13",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm){}
void mu_1__type_13::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_12 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_13::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1__type_12 value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_data_type, oldcount_mu_1_data_type;
  bool pos_mu_1_data_type[2][2];
  bool goodset_mu_1_data_type[2];
  int count_mu_1_child, oldcount_mu_1_child;
  bool pos_mu_1_child[2][2];
  bool goodset_mu_1_child[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_data_type[i][j]=FALSE;
  count_mu_1_data_type = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_data_type[i] == count_mu_1_data_type)
         {
           pos_mu_1_data_type[count_mu_1_data_type][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_data_type++;
      else break;
    }
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_child[i][j]=FALSE;
  count_mu_1_child = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_child[i] == count_mu_1_child)
         {
           pos_mu_1_child[count_mu_1_child][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_child++;
      else break;
    }
  // loop through elements of a array indexed by subrange
  for (i0 = 1; i0 <= 5; i0++)
  {

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+4][i0].mu_src.isundefined()
            ||(*this)[k+4][i0].mu_src!=k+4)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] 
                    && !(*this)[k+4][i0].mu_src.isundefined()
                    && (*this)[k+4][i0].mu_src==k+4)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_child; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                            pos_mu_1_child[i][k] = FALSE;
                          if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                            pos_mu_1_child[i+1][k] = FALSE;
                        }
                      count_mu_1_child++; i++;
                    }
                }
            }
        }
    }

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+4][i0].mu_sink.isundefined()
            ||(*this)[k+4][i0].mu_sink!=k+4)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] 
                    && !(*this)[k+4][i0].mu_sink.isundefined()
                    && (*this)[k+4][i0].mu_sink==k+4)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_child; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                            pos_mu_1_child[i][k] = FALSE;
                          if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                            pos_mu_1_child[i+1][k] = FALSE;
                        }
                      count_mu_1_child++; i++;
                    }
                }
            }
        }
    }
  }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2);
  while_guard = while_guard || (Perm.MTO_class_mu_1_child() && count_mu_1_child<2);
  while ( while_guard )
    {
      oldcount_mu_1_data_type = count_mu_1_data_type;
      oldcount_mu_1_child = count_mu_1_child;
  // loop through elements of a array indexed by subrange
  for (i0 = 1; i0 <= 5; i0++)
  {

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
        {
          exists = FALSE;
          split = FALSE;
          // if there exists non-self/undefine loop
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+4][i0].mu_src.isundefined()
                &&(*this)[k+4][i0].mu_src!=k+4)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_child; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_child; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_child[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_child[i][k] 
                            && !(*this)[k+4][i0].mu_src.isundefined()
                            && (*this)[k+4][i0].mu_src!=k+4
                            && pos_mu_1_child[j][(*this)[k+4][i0].mu_src-4])
                          {
                            exists = TRUE;
                            goodset_mu_1_child[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_child; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                    pos_mu_1_child[i][k] = FALSE;
                                  if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                    pos_mu_1_child[i+1][k] = FALSE;                  
                                }
                              count_mu_1_child++;
                            }
                        }
                    }
                }
            }
        }

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
        {
          exists = FALSE;
          split = FALSE;
          // if there exists non-self/undefine loop
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+4][i0].mu_sink.isundefined()
                &&(*this)[k+4][i0].mu_sink!=k+4)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_child; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_child; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_child[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_child[i][k] 
                            && !(*this)[k+4][i0].mu_sink.isundefined()
                            && (*this)[k+4][i0].mu_sink!=k+4
                            && pos_mu_1_child[j][(*this)[k+4][i0].mu_sink-4])
                          {
                            exists = TRUE;
                            goodset_mu_1_child[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_child; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_child[j][k] = pos_mu_1_child[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                    pos_mu_1_child[i][k] = FALSE;
                                  if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                    pos_mu_1_child[i+1][k] = FALSE;                  
                                }
                              count_mu_1_child++;
                            }
                        }
                    }
                }
            }
        }
  }
  // loop through elements of a array indexed by subrange
  for (i0 = 1; i0 <= 5; i0++)
  {

      // refinement -- graph structure for two scalarsets
      //               as in array S1 of S2
      // only if there is more than 1 permutation in class
      if ( (Perm.MTO_class_mu_1_child() && count_mu_1_child<2)
           || ( Perm.MTO_class_mu_1_data_type() && count_mu_1_data_type<2) )
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if ((*this)[k+4][i0].mu_data.isundefined())
              exists = TRUE;
            else
              split = TRUE;
          if (exists && split)
            {
              for (i=0; i<count_mu_1_child; i++) // scan through array index priority
                for (j=0; j<count_mu_1_data_type; j++) //scan through element priority
                  {
                    exists = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_child[k] = FALSE;
                    for (k=0; k<2; k++) // initialize goodset
                      goodset_mu_1_data_type[k] = FALSE;
                    for (k=0; k<2; k++) // scan array index
                      // set goodsets
                      if (pos_mu_1_child[i][k] 
                          && !(*this)[k+4][i0].mu_data.isundefined()
                          && pos_mu_1_data_type[j][(*this)[k+4][i0].mu_data-2])
                        {
                          exists = TRUE;
                          goodset_mu_1_child[k] = TRUE;
                          goodset_mu_1_data_type[(*this)[k+4][i0].mu_data-2] = TRUE;
                        }
                    if (exists)
                      {
                        // set split for the array index type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_child[i][k] && !goodset_mu_1_child[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_child; z>i; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_child[z][k] = pos_mu_1_child[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_child[i][k] && !goodset_mu_1_child[k])
                                  pos_mu_1_child[i][k] = FALSE;
                                if (pos_mu_1_child[i+1][k] && goodset_mu_1_child[k])
                                  pos_mu_1_child[i+1][k] = FALSE;
                              }
                            count_mu_1_child++;
                          }
                        // set split for the element type
                        split=FALSE;
                        for (k=0; k<2; k++)
                          if ( pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k] )
                            split= TRUE;
                        if (split)
                          {
                            // move following pos entries down 1 step
                            for (z=count_mu_1_data_type; z>j; z--)
                              for (k=0; k<2; k++)
                                pos_mu_1_data_type[z][k] = pos_mu_1_data_type[z-1][k];
                            // split pos
                            for (k=0; k<2; k++)
                              {
                                if (pos_mu_1_data_type[j][k] && !goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j][k] = FALSE;
                                if (pos_mu_1_data_type[j+1][k] && goodset_mu_1_data_type[k])
                                  pos_mu_1_data_type[j+1][k] = FALSE;
                              }
                            count_mu_1_data_type++;
                          }
                      }
                  }
            }
        }
  }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_data_type!=count_mu_1_data_type);
      while_guard = while_guard || (oldcount_mu_1_child!=count_mu_1_child);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_data_type<2;
      while_guard = while_guard || count_mu_1_child<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_data_type())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_data_type[i][j])
            Perm.class_mu_1_data_type[j] = i;
      Perm.undefined_class_mu_1_data_type=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_data_type[j]>Perm.undefined_class_mu_1_data_type)
          Perm.undefined_class_mu_1_data_type=Perm.class_mu_1_data_type[j];
    }
  // enter the result into class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_child[i][j])
            Perm.class_mu_1_child[j] = i;
      Perm.undefined_class_mu_1_child=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_child[j]>Perm.undefined_class_mu_1_child)
          Perm.undefined_class_mu_1_child=Perm.class_mu_1_child[j];
    }
}
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_14::Permute(PermSet& Perm, int i)
{
  static mu_1__type_14 temp("Permute_mu_1__type_14",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_14::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_14::Canonicalize(PermSet& Perm){};
void mu_1__type_14::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_14::ArrayLimit(PermSet& Perm) {}
void mu_1__type_14::Limit(PermSet& Perm){}
void mu_1__type_14::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_15::Permute(PermSet& Perm, int i)
{
  static mu_1__type_15 temp("Permute_mu_1__type_15",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_15::Canonicalize(PermSet& Perm){};
void mu_1__type_15::SimpleLimit(PermSet& Perm){}
void mu_1__type_15::ArrayLimit(PermSet& Perm) {}
void mu_1__type_15::Limit(PermSet& Perm){}
void mu_1__type_15::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_16::Permute(PermSet& Perm, int i)
{
  static mu_1__type_16 temp("Permute_mu_1__type_16",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_16::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_16::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_15 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_child[2];
  int start_mu_1_child[2];
  // canonicalization
  static mu_1__type_16 temp;
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_child())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_child; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              {
                size_mu_1_child[k] = class_size;
                start_mu_1_child[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_child[j] 
             && i < start_mu_1_child[j] + size_mu_1_child[j])
           {
             array[i+0] = temp[j+4];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_child[j]+0] = temp[j+4];
    }
}
void mu_1__type_16::SimpleLimit(PermSet& Perm){}
void mu_1__type_16::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_15 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_16::Limit(PermSet& Perm){}
void mu_1__type_16::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_17::Permute(PermSet& Perm, int i)
{
  static mu_1__type_17 temp("Permute_mu_1__type_17",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_17::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_17::Canonicalize(PermSet& Perm){};
void mu_1__type_17::SimpleLimit(PermSet& Perm){}
void mu_1__type_17::ArrayLimit(PermSet& Perm) {}
void mu_1__type_17::Limit(PermSet& Perm){}
void mu_1__type_17::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_18::Permute(PermSet& Perm, int i)
{
  static mu_1__type_18 temp("Permute_mu_1__type_18",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=4; j<=5; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_child[Perm.in_mu_1_child[i]][j-4]];};
void mu_1__type_18::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_18::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_17 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_child[2];
  int start_mu_1_child[2];
  // canonicalization
  static mu_1__type_18 temp;
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_child())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_child; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_child[k]==j)
              {
                size_mu_1_child[k] = class_size;
                start_mu_1_child[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_child[j] 
             && i < start_mu_1_child[j] + size_mu_1_child[j])
           {
             array[i+0] = temp[j+4];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_child[j]+0] = temp[j+4];
    }
}
void mu_1__type_18::SimpleLimit(PermSet& Perm){}
void mu_1__type_18::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_child;
  int compare;
  static mu_1__type_17 value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_child[2];
  bool pos_mu_1_child[2][2];
  // sorting mu_1_child
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_child[i][j]=FALSE;
      count_mu_1_child = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_child; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+4]);
              if (compare==0)
                {
                  pos_mu_1_child[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_child; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_child[k][z] = pos_mu_1_child[k-1][z];
                    }
                  value[j] = (*this)[i+4];
                  for (z=0; z<2; z++)
                    pos_mu_1_child[j][z] = FALSE;
                  pos_mu_1_child[j][i] = TRUE;
                  count_mu_1_child++;
                  break;
                }
            }
          if (j==count_mu_1_child)
            {
              value[j] = (*this)[i+4];
              for (z=0; z<2; z++)
                pos_mu_1_child[j][z] = FALSE;
              pos_mu_1_child[j][i] = TRUE;
              count_mu_1_child++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_child() && count_mu_1_child>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_child; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_child[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_child[i][k] && Perm.class_mu_1_child[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_child[k] = TRUE;
                    pos_mu_1_child[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_child[k]>j
                            || ( Perm.class_mu_1_child[k] == j && !goodset_mu_1_child[k] ) )
                          Perm.class_mu_1_child[k]++;
                      Perm.undefined_class_mu_1_child++;
                    }
                }
            }
        }
    }
}
void mu_1__type_18::Limit(PermSet& Perm){}
void mu_1__type_18::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_L3_cache::Permute(PermSet& Perm, int i)
{
  mu_L2.Permute(Perm,i);
  mu_link2.Permute(Perm,i);
  mu_cache.Permute(Perm,i);
  mu_pending.Permute(Perm,i);
  mu_directory.Permute(Perm,i);
};
void mu_1_L3_cache::SimpleCanonicalize(PermSet& Perm)
{
  mu_cache.SimpleCanonicalize(Perm);
};
void mu_1_L3_cache::Canonicalize(PermSet& Perm)
{
  mu_pending.Canonicalize(Perm);
  mu_directory.Canonicalize(Perm);
};
void mu_1_L3_cache::SimpleLimit(PermSet& Perm)
{
  mu_cache.SimpleLimit(Perm);
};
void mu_1_L3_cache::ArrayLimit(PermSet& Perm)
{
  mu_L2.ArrayLimit(Perm);
  mu_link2.ArrayLimit(Perm);
  mu_pending.ArrayLimit(Perm);
  mu_directory.ArrayLimit(Perm);
};
void mu_1_L3_cache::Limit(PermSet& Perm)
{
  mu_L2.Limit(Perm);
  mu_link2.Limit(Perm);
};
void mu_1_L3_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_19::Permute(PermSet& Perm, int i)
{
  static mu_1__type_19 temp("Permute_mu_1__type_19",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_19::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_19::Canonicalize(PermSet& Perm){};
void mu_1__type_19::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_19::ArrayLimit(PermSet& Perm) {}
void mu_1__type_19::Limit(PermSet& Perm){}
void mu_1__type_19::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_20::Permute(PermSet& Perm, int i)
{
  static mu_1__type_20 temp("Permute_mu_1__type_20",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_20::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_20::Canonicalize(PermSet& Perm){};
void mu_1__type_20::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_20::ArrayLimit(PermSet& Perm) {}
void mu_1__type_20::Limit(PermSet& Perm){}
void mu_1__type_20::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_21::Permute(PermSet& Perm, int i) {};
void mu_1__type_21::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_21::Canonicalize(PermSet& Perm) {};
void mu_1__type_21::SimpleLimit(PermSet& Perm) {};
void mu_1__type_21::ArrayLimit(PermSet& Perm) {};
void mu_1__type_21::Limit(PermSet& Perm) {};
void mu_1__type_21::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };

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
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
         || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_memdata.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_memdata.MultisetSort();
              mu_auxdata.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_auxdata.MultisetSort();
              mu_L3.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_L3.MultisetSort();
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

          mu_memdata.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_memdata.MultisetSort();
          mu_auxdata.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_auxdata.MultisetSort();
          mu_L3.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_L3.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_memdata.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_memdata.MultisetSort();
              mu_auxdata.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_auxdata.MultisetSort();
              mu_L3.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_L3.MultisetSort();
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
      mu_memdata.MultisetSort();
      mu_auxdata.MultisetSort();
      mu_L3.MultisetSort();
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
        mu_memdata.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_memdata.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_auxdata.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_auxdata.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_L3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_L3.MultisetSort();
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

  mu_memdata.SimpleCanonicalize(Perm);

  mu_auxdata.SimpleCanonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_L3.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_L3.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_L3.Limit(Perm);
  }

  Perm.SimpleToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_L3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_L3.MultisetSort();
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
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

  mu_memdata.SimpleCanonicalize(Perm);

  mu_auxdata.SimpleCanonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_L3.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_L3.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_L3.Limit(Perm);
  }

  Perm.SimpleToOne();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  mu_L3.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_L3.MultisetSort();
  BestPermutedState = *workingstate;
  BestInitialized = TRUE;

  cycle=1;
  while (Perm.NextPermutation())
    {
      if (args->perm_limit.value != 0
          && cycle++ >= args->perm_limit.value) break;
      StateCopy(workingstate, &temp);
      mu_L3.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_L3.MultisetSort();
      switch (StateCmp(workingstate, &BestPermutedState)) {
      case -1:
        BestPermutedState = *workingstate;
        break;
      case 1:
        break;
      case 0:
        break;
      default:
        Error.Error("funny return value from StateCmp");
      }
    }
  StateCopy(workingstate, &BestPermutedState);

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

  mu_memdata.SimpleCanonicalize(Perm);

  mu_auxdata.SimpleCanonicalize(Perm);

  if (Perm.MoreThanOneRemain()) {
    mu_L3.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_L3.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_L3.Limit(Perm);
  }

  Perm.SimpleToOne();

  mu_L3.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_L3.MultisetSort();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"