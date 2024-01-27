/******************************
  Program "./TL_states/TL-C_v4.3.1.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Jan  8 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Jan  8 2023"
#define PROTOCOL_NAME "./TL_states/TL-C_v4.3.1"
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
if ( (mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr55 )
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
bool mu__boolexpr57;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr57 = FALSE ;
  else {
bool mu__quant58; 
mu__quant58 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr59;
  if (!((mu_j) != (mu_i))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( (mu__boolexpr59) )
  { mu__quant58 = TRUE; break; }
};
};
  mu__boolexpr57 = (mu__quant58) ; 
}
if ( mu__boolexpr57 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr60;
  if (!((mu_j) != (mu_i))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( mu__boolexpr60 )
{
bool mu__boolexpr61;
bool mu__boolexpr62;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr61 )
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
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip))) mu__boolexpr65 = FALSE ;
  else {
bool mu__quant66; 
mu__quant66 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr67;
  if (!((mu_j) != (mu_i))) mu__boolexpr67 = TRUE ;
  else {
  mu__boolexpr67 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_None)) ; 
}
if ( !(mu__boolexpr67) )
  { mu__quant66 = FALSE; break; }
};
};
  mu__boolexpr65 = (mu__quant66) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
bool mu__quant68; 
mu__quant68 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr69;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr69) )
  { mu__quant68 = FALSE; break; }
};
};
  mu__boolexpr64 = (mu__quant68) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr63 )
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
bool mu__boolexpr70;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Tip))) mu__boolexpr70 = FALSE ;
  else {
bool mu__quant71; 
mu__quant71 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr72;
  if (!((mu_j) != (mu_i))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( (mu__boolexpr72) )
  { mu__quant71 = TRUE; break; }
};
};
  mu__boolexpr70 = (mu__quant71) ; 
}
if ( mu__boolexpr70 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr73;
  if (!((mu_j) != (mu_i))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( mu__boolexpr73 )
{
bool mu__boolexpr74;
bool mu__boolexpr75;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr74 )
{
mu_link2_send ( mu_ProbePerm, mu_toN, mu_j, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L3.mu_pending[mu_j][mu_m.mu_address] = mu_ProbeAck;
}
}
};
};
}
else
{
bool mu__boolexpr76;
  if (!((mu_L3.mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr76 = FALSE ;
  else {
bool mu__quant77; 
mu__quant77 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr78;
  if (!((mu_j) != (mu_i))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( (mu__boolexpr78) )
  { mu__quant77 = TRUE; break; }
};
};
  mu__boolexpr76 = (mu__quant77) ; 
}
if ( mu__boolexpr76 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr79;
  if (!((mu_j) != (mu_i))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr79 )
{
bool mu__boolexpr80;
bool mu__boolexpr81;
  if (!((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr80 )
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
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__quant84; 
mu__quant84 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr85;
  if (!((mu_j) != (mu_i))) mu__boolexpr85 = TRUE ;
  else {
  mu__boolexpr85 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_None)) ; 
}
if ( !(mu__boolexpr85) )
  { mu__quant84 = FALSE; break; }
};
};
  if (!(mu__quant84)) mu__boolexpr83 = FALSE ;
  else {
bool mu__quant86; 
mu__quant86 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr87;
  if (!((mu_L3.mu_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_L3.mu_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr87) )
  { mu__quant86 = FALSE; break; }
};
};
  mu__boolexpr83 = (mu__quant86) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_L3.mu_pending[mu_i][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr82 )
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
bool mu__quant88; 
mu__quant88 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr89;
  if (!((mu_j) != (mu_i))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( (mu__boolexpr89) )
  { mu__quant88 = TRUE; break; }
};
};
if ( mu__quant88 )
{
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
  if (!((mu_j) != (mu_i))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_L3.mu_directory[mu_j][mu_m.mu_address]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_L3.mu_pending[mu_j][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr90 )
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
bool mu__boolexpr94;
  if (!((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr94 = FALSE ;
  else {
bool mu__quant95; 
mu__quant95 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Tip)) )
  { mu__quant95 = TRUE; break; }
};
};
  mu__boolexpr94 = (mu__quant95) ; 
}
    return mu__boolexpr94;
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
bool mu__boolexpr96;
  if (!((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr96 = FALSE ;
  else {
bool mu__quant97; 
mu__quant97 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Tip)) )
  { mu__quant97 = TRUE; break; }
};
};
  mu__boolexpr96 = (mu__quant97) ; 
}
	      if (mu__boolexpr96) {
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
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr98 )
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
bool mu__boolexpr101;
bool mu__boolexpr102;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr102 = TRUE ;
  else {
  mu__boolexpr102 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
bool mu__quant103; 
mu__quant103 = FALSE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( ((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_Branch)) )
  { mu__quant103 = TRUE; break; }
};
};
  mu__boolexpr101 = (mu__quant103) ; 
}
    return mu__boolexpr101;
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
	      if (mu__boolexpr104) {
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
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_a]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr107 )
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
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr114 = TRUE ;
  else {
  mu__boolexpr114 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
bool mu__quant115; 
mu__quant115 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant115 = FALSE; break; }
};
};
  mu__boolexpr113 = (mu__quant115) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_GrantAck)) ; 
}
    return mu__boolexpr110;
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
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
  if ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) mu__boolexpr120 = TRUE ;
  else {
  mu__boolexpr120 = ((mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
bool mu__quant121; 
mu__quant121 = TRUE;
{
for(int mu_j = 4; mu_j <= 5; mu_j++) {
if ( !((mu_L2[mu_i].mu_directory[mu_j][mu_a]) == (mu_None)) )
  { mu__quant121 = FALSE; break; }
};
};
  mu__boolexpr119 = (mu__quant121) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_L2[mu_i].mu_master_pending[mu_a]) != (mu_GrantAck)) ; 
}
	      if (mu__boolexpr116) {
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
bool mu__boolexpr122;
  if ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr122 = TRUE ;
  else {
  mu__boolexpr122 = ((mu_link[2].mu_opcode) == (mu_ProbePerm)) ; 
}
    return mu__boolexpr122;
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
bool mu__boolexpr123;
  if ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr123 = TRUE ;
  else {
  mu__boolexpr123 = ((mu_link[2].mu_opcode) == (mu_ProbePerm)) ; 
}
	      if (mu__boolexpr123) {
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
bool mu__boolexpr124;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr124 )
{
mu_link[2].undefine();
mu_link[2].mu_opcode = mu_Empty;
mu_link2_send ( mu_ProbeAck, mu_NtoN, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
}
else
{
bool mu__boolexpr125;
  if (!((mu_m.mu_opcode) == (mu_ProbePerm))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch)) ; 
}
if ( mu__boolexpr125 )
{
bool mu__boolexpr126;
bool mu__quant127; 
mu__quant127 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
if ( !((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_None)) )
  { mu__quant127 = FALSE; break; }
};
};
  if (!(mu__quant127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr126 )
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
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_Branch))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr128 )
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
bool mu__boolexpr131;
bool mu__quant132; 
mu__quant132 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
if ( !((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_None)) )
  { mu__quant132 = FALSE; break; }
};
};
  if (!(mu__quant132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr131 )
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
bool mu__boolexpr133;
bool mu__boolexpr134;
bool mu__boolexpr135;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_Branch))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr133 )
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
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!((mu_L2[mu_i].mu_directory[mu_k][mu_m.mu_address]) == (mu_Tip))) mu__boolexpr138 = FALSE ;
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
bool mu__boolexpr139;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr139 = TRUE ;
  else {
  mu__boolexpr139 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
    return mu__boolexpr139;
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
bool mu__boolexpr140;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr140 = TRUE ;
  else {
  mu__boolexpr140 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
	      if (mu__boolexpr140) {
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
bool mu__boolexpr141;
  if ((mu_link[5].mu_opcode) == (mu_GrantAck)) mu__boolexpr141 = TRUE ;
  else {
  mu__boolexpr141 = ((mu_link[5].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr141;
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
bool mu__boolexpr142;
  if ((mu_link[5].mu_opcode) == (mu_GrantAck)) mu__boolexpr142 = TRUE ;
  else {
  mu__boolexpr142 = ((mu_link[5].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr142) {
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
bool mu__boolexpr143;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr143 = TRUE ;
  else {
  mu__boolexpr143 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
    return mu__boolexpr143;
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
bool mu__boolexpr144;
  if ((mu_link[3].mu_opcode) == (mu_Release)) mu__boolexpr144 = TRUE ;
  else {
  mu__boolexpr144 = ((mu_link[3].mu_opcode) == (mu_ReleaseData)) ; 
}
	      if (mu__boolexpr144) {
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
bool mu__boolexpr145;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAck)) mu__boolexpr145 = TRUE ;
  else {
  mu__boolexpr145 = ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) ; 
}
    return mu__boolexpr145;
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
bool mu__boolexpr146;
  if ((mu_link[3].mu_opcode) == (mu_ProbeAck)) mu__boolexpr146 = TRUE ;
  else {
  mu__boolexpr146 = ((mu_link[3].mu_opcode) == (mu_ProbeAckData)) ; 
}
	      if (mu__boolexpr146) {
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
bool mu__boolexpr147;
  if ((mu_m.mu_para) == (mu_BtoN)) mu__boolexpr147 = TRUE ;
  else {
  mu__boolexpr147 = ((mu_m.mu_para) == (mu_NtoN)) ; 
}
if ( mu__boolexpr147 )
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
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr148 )
{
mu_link2_send ( mu_AcquireBlock, mu_NtoB, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_GrantData;
}
else
{
bool mu__boolexpr151;
  if ((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch)) mu__boolexpr151 = TRUE ;
  else {
  mu__boolexpr151 = ((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip)) ; 
}
if ( mu__boolexpr151 )
{
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_GrantAck))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( mu__boolexpr152 )
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
bool mu__boolexpr154;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr154 )
{
bool mu__boolexpr155;
bool mu__boolexpr156;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr155 )
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
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr157 )
{
mu_link2_send ( mu_AcquireBlock, mu_NtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_GrantData;
}
else
{
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch) )
{
bool mu__boolexpr160;
bool mu__boolexpr161;
  if (!((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData))) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr160 )
{
mu_link2_send ( mu_AcquirePerm, mu_BtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Grant;
}
}
else
{
if ( (mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Tip) )
{
bool mu__boolexpr162;
bool mu__boolexpr163;
  if (!((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_None))) mu__boolexpr163 = FALSE ;
  else {
bool mu__quant164; 
mu__quant164 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr165;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr165) )
  { mu__quant164 = FALSE; break; }
};
};
  mu__boolexpr163 = (mu__quant164) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr162 )
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
bool mu__boolexpr166;
bool mu__boolexpr167;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr166 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_another, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address] = mu_ProbeAck;
}
}
}
}
else
{
bool mu__boolexpr168;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Trunk))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr168 )
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
bool mu__boolexpr171;
bool mu__boolexpr172;
  if (!((mu_L2[mu_i].mu_directory[mu_another][mu_m.mu_address]) == (mu_None))) mu__boolexpr172 = FALSE ;
  else {
bool mu__quant173; 
mu__quant173 = TRUE;
{
for(int mu_k = 4; mu_k <= 5; mu_k++) {
bool mu__boolexpr174;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_L2[mu_i].mu_slave_pending[mu_k][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
if ( !(mu__boolexpr174) )
  { mu__quant173 = FALSE; break; }
};
};
  mu__boolexpr172 = (mu__quant173) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_L2[mu_i].mu_slave_pending[mu_src][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr171 )
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
bool mu__boolexpr175;
bool mu__boolexpr176;
  if (!((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAck))) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address]) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr175 )
{
mu_link1_send ( mu_ProbePerm, mu_toN, mu_another, mu_i, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_slave_pending[mu_another][mu_m.mu_address] = mu_ProbeAck;
}
}
}
}
else
{
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_Branch))) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_L2[mu_i].mu_master_pending[mu_m.mu_address]) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr177 )
{
mu_link2_send ( mu_AcquirePerm, mu_BtoT, mu_i, mu_1_child_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var );
mu_L2[mu_i].mu_master_pending[mu_m.mu_address] = mu_Grant;
}
else
{
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_L2[mu_i].mu_cache[mu_m.mu_address].mu_state) == (mu_None))) mu__boolexpr182 = FALSE ;
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
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if ((mu_link[2].mu_opcode) == (mu_ProbePerm)) mu__boolexpr185 = TRUE ;
  else {
  mu__boolexpr185 = ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
bool mu__boolexpr186;
  if ((mu_link[2].mu_para) == (mu_toN)) mu__boolexpr186 = TRUE ;
  else {
  mu__boolexpr186 = ((mu_link[2].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr184 = (mu__boolexpr186) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_L1[mu_j].mu_pending[mu_link[2].mu_address]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr183;
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
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
  if ((mu_link[2].mu_opcode) == (mu_ProbePerm)) mu__boolexpr189 = TRUE ;
  else {
  mu__boolexpr189 = ((mu_link[2].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
bool mu__boolexpr190;
  if ((mu_link[2].mu_para) == (mu_toN)) mu__boolexpr190 = TRUE ;
  else {
  mu__boolexpr190 = ((mu_link[2].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr188 = (mu__boolexpr190) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_L1[mu_j].mu_pending[mu_link[2].mu_address]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr187) {
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
bool mu__boolexpr191;
bool mu__boolexpr192;
  if ((mu_link[4].mu_opcode) == (mu_Grant)) mu__boolexpr192 = TRUE ;
  else {
  mu__boolexpr192 = ((mu_link[4].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
bool mu__boolexpr193;
  if ((mu_link[4].mu_para) == (mu_toB)) mu__boolexpr193 = TRUE ;
  else {
  mu__boolexpr193 = ((mu_link[4].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr191 = (mu__boolexpr193) ; 
}
    return mu__boolexpr191;
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
	      if (mu__boolexpr194) {
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
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) mu__boolexpr201 = TRUE ;
  else {
  mu__boolexpr201 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_link[3].mu_opcode) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr197;
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
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) mu__boolexpr206 = TRUE ;
  else {
  mu__boolexpr206 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_link[3].mu_opcode) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr202) {
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
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) mu__boolexpr210 = TRUE ;
  else {
  mu__boolexpr210 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr207;
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
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
  if ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) mu__boolexpr214 = TRUE ;
  else {
  mu__boolexpr214 = ((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr211) {
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
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!((mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_GrantData)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_L1[mu_j].mu_pending[mu_a]) != (mu_ReleaseAck)) ; 
}
    return mu__boolexpr215;
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
	      if (mu__boolexpr218) {
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
int mu__invariant_221() // Invariant "test_reachable_state_63"
{
bool mu__quant222; 
mu__quant222 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr223;
  if (!((mu_i) != (mu_j))) mu__boolexpr223 = TRUE ;
  else {
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr223 = (!(mu__boolexpr224)) ; 
}
if ( !(mu__boolexpr223) )
  { mu__quant222 = FALSE; break; }
};
};
};
};
return mu__quant222;
};

bool mu__condition_230() // Condition for Rule "test_reachable_state_63"
{
  return mu__invariant_221( );
}

/**** end rule declaration ****/

int mu__invariant_231() // Invariant "test_reachable_state_62"
{
bool mu__quant232; 
mu__quant232 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr233;
  if (!((mu_i) != (mu_j))) mu__boolexpr233 = TRUE ;
  else {
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr233 = (!(mu__boolexpr234)) ; 
}
if ( !(mu__boolexpr233) )
  { mu__quant232 = FALSE; break; }
};
};
};
};
return mu__quant232;
};

bool mu__condition_240() // Condition for Rule "test_reachable_state_62"
{
  return mu__invariant_231( );
}

/**** end rule declaration ****/

int mu__invariant_241() // Invariant "test_reachable_state_61"
{
bool mu__quant242; 
mu__quant242 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr243;
  if (!((mu_i) != (mu_j))) mu__boolexpr243 = TRUE ;
  else {
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr243 = (!(mu__boolexpr244)) ; 
}
if ( !(mu__boolexpr243) )
  { mu__quant242 = FALSE; break; }
};
};
};
};
return mu__quant242;
};

bool mu__condition_250() // Condition for Rule "test_reachable_state_61"
{
  return mu__invariant_241( );
}

/**** end rule declaration ****/

int mu__invariant_251() // Invariant "test_reachable_state_60"
{
bool mu__quant252; 
mu__quant252 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr253;
  if (!((mu_i) != (mu_j))) mu__boolexpr253 = TRUE ;
  else {
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr253 = (!(mu__boolexpr254)) ; 
}
if ( !(mu__boolexpr253) )
  { mu__quant252 = FALSE; break; }
};
};
};
};
return mu__quant252;
};

bool mu__condition_260() // Condition for Rule "test_reachable_state_60"
{
  return mu__invariant_251( );
}

/**** end rule declaration ****/

int mu__invariant_261() // Invariant "test_reachable_state_59"
{
bool mu__quant262; 
mu__quant262 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr263;
  if (!((mu_i) != (mu_j))) mu__boolexpr263 = TRUE ;
  else {
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr263 = (!(mu__boolexpr264)) ; 
}
if ( !(mu__boolexpr263) )
  { mu__quant262 = FALSE; break; }
};
};
};
};
return mu__quant262;
};

bool mu__condition_270() // Condition for Rule "test_reachable_state_59"
{
  return mu__invariant_261( );
}

/**** end rule declaration ****/

int mu__invariant_271() // Invariant "test_reachable_state_58"
{
bool mu__quant272; 
mu__quant272 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr273;
  if (!((mu_i) != (mu_j))) mu__boolexpr273 = TRUE ;
  else {
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr273 = (!(mu__boolexpr274)) ; 
}
if ( !(mu__boolexpr273) )
  { mu__quant272 = FALSE; break; }
};
};
};
};
return mu__quant272;
};

bool mu__condition_280() // Condition for Rule "test_reachable_state_58"
{
  return mu__invariant_271( );
}

/**** end rule declaration ****/

int mu__invariant_281() // Invariant "test_reachable_state_57"
{
bool mu__quant282; 
mu__quant282 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr283;
  if (!((mu_i) != (mu_j))) mu__boolexpr283 = TRUE ;
  else {
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr283 = (!(mu__boolexpr284)) ; 
}
if ( !(mu__boolexpr283) )
  { mu__quant282 = FALSE; break; }
};
};
};
};
return mu__quant282;
};

bool mu__condition_290() // Condition for Rule "test_reachable_state_57"
{
  return mu__invariant_281( );
}

/**** end rule declaration ****/

int mu__invariant_291() // Invariant "test_reachable_state_56"
{
bool mu__quant292; 
mu__quant292 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr293;
  if (!((mu_i) != (mu_j))) mu__boolexpr293 = TRUE ;
  else {
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr293 = (!(mu__boolexpr294)) ; 
}
if ( !(mu__boolexpr293) )
  { mu__quant292 = FALSE; break; }
};
};
};
};
return mu__quant292;
};

bool mu__condition_300() // Condition for Rule "test_reachable_state_56"
{
  return mu__invariant_291( );
}

/**** end rule declaration ****/

int mu__invariant_301() // Invariant "test_reachable_state_55"
{
bool mu__quant302; 
mu__quant302 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr303;
  if (!((mu_i) != (mu_j))) mu__boolexpr303 = TRUE ;
  else {
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr303 = (!(mu__boolexpr304)) ; 
}
if ( !(mu__boolexpr303) )
  { mu__quant302 = FALSE; break; }
};
};
};
};
return mu__quant302;
};

bool mu__condition_310() // Condition for Rule "test_reachable_state_55"
{
  return mu__invariant_301( );
}

/**** end rule declaration ****/

int mu__invariant_311() // Invariant "test_reachable_state_54"
{
bool mu__quant312; 
mu__quant312 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr313;
  if (!((mu_i) != (mu_j))) mu__boolexpr313 = TRUE ;
  else {
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr313 = (!(mu__boolexpr314)) ; 
}
if ( !(mu__boolexpr313) )
  { mu__quant312 = FALSE; break; }
};
};
};
};
return mu__quant312;
};

bool mu__condition_320() // Condition for Rule "test_reachable_state_54"
{
  return mu__invariant_311( );
}

/**** end rule declaration ****/

int mu__invariant_321() // Invariant "test_reachable_state_53"
{
bool mu__quant322; 
mu__quant322 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr323;
  if (!((mu_i) != (mu_j))) mu__boolexpr323 = TRUE ;
  else {
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
bool mu__boolexpr328;
bool mu__boolexpr329;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr323 = (!(mu__boolexpr324)) ; 
}
if ( !(mu__boolexpr323) )
  { mu__quant322 = FALSE; break; }
};
};
};
};
return mu__quant322;
};

bool mu__condition_330() // Condition for Rule "test_reachable_state_53"
{
  return mu__invariant_321( );
}

/**** end rule declaration ****/

int mu__invariant_331() // Invariant "test_reachable_state_52"
{
bool mu__quant332; 
mu__quant332 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr333;
  if (!((mu_i) != (mu_j))) mu__boolexpr333 = TRUE ;
  else {
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr333 = (!(mu__boolexpr334)) ; 
}
if ( !(mu__boolexpr333) )
  { mu__quant332 = FALSE; break; }
};
};
};
};
return mu__quant332;
};

bool mu__condition_340() // Condition for Rule "test_reachable_state_52"
{
  return mu__invariant_331( );
}

/**** end rule declaration ****/

int mu__invariant_341() // Invariant "test_reachable_state_51"
{
bool mu__quant342; 
mu__quant342 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr343;
  if (!((mu_i) != (mu_j))) mu__boolexpr343 = TRUE ;
  else {
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr343 = (!(mu__boolexpr344)) ; 
}
if ( !(mu__boolexpr343) )
  { mu__quant342 = FALSE; break; }
};
};
};
};
return mu__quant342;
};

bool mu__condition_350() // Condition for Rule "test_reachable_state_51"
{
  return mu__invariant_341( );
}

/**** end rule declaration ****/

int mu__invariant_351() // Invariant "test_reachable_state_50"
{
bool mu__quant352; 
mu__quant352 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr353;
  if (!((mu_i) != (mu_j))) mu__boolexpr353 = TRUE ;
  else {
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
bool mu__boolexpr359;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr353 = (!(mu__boolexpr354)) ; 
}
if ( !(mu__boolexpr353) )
  { mu__quant352 = FALSE; break; }
};
};
};
};
return mu__quant352;
};

bool mu__condition_360() // Condition for Rule "test_reachable_state_50"
{
  return mu__invariant_351( );
}

/**** end rule declaration ****/

int mu__invariant_361() // Invariant "test_reachable_state_49"
{
bool mu__quant362; 
mu__quant362 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr363;
  if (!((mu_i) != (mu_j))) mu__boolexpr363 = TRUE ;
  else {
bool mu__boolexpr364;
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr363 = (!(mu__boolexpr364)) ; 
}
if ( !(mu__boolexpr363) )
  { mu__quant362 = FALSE; break; }
};
};
};
};
return mu__quant362;
};

bool mu__condition_370() // Condition for Rule "test_reachable_state_49"
{
  return mu__invariant_361( );
}

/**** end rule declaration ****/

int mu__invariant_371() // Invariant "test_reachable_state_48"
{
bool mu__quant372; 
mu__quant372 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr373;
  if (!((mu_i) != (mu_j))) mu__boolexpr373 = TRUE ;
  else {
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr373 = (!(mu__boolexpr374)) ; 
}
if ( !(mu__boolexpr373) )
  { mu__quant372 = FALSE; break; }
};
};
};
};
return mu__quant372;
};

bool mu__condition_380() // Condition for Rule "test_reachable_state_48"
{
  return mu__invariant_371( );
}

/**** end rule declaration ****/

int mu__invariant_381() // Invariant "test_reachable_state_47"
{
bool mu__quant382; 
mu__quant382 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr383;
  if (!((mu_i) != (mu_j))) mu__boolexpr383 = TRUE ;
  else {
bool mu__boolexpr384;
bool mu__boolexpr385;
bool mu__boolexpr386;
bool mu__boolexpr387;
bool mu__boolexpr388;
bool mu__boolexpr389;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr388)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr383 = (!(mu__boolexpr384)) ; 
}
if ( !(mu__boolexpr383) )
  { mu__quant382 = FALSE; break; }
};
};
};
};
return mu__quant382;
};

bool mu__condition_390() // Condition for Rule "test_reachable_state_47"
{
  return mu__invariant_381( );
}

/**** end rule declaration ****/

int mu__invariant_391() // Invariant "test_reachable_state_46"
{
bool mu__quant392; 
mu__quant392 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr393;
  if (!((mu_i) != (mu_j))) mu__boolexpr393 = TRUE ;
  else {
bool mu__boolexpr394;
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr393 = (!(mu__boolexpr394)) ; 
}
if ( !(mu__boolexpr393) )
  { mu__quant392 = FALSE; break; }
};
};
};
};
return mu__quant392;
};

bool mu__condition_400() // Condition for Rule "test_reachable_state_46"
{
  return mu__invariant_391( );
}

/**** end rule declaration ****/

int mu__invariant_401() // Invariant "test_reachable_state_45"
{
bool mu__quant402; 
mu__quant402 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr403;
  if (!((mu_i) != (mu_j))) mu__boolexpr403 = TRUE ;
  else {
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
bool mu__boolexpr408;
bool mu__boolexpr409;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr403 = (!(mu__boolexpr404)) ; 
}
if ( !(mu__boolexpr403) )
  { mu__quant402 = FALSE; break; }
};
};
};
};
return mu__quant402;
};

bool mu__condition_410() // Condition for Rule "test_reachable_state_45"
{
  return mu__invariant_401( );
}

/**** end rule declaration ****/

int mu__invariant_411() // Invariant "test_reachable_state_44"
{
bool mu__quant412; 
mu__quant412 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr413;
  if (!((mu_i) != (mu_j))) mu__boolexpr413 = TRUE ;
  else {
bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr413 = (!(mu__boolexpr414)) ; 
}
if ( !(mu__boolexpr413) )
  { mu__quant412 = FALSE; break; }
};
};
};
};
return mu__quant412;
};

bool mu__condition_420() // Condition for Rule "test_reachable_state_44"
{
  return mu__invariant_411( );
}

/**** end rule declaration ****/

int mu__invariant_421() // Invariant "test_reachable_state_43"
{
bool mu__quant422; 
mu__quant422 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr423;
  if (!((mu_i) != (mu_j))) mu__boolexpr423 = TRUE ;
  else {
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr423 = (!(mu__boolexpr424)) ; 
}
if ( !(mu__boolexpr423) )
  { mu__quant422 = FALSE; break; }
};
};
};
};
return mu__quant422;
};

bool mu__condition_430() // Condition for Rule "test_reachable_state_43"
{
  return mu__invariant_421( );
}

/**** end rule declaration ****/

int mu__invariant_431() // Invariant "test_reachable_state_42"
{
bool mu__quant432; 
mu__quant432 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr433;
  if (!((mu_i) != (mu_j))) mu__boolexpr433 = TRUE ;
  else {
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
bool mu__boolexpr437;
bool mu__boolexpr438;
bool mu__boolexpr439;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr433 = (!(mu__boolexpr434)) ; 
}
if ( !(mu__boolexpr433) )
  { mu__quant432 = FALSE; break; }
};
};
};
};
return mu__quant432;
};

bool mu__condition_440() // Condition for Rule "test_reachable_state_42"
{
  return mu__invariant_431( );
}

/**** end rule declaration ****/

int mu__invariant_441() // Invariant "test_reachable_state_41"
{
bool mu__quant442; 
mu__quant442 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr443;
  if (!((mu_i) != (mu_j))) mu__boolexpr443 = TRUE ;
  else {
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr443 = (!(mu__boolexpr444)) ; 
}
if ( !(mu__boolexpr443) )
  { mu__quant442 = FALSE; break; }
};
};
};
};
return mu__quant442;
};

bool mu__condition_450() // Condition for Rule "test_reachable_state_41"
{
  return mu__invariant_441( );
}

/**** end rule declaration ****/

int mu__invariant_451() // Invariant "test_reachable_state_40"
{
bool mu__quant452; 
mu__quant452 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr453;
  if (!((mu_i) != (mu_j))) mu__boolexpr453 = TRUE ;
  else {
bool mu__boolexpr454;
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
bool mu__boolexpr459;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr453 = (!(mu__boolexpr454)) ; 
}
if ( !(mu__boolexpr453) )
  { mu__quant452 = FALSE; break; }
};
};
};
};
return mu__quant452;
};

bool mu__condition_460() // Condition for Rule "test_reachable_state_40"
{
  return mu__invariant_451( );
}

/**** end rule declaration ****/

int mu__invariant_461() // Invariant "test_reachable_state_39"
{
bool mu__quant462; 
mu__quant462 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr463;
  if (!((mu_i) != (mu_j))) mu__boolexpr463 = TRUE ;
  else {
bool mu__boolexpr464;
bool mu__boolexpr465;
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr463 = (!(mu__boolexpr464)) ; 
}
if ( !(mu__boolexpr463) )
  { mu__quant462 = FALSE; break; }
};
};
};
};
return mu__quant462;
};

bool mu__condition_470() // Condition for Rule "test_reachable_state_39"
{
  return mu__invariant_461( );
}

/**** end rule declaration ****/

int mu__invariant_471() // Invariant "test_reachable_state_38"
{
bool mu__quant472; 
mu__quant472 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr473;
  if (!((mu_i) != (mu_j))) mu__boolexpr473 = TRUE ;
  else {
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr473 = (!(mu__boolexpr474)) ; 
}
if ( !(mu__boolexpr473) )
  { mu__quant472 = FALSE; break; }
};
};
};
};
return mu__quant472;
};

bool mu__condition_480() // Condition for Rule "test_reachable_state_38"
{
  return mu__invariant_471( );
}

/**** end rule declaration ****/

int mu__invariant_481() // Invariant "test_reachable_state_37"
{
bool mu__quant482; 
mu__quant482 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr483;
  if (!((mu_i) != (mu_j))) mu__boolexpr483 = TRUE ;
  else {
bool mu__boolexpr484;
bool mu__boolexpr485;
bool mu__boolexpr486;
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr483 = (!(mu__boolexpr484)) ; 
}
if ( !(mu__boolexpr483) )
  { mu__quant482 = FALSE; break; }
};
};
};
};
return mu__quant482;
};

bool mu__condition_490() // Condition for Rule "test_reachable_state_37"
{
  return mu__invariant_481( );
}

/**** end rule declaration ****/

int mu__invariant_491() // Invariant "test_reachable_state_36"
{
bool mu__quant492; 
mu__quant492 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr493;
  if (!((mu_i) != (mu_j))) mu__boolexpr493 = TRUE ;
  else {
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
bool mu__boolexpr498;
bool mu__boolexpr499;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr493 = (!(mu__boolexpr494)) ; 
}
if ( !(mu__boolexpr493) )
  { mu__quant492 = FALSE; break; }
};
};
};
};
return mu__quant492;
};

bool mu__condition_500() // Condition for Rule "test_reachable_state_36"
{
  return mu__invariant_491( );
}

/**** end rule declaration ****/

int mu__invariant_501() // Invariant "test_reachable_state_35"
{
bool mu__quant502; 
mu__quant502 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr503;
  if (!((mu_i) != (mu_j))) mu__boolexpr503 = TRUE ;
  else {
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr503 = (!(mu__boolexpr504)) ; 
}
if ( !(mu__boolexpr503) )
  { mu__quant502 = FALSE; break; }
};
};
};
};
return mu__quant502;
};

bool mu__condition_510() // Condition for Rule "test_reachable_state_35"
{
  return mu__invariant_501( );
}

/**** end rule declaration ****/

int mu__invariant_511() // Invariant "test_reachable_state_34"
{
bool mu__quant512; 
mu__quant512 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr513;
  if (!((mu_i) != (mu_j))) mu__boolexpr513 = TRUE ;
  else {
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr513 = (!(mu__boolexpr514)) ; 
}
if ( !(mu__boolexpr513) )
  { mu__quant512 = FALSE; break; }
};
};
};
};
return mu__quant512;
};

bool mu__condition_520() // Condition for Rule "test_reachable_state_34"
{
  return mu__invariant_511( );
}

/**** end rule declaration ****/

int mu__invariant_521() // Invariant "test_reachable_state_33"
{
bool mu__quant522; 
mu__quant522 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr523;
  if (!((mu_i) != (mu_j))) mu__boolexpr523 = TRUE ;
  else {
bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr523 = (!(mu__boolexpr524)) ; 
}
if ( !(mu__boolexpr523) )
  { mu__quant522 = FALSE; break; }
};
};
};
};
return mu__quant522;
};

bool mu__condition_530() // Condition for Rule "test_reachable_state_33"
{
  return mu__invariant_521( );
}

/**** end rule declaration ****/

int mu__invariant_531() // Invariant "test_reachable_state_32"
{
bool mu__quant532; 
mu__quant532 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr533;
  if (!((mu_i) != (mu_j))) mu__boolexpr533 = TRUE ;
  else {
bool mu__boolexpr534;
bool mu__boolexpr535;
bool mu__boolexpr536;
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr535)) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr533 = (!(mu__boolexpr534)) ; 
}
if ( !(mu__boolexpr533) )
  { mu__quant532 = FALSE; break; }
};
};
};
};
return mu__quant532;
};

bool mu__condition_540() // Condition for Rule "test_reachable_state_32"
{
  return mu__invariant_531( );
}

/**** end rule declaration ****/

int mu__invariant_541() // Invariant "test_reachable_state_31"
{
bool mu__quant542; 
mu__quant542 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr543;
  if (!((mu_i) != (mu_j))) mu__boolexpr543 = TRUE ;
  else {
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
bool mu__boolexpr547;
bool mu__boolexpr548;
bool mu__boolexpr549;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr543 = (!(mu__boolexpr544)) ; 
}
if ( !(mu__boolexpr543) )
  { mu__quant542 = FALSE; break; }
};
};
};
};
return mu__quant542;
};

bool mu__condition_550() // Condition for Rule "test_reachable_state_31"
{
  return mu__invariant_541( );
}

/**** end rule declaration ****/

int mu__invariant_551() // Invariant "test_reachable_state_30"
{
bool mu__quant552; 
mu__quant552 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr553;
  if (!((mu_i) != (mu_j))) mu__boolexpr553 = TRUE ;
  else {
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
bool mu__boolexpr559;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr553 = (!(mu__boolexpr554)) ; 
}
if ( !(mu__boolexpr553) )
  { mu__quant552 = FALSE; break; }
};
};
};
};
return mu__quant552;
};

bool mu__condition_560() // Condition for Rule "test_reachable_state_30"
{
  return mu__invariant_551( );
}

/**** end rule declaration ****/

int mu__invariant_561() // Invariant "test_reachable_state_29"
{
bool mu__quant562; 
mu__quant562 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr563;
  if (!((mu_i) != (mu_j))) mu__boolexpr563 = TRUE ;
  else {
bool mu__boolexpr564;
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
bool mu__boolexpr568;
bool mu__boolexpr569;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr563 = (!(mu__boolexpr564)) ; 
}
if ( !(mu__boolexpr563) )
  { mu__quant562 = FALSE; break; }
};
};
};
};
return mu__quant562;
};

bool mu__condition_570() // Condition for Rule "test_reachable_state_29"
{
  return mu__invariant_561( );
}

/**** end rule declaration ****/

int mu__invariant_571() // Invariant "test_reachable_state_28"
{
bool mu__quant572; 
mu__quant572 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr573;
  if (!((mu_i) != (mu_j))) mu__boolexpr573 = TRUE ;
  else {
bool mu__boolexpr574;
bool mu__boolexpr575;
bool mu__boolexpr576;
bool mu__boolexpr577;
bool mu__boolexpr578;
bool mu__boolexpr579;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr575)) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr573 = (!(mu__boolexpr574)) ; 
}
if ( !(mu__boolexpr573) )
  { mu__quant572 = FALSE; break; }
};
};
};
};
return mu__quant572;
};

bool mu__condition_580() // Condition for Rule "test_reachable_state_28"
{
  return mu__invariant_571( );
}

/**** end rule declaration ****/

int mu__invariant_581() // Invariant "test_reachable_state_27"
{
bool mu__quant582; 
mu__quant582 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr583;
  if (!((mu_i) != (mu_j))) mu__boolexpr583 = TRUE ;
  else {
bool mu__boolexpr584;
bool mu__boolexpr585;
bool mu__boolexpr586;
bool mu__boolexpr587;
bool mu__boolexpr588;
bool mu__boolexpr589;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr587)) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr583 = (!(mu__boolexpr584)) ; 
}
if ( !(mu__boolexpr583) )
  { mu__quant582 = FALSE; break; }
};
};
};
};
return mu__quant582;
};

bool mu__condition_590() // Condition for Rule "test_reachable_state_27"
{
  return mu__invariant_581( );
}

/**** end rule declaration ****/

int mu__invariant_591() // Invariant "test_reachable_state_26"
{
bool mu__quant592; 
mu__quant592 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr593;
  if (!((mu_i) != (mu_j))) mu__boolexpr593 = TRUE ;
  else {
bool mu__boolexpr594;
bool mu__boolexpr595;
bool mu__boolexpr596;
bool mu__boolexpr597;
bool mu__boolexpr598;
bool mu__boolexpr599;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr598)) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr597)) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr593 = (!(mu__boolexpr594)) ; 
}
if ( !(mu__boolexpr593) )
  { mu__quant592 = FALSE; break; }
};
};
};
};
return mu__quant592;
};

bool mu__condition_600() // Condition for Rule "test_reachable_state_26"
{
  return mu__invariant_591( );
}

/**** end rule declaration ****/

int mu__invariant_601() // Invariant "test_reachable_state_25"
{
bool mu__quant602; 
mu__quant602 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr603;
  if (!((mu_i) != (mu_j))) mu__boolexpr603 = TRUE ;
  else {
bool mu__boolexpr604;
bool mu__boolexpr605;
bool mu__boolexpr606;
bool mu__boolexpr607;
bool mu__boolexpr608;
bool mu__boolexpr609;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr607)) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr606)) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr603 = (!(mu__boolexpr604)) ; 
}
if ( !(mu__boolexpr603) )
  { mu__quant602 = FALSE; break; }
};
};
};
};
return mu__quant602;
};

bool mu__condition_610() // Condition for Rule "test_reachable_state_25"
{
  return mu__invariant_601( );
}

/**** end rule declaration ****/

int mu__invariant_611() // Invariant "test_reachable_state_24"
{
bool mu__quant612; 
mu__quant612 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr613;
  if (!((mu_i) != (mu_j))) mu__boolexpr613 = TRUE ;
  else {
bool mu__boolexpr614;
bool mu__boolexpr615;
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
bool mu__boolexpr619;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr616)) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr615)) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr613 = (!(mu__boolexpr614)) ; 
}
if ( !(mu__boolexpr613) )
  { mu__quant612 = FALSE; break; }
};
};
};
};
return mu__quant612;
};

bool mu__condition_620() // Condition for Rule "test_reachable_state_24"
{
  return mu__invariant_611( );
}

/**** end rule declaration ****/

int mu__invariant_621() // Invariant "test_reachable_state_23"
{
bool mu__quant622; 
mu__quant622 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr623;
  if (!((mu_i) != (mu_j))) mu__boolexpr623 = TRUE ;
  else {
bool mu__boolexpr624;
bool mu__boolexpr625;
bool mu__boolexpr626;
bool mu__boolexpr627;
bool mu__boolexpr628;
bool mu__boolexpr629;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr627)) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr626)) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr623 = (!(mu__boolexpr624)) ; 
}
if ( !(mu__boolexpr623) )
  { mu__quant622 = FALSE; break; }
};
};
};
};
return mu__quant622;
};

bool mu__condition_630() // Condition for Rule "test_reachable_state_23"
{
  return mu__invariant_621( );
}

/**** end rule declaration ****/

int mu__invariant_631() // Invariant "test_reachable_state_22"
{
bool mu__quant632; 
mu__quant632 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr633;
  if (!((mu_i) != (mu_j))) mu__boolexpr633 = TRUE ;
  else {
bool mu__boolexpr634;
bool mu__boolexpr635;
bool mu__boolexpr636;
bool mu__boolexpr637;
bool mu__boolexpr638;
bool mu__boolexpr639;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr637)) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr636)) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr635)) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr633 = (!(mu__boolexpr634)) ; 
}
if ( !(mu__boolexpr633) )
  { mu__quant632 = FALSE; break; }
};
};
};
};
return mu__quant632;
};

bool mu__condition_640() // Condition for Rule "test_reachable_state_22"
{
  return mu__invariant_631( );
}

/**** end rule declaration ****/

int mu__invariant_641() // Invariant "test_reachable_state_21"
{
bool mu__quant642; 
mu__quant642 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr643;
  if (!((mu_i) != (mu_j))) mu__boolexpr643 = TRUE ;
  else {
bool mu__boolexpr644;
bool mu__boolexpr645;
bool mu__boolexpr646;
bool mu__boolexpr647;
bool mu__boolexpr648;
bool mu__boolexpr649;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr648)) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr647)) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr646)) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr645)) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr643 = (!(mu__boolexpr644)) ; 
}
if ( !(mu__boolexpr643) )
  { mu__quant642 = FALSE; break; }
};
};
};
};
return mu__quant642;
};

bool mu__condition_650() // Condition for Rule "test_reachable_state_21"
{
  return mu__invariant_641( );
}

/**** end rule declaration ****/

int mu__invariant_651() // Invariant "test_reachable_state_20"
{
bool mu__quant652; 
mu__quant652 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr653;
  if (!((mu_i) != (mu_j))) mu__boolexpr653 = TRUE ;
  else {
bool mu__boolexpr654;
bool mu__boolexpr655;
bool mu__boolexpr656;
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr656)) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr653 = (!(mu__boolexpr654)) ; 
}
if ( !(mu__boolexpr653) )
  { mu__quant652 = FALSE; break; }
};
};
};
};
return mu__quant652;
};

bool mu__condition_660() // Condition for Rule "test_reachable_state_20"
{
  return mu__invariant_651( );
}

/**** end rule declaration ****/

int mu__invariant_661() // Invariant "test_reachable_state_19"
{
bool mu__quant662; 
mu__quant662 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr663;
  if (!((mu_i) != (mu_j))) mu__boolexpr663 = TRUE ;
  else {
bool mu__boolexpr664;
bool mu__boolexpr665;
bool mu__boolexpr666;
bool mu__boolexpr667;
bool mu__boolexpr668;
bool mu__boolexpr669;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr668)) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr666)) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr663 = (!(mu__boolexpr664)) ; 
}
if ( !(mu__boolexpr663) )
  { mu__quant662 = FALSE; break; }
};
};
};
};
return mu__quant662;
};

bool mu__condition_670() // Condition for Rule "test_reachable_state_19"
{
  return mu__invariant_661( );
}

/**** end rule declaration ****/

int mu__invariant_671() // Invariant "test_reachable_state_18"
{
bool mu__quant672; 
mu__quant672 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr673;
  if (!((mu_i) != (mu_j))) mu__boolexpr673 = TRUE ;
  else {
bool mu__boolexpr674;
bool mu__boolexpr675;
bool mu__boolexpr676;
bool mu__boolexpr677;
bool mu__boolexpr678;
bool mu__boolexpr679;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr679)) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr677)) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr675)) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr673 = (!(mu__boolexpr674)) ; 
}
if ( !(mu__boolexpr673) )
  { mu__quant672 = FALSE; break; }
};
};
};
};
return mu__quant672;
};

bool mu__condition_680() // Condition for Rule "test_reachable_state_18"
{
  return mu__invariant_671( );
}

/**** end rule declaration ****/

int mu__invariant_681() // Invariant "test_reachable_state_17"
{
bool mu__quant682; 
mu__quant682 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr683;
  if (!((mu_i) != (mu_j))) mu__boolexpr683 = TRUE ;
  else {
bool mu__boolexpr684;
bool mu__boolexpr685;
bool mu__boolexpr686;
bool mu__boolexpr687;
bool mu__boolexpr688;
bool mu__boolexpr689;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr688)) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr687)) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr686)) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr683 = (!(mu__boolexpr684)) ; 
}
if ( !(mu__boolexpr683) )
  { mu__quant682 = FALSE; break; }
};
};
};
};
return mu__quant682;
};

bool mu__condition_690() // Condition for Rule "test_reachable_state_17"
{
  return mu__invariant_681( );
}

/**** end rule declaration ****/

int mu__invariant_691() // Invariant "test_reachable_state_16"
{
bool mu__quant692; 
mu__quant692 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr693;
  if (!((mu_i) != (mu_j))) mu__boolexpr693 = TRUE ;
  else {
bool mu__boolexpr694;
bool mu__boolexpr695;
bool mu__boolexpr696;
bool mu__boolexpr697;
bool mu__boolexpr698;
bool mu__boolexpr699;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr699)) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr695)) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr693 = (!(mu__boolexpr694)) ; 
}
if ( !(mu__boolexpr693) )
  { mu__quant692 = FALSE; break; }
};
};
};
};
return mu__quant692;
};

bool mu__condition_700() // Condition for Rule "test_reachable_state_16"
{
  return mu__invariant_691( );
}

/**** end rule declaration ****/

int mu__invariant_701() // Invariant "test_reachable_state_15"
{
bool mu__quant702; 
mu__quant702 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr703;
  if (!((mu_i) != (mu_j))) mu__boolexpr703 = TRUE ;
  else {
bool mu__boolexpr704;
bool mu__boolexpr705;
bool mu__boolexpr706;
bool mu__boolexpr707;
bool mu__boolexpr708;
bool mu__boolexpr709;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr703 = (!(mu__boolexpr704)) ; 
}
if ( !(mu__boolexpr703) )
  { mu__quant702 = FALSE; break; }
};
};
};
};
return mu__quant702;
};

bool mu__condition_710() // Condition for Rule "test_reachable_state_15"
{
  return mu__invariant_701( );
}

/**** end rule declaration ****/

int mu__invariant_711() // Invariant "test_reachable_state_14"
{
bool mu__quant712; 
mu__quant712 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr713;
  if (!((mu_i) != (mu_j))) mu__boolexpr713 = TRUE ;
  else {
bool mu__boolexpr714;
bool mu__boolexpr715;
bool mu__boolexpr716;
bool mu__boolexpr717;
bool mu__boolexpr718;
bool mu__boolexpr719;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr718)) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr713 = (!(mu__boolexpr714)) ; 
}
if ( !(mu__boolexpr713) )
  { mu__quant712 = FALSE; break; }
};
};
};
};
return mu__quant712;
};

bool mu__condition_720() // Condition for Rule "test_reachable_state_14"
{
  return mu__invariant_711( );
}

/**** end rule declaration ****/

int mu__invariant_721() // Invariant "test_reachable_state_13"
{
bool mu__quant722; 
mu__quant722 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr723;
  if (!((mu_i) != (mu_j))) mu__boolexpr723 = TRUE ;
  else {
bool mu__boolexpr724;
bool mu__boolexpr725;
bool mu__boolexpr726;
bool mu__boolexpr727;
bool mu__boolexpr728;
bool mu__boolexpr729;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr729)) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
  mu__boolexpr727 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr727)) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr725)) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr723 = (!(mu__boolexpr724)) ; 
}
if ( !(mu__boolexpr723) )
  { mu__quant722 = FALSE; break; }
};
};
};
};
return mu__quant722;
};

bool mu__condition_730() // Condition for Rule "test_reachable_state_13"
{
  return mu__invariant_721( );
}

/**** end rule declaration ****/

int mu__invariant_731() // Invariant "test_reachable_state_12"
{
bool mu__quant732; 
mu__quant732 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr733;
  if (!((mu_i) != (mu_j))) mu__boolexpr733 = TRUE ;
  else {
bool mu__boolexpr734;
bool mu__boolexpr735;
bool mu__boolexpr736;
bool mu__boolexpr737;
bool mu__boolexpr738;
bool mu__boolexpr739;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr739)) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr737)) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr736)) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr735)) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr733 = (!(mu__boolexpr734)) ; 
}
if ( !(mu__boolexpr733) )
  { mu__quant732 = FALSE; break; }
};
};
};
};
return mu__quant732;
};

bool mu__condition_740() // Condition for Rule "test_reachable_state_12"
{
  return mu__invariant_731( );
}

/**** end rule declaration ****/

int mu__invariant_741() // Invariant "test_reachable_state_11"
{
bool mu__quant742; 
mu__quant742 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr743;
  if (!((mu_i) != (mu_j))) mu__boolexpr743 = TRUE ;
  else {
bool mu__boolexpr744;
bool mu__boolexpr745;
bool mu__boolexpr746;
bool mu__boolexpr747;
bool mu__boolexpr748;
bool mu__boolexpr749;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr749)) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr748)) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr745)) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr743 = (!(mu__boolexpr744)) ; 
}
if ( !(mu__boolexpr743) )
  { mu__quant742 = FALSE; break; }
};
};
};
};
return mu__quant742;
};

bool mu__condition_750() // Condition for Rule "test_reachable_state_11"
{
  return mu__invariant_741( );
}

/**** end rule declaration ****/

int mu__invariant_751() // Invariant "test_reachable_state_10"
{
bool mu__quant752; 
mu__quant752 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr753;
  if (!((mu_i) != (mu_j))) mu__boolexpr753 = TRUE ;
  else {
bool mu__boolexpr754;
bool mu__boolexpr755;
bool mu__boolexpr756;
bool mu__boolexpr757;
bool mu__boolexpr758;
bool mu__boolexpr759;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr759)) mu__boolexpr758 = FALSE ;
  else {
  mu__boolexpr758 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr758)) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr757)) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr755)) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr753 = (!(mu__boolexpr754)) ; 
}
if ( !(mu__boolexpr753) )
  { mu__quant752 = FALSE; break; }
};
};
};
};
return mu__quant752;
};

bool mu__condition_760() // Condition for Rule "test_reachable_state_10"
{
  return mu__invariant_751( );
}

/**** end rule declaration ****/

int mu__invariant_761() // Invariant "test_reachable_state_9"
{
bool mu__quant762; 
mu__quant762 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr763;
  if (!((mu_i) != (mu_j))) mu__boolexpr763 = TRUE ;
  else {
bool mu__boolexpr764;
bool mu__boolexpr765;
bool mu__boolexpr766;
bool mu__boolexpr767;
bool mu__boolexpr768;
bool mu__boolexpr769;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr768)) mu__boolexpr767 = FALSE ;
  else {
  mu__boolexpr767 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr767)) mu__boolexpr766 = FALSE ;
  else {
  mu__boolexpr766 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr766)) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr763 = (!(mu__boolexpr764)) ; 
}
if ( !(mu__boolexpr763) )
  { mu__quant762 = FALSE; break; }
};
};
};
};
return mu__quant762;
};

bool mu__condition_770() // Condition for Rule "test_reachable_state_9"
{
  return mu__invariant_761( );
}

/**** end rule declaration ****/

int mu__invariant_771() // Invariant "test_reachable_state_8"
{
bool mu__quant772; 
mu__quant772 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr773;
  if (!((mu_i) != (mu_j))) mu__boolexpr773 = TRUE ;
  else {
bool mu__boolexpr774;
bool mu__boolexpr775;
bool mu__boolexpr776;
bool mu__boolexpr777;
bool mu__boolexpr778;
bool mu__boolexpr779;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr777)) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr776)) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr775)) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr773 = (!(mu__boolexpr774)) ; 
}
if ( !(mu__boolexpr773) )
  { mu__quant772 = FALSE; break; }
};
};
};
};
return mu__quant772;
};

bool mu__condition_780() // Condition for Rule "test_reachable_state_8"
{
  return mu__invariant_771( );
}

/**** end rule declaration ****/

int mu__invariant_781() // Invariant "test_reachable_state_7"
{
bool mu__quant782; 
mu__quant782 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr783;
  if (!((mu_i) != (mu_j))) mu__boolexpr783 = TRUE ;
  else {
bool mu__boolexpr784;
bool mu__boolexpr785;
bool mu__boolexpr786;
bool mu__boolexpr787;
bool mu__boolexpr788;
bool mu__boolexpr789;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr789)) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr787)) mu__boolexpr786 = FALSE ;
  else {
  mu__boolexpr786 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr786)) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr785)) mu__boolexpr784 = FALSE ;
  else {
  mu__boolexpr784 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr783 = (!(mu__boolexpr784)) ; 
}
if ( !(mu__boolexpr783) )
  { mu__quant782 = FALSE; break; }
};
};
};
};
return mu__quant782;
};

bool mu__condition_790() // Condition for Rule "test_reachable_state_7"
{
  return mu__invariant_781( );
}

/**** end rule declaration ****/

int mu__invariant_791() // Invariant "test_reachable_state_6"
{
bool mu__quant792; 
mu__quant792 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr793;
  if (!((mu_i) != (mu_j))) mu__boolexpr793 = TRUE ;
  else {
bool mu__boolexpr794;
bool mu__boolexpr795;
bool mu__boolexpr796;
bool mu__boolexpr797;
bool mu__boolexpr798;
bool mu__boolexpr799;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr799 = FALSE ;
  else {
  mu__boolexpr799 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr799)) mu__boolexpr798 = FALSE ;
  else {
  mu__boolexpr798 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr798)) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr796)) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr793 = (!(mu__boolexpr794)) ; 
}
if ( !(mu__boolexpr793) )
  { mu__quant792 = FALSE; break; }
};
};
};
};
return mu__quant792;
};

bool mu__condition_800() // Condition for Rule "test_reachable_state_6"
{
  return mu__invariant_791( );
}

/**** end rule declaration ****/

int mu__invariant_801() // Invariant "test_reachable_state_5"
{
bool mu__quant802; 
mu__quant802 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr803;
  if (!((mu_i) != (mu_j))) mu__boolexpr803 = TRUE ;
  else {
bool mu__boolexpr804;
bool mu__boolexpr805;
bool mu__boolexpr806;
bool mu__boolexpr807;
bool mu__boolexpr808;
bool mu__boolexpr809;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr809 = FALSE ;
  else {
  mu__boolexpr809 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr809)) mu__boolexpr808 = FALSE ;
  else {
  mu__boolexpr808 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr808)) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr807)) mu__boolexpr806 = FALSE ;
  else {
  mu__boolexpr806 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr806)) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr803 = (!(mu__boolexpr804)) ; 
}
if ( !(mu__boolexpr803) )
  { mu__quant802 = FALSE; break; }
};
};
};
};
return mu__quant802;
};

bool mu__condition_810() // Condition for Rule "test_reachable_state_5"
{
  return mu__invariant_801( );
}

/**** end rule declaration ****/

int mu__invariant_811() // Invariant "test_reachable_state_4"
{
bool mu__quant812; 
mu__quant812 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr813;
  if (!((mu_i) != (mu_j))) mu__boolexpr813 = TRUE ;
  else {
bool mu__boolexpr814;
bool mu__boolexpr815;
bool mu__boolexpr816;
bool mu__boolexpr817;
bool mu__boolexpr818;
bool mu__boolexpr819;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr819 = FALSE ;
  else {
  mu__boolexpr819 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr819)) mu__boolexpr818 = FALSE ;
  else {
  mu__boolexpr818 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr818)) mu__boolexpr817 = FALSE ;
  else {
  mu__boolexpr817 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr817)) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr816)) mu__boolexpr815 = FALSE ;
  else {
  mu__boolexpr815 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr815)) mu__boolexpr814 = FALSE ;
  else {
  mu__boolexpr814 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr813 = (!(mu__boolexpr814)) ; 
}
if ( !(mu__boolexpr813) )
  { mu__quant812 = FALSE; break; }
};
};
};
};
return mu__quant812;
};

bool mu__condition_820() // Condition for Rule "test_reachable_state_4"
{
  return mu__invariant_811( );
}

/**** end rule declaration ****/

int mu__invariant_821() // Invariant "test_reachable_state_3"
{
bool mu__quant822; 
mu__quant822 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr823;
  if (!((mu_i) != (mu_j))) mu__boolexpr823 = TRUE ;
  else {
bool mu__boolexpr824;
bool mu__boolexpr825;
bool mu__boolexpr826;
bool mu__boolexpr827;
bool mu__boolexpr828;
bool mu__boolexpr829;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr829 = FALSE ;
  else {
  mu__boolexpr829 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr829)) mu__boolexpr828 = FALSE ;
  else {
  mu__boolexpr828 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr828)) mu__boolexpr827 = FALSE ;
  else {
  mu__boolexpr827 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr827)) mu__boolexpr826 = FALSE ;
  else {
  mu__boolexpr826 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr826)) mu__boolexpr825 = FALSE ;
  else {
  mu__boolexpr825 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr825)) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr823 = (!(mu__boolexpr824)) ; 
}
if ( !(mu__boolexpr823) )
  { mu__quant822 = FALSE; break; }
};
};
};
};
return mu__quant822;
};

bool mu__condition_830() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_821( );
}

/**** end rule declaration ****/

int mu__invariant_831() // Invariant "test_reachable_state_2"
{
bool mu__quant832; 
mu__quant832 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr833;
  if (!((mu_i) != (mu_j))) mu__boolexpr833 = TRUE ;
  else {
bool mu__boolexpr834;
bool mu__boolexpr835;
bool mu__boolexpr836;
bool mu__boolexpr837;
bool mu__boolexpr838;
bool mu__boolexpr839;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr839 = FALSE ;
  else {
  mu__boolexpr839 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr839)) mu__boolexpr838 = FALSE ;
  else {
  mu__boolexpr838 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr838)) mu__boolexpr837 = FALSE ;
  else {
  mu__boolexpr837 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr837)) mu__boolexpr836 = FALSE ;
  else {
  mu__boolexpr836 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr836)) mu__boolexpr835 = FALSE ;
  else {
  mu__boolexpr835 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr835)) mu__boolexpr834 = FALSE ;
  else {
  mu__boolexpr834 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr833 = (!(mu__boolexpr834)) ; 
}
if ( !(mu__boolexpr833) )
  { mu__quant832 = FALSE; break; }
};
};
};
};
return mu__quant832;
};

bool mu__condition_840() // Condition for Rule "test_reachable_state_2"
{
  return mu__invariant_831( );
}

/**** end rule declaration ****/

int mu__invariant_841() // Invariant "test_reachable_state_1"
{
bool mu__quant842; 
mu__quant842 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr843;
  if (!((mu_i) != (mu_j))) mu__boolexpr843 = TRUE ;
  else {
bool mu__boolexpr844;
bool mu__boolexpr845;
bool mu__boolexpr846;
bool mu__boolexpr847;
bool mu__boolexpr848;
bool mu__boolexpr849;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr849 = FALSE ;
  else {
  mu__boolexpr849 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr849)) mu__boolexpr848 = FALSE ;
  else {
  mu__boolexpr848 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr848)) mu__boolexpr847 = FALSE ;
  else {
  mu__boolexpr847 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr847)) mu__boolexpr846 = FALSE ;
  else {
  mu__boolexpr846 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr846)) mu__boolexpr845 = FALSE ;
  else {
  mu__boolexpr845 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr845)) mu__boolexpr844 = FALSE ;
  else {
  mu__boolexpr844 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr843 = (!(mu__boolexpr844)) ; 
}
if ( !(mu__boolexpr843) )
  { mu__quant842 = FALSE; break; }
};
};
};
};
return mu__quant842;
};

bool mu__condition_850() // Condition for Rule "test_reachable_state_1"
{
  return mu__invariant_841( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"test_reachable_state_1", &mu__condition_850, NULL, },
{"test_reachable_state_2", &mu__condition_840, NULL, },
{"test_reachable_state_3", &mu__condition_830, NULL, },
{"test_reachable_state_4", &mu__condition_820, NULL, },
{"test_reachable_state_5", &mu__condition_810, NULL, },
{"test_reachable_state_6", &mu__condition_800, NULL, },
{"test_reachable_state_7", &mu__condition_790, NULL, },
{"test_reachable_state_8", &mu__condition_780, NULL, },
{"test_reachable_state_9", &mu__condition_770, NULL, },
{"test_reachable_state_10", &mu__condition_760, NULL, },
{"test_reachable_state_11", &mu__condition_750, NULL, },
{"test_reachable_state_12", &mu__condition_740, NULL, },
{"test_reachable_state_13", &mu__condition_730, NULL, },
{"test_reachable_state_14", &mu__condition_720, NULL, },
{"test_reachable_state_15", &mu__condition_710, NULL, },
{"test_reachable_state_16", &mu__condition_700, NULL, },
{"test_reachable_state_17", &mu__condition_690, NULL, },
{"test_reachable_state_18", &mu__condition_680, NULL, },
{"test_reachable_state_19", &mu__condition_670, NULL, },
{"test_reachable_state_20", &mu__condition_660, NULL, },
{"test_reachable_state_21", &mu__condition_650, NULL, },
{"test_reachable_state_22", &mu__condition_640, NULL, },
{"test_reachable_state_23", &mu__condition_630, NULL, },
{"test_reachable_state_24", &mu__condition_620, NULL, },
{"test_reachable_state_25", &mu__condition_610, NULL, },
{"test_reachable_state_26", &mu__condition_600, NULL, },
{"test_reachable_state_27", &mu__condition_590, NULL, },
{"test_reachable_state_28", &mu__condition_580, NULL, },
{"test_reachable_state_29", &mu__condition_570, NULL, },
{"test_reachable_state_30", &mu__condition_560, NULL, },
{"test_reachable_state_31", &mu__condition_550, NULL, },
{"test_reachable_state_32", &mu__condition_540, NULL, },
{"test_reachable_state_33", &mu__condition_530, NULL, },
{"test_reachable_state_34", &mu__condition_520, NULL, },
{"test_reachable_state_35", &mu__condition_510, NULL, },
{"test_reachable_state_36", &mu__condition_500, NULL, },
{"test_reachable_state_37", &mu__condition_490, NULL, },
{"test_reachable_state_38", &mu__condition_480, NULL, },
{"test_reachable_state_39", &mu__condition_470, NULL, },
{"test_reachable_state_40", &mu__condition_460, NULL, },
{"test_reachable_state_41", &mu__condition_450, NULL, },
{"test_reachable_state_42", &mu__condition_440, NULL, },
{"test_reachable_state_43", &mu__condition_430, NULL, },
{"test_reachable_state_44", &mu__condition_420, NULL, },
{"test_reachable_state_45", &mu__condition_410, NULL, },
{"test_reachable_state_46", &mu__condition_400, NULL, },
{"test_reachable_state_47", &mu__condition_390, NULL, },
{"test_reachable_state_48", &mu__condition_380, NULL, },
{"test_reachable_state_49", &mu__condition_370, NULL, },
{"test_reachable_state_50", &mu__condition_360, NULL, },
{"test_reachable_state_51", &mu__condition_350, NULL, },
{"test_reachable_state_52", &mu__condition_340, NULL, },
{"test_reachable_state_53", &mu__condition_330, NULL, },
{"test_reachable_state_54", &mu__condition_320, NULL, },
{"test_reachable_state_55", &mu__condition_310, NULL, },
{"test_reachable_state_56", &mu__condition_300, NULL, },
{"test_reachable_state_57", &mu__condition_290, NULL, },
{"test_reachable_state_58", &mu__condition_280, NULL, },
{"test_reachable_state_59", &mu__condition_270, NULL, },
{"test_reachable_state_60", &mu__condition_260, NULL, },
{"test_reachable_state_61", &mu__condition_250, NULL, },
{"test_reachable_state_62", &mu__condition_240, NULL, },
{"test_reachable_state_63", &mu__condition_230, NULL, },
};
const unsigned short numinvariants = 63;

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
