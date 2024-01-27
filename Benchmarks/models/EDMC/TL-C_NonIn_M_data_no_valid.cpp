/******************************
  Program "test.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Nov  1 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Nov  1 2023"
#define PROTOCOL_NAME "test"
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
  // virtual void print()
  //   {
  //     if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
  //     else cout << name << ":Undefined\n";
  //   };
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
  // virtual void print()
  //   {
  //     if (defined()) cout << name << ':' << values[ value() - 2] << '\n';
  //     else cout << name << ":Undefined\n";
  //   };
    virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -2] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
  // virtual void print()
  //   {
  //     if (defined()) cout << name << ':' << values[ value() - 4] << '\n';
  //     else cout << name << ":Undefined\n";
  //   };
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -4] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
  // virtual void print()
  // {
  //   if (defined())
  //     cout << name << ":" << values[ value() -6] << '\n';
  //   else
  //     cout << name << ":Undefined\n";
  // };
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -6] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
  // virtual void print()
  // {
  //   if (defined())
  //     cout << name << ":" << values[ value() -10] << '\n';
  //   else
  //     cout << name << ":Undefined\n";
  // };
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -10] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
  // virtual void print()
  // {
  //   if (defined())
  //     cout << name << ":" << values[ value() -23] << '\n';
  //   else
  //     cout << name << ":Undefined\n";
  // };
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -23] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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

    // set goalstate value: 
// set states
mu_L3.mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[4].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[4].mu_L1[4].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[4].mu_L1[5].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[5].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[5].mu_L1[4].mu_cache[1].mu_state.value(mu_None);
mu_L3.mu_L2[5].mu_L1[5].mu_cache[1].mu_state.value(mu_Branch);
// set states

// mu_Tree[4].mu_master_pending[1].value(mu_pending_Grant);
// mu_Tree[5].mu_master_pending[1].value(mu_pending_Grant);
// mu_Tree[6].mu_master_pending[1].value(mu_pending_Grant);
// mu_Tree[7].mu_master_pending[1].value(mu_pending_Grant);

    // set carelist about invariant 
    carelist.clear(); 
    carelist.push_back("L3.cache[addr_1].state");

    // set carelist about rulebase 
    carelist_rb.clear();  
    carelist_rb.push_back("L3.L2[child_1].cache[addr_1].state");
    carelist_rb.push_back("L3.L2[child_2].cache[addr_1].state");

    carelist_3.clear();  
    carelist_3.push_back("L3.L2[child_1].L1[child_1].cache[addr_1].state");
    carelist_3.push_back("L3.L2[child_1].L1[child_2].cache[addr_1].state");
    carelist_3.push_back("L3.L2[child_2].L1[child_1].cache[addr_1].state");
    carelist_3.push_back("L3.L2[child_2].L1[child_2].cache[addr_1].state");

    carelist_flow.clear(); 
    carelist_flow.push_back("L3.L2[child_1].L1[child_1].pending[addr_1]");  // TODO: 
    carelist_flow.push_back("L3.L2[child_1].L1[child_2].pending[addr_1]");
    carelist_flow.push_back("L3.L2[child_2].L1[child_1].pending[addr_1]");
    carelist_flow.push_back("L3.L2[child_2].L1[child_2].pending[addr_1]");
    
    // carelist_3.push_back("Tree[4].master_pending");
    // carelist_3.push_back("Tree[6].master_pending");

}
void FlowSetter()
{
  flows.clear(); 
  // Init, send_AcquireBlock(Perm)_toT, a:1, b:1, j:2, Ln_receive_Acquire_BtoT(NtoT)_None_None_None, b2:1, b1:1, j:1
  // L3_receive_Acquire_NtoB(NtoT/BtoT)_None_None_None, b:1, Ln_receive_GrantData_toB(toT), b:1, j:1, respond_Grant_NtoT, b:1, j:2
  // S0(0), Rb()
  // vector<int> flow1 = {222, 124, 2, 66, 206, 214};  // TileLink write flow
  // flows.push_back(flow1);
  // write flow: 
}
void Goal_value1() {  // makun: set goalstate
    if (goal_value_flag1) return;
    goal_value_flag1 = true;

// mu_Tree[1].mu_cache.mu_line[1].mu_state.value(mu_None);
// mu_Tree[2].mu_cache.mu_line[1].mu_state.value(mu_None);
// mu_Tree[4].mu_cache.mu_line[1].mu_state.value(mu_Branch);
// mu_Tree[5].mu_cache.mu_line[1].mu_state.value(mu_None);
// mu_Tree[3].mu_cache.mu_line[1].mu_state.value(mu_None);
// mu_Tree[6].mu_cache.mu_line[1].mu_state.value(mu_Branch);
// mu_Tree[7].mu_cache.mu_line[1].mu_state.value(mu_Branch);

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
int mu__invariant_221() // Invariant "test_reachable_state_224"
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

bool mu__condition_230() // Condition for Rule "test_reachable_state_224"
{
  return mu__invariant_221( );
}

/**** end rule declaration ****/

int mu__invariant_231() // Invariant "test_reachable_state_223"
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

bool mu__condition_240() // Condition for Rule "test_reachable_state_223"
{
  return mu__invariant_231( );
}

/**** end rule declaration ****/

int mu__invariant_241() // Invariant "test_reachable_state_222"
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

bool mu__condition_250() // Condition for Rule "test_reachable_state_222"
{
  return mu__invariant_241( );
}

/**** end rule declaration ****/

int mu__invariant_251() // Invariant "test_reachable_state_221"
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

bool mu__condition_260() // Condition for Rule "test_reachable_state_221"
{
  return mu__invariant_251( );
}

/**** end rule declaration ****/

int mu__invariant_261() // Invariant "test_reachable_state_220"
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

bool mu__condition_270() // Condition for Rule "test_reachable_state_220"
{
  return mu__invariant_261( );
}

/**** end rule declaration ****/

int mu__invariant_271() // Invariant "test_reachable_state_219"
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

bool mu__condition_280() // Condition for Rule "test_reachable_state_219"
{
  return mu__invariant_271( );
}

/**** end rule declaration ****/

int mu__invariant_281() // Invariant "test_reachable_state_218"
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

bool mu__condition_290() // Condition for Rule "test_reachable_state_218"
{
  return mu__invariant_281( );
}

/**** end rule declaration ****/

int mu__invariant_291() // Invariant "test_reachable_state_217"
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

bool mu__condition_300() // Condition for Rule "test_reachable_state_217"
{
  return mu__invariant_291( );
}

/**** end rule declaration ****/

int mu__invariant_301() // Invariant "test_reachable_state_216"
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

bool mu__condition_310() // Condition for Rule "test_reachable_state_216"
{
  return mu__invariant_301( );
}

/**** end rule declaration ****/

int mu__invariant_311() // Invariant "test_reachable_state_215"
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

bool mu__condition_320() // Condition for Rule "test_reachable_state_215"
{
  return mu__invariant_311( );
}

/**** end rule declaration ****/

int mu__invariant_321() // Invariant "test_reachable_state_214"
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

bool mu__condition_330() // Condition for Rule "test_reachable_state_214"
{
  return mu__invariant_321( );
}

/**** end rule declaration ****/

int mu__invariant_331() // Invariant "test_reachable_state_213"
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

bool mu__condition_340() // Condition for Rule "test_reachable_state_213"
{
  return mu__invariant_331( );
}

/**** end rule declaration ****/

int mu__invariant_341() // Invariant "test_reachable_state_212"
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

bool mu__condition_350() // Condition for Rule "test_reachable_state_212"
{
  return mu__invariant_341( );
}

/**** end rule declaration ****/

int mu__invariant_351() // Invariant "test_reachable_state_211"
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

bool mu__condition_360() // Condition for Rule "test_reachable_state_211"
{
  return mu__invariant_351( );
}

/**** end rule declaration ****/

int mu__invariant_361() // Invariant "test_reachable_state_210"
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

bool mu__condition_370() // Condition for Rule "test_reachable_state_210"
{
  return mu__invariant_361( );
}

/**** end rule declaration ****/

int mu__invariant_371() // Invariant "test_reachable_state_209"
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

bool mu__condition_380() // Condition for Rule "test_reachable_state_209"
{
  return mu__invariant_371( );
}

/**** end rule declaration ****/

int mu__invariant_381() // Invariant "test_reachable_state_208"
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
  mu__boolexpr385 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_390() // Condition for Rule "test_reachable_state_208"
{
  return mu__invariant_381( );
}

/**** end rule declaration ****/

int mu__invariant_391() // Invariant "test_reachable_state_207"
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
  mu__boolexpr397 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_400() // Condition for Rule "test_reachable_state_207"
{
  return mu__invariant_391( );
}

/**** end rule declaration ****/

int mu__invariant_401() // Invariant "test_reachable_state_206"
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
  mu__boolexpr408 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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
  mu__boolexpr404 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_410() // Condition for Rule "test_reachable_state_206"
{
  return mu__invariant_401( );
}

/**** end rule declaration ****/

int mu__invariant_411() // Invariant "test_reachable_state_205"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr419 = FALSE ;  // goal_value
  else {
  mu__boolexpr419 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_420() // Condition for Rule "test_reachable_state_205"
{
  return mu__invariant_411( );
}

/**** end rule declaration ****/

int mu__invariant_421() // Invariant "test_reachable_state_204"
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
  mu__boolexpr429 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_430() // Condition for Rule "test_reachable_state_204"
{
  return mu__invariant_421( );
}

/**** end rule declaration ****/

int mu__invariant_431() // Invariant "test_reachable_state_203"
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
  mu__boolexpr439 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_440() // Condition for Rule "test_reachable_state_203"
{
  return mu__invariant_431( );
}

/**** end rule declaration ****/

int mu__invariant_441() // Invariant "test_reachable_state_202"
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
  mu__boolexpr449 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_450() // Condition for Rule "test_reachable_state_202"
{
  return mu__invariant_441( );
}

/**** end rule declaration ****/

int mu__invariant_451() // Invariant "test_reachable_state_201"
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
  mu__boolexpr459 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_460() // Condition for Rule "test_reachable_state_201"
{
  return mu__invariant_451( );
}

/**** end rule declaration ****/

int mu__invariant_461() // Invariant "test_reachable_state_200"
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
  mu__boolexpr469 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_470() // Condition for Rule "test_reachable_state_200"
{
  return mu__invariant_461( );
}

/**** end rule declaration ****/

int mu__invariant_471() // Invariant "test_reachable_state_199"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr475 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_480() // Condition for Rule "test_reachable_state_199"
{
  return mu__invariant_471( );
}

/**** end rule declaration ****/

int mu__invariant_481() // Invariant "test_reachable_state_198"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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
  mu__boolexpr484 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_490() // Condition for Rule "test_reachable_state_198"
{
  return mu__invariant_481( );
}

/**** end rule declaration ****/

int mu__invariant_491() // Invariant "test_reachable_state_197"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_500() // Condition for Rule "test_reachable_state_197"
{
  return mu__invariant_491( );
}

/**** end rule declaration ****/

int mu__invariant_501() // Invariant "test_reachable_state_196"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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
  mu__boolexpr505 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_510() // Condition for Rule "test_reachable_state_196"
{
  return mu__invariant_501( );
}

/**** end rule declaration ****/

int mu__invariant_511() // Invariant "test_reachable_state_195"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr515 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_520() // Condition for Rule "test_reachable_state_195"
{
  return mu__invariant_511( );
}

/**** end rule declaration ****/

int mu__invariant_521() // Invariant "test_reachable_state_194"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr524 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_530() // Condition for Rule "test_reachable_state_194"
{
  return mu__invariant_521( );
}

/**** end rule declaration ****/

int mu__invariant_531() // Invariant "test_reachable_state_193"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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
  mu__boolexpr536 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr535)) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_540() // Condition for Rule "test_reachable_state_193"
{
  return mu__invariant_531( );
}

/**** end rule declaration ****/

int mu__invariant_541() // Invariant "test_reachable_state_192"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_550() // Condition for Rule "test_reachable_state_192"
{
  return mu__invariant_541( );
}

/**** end rule declaration ****/

int mu__invariant_551() // Invariant "test_reachable_state_191"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_560() // Condition for Rule "test_reachable_state_191"
{
  return mu__invariant_551( );
}

/**** end rule declaration ****/

int mu__invariant_561() // Invariant "test_reachable_state_190"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_570() // Condition for Rule "test_reachable_state_190"
{
  return mu__invariant_561( );
}

/**** end rule declaration ****/

int mu__invariant_571() // Invariant "test_reachable_state_189"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_580() // Condition for Rule "test_reachable_state_189"
{
  return mu__invariant_571( );
}

/**** end rule declaration ****/

int mu__invariant_581() // Invariant "test_reachable_state_188"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr587)) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_590() // Condition for Rule "test_reachable_state_188"
{
  return mu__invariant_581( );
}

/**** end rule declaration ****/

int mu__invariant_591() // Invariant "test_reachable_state_187"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr598)) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr594 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_600() // Condition for Rule "test_reachable_state_187"
{
  return mu__invariant_591( );
}

/**** end rule declaration ****/

int mu__invariant_601() // Invariant "test_reachable_state_186"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr607)) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr606)) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_610() // Condition for Rule "test_reachable_state_186"
{
  return mu__invariant_601( );
}

/**** end rule declaration ****/

int mu__invariant_611() // Invariant "test_reachable_state_185"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr614 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_620() // Condition for Rule "test_reachable_state_185"
{
  return mu__invariant_611( );
}

/**** end rule declaration ****/

int mu__invariant_621() // Invariant "test_reachable_state_184"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr625 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_630() // Condition for Rule "test_reachable_state_184"
{
  return mu__invariant_621( );
}

/**** end rule declaration ****/

int mu__invariant_631() // Invariant "test_reachable_state_183"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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
  mu__boolexpr634 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_640() // Condition for Rule "test_reachable_state_183"
{
  return mu__invariant_631( );
}

/**** end rule declaration ****/

int mu__invariant_641() // Invariant "test_reachable_state_182"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr648)) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr647)) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr646)) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr645)) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_650() // Condition for Rule "test_reachable_state_182"
{
  return mu__invariant_641( );
}

/**** end rule declaration ****/

int mu__invariant_651() // Invariant "test_reachable_state_181"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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
  mu__boolexpr654 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_660() // Condition for Rule "test_reachable_state_181"
{
  return mu__invariant_651( );
}

/**** end rule declaration ****/

int mu__invariant_661() // Invariant "test_reachable_state_180"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr665 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_670() // Condition for Rule "test_reachable_state_180"
{
  return mu__invariant_661( );
}

/**** end rule declaration ****/

int mu__invariant_671() // Invariant "test_reachable_state_179"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr679)) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr674 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_680() // Condition for Rule "test_reachable_state_179"
{
  return mu__invariant_671( );
}

/**** end rule declaration ****/

int mu__invariant_681() // Invariant "test_reachable_state_178"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr688)) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr687)) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr686)) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_690() // Condition for Rule "test_reachable_state_178"
{
  return mu__invariant_681( );
}

/**** end rule declaration ****/

int mu__invariant_691() // Invariant "test_reachable_state_177"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr699)) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr694 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_700() // Condition for Rule "test_reachable_state_177"
{
  return mu__invariant_691( );
}

/**** end rule declaration ****/

int mu__invariant_701() // Invariant "test_reachable_state_176"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_710() // Condition for Rule "test_reachable_state_176"
{
  return mu__invariant_701( );
}

/**** end rule declaration ****/

int mu__invariant_711() // Invariant "test_reachable_state_175"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr718)) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_720() // Condition for Rule "test_reachable_state_175"
{
  return mu__invariant_711( );
}

/**** end rule declaration ****/

int mu__invariant_721() // Invariant "test_reachable_state_174"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr729)) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
  mu__boolexpr727 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr727)) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr725)) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_730() // Condition for Rule "test_reachable_state_174"
{
  return mu__invariant_721( );
}

/**** end rule declaration ****/

int mu__invariant_731() // Invariant "test_reachable_state_173"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr739)) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr737)) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr736)) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr735)) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_740() // Condition for Rule "test_reachable_state_173"
{
  return mu__invariant_731( );
}

/**** end rule declaration ****/

int mu__invariant_741() // Invariant "test_reachable_state_172"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr749)) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr748)) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr745)) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_750() // Condition for Rule "test_reachable_state_172"
{
  return mu__invariant_741( );
}

/**** end rule declaration ****/

int mu__invariant_751() // Invariant "test_reachable_state_171"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr759)) mu__boolexpr758 = FALSE ;
  else {
  mu__boolexpr758 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr758)) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr757)) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_760() // Condition for Rule "test_reachable_state_171"
{
  return mu__invariant_751( );
}

/**** end rule declaration ****/

int mu__invariant_761() // Invariant "test_reachable_state_170"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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
  mu__boolexpr764 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_770() // Condition for Rule "test_reachable_state_170"
{
  return mu__invariant_761( );
}

/**** end rule declaration ****/

int mu__invariant_771() // Invariant "test_reachable_state_169"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_780() // Condition for Rule "test_reachable_state_169"
{
  return mu__invariant_771( );
}

/**** end rule declaration ****/

int mu__invariant_781() // Invariant "test_reachable_state_168"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr789)) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr787)) mu__boolexpr786 = FALSE ;
  else {
  mu__boolexpr786 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr786)) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr785)) mu__boolexpr784 = FALSE ;
  else {
  mu__boolexpr784 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_790() // Condition for Rule "test_reachable_state_168"
{
  return mu__invariant_781( );
}

/**** end rule declaration ****/

int mu__invariant_791() // Invariant "test_reachable_state_167"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr799 = FALSE ;
  else {
  mu__boolexpr799 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr799)) mu__boolexpr798 = FALSE ;
  else {
  mu__boolexpr798 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr798)) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr796)) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_800() // Condition for Rule "test_reachable_state_167"
{
  return mu__invariant_791( );
}

/**** end rule declaration ****/

int mu__invariant_801() // Invariant "test_reachable_state_166"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr809 = FALSE ;
  else {
  mu__boolexpr809 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr809)) mu__boolexpr808 = FALSE ;
  else {
  mu__boolexpr808 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr808)) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr807)) mu__boolexpr806 = FALSE ;
  else {
  mu__boolexpr806 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr806)) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_810() // Condition for Rule "test_reachable_state_166"
{
  return mu__invariant_801( );
}

/**** end rule declaration ****/

int mu__invariant_811() // Invariant "test_reachable_state_165"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr819 = FALSE ;
  else {
  mu__boolexpr819 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr819)) mu__boolexpr818 = FALSE ;
  else {
  mu__boolexpr818 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr818)) mu__boolexpr817 = FALSE ;
  else {
  mu__boolexpr817 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr817)) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr816)) mu__boolexpr815 = FALSE ;
  else {
  mu__boolexpr815 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr815)) mu__boolexpr814 = FALSE ;
  else {
  mu__boolexpr814 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
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

bool mu__condition_820() // Condition for Rule "test_reachable_state_165"
{
  return mu__invariant_811( );
}

/**** end rule declaration ****/

int mu__invariant_821() // Invariant "test_reachable_state_164"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr829 = FALSE ;
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
  mu__boolexpr826 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr826)) mu__boolexpr825 = FALSE ;
  else {
  mu__boolexpr825 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr825)) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_830() // Condition for Rule "test_reachable_state_164"
{
  return mu__invariant_821( );
}

/**** end rule declaration ****/

int mu__invariant_831() // Invariant "test_reachable_state_163"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr839 = FALSE ;
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
  mu__boolexpr835 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_840() // Condition for Rule "test_reachable_state_163"
{
  return mu__invariant_831( );
}

/**** end rule declaration ****/

int mu__invariant_841() // Invariant "test_reachable_state_162"
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
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr849 = FALSE ;
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
  mu__boolexpr844 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
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

bool mu__condition_850() // Condition for Rule "test_reachable_state_162"
{
  return mu__invariant_841( );
}

/**** end rule declaration ****/

int mu__invariant_851() // Invariant "test_reachable_state_161"
{
bool mu__quant852; 
mu__quant852 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr853;
  if (!((mu_i) != (mu_j))) mu__boolexpr853 = TRUE ;
  else {
bool mu__boolexpr854;
bool mu__boolexpr855;
bool mu__boolexpr856;
bool mu__boolexpr857;
bool mu__boolexpr858;
bool mu__boolexpr859;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr859 = FALSE ;
  else {
  mu__boolexpr859 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr859)) mu__boolexpr858 = FALSE ;
  else {
  mu__boolexpr858 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr858)) mu__boolexpr857 = FALSE ;
  else {
  mu__boolexpr857 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr857)) mu__boolexpr856 = FALSE ;
  else {
  mu__boolexpr856 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr856)) mu__boolexpr855 = FALSE ;
  else {
  mu__boolexpr855 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr855)) mu__boolexpr854 = FALSE ;
  else {
  mu__boolexpr854 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr853 = (!(mu__boolexpr854)) ; 
}
if ( !(mu__boolexpr853) )
  { mu__quant852 = FALSE; break; }
};
};
};
};
return mu__quant852;
};

bool mu__condition_860() // Condition for Rule "test_reachable_state_161"
{
  return mu__invariant_851( );
}

/**** end rule declaration ****/

int mu__invariant_861() // Invariant "test_reachable_state_160"
{
bool mu__quant862; 
mu__quant862 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr863;
  if (!((mu_i) != (mu_j))) mu__boolexpr863 = TRUE ;
  else {
bool mu__boolexpr864;
bool mu__boolexpr865;
bool mu__boolexpr866;
bool mu__boolexpr867;
bool mu__boolexpr868;
bool mu__boolexpr869;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr869 = FALSE ;
  else {
  mu__boolexpr869 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr869)) mu__boolexpr868 = FALSE ;
  else {
  mu__boolexpr868 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr868)) mu__boolexpr867 = FALSE ;
  else {
  mu__boolexpr867 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr867)) mu__boolexpr866 = FALSE ;
  else {
  mu__boolexpr866 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr866)) mu__boolexpr865 = FALSE ;
  else {
  mu__boolexpr865 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr865)) mu__boolexpr864 = FALSE ;
  else {
  mu__boolexpr864 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr863 = (!(mu__boolexpr864)) ; 
}
if ( !(mu__boolexpr863) )
  { mu__quant862 = FALSE; break; }
};
};
};
};
return mu__quant862;
};

bool mu__condition_870() // Condition for Rule "test_reachable_state_160"
{
  return mu__invariant_861( );
}

/**** end rule declaration ****/

int mu__invariant_871() // Invariant "test_reachable_state_159"
{
bool mu__quant872; 
mu__quant872 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr873;
  if (!((mu_i) != (mu_j))) mu__boolexpr873 = TRUE ;
  else {
bool mu__boolexpr874;
bool mu__boolexpr875;
bool mu__boolexpr876;
bool mu__boolexpr877;
bool mu__boolexpr878;
bool mu__boolexpr879;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr879 = FALSE ;
  else {
  mu__boolexpr879 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr879)) mu__boolexpr878 = FALSE ;
  else {
  mu__boolexpr878 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr878)) mu__boolexpr877 = FALSE ;
  else {
  mu__boolexpr877 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr877)) mu__boolexpr876 = FALSE ;
  else {
  mu__boolexpr876 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr876)) mu__boolexpr875 = FALSE ;
  else {
  mu__boolexpr875 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr875)) mu__boolexpr874 = FALSE ;
  else {
  mu__boolexpr874 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr873 = (!(mu__boolexpr874)) ; 
}
if ( !(mu__boolexpr873) )
  { mu__quant872 = FALSE; break; }
};
};
};
};
return mu__quant872;
};

bool mu__condition_880() // Condition for Rule "test_reachable_state_159"
{
  return mu__invariant_871( );
}

/**** end rule declaration ****/

int mu__invariant_881() // Invariant "test_reachable_state_158"
{
bool mu__quant882; 
mu__quant882 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr883;
  if (!((mu_i) != (mu_j))) mu__boolexpr883 = TRUE ;
  else {
bool mu__boolexpr884;
bool mu__boolexpr885;
bool mu__boolexpr886;
bool mu__boolexpr887;
bool mu__boolexpr888;
bool mu__boolexpr889;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr889 = FALSE ;
  else {
  mu__boolexpr889 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr889)) mu__boolexpr888 = FALSE ;
  else {
  mu__boolexpr888 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr888)) mu__boolexpr887 = FALSE ;
  else {
  mu__boolexpr887 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr887)) mu__boolexpr886 = FALSE ;
  else {
  mu__boolexpr886 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr886)) mu__boolexpr885 = FALSE ;
  else {
  mu__boolexpr885 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr885)) mu__boolexpr884 = FALSE ;
  else {
  mu__boolexpr884 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr883 = (!(mu__boolexpr884)) ; 
}
if ( !(mu__boolexpr883) )
  { mu__quant882 = FALSE; break; }
};
};
};
};
return mu__quant882;
};

bool mu__condition_890() // Condition for Rule "test_reachable_state_158"
{
  return mu__invariant_881( );
}

/**** end rule declaration ****/

int mu__invariant_891() // Invariant "test_reachable_state_157"
{
bool mu__quant892; 
mu__quant892 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr893;
  if (!((mu_i) != (mu_j))) mu__boolexpr893 = TRUE ;
  else {
bool mu__boolexpr894;
bool mu__boolexpr895;
bool mu__boolexpr896;
bool mu__boolexpr897;
bool mu__boolexpr898;
bool mu__boolexpr899;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr899 = FALSE ;
  else {
  mu__boolexpr899 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr899)) mu__boolexpr898 = FALSE ;
  else {
  mu__boolexpr898 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr898)) mu__boolexpr897 = FALSE ;
  else {
  mu__boolexpr897 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr897)) mu__boolexpr896 = FALSE ;
  else {
  mu__boolexpr896 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr896)) mu__boolexpr895 = FALSE ;
  else {
  mu__boolexpr895 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr895)) mu__boolexpr894 = FALSE ;
  else {
  mu__boolexpr894 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr893 = (!(mu__boolexpr894)) ; 
}
if ( !(mu__boolexpr893) )
  { mu__quant892 = FALSE; break; }
};
};
};
};
return mu__quant892;
};

bool mu__condition_900() // Condition for Rule "test_reachable_state_157"
{
  return mu__invariant_891( );
}

/**** end rule declaration ****/

int mu__invariant_901() // Invariant "test_reachable_state_156"
{
bool mu__quant902; 
mu__quant902 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr903;
  if (!((mu_i) != (mu_j))) mu__boolexpr903 = TRUE ;
  else {
bool mu__boolexpr904;
bool mu__boolexpr905;
bool mu__boolexpr906;
bool mu__boolexpr907;
bool mu__boolexpr908;
bool mu__boolexpr909;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr909 = FALSE ;
  else {
  mu__boolexpr909 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr909)) mu__boolexpr908 = FALSE ;
  else {
  mu__boolexpr908 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr908)) mu__boolexpr907 = FALSE ;
  else {
  mu__boolexpr907 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr907)) mu__boolexpr906 = FALSE ;
  else {
  mu__boolexpr906 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr906)) mu__boolexpr905 = FALSE ;
  else {
  mu__boolexpr905 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr905)) mu__boolexpr904 = FALSE ;
  else {
  mu__boolexpr904 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr903 = (!(mu__boolexpr904)) ; 
}
if ( !(mu__boolexpr903) )
  { mu__quant902 = FALSE; break; }
};
};
};
};
return mu__quant902;
};

bool mu__condition_910() // Condition for Rule "test_reachable_state_156"
{
  return mu__invariant_901( );
}

/**** end rule declaration ****/

int mu__invariant_911() // Invariant "test_reachable_state_155"
{
bool mu__quant912; 
mu__quant912 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr913;
  if (!((mu_i) != (mu_j))) mu__boolexpr913 = TRUE ;
  else {
bool mu__boolexpr914;
bool mu__boolexpr915;
bool mu__boolexpr916;
bool mu__boolexpr917;
bool mu__boolexpr918;
bool mu__boolexpr919;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr919 = FALSE ;
  else {
  mu__boolexpr919 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr919)) mu__boolexpr918 = FALSE ;
  else {
  mu__boolexpr918 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr918)) mu__boolexpr917 = FALSE ;
  else {
  mu__boolexpr917 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr917)) mu__boolexpr916 = FALSE ;
  else {
  mu__boolexpr916 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr916)) mu__boolexpr915 = FALSE ;
  else {
  mu__boolexpr915 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr915)) mu__boolexpr914 = FALSE ;
  else {
  mu__boolexpr914 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr913 = (!(mu__boolexpr914)) ; 
}
if ( !(mu__boolexpr913) )
  { mu__quant912 = FALSE; break; }
};
};
};
};
return mu__quant912;
};

bool mu__condition_920() // Condition for Rule "test_reachable_state_155"
{
  return mu__invariant_911( );
}

/**** end rule declaration ****/

int mu__invariant_921() // Invariant "test_reachable_state_154"
{
bool mu__quant922; 
mu__quant922 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr923;
  if (!((mu_i) != (mu_j))) mu__boolexpr923 = TRUE ;
  else {
bool mu__boolexpr924;
bool mu__boolexpr925;
bool mu__boolexpr926;
bool mu__boolexpr927;
bool mu__boolexpr928;
bool mu__boolexpr929;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr929 = FALSE ;
  else {
  mu__boolexpr929 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr929)) mu__boolexpr928 = FALSE ;
  else {
  mu__boolexpr928 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr928)) mu__boolexpr927 = FALSE ;
  else {
  mu__boolexpr927 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr927)) mu__boolexpr926 = FALSE ;
  else {
  mu__boolexpr926 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr926)) mu__boolexpr925 = FALSE ;
  else {
  mu__boolexpr925 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr925)) mu__boolexpr924 = FALSE ;
  else {
  mu__boolexpr924 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr923 = (!(mu__boolexpr924)) ; 
}
if ( !(mu__boolexpr923) )
  { mu__quant922 = FALSE; break; }
};
};
};
};
return mu__quant922;
};

bool mu__condition_930() // Condition for Rule "test_reachable_state_154"
{
  return mu__invariant_921( );
}

/**** end rule declaration ****/

int mu__invariant_931() // Invariant "test_reachable_state_153"
{
bool mu__quant932; 
mu__quant932 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr933;
  if (!((mu_i) != (mu_j))) mu__boolexpr933 = TRUE ;
  else {
bool mu__boolexpr934;
bool mu__boolexpr935;
bool mu__boolexpr936;
bool mu__boolexpr937;
bool mu__boolexpr938;
bool mu__boolexpr939;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr939 = FALSE ;
  else {
  mu__boolexpr939 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr939)) mu__boolexpr938 = FALSE ;
  else {
  mu__boolexpr938 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr938)) mu__boolexpr937 = FALSE ;
  else {
  mu__boolexpr937 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr937)) mu__boolexpr936 = FALSE ;
  else {
  mu__boolexpr936 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr936)) mu__boolexpr935 = FALSE ;
  else {
  mu__boolexpr935 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr935)) mu__boolexpr934 = FALSE ;
  else {
  mu__boolexpr934 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr933 = (!(mu__boolexpr934)) ; 
}
if ( !(mu__boolexpr933) )
  { mu__quant932 = FALSE; break; }
};
};
};
};
return mu__quant932;
};

bool mu__condition_940() // Condition for Rule "test_reachable_state_153"
{
  return mu__invariant_931( );
}

/**** end rule declaration ****/

int mu__invariant_941() // Invariant "test_reachable_state_152"
{
bool mu__quant942; 
mu__quant942 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr943;
  if (!((mu_i) != (mu_j))) mu__boolexpr943 = TRUE ;
  else {
bool mu__boolexpr944;
bool mu__boolexpr945;
bool mu__boolexpr946;
bool mu__boolexpr947;
bool mu__boolexpr948;
bool mu__boolexpr949;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr949 = FALSE ;
  else {
  mu__boolexpr949 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr949)) mu__boolexpr948 = FALSE ;
  else {
  mu__boolexpr948 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr948)) mu__boolexpr947 = FALSE ;
  else {
  mu__boolexpr947 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr947)) mu__boolexpr946 = FALSE ;
  else {
  mu__boolexpr946 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr946)) mu__boolexpr945 = FALSE ;
  else {
  mu__boolexpr945 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr945)) mu__boolexpr944 = FALSE ;
  else {
  mu__boolexpr944 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr943 = (!(mu__boolexpr944)) ; 
}
if ( !(mu__boolexpr943) )
  { mu__quant942 = FALSE; break; }
};
};
};
};
return mu__quant942;
};

bool mu__condition_950() // Condition for Rule "test_reachable_state_152"
{
  return mu__invariant_941( );
}

/**** end rule declaration ****/

int mu__invariant_951() // Invariant "test_reachable_state_151"
{
bool mu__quant952; 
mu__quant952 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr953;
  if (!((mu_i) != (mu_j))) mu__boolexpr953 = TRUE ;
  else {
bool mu__boolexpr954;
bool mu__boolexpr955;
bool mu__boolexpr956;
bool mu__boolexpr957;
bool mu__boolexpr958;
bool mu__boolexpr959;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr959 = FALSE ;
  else {
  mu__boolexpr959 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr959)) mu__boolexpr958 = FALSE ;
  else {
  mu__boolexpr958 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr958)) mu__boolexpr957 = FALSE ;
  else {
  mu__boolexpr957 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr957)) mu__boolexpr956 = FALSE ;
  else {
  mu__boolexpr956 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr956)) mu__boolexpr955 = FALSE ;
  else {
  mu__boolexpr955 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr955)) mu__boolexpr954 = FALSE ;
  else {
  mu__boolexpr954 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr953 = (!(mu__boolexpr954)) ; 
}
if ( !(mu__boolexpr953) )
  { mu__quant952 = FALSE; break; }
};
};
};
};
return mu__quant952;
};

bool mu__condition_960() // Condition for Rule "test_reachable_state_151"
{
  return mu__invariant_951( );
}

/**** end rule declaration ****/

int mu__invariant_961() // Invariant "test_reachable_state_150"
{
bool mu__quant962; 
mu__quant962 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr963;
  if (!((mu_i) != (mu_j))) mu__boolexpr963 = TRUE ;
  else {
bool mu__boolexpr964;
bool mu__boolexpr965;
bool mu__boolexpr966;
bool mu__boolexpr967;
bool mu__boolexpr968;
bool mu__boolexpr969;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr969 = FALSE ;
  else {
  mu__boolexpr969 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr969)) mu__boolexpr968 = FALSE ;
  else {
  mu__boolexpr968 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr968)) mu__boolexpr967 = FALSE ;
  else {
  mu__boolexpr967 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr967)) mu__boolexpr966 = FALSE ;
  else {
  mu__boolexpr966 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr966)) mu__boolexpr965 = FALSE ;
  else {
  mu__boolexpr965 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr965)) mu__boolexpr964 = FALSE ;
  else {
  mu__boolexpr964 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr963 = (!(mu__boolexpr964)) ; 
}
if ( !(mu__boolexpr963) )
  { mu__quant962 = FALSE; break; }
};
};
};
};
return mu__quant962;
};

bool mu__condition_970() // Condition for Rule "test_reachable_state_150"
{
  return mu__invariant_961( );
}

/**** end rule declaration ****/

int mu__invariant_971() // Invariant "test_reachable_state_149"
{
bool mu__quant972; 
mu__quant972 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr973;
  if (!((mu_i) != (mu_j))) mu__boolexpr973 = TRUE ;
  else {
bool mu__boolexpr974;
bool mu__boolexpr975;
bool mu__boolexpr976;
bool mu__boolexpr977;
bool mu__boolexpr978;
bool mu__boolexpr979;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr979 = FALSE ;
  else {
  mu__boolexpr979 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr979)) mu__boolexpr978 = FALSE ;
  else {
  mu__boolexpr978 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr978)) mu__boolexpr977 = FALSE ;
  else {
  mu__boolexpr977 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr977)) mu__boolexpr976 = FALSE ;
  else {
  mu__boolexpr976 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr976)) mu__boolexpr975 = FALSE ;
  else {
  mu__boolexpr975 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr975)) mu__boolexpr974 = FALSE ;
  else {
  mu__boolexpr974 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr973 = (!(mu__boolexpr974)) ; 
}
if ( !(mu__boolexpr973) )
  { mu__quant972 = FALSE; break; }
};
};
};
};
return mu__quant972;
};

bool mu__condition_980() // Condition for Rule "test_reachable_state_149"
{
  return mu__invariant_971( );
}

/**** end rule declaration ****/

int mu__invariant_981() // Invariant "test_reachable_state_148"
{
bool mu__quant982; 
mu__quant982 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr983;
  if (!((mu_i) != (mu_j))) mu__boolexpr983 = TRUE ;
  else {
bool mu__boolexpr984;
bool mu__boolexpr985;
bool mu__boolexpr986;
bool mu__boolexpr987;
bool mu__boolexpr988;
bool mu__boolexpr989;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr989 = FALSE ;
  else {
  mu__boolexpr989 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr989)) mu__boolexpr988 = FALSE ;
  else {
  mu__boolexpr988 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr988)) mu__boolexpr987 = FALSE ;
  else {
  mu__boolexpr987 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr987)) mu__boolexpr986 = FALSE ;
  else {
  mu__boolexpr986 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr986)) mu__boolexpr985 = FALSE ;
  else {
  mu__boolexpr985 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr985)) mu__boolexpr984 = FALSE ;
  else {
  mu__boolexpr984 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr983 = (!(mu__boolexpr984)) ; 
}
if ( !(mu__boolexpr983) )
  { mu__quant982 = FALSE; break; }
};
};
};
};
return mu__quant982;
};

bool mu__condition_990() // Condition for Rule "test_reachable_state_148"
{
  return mu__invariant_981( );
}

/**** end rule declaration ****/

int mu__invariant_991() // Invariant "test_reachable_state_147"
{
bool mu__quant992; 
mu__quant992 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr993;
  if (!((mu_i) != (mu_j))) mu__boolexpr993 = TRUE ;
  else {
bool mu__boolexpr994;
bool mu__boolexpr995;
bool mu__boolexpr996;
bool mu__boolexpr997;
bool mu__boolexpr998;
bool mu__boolexpr999;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr999 = FALSE ;
  else {
  mu__boolexpr999 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr999)) mu__boolexpr998 = FALSE ;
  else {
  mu__boolexpr998 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr998)) mu__boolexpr997 = FALSE ;
  else {
  mu__boolexpr997 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr997)) mu__boolexpr996 = FALSE ;
  else {
  mu__boolexpr996 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr996)) mu__boolexpr995 = FALSE ;
  else {
  mu__boolexpr995 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr995)) mu__boolexpr994 = FALSE ;
  else {
  mu__boolexpr994 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr993 = (!(mu__boolexpr994)) ; 
}
if ( !(mu__boolexpr993) )
  { mu__quant992 = FALSE; break; }
};
};
};
};
return mu__quant992;
};

bool mu__condition_1000() // Condition for Rule "test_reachable_state_147"
{
  return mu__invariant_991( );
}

/**** end rule declaration ****/

int mu__invariant_1001() // Invariant "test_reachable_state_146"
{
bool mu__quant1002; 
mu__quant1002 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1003;
  if (!((mu_i) != (mu_j))) mu__boolexpr1003 = TRUE ;
  else {
bool mu__boolexpr1004;
bool mu__boolexpr1005;
bool mu__boolexpr1006;
bool mu__boolexpr1007;
bool mu__boolexpr1008;
bool mu__boolexpr1009;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr1009 = FALSE ;
  else {
  mu__boolexpr1009 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1009)) mu__boolexpr1008 = FALSE ;
  else {
  mu__boolexpr1008 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1008)) mu__boolexpr1007 = FALSE ;
  else {
  mu__boolexpr1007 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1007)) mu__boolexpr1006 = FALSE ;
  else {
  mu__boolexpr1006 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1006)) mu__boolexpr1005 = FALSE ;
  else {
  mu__boolexpr1005 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1005)) mu__boolexpr1004 = FALSE ;
  else {
  mu__boolexpr1004 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1003 = (!(mu__boolexpr1004)) ; 
}
if ( !(mu__boolexpr1003) )
  { mu__quant1002 = FALSE; break; }
};
};
};
};
return mu__quant1002;
};

bool mu__condition_1010() // Condition for Rule "test_reachable_state_146"
{
  return mu__invariant_1001( );
}

/**** end rule declaration ****/

int mu__invariant_1011() // Invariant "test_reachable_state_145"
{
bool mu__quant1012; 
mu__quant1012 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1013;
  if (!((mu_i) != (mu_j))) mu__boolexpr1013 = TRUE ;
  else {
bool mu__boolexpr1014;
bool mu__boolexpr1015;
bool mu__boolexpr1016;
bool mu__boolexpr1017;
bool mu__boolexpr1018;
bool mu__boolexpr1019;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Trunk))) mu__boolexpr1019 = FALSE ;
  else {
  mu__boolexpr1019 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1019)) mu__boolexpr1018 = FALSE ;
  else {
  mu__boolexpr1018 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1018)) mu__boolexpr1017 = FALSE ;
  else {
  mu__boolexpr1017 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1017)) mu__boolexpr1016 = FALSE ;
  else {
  mu__boolexpr1016 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1016)) mu__boolexpr1015 = FALSE ;
  else {
  mu__boolexpr1015 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1015)) mu__boolexpr1014 = FALSE ;
  else {
  mu__boolexpr1014 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr1013 = (!(mu__boolexpr1014)) ; 
}
if ( !(mu__boolexpr1013) )
  { mu__quant1012 = FALSE; break; }
};
};
};
};
return mu__quant1012;
};

bool mu__condition_1020() // Condition for Rule "test_reachable_state_145"
{
  return mu__invariant_1011( );
}

/**** end rule declaration ****/

int mu__invariant_1021() // Invariant "test_reachable_state_144"
{
bool mu__quant1022; 
mu__quant1022 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1023;
  if (!((mu_i) != (mu_j))) mu__boolexpr1023 = TRUE ;
  else {
bool mu__boolexpr1024;
bool mu__boolexpr1025;
bool mu__boolexpr1026;
bool mu__boolexpr1027;
bool mu__boolexpr1028;
bool mu__boolexpr1029;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1029 = FALSE ;
  else {
  mu__boolexpr1029 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1029)) mu__boolexpr1028 = FALSE ;
  else {
  mu__boolexpr1028 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1028)) mu__boolexpr1027 = FALSE ;
  else {
  mu__boolexpr1027 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1027)) mu__boolexpr1026 = FALSE ;
  else {
  mu__boolexpr1026 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1026)) mu__boolexpr1025 = FALSE ;
  else {
  mu__boolexpr1025 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1025)) mu__boolexpr1024 = FALSE ;
  else {
  mu__boolexpr1024 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1023 = (!(mu__boolexpr1024)) ; 
}
if ( !(mu__boolexpr1023) )
  { mu__quant1022 = FALSE; break; }
};
};
};
};
return mu__quant1022;
};

bool mu__condition_1030() // Condition for Rule "test_reachable_state_144"
{
  return mu__invariant_1021( );
}

/**** end rule declaration ****/

int mu__invariant_1031() // Invariant "test_reachable_state_143"
{
bool mu__quant1032; 
mu__quant1032 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1033;
  if (!((mu_i) != (mu_j))) mu__boolexpr1033 = TRUE ;
  else {
bool mu__boolexpr1034;
bool mu__boolexpr1035;
bool mu__boolexpr1036;
bool mu__boolexpr1037;
bool mu__boolexpr1038;
bool mu__boolexpr1039;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1039 = FALSE ;
  else {
  mu__boolexpr1039 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1039)) mu__boolexpr1038 = FALSE ;
  else {
  mu__boolexpr1038 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1038)) mu__boolexpr1037 = FALSE ;
  else {
  mu__boolexpr1037 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1037)) mu__boolexpr1036 = FALSE ;
  else {
  mu__boolexpr1036 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1036)) mu__boolexpr1035 = FALSE ;
  else {
  mu__boolexpr1035 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1035)) mu__boolexpr1034 = FALSE ;
  else {
  mu__boolexpr1034 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1033 = (!(mu__boolexpr1034)) ; 
}
if ( !(mu__boolexpr1033) )
  { mu__quant1032 = FALSE; break; }
};
};
};
};
return mu__quant1032;
};

bool mu__condition_1040() // Condition for Rule "test_reachable_state_143"
{
  return mu__invariant_1031( );
}

/**** end rule declaration ****/

int mu__invariant_1041() // Invariant "test_reachable_state_142"
{
bool mu__quant1042; 
mu__quant1042 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1043;
  if (!((mu_i) != (mu_j))) mu__boolexpr1043 = TRUE ;
  else {
bool mu__boolexpr1044;
bool mu__boolexpr1045;
bool mu__boolexpr1046;
bool mu__boolexpr1047;
bool mu__boolexpr1048;
bool mu__boolexpr1049;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1049 = FALSE ;
  else {
  mu__boolexpr1049 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1049)) mu__boolexpr1048 = FALSE ;
  else {
  mu__boolexpr1048 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1048)) mu__boolexpr1047 = FALSE ;
  else {
  mu__boolexpr1047 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1047)) mu__boolexpr1046 = FALSE ;
  else {
  mu__boolexpr1046 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1046)) mu__boolexpr1045 = FALSE ;
  else {
  mu__boolexpr1045 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1045)) mu__boolexpr1044 = FALSE ;
  else {
  mu__boolexpr1044 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1043 = (!(mu__boolexpr1044)) ; 
}
if ( !(mu__boolexpr1043) )
  { mu__quant1042 = FALSE; break; }
};
};
};
};
return mu__quant1042;
};

bool mu__condition_1050() // Condition for Rule "test_reachable_state_142"
{
  return mu__invariant_1041( );
}

/**** end rule declaration ****/

int mu__invariant_1051() // Invariant "test_reachable_state_141"
{
bool mu__quant1052; 
mu__quant1052 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1053;
  if (!((mu_i) != (mu_j))) mu__boolexpr1053 = TRUE ;
  else {
bool mu__boolexpr1054;
bool mu__boolexpr1055;
bool mu__boolexpr1056;
bool mu__boolexpr1057;
bool mu__boolexpr1058;
bool mu__boolexpr1059;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1059 = FALSE ;
  else {
  mu__boolexpr1059 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1059)) mu__boolexpr1058 = FALSE ;
  else {
  mu__boolexpr1058 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1058)) mu__boolexpr1057 = FALSE ;
  else {
  mu__boolexpr1057 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1057)) mu__boolexpr1056 = FALSE ;
  else {
  mu__boolexpr1056 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1056)) mu__boolexpr1055 = FALSE ;
  else {
  mu__boolexpr1055 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1055)) mu__boolexpr1054 = FALSE ;
  else {
  mu__boolexpr1054 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1053 = (!(mu__boolexpr1054)) ; 
}
if ( !(mu__boolexpr1053) )
  { mu__quant1052 = FALSE; break; }
};
};
};
};
return mu__quant1052;
};

bool mu__condition_1060() // Condition for Rule "test_reachable_state_141"
{
  return mu__invariant_1051( );
}

/**** end rule declaration ****/

int mu__invariant_1061() // Invariant "test_reachable_state_140"
{
bool mu__quant1062; 
mu__quant1062 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1063;
  if (!((mu_i) != (mu_j))) mu__boolexpr1063 = TRUE ;
  else {
bool mu__boolexpr1064;
bool mu__boolexpr1065;
bool mu__boolexpr1066;
bool mu__boolexpr1067;
bool mu__boolexpr1068;
bool mu__boolexpr1069;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1069 = FALSE ;
  else {
  mu__boolexpr1069 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1069)) mu__boolexpr1068 = FALSE ;
  else {
  mu__boolexpr1068 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1068)) mu__boolexpr1067 = FALSE ;
  else {
  mu__boolexpr1067 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1067)) mu__boolexpr1066 = FALSE ;
  else {
  mu__boolexpr1066 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1066)) mu__boolexpr1065 = FALSE ;
  else {
  mu__boolexpr1065 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1065)) mu__boolexpr1064 = FALSE ;
  else {
  mu__boolexpr1064 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1063 = (!(mu__boolexpr1064)) ; 
}
if ( !(mu__boolexpr1063) )
  { mu__quant1062 = FALSE; break; }
};
};
};
};
return mu__quant1062;
};

bool mu__condition_1070() // Condition for Rule "test_reachable_state_140"
{
  return mu__invariant_1061( );
}

/**** end rule declaration ****/

int mu__invariant_1071() // Invariant "test_reachable_state_139"
{
bool mu__quant1072; 
mu__quant1072 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1073;
  if (!((mu_i) != (mu_j))) mu__boolexpr1073 = TRUE ;
  else {
bool mu__boolexpr1074;
bool mu__boolexpr1075;
bool mu__boolexpr1076;
bool mu__boolexpr1077;
bool mu__boolexpr1078;
bool mu__boolexpr1079;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1079 = FALSE ;
  else {
  mu__boolexpr1079 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1079)) mu__boolexpr1078 = FALSE ;
  else {
  mu__boolexpr1078 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1078)) mu__boolexpr1077 = FALSE ;
  else {
  mu__boolexpr1077 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1077)) mu__boolexpr1076 = FALSE ;
  else {
  mu__boolexpr1076 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1076)) mu__boolexpr1075 = FALSE ;
  else {
  mu__boolexpr1075 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1075)) mu__boolexpr1074 = FALSE ;
  else {
  mu__boolexpr1074 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1073 = (!(mu__boolexpr1074)) ; 
}
if ( !(mu__boolexpr1073) )
  { mu__quant1072 = FALSE; break; }
};
};
};
};
return mu__quant1072;
};

bool mu__condition_1080() // Condition for Rule "test_reachable_state_139"
{
  return mu__invariant_1071( );
}

/**** end rule declaration ****/

int mu__invariant_1081() // Invariant "test_reachable_state_138"
{
bool mu__quant1082; 
mu__quant1082 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1083;
  if (!((mu_i) != (mu_j))) mu__boolexpr1083 = TRUE ;
  else {
bool mu__boolexpr1084;
bool mu__boolexpr1085;
bool mu__boolexpr1086;
bool mu__boolexpr1087;
bool mu__boolexpr1088;
bool mu__boolexpr1089;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1089 = FALSE ;
  else {
  mu__boolexpr1089 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1089)) mu__boolexpr1088 = FALSE ;
  else {
  mu__boolexpr1088 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1088)) mu__boolexpr1087 = FALSE ;
  else {
  mu__boolexpr1087 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1087)) mu__boolexpr1086 = FALSE ;
  else {
  mu__boolexpr1086 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1086)) mu__boolexpr1085 = FALSE ;
  else {
  mu__boolexpr1085 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1085)) mu__boolexpr1084 = FALSE ;
  else {
  mu__boolexpr1084 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1083 = (!(mu__boolexpr1084)) ; 
}
if ( !(mu__boolexpr1083) )
  { mu__quant1082 = FALSE; break; }
};
};
};
};
return mu__quant1082;
};

bool mu__condition_1090() // Condition for Rule "test_reachable_state_138"
{
  return mu__invariant_1081( );
}

/**** end rule declaration ****/

int mu__invariant_1091() // Invariant "test_reachable_state_137"
{
bool mu__quant1092; 
mu__quant1092 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1093;
  if (!((mu_i) != (mu_j))) mu__boolexpr1093 = TRUE ;
  else {
bool mu__boolexpr1094;
bool mu__boolexpr1095;
bool mu__boolexpr1096;
bool mu__boolexpr1097;
bool mu__boolexpr1098;
bool mu__boolexpr1099;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1099 = FALSE ;
  else {
  mu__boolexpr1099 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1099)) mu__boolexpr1098 = FALSE ;
  else {
  mu__boolexpr1098 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1098)) mu__boolexpr1097 = FALSE ;
  else {
  mu__boolexpr1097 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1097)) mu__boolexpr1096 = FALSE ;
  else {
  mu__boolexpr1096 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1096)) mu__boolexpr1095 = FALSE ;
  else {
  mu__boolexpr1095 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1095)) mu__boolexpr1094 = FALSE ;
  else {
  mu__boolexpr1094 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1093 = (!(mu__boolexpr1094)) ; 
}
if ( !(mu__boolexpr1093) )
  { mu__quant1092 = FALSE; break; }
};
};
};
};
return mu__quant1092;
};

bool mu__condition_1100() // Condition for Rule "test_reachable_state_137"
{
  return mu__invariant_1091( );
}

/**** end rule declaration ****/

int mu__invariant_1101() // Invariant "test_reachable_state_136"
{
bool mu__quant1102; 
mu__quant1102 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1103;
  if (!((mu_i) != (mu_j))) mu__boolexpr1103 = TRUE ;
  else {
bool mu__boolexpr1104;
bool mu__boolexpr1105;
bool mu__boolexpr1106;
bool mu__boolexpr1107;
bool mu__boolexpr1108;
bool mu__boolexpr1109;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1109 = FALSE ;
  else {
  mu__boolexpr1109 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1109)) mu__boolexpr1108 = FALSE ;
  else {
  mu__boolexpr1108 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1108)) mu__boolexpr1107 = FALSE ;
  else {
  mu__boolexpr1107 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1107)) mu__boolexpr1106 = FALSE ;
  else {
  mu__boolexpr1106 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1106)) mu__boolexpr1105 = FALSE ;
  else {
  mu__boolexpr1105 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1105)) mu__boolexpr1104 = FALSE ;
  else {
  mu__boolexpr1104 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1103 = (!(mu__boolexpr1104)) ; 
}
if ( !(mu__boolexpr1103) )
  { mu__quant1102 = FALSE; break; }
};
};
};
};
return mu__quant1102;
};

bool mu__condition_1110() // Condition for Rule "test_reachable_state_136"
{
  return mu__invariant_1101( );
}

/**** end rule declaration ****/

int mu__invariant_1111() // Invariant "test_reachable_state_135"
{
bool mu__quant1112; 
mu__quant1112 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1113;
  if (!((mu_i) != (mu_j))) mu__boolexpr1113 = TRUE ;
  else {
bool mu__boolexpr1114;
bool mu__boolexpr1115;
bool mu__boolexpr1116;
bool mu__boolexpr1117;
bool mu__boolexpr1118;
bool mu__boolexpr1119;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1119 = FALSE ;
  else {
  mu__boolexpr1119 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1119)) mu__boolexpr1118 = FALSE ;
  else {
  mu__boolexpr1118 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1118)) mu__boolexpr1117 = FALSE ;
  else {
  mu__boolexpr1117 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1117)) mu__boolexpr1116 = FALSE ;
  else {
  mu__boolexpr1116 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1116)) mu__boolexpr1115 = FALSE ;
  else {
  mu__boolexpr1115 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1115)) mu__boolexpr1114 = FALSE ;
  else {
  mu__boolexpr1114 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1113 = (!(mu__boolexpr1114)) ; 
}
if ( !(mu__boolexpr1113) )
  { mu__quant1112 = FALSE; break; }
};
};
};
};
return mu__quant1112;
};

bool mu__condition_1120() // Condition for Rule "test_reachable_state_135"
{
  return mu__invariant_1111( );
}

/**** end rule declaration ****/

int mu__invariant_1121() // Invariant "test_reachable_state_134"
{
bool mu__quant1122; 
mu__quant1122 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1123;
  if (!((mu_i) != (mu_j))) mu__boolexpr1123 = TRUE ;
  else {
bool mu__boolexpr1124;
bool mu__boolexpr1125;
bool mu__boolexpr1126;
bool mu__boolexpr1127;
bool mu__boolexpr1128;
bool mu__boolexpr1129;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1129 = FALSE ;
  else {
  mu__boolexpr1129 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1129)) mu__boolexpr1128 = FALSE ;
  else {
  mu__boolexpr1128 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1128)) mu__boolexpr1127 = FALSE ;
  else {
  mu__boolexpr1127 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1127)) mu__boolexpr1126 = FALSE ;
  else {
  mu__boolexpr1126 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1126)) mu__boolexpr1125 = FALSE ;
  else {
  mu__boolexpr1125 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1125)) mu__boolexpr1124 = FALSE ;
  else {
  mu__boolexpr1124 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1123 = (!(mu__boolexpr1124)) ; 
}
if ( !(mu__boolexpr1123) )
  { mu__quant1122 = FALSE; break; }
};
};
};
};
return mu__quant1122;
};

bool mu__condition_1130() // Condition for Rule "test_reachable_state_134"
{
  return mu__invariant_1121( );
}

/**** end rule declaration ****/

int mu__invariant_1131() // Invariant "test_reachable_state_133"
{
bool mu__quant1132; 
mu__quant1132 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1133;
  if (!((mu_i) != (mu_j))) mu__boolexpr1133 = TRUE ;
  else {
bool mu__boolexpr1134;
bool mu__boolexpr1135;
bool mu__boolexpr1136;
bool mu__boolexpr1137;
bool mu__boolexpr1138;
bool mu__boolexpr1139;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1139 = FALSE ;
  else {
  mu__boolexpr1139 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1139)) mu__boolexpr1138 = FALSE ;
  else {
  mu__boolexpr1138 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1138)) mu__boolexpr1137 = FALSE ;
  else {
  mu__boolexpr1137 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1137)) mu__boolexpr1136 = FALSE ;
  else {
  mu__boolexpr1136 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1136)) mu__boolexpr1135 = FALSE ;
  else {
  mu__boolexpr1135 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1135)) mu__boolexpr1134 = FALSE ;
  else {
  mu__boolexpr1134 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1133 = (!(mu__boolexpr1134)) ; 
}
if ( !(mu__boolexpr1133) )
  { mu__quant1132 = FALSE; break; }
};
};
};
};
return mu__quant1132;
};

bool mu__condition_1140() // Condition for Rule "test_reachable_state_133"
{
  return mu__invariant_1131( );
}

/**** end rule declaration ****/

int mu__invariant_1141() // Invariant "test_reachable_state_132"
{
bool mu__quant1142; 
mu__quant1142 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1143;
  if (!((mu_i) != (mu_j))) mu__boolexpr1143 = TRUE ;
  else {
bool mu__boolexpr1144;
bool mu__boolexpr1145;
bool mu__boolexpr1146;
bool mu__boolexpr1147;
bool mu__boolexpr1148;
bool mu__boolexpr1149;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1149 = FALSE ;
  else {
  mu__boolexpr1149 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1149)) mu__boolexpr1148 = FALSE ;
  else {
  mu__boolexpr1148 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1148)) mu__boolexpr1147 = FALSE ;
  else {
  mu__boolexpr1147 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1147)) mu__boolexpr1146 = FALSE ;
  else {
  mu__boolexpr1146 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1146)) mu__boolexpr1145 = FALSE ;
  else {
  mu__boolexpr1145 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1145)) mu__boolexpr1144 = FALSE ;
  else {
  mu__boolexpr1144 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1143 = (!(mu__boolexpr1144)) ; 
}
if ( !(mu__boolexpr1143) )
  { mu__quant1142 = FALSE; break; }
};
};
};
};
return mu__quant1142;
};

bool mu__condition_1150() // Condition for Rule "test_reachable_state_132"
{
  return mu__invariant_1141( );
}

/**** end rule declaration ****/

int mu__invariant_1151() // Invariant "test_reachable_state_131"
{
bool mu__quant1152; 
mu__quant1152 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1153;
  if (!((mu_i) != (mu_j))) mu__boolexpr1153 = TRUE ;
  else {
bool mu__boolexpr1154;
bool mu__boolexpr1155;
bool mu__boolexpr1156;
bool mu__boolexpr1157;
bool mu__boolexpr1158;
bool mu__boolexpr1159;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1159 = FALSE ;
  else {
  mu__boolexpr1159 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1159)) mu__boolexpr1158 = FALSE ;
  else {
  mu__boolexpr1158 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1158)) mu__boolexpr1157 = FALSE ;
  else {
  mu__boolexpr1157 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1157)) mu__boolexpr1156 = FALSE ;
  else {
  mu__boolexpr1156 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1156)) mu__boolexpr1155 = FALSE ;
  else {
  mu__boolexpr1155 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1155)) mu__boolexpr1154 = FALSE ;
  else {
  mu__boolexpr1154 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1153 = (!(mu__boolexpr1154)) ; 
}
if ( !(mu__boolexpr1153) )
  { mu__quant1152 = FALSE; break; }
};
};
};
};
return mu__quant1152;
};

bool mu__condition_1160() // Condition for Rule "test_reachable_state_131"
{
  return mu__invariant_1151( );
}

/**** end rule declaration ****/

int mu__invariant_1161() // Invariant "test_reachable_state_130"
{
bool mu__quant1162; 
mu__quant1162 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1163;
  if (!((mu_i) != (mu_j))) mu__boolexpr1163 = TRUE ;
  else {
bool mu__boolexpr1164;
bool mu__boolexpr1165;
bool mu__boolexpr1166;
bool mu__boolexpr1167;
bool mu__boolexpr1168;
bool mu__boolexpr1169;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1169 = FALSE ;
  else {
  mu__boolexpr1169 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1169)) mu__boolexpr1168 = FALSE ;
  else {
  mu__boolexpr1168 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1168)) mu__boolexpr1167 = FALSE ;
  else {
  mu__boolexpr1167 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1167)) mu__boolexpr1166 = FALSE ;
  else {
  mu__boolexpr1166 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1166)) mu__boolexpr1165 = FALSE ;
  else {
  mu__boolexpr1165 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1165)) mu__boolexpr1164 = FALSE ;
  else {
  mu__boolexpr1164 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1163 = (!(mu__boolexpr1164)) ; 
}
if ( !(mu__boolexpr1163) )
  { mu__quant1162 = FALSE; break; }
};
};
};
};
return mu__quant1162;
};

bool mu__condition_1170() // Condition for Rule "test_reachable_state_130"
{
  return mu__invariant_1161( );
}

/**** end rule declaration ****/

int mu__invariant_1171() // Invariant "test_reachable_state_129"
{
bool mu__quant1172; 
mu__quant1172 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1173;
  if (!((mu_i) != (mu_j))) mu__boolexpr1173 = TRUE ;
  else {
bool mu__boolexpr1174;
bool mu__boolexpr1175;
bool mu__boolexpr1176;
bool mu__boolexpr1177;
bool mu__boolexpr1178;
bool mu__boolexpr1179;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1179 = FALSE ;
  else {
  mu__boolexpr1179 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1179)) mu__boolexpr1178 = FALSE ;
  else {
  mu__boolexpr1178 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1178)) mu__boolexpr1177 = FALSE ;
  else {
  mu__boolexpr1177 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1177)) mu__boolexpr1176 = FALSE ;
  else {
  mu__boolexpr1176 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1176)) mu__boolexpr1175 = FALSE ;
  else {
  mu__boolexpr1175 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1175)) mu__boolexpr1174 = FALSE ;
  else {
  mu__boolexpr1174 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1173 = (!(mu__boolexpr1174)) ; 
}
if ( !(mu__boolexpr1173) )
  { mu__quant1172 = FALSE; break; }
};
};
};
};
return mu__quant1172;
};

bool mu__condition_1180() // Condition for Rule "test_reachable_state_129"
{
  return mu__invariant_1171( );
}

/**** end rule declaration ****/

int mu__invariant_1181() // Invariant "test_reachable_state_128"
{
bool mu__quant1182; 
mu__quant1182 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1183;
  if (!((mu_i) != (mu_j))) mu__boolexpr1183 = TRUE ;
  else {
bool mu__boolexpr1184;
bool mu__boolexpr1185;
bool mu__boolexpr1186;
bool mu__boolexpr1187;
bool mu__boolexpr1188;
bool mu__boolexpr1189;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1189 = FALSE ;
  else {
  mu__boolexpr1189 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1189)) mu__boolexpr1188 = FALSE ;
  else {
  mu__boolexpr1188 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1188)) mu__boolexpr1187 = FALSE ;
  else {
  mu__boolexpr1187 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1187)) mu__boolexpr1186 = FALSE ;
  else {
  mu__boolexpr1186 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1186)) mu__boolexpr1185 = FALSE ;
  else {
  mu__boolexpr1185 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1185)) mu__boolexpr1184 = FALSE ;
  else {
  mu__boolexpr1184 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1183 = (!(mu__boolexpr1184)) ; 
}
if ( !(mu__boolexpr1183) )
  { mu__quant1182 = FALSE; break; }
};
};
};
};
return mu__quant1182;
};

bool mu__condition_1190() // Condition for Rule "test_reachable_state_128"
{
  return mu__invariant_1181( );
}

/**** end rule declaration ****/

int mu__invariant_1191() // Invariant "test_reachable_state_127"
{
bool mu__quant1192; 
mu__quant1192 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1193;
  if (!((mu_i) != (mu_j))) mu__boolexpr1193 = TRUE ;
  else {
bool mu__boolexpr1194;
bool mu__boolexpr1195;
bool mu__boolexpr1196;
bool mu__boolexpr1197;
bool mu__boolexpr1198;
bool mu__boolexpr1199;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1199 = FALSE ;
  else {
  mu__boolexpr1199 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1199)) mu__boolexpr1198 = FALSE ;
  else {
  mu__boolexpr1198 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1198)) mu__boolexpr1197 = FALSE ;
  else {
  mu__boolexpr1197 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1197)) mu__boolexpr1196 = FALSE ;
  else {
  mu__boolexpr1196 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1196)) mu__boolexpr1195 = FALSE ;
  else {
  mu__boolexpr1195 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1195)) mu__boolexpr1194 = FALSE ;
  else {
  mu__boolexpr1194 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1193 = (!(mu__boolexpr1194)) ; 
}
if ( !(mu__boolexpr1193) )
  { mu__quant1192 = FALSE; break; }
};
};
};
};
return mu__quant1192;
};

bool mu__condition_1200() // Condition for Rule "test_reachable_state_127"
{
  return mu__invariant_1191( );
}

/**** end rule declaration ****/

int mu__invariant_1201() // Invariant "test_reachable_state_126"
{
bool mu__quant1202; 
mu__quant1202 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1203;
  if (!((mu_i) != (mu_j))) mu__boolexpr1203 = TRUE ;
  else {
bool mu__boolexpr1204;
bool mu__boolexpr1205;
bool mu__boolexpr1206;
bool mu__boolexpr1207;
bool mu__boolexpr1208;
bool mu__boolexpr1209;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1209 = FALSE ;
  else {
  mu__boolexpr1209 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1209)) mu__boolexpr1208 = FALSE ;
  else {
  mu__boolexpr1208 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1208)) mu__boolexpr1207 = FALSE ;
  else {
  mu__boolexpr1207 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1207)) mu__boolexpr1206 = FALSE ;
  else {
  mu__boolexpr1206 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1206)) mu__boolexpr1205 = FALSE ;
  else {
  mu__boolexpr1205 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1205)) mu__boolexpr1204 = FALSE ;
  else {
  mu__boolexpr1204 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1203 = (!(mu__boolexpr1204)) ; 
}
if ( !(mu__boolexpr1203) )
  { mu__quant1202 = FALSE; break; }
};
};
};
};
return mu__quant1202;
};

bool mu__condition_1210() // Condition for Rule "test_reachable_state_126"
{
  return mu__invariant_1201( );
}

/**** end rule declaration ****/

int mu__invariant_1211() // Invariant "test_reachable_state_125"
{
bool mu__quant1212; 
mu__quant1212 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1213;
  if (!((mu_i) != (mu_j))) mu__boolexpr1213 = TRUE ;
  else {
bool mu__boolexpr1214;
bool mu__boolexpr1215;
bool mu__boolexpr1216;
bool mu__boolexpr1217;
bool mu__boolexpr1218;
bool mu__boolexpr1219;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1219 = FALSE ;
  else {
  mu__boolexpr1219 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1219)) mu__boolexpr1218 = FALSE ;
  else {
  mu__boolexpr1218 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1218)) mu__boolexpr1217 = FALSE ;
  else {
  mu__boolexpr1217 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1217)) mu__boolexpr1216 = FALSE ;
  else {
  mu__boolexpr1216 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1216)) mu__boolexpr1215 = FALSE ;
  else {
  mu__boolexpr1215 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1215)) mu__boolexpr1214 = FALSE ;
  else {
  mu__boolexpr1214 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1213 = (!(mu__boolexpr1214)) ; 
}
if ( !(mu__boolexpr1213) )
  { mu__quant1212 = FALSE; break; }
};
};
};
};
return mu__quant1212;
};

bool mu__condition_1220() // Condition for Rule "test_reachable_state_125"
{
  return mu__invariant_1211( );
}

/**** end rule declaration ****/

int mu__invariant_1221() // Invariant "test_reachable_state_124"
{
bool mu__quant1222; 
mu__quant1222 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1223;
  if (!((mu_i) != (mu_j))) mu__boolexpr1223 = TRUE ;
  else {
bool mu__boolexpr1224;
bool mu__boolexpr1225;
bool mu__boolexpr1226;
bool mu__boolexpr1227;
bool mu__boolexpr1228;
bool mu__boolexpr1229;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1229 = FALSE ;
  else {
  mu__boolexpr1229 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1229)) mu__boolexpr1228 = FALSE ;
  else {
  mu__boolexpr1228 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1228)) mu__boolexpr1227 = FALSE ;
  else {
  mu__boolexpr1227 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1227)) mu__boolexpr1226 = FALSE ;
  else {
  mu__boolexpr1226 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1226)) mu__boolexpr1225 = FALSE ;
  else {
  mu__boolexpr1225 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1225)) mu__boolexpr1224 = FALSE ;
  else {
  mu__boolexpr1224 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1223 = (!(mu__boolexpr1224)) ; 
}
if ( !(mu__boolexpr1223) )
  { mu__quant1222 = FALSE; break; }
};
};
};
};
return mu__quant1222;
};

bool mu__condition_1230() // Condition for Rule "test_reachable_state_124"
{
  return mu__invariant_1221( );
}

/**** end rule declaration ****/

int mu__invariant_1231() // Invariant "test_reachable_state_123"
{
bool mu__quant1232; 
mu__quant1232 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1233;
  if (!((mu_i) != (mu_j))) mu__boolexpr1233 = TRUE ;
  else {
bool mu__boolexpr1234;
bool mu__boolexpr1235;
bool mu__boolexpr1236;
bool mu__boolexpr1237;
bool mu__boolexpr1238;
bool mu__boolexpr1239;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1239 = FALSE ;
  else {
  mu__boolexpr1239 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1239)) mu__boolexpr1238 = FALSE ;
  else {
  mu__boolexpr1238 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1238)) mu__boolexpr1237 = FALSE ;
  else {
  mu__boolexpr1237 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1237)) mu__boolexpr1236 = FALSE ;
  else {
  mu__boolexpr1236 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1236)) mu__boolexpr1235 = FALSE ;
  else {
  mu__boolexpr1235 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1235)) mu__boolexpr1234 = FALSE ;
  else {
  mu__boolexpr1234 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1233 = (!(mu__boolexpr1234)) ; 
}
if ( !(mu__boolexpr1233) )
  { mu__quant1232 = FALSE; break; }
};
};
};
};
return mu__quant1232;
};

bool mu__condition_1240() // Condition for Rule "test_reachable_state_123"
{
  return mu__invariant_1231( );
}

/**** end rule declaration ****/

int mu__invariant_1241() // Invariant "test_reachable_state_122"
{
bool mu__quant1242; 
mu__quant1242 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1243;
  if (!((mu_i) != (mu_j))) mu__boolexpr1243 = TRUE ;
  else {
bool mu__boolexpr1244;
bool mu__boolexpr1245;
bool mu__boolexpr1246;
bool mu__boolexpr1247;
bool mu__boolexpr1248;
bool mu__boolexpr1249;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1249 = FALSE ;
  else {
  mu__boolexpr1249 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1249)) mu__boolexpr1248 = FALSE ;
  else {
  mu__boolexpr1248 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1248)) mu__boolexpr1247 = FALSE ;
  else {
  mu__boolexpr1247 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1247)) mu__boolexpr1246 = FALSE ;
  else {
  mu__boolexpr1246 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1246)) mu__boolexpr1245 = FALSE ;
  else {
  mu__boolexpr1245 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1245)) mu__boolexpr1244 = FALSE ;
  else {
  mu__boolexpr1244 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1243 = (!(mu__boolexpr1244)) ; 
}
if ( !(mu__boolexpr1243) )
  { mu__quant1242 = FALSE; break; }
};
};
};
};
return mu__quant1242;
};

bool mu__condition_1250() // Condition for Rule "test_reachable_state_122"
{
  return mu__invariant_1241( );
}

/**** end rule declaration ****/

int mu__invariant_1251() // Invariant "test_reachable_state_121"
{
bool mu__quant1252; 
mu__quant1252 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1253;
  if (!((mu_i) != (mu_j))) mu__boolexpr1253 = TRUE ;
  else {
bool mu__boolexpr1254;
bool mu__boolexpr1255;
bool mu__boolexpr1256;
bool mu__boolexpr1257;
bool mu__boolexpr1258;
bool mu__boolexpr1259;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1259 = FALSE ;
  else {
  mu__boolexpr1259 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1259)) mu__boolexpr1258 = FALSE ;
  else {
  mu__boolexpr1258 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1258)) mu__boolexpr1257 = FALSE ;
  else {
  mu__boolexpr1257 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1257)) mu__boolexpr1256 = FALSE ;
  else {
  mu__boolexpr1256 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1256)) mu__boolexpr1255 = FALSE ;
  else {
  mu__boolexpr1255 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1255)) mu__boolexpr1254 = FALSE ;
  else {
  mu__boolexpr1254 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1253 = (!(mu__boolexpr1254)) ; 
}
if ( !(mu__boolexpr1253) )
  { mu__quant1252 = FALSE; break; }
};
};
};
};
return mu__quant1252;
};

bool mu__condition_1260() // Condition for Rule "test_reachable_state_121"
{
  return mu__invariant_1251( );
}

/**** end rule declaration ****/

int mu__invariant_1261() // Invariant "test_reachable_state_120"
{
bool mu__quant1262; 
mu__quant1262 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1263;
  if (!((mu_i) != (mu_j))) mu__boolexpr1263 = TRUE ;
  else {
bool mu__boolexpr1264;
bool mu__boolexpr1265;
bool mu__boolexpr1266;
bool mu__boolexpr1267;
bool mu__boolexpr1268;
bool mu__boolexpr1269;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1269 = FALSE ;
  else {
  mu__boolexpr1269 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1269)) mu__boolexpr1268 = FALSE ;
  else {
  mu__boolexpr1268 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1268)) mu__boolexpr1267 = FALSE ;
  else {
  mu__boolexpr1267 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1267)) mu__boolexpr1266 = FALSE ;
  else {
  mu__boolexpr1266 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1266)) mu__boolexpr1265 = FALSE ;
  else {
  mu__boolexpr1265 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1265)) mu__boolexpr1264 = FALSE ;
  else {
  mu__boolexpr1264 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1263 = (!(mu__boolexpr1264)) ; 
}
if ( !(mu__boolexpr1263) )
  { mu__quant1262 = FALSE; break; }
};
};
};
};
return mu__quant1262;
};

bool mu__condition_1270() // Condition for Rule "test_reachable_state_120"
{
  return mu__invariant_1261( );
}

/**** end rule declaration ****/

int mu__invariant_1271() // Invariant "test_reachable_state_119"
{
bool mu__quant1272; 
mu__quant1272 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1273;
  if (!((mu_i) != (mu_j))) mu__boolexpr1273 = TRUE ;
  else {
bool mu__boolexpr1274;
bool mu__boolexpr1275;
bool mu__boolexpr1276;
bool mu__boolexpr1277;
bool mu__boolexpr1278;
bool mu__boolexpr1279;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1279 = FALSE ;
  else {
  mu__boolexpr1279 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1279)) mu__boolexpr1278 = FALSE ;
  else {
  mu__boolexpr1278 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1278)) mu__boolexpr1277 = FALSE ;
  else {
  mu__boolexpr1277 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1277)) mu__boolexpr1276 = FALSE ;
  else {
  mu__boolexpr1276 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1276)) mu__boolexpr1275 = FALSE ;
  else {
  mu__boolexpr1275 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1275)) mu__boolexpr1274 = FALSE ;
  else {
  mu__boolexpr1274 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1273 = (!(mu__boolexpr1274)) ; 
}
if ( !(mu__boolexpr1273) )
  { mu__quant1272 = FALSE; break; }
};
};
};
};
return mu__quant1272;
};

bool mu__condition_1280() // Condition for Rule "test_reachable_state_119"
{
  return mu__invariant_1271( );
}

/**** end rule declaration ****/

int mu__invariant_1281() // Invariant "test_reachable_state_118"
{
bool mu__quant1282; 
mu__quant1282 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1283;
  if (!((mu_i) != (mu_j))) mu__boolexpr1283 = TRUE ;
  else {
bool mu__boolexpr1284;
bool mu__boolexpr1285;
bool mu__boolexpr1286;
bool mu__boolexpr1287;
bool mu__boolexpr1288;
bool mu__boolexpr1289;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1289 = FALSE ;
  else {
  mu__boolexpr1289 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1289)) mu__boolexpr1288 = FALSE ;
  else {
  mu__boolexpr1288 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1288)) mu__boolexpr1287 = FALSE ;
  else {
  mu__boolexpr1287 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1287)) mu__boolexpr1286 = FALSE ;
  else {
  mu__boolexpr1286 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1286)) mu__boolexpr1285 = FALSE ;
  else {
  mu__boolexpr1285 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1285)) mu__boolexpr1284 = FALSE ;
  else {
  mu__boolexpr1284 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1283 = (!(mu__boolexpr1284)) ; 
}
if ( !(mu__boolexpr1283) )
  { mu__quant1282 = FALSE; break; }
};
};
};
};
return mu__quant1282;
};

bool mu__condition_1290() // Condition for Rule "test_reachable_state_118"
{
  return mu__invariant_1281( );
}

/**** end rule declaration ****/

int mu__invariant_1291() // Invariant "test_reachable_state_117"
{
bool mu__quant1292; 
mu__quant1292 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1293;
  if (!((mu_i) != (mu_j))) mu__boolexpr1293 = TRUE ;
  else {
bool mu__boolexpr1294;
bool mu__boolexpr1295;
bool mu__boolexpr1296;
bool mu__boolexpr1297;
bool mu__boolexpr1298;
bool mu__boolexpr1299;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1299 = FALSE ;
  else {
  mu__boolexpr1299 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1299)) mu__boolexpr1298 = FALSE ;
  else {
  mu__boolexpr1298 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1298)) mu__boolexpr1297 = FALSE ;
  else {
  mu__boolexpr1297 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1297)) mu__boolexpr1296 = FALSE ;
  else {
  mu__boolexpr1296 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1296)) mu__boolexpr1295 = FALSE ;
  else {
  mu__boolexpr1295 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1295)) mu__boolexpr1294 = FALSE ;
  else {
  mu__boolexpr1294 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1293 = (!(mu__boolexpr1294)) ; 
}
if ( !(mu__boolexpr1293) )
  { mu__quant1292 = FALSE; break; }
};
};
};
};
return mu__quant1292;
};

bool mu__condition_1300() // Condition for Rule "test_reachable_state_117"
{
  return mu__invariant_1291( );
}

/**** end rule declaration ****/

int mu__invariant_1301() // Invariant "test_reachable_state_116"
{
bool mu__quant1302; 
mu__quant1302 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1303;
  if (!((mu_i) != (mu_j))) mu__boolexpr1303 = TRUE ;
  else {
bool mu__boolexpr1304;
bool mu__boolexpr1305;
bool mu__boolexpr1306;
bool mu__boolexpr1307;
bool mu__boolexpr1308;
bool mu__boolexpr1309;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1309 = FALSE ;
  else {
  mu__boolexpr1309 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1309)) mu__boolexpr1308 = FALSE ;
  else {
  mu__boolexpr1308 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1308)) mu__boolexpr1307 = FALSE ;
  else {
  mu__boolexpr1307 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1307)) mu__boolexpr1306 = FALSE ;
  else {
  mu__boolexpr1306 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1306)) mu__boolexpr1305 = FALSE ;
  else {
  mu__boolexpr1305 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1305)) mu__boolexpr1304 = FALSE ;
  else {
  mu__boolexpr1304 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1303 = (!(mu__boolexpr1304)) ; 
}
if ( !(mu__boolexpr1303) )
  { mu__quant1302 = FALSE; break; }
};
};
};
};
return mu__quant1302;
};

bool mu__condition_1310() // Condition for Rule "test_reachable_state_116"
{
  return mu__invariant_1301( );
}

/**** end rule declaration ****/

int mu__invariant_1311() // Invariant "test_reachable_state_115"
{
bool mu__quant1312; 
mu__quant1312 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1313;
  if (!((mu_i) != (mu_j))) mu__boolexpr1313 = TRUE ;
  else {
bool mu__boolexpr1314;
bool mu__boolexpr1315;
bool mu__boolexpr1316;
bool mu__boolexpr1317;
bool mu__boolexpr1318;
bool mu__boolexpr1319;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1319 = FALSE ;
  else {
  mu__boolexpr1319 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1319)) mu__boolexpr1318 = FALSE ;
  else {
  mu__boolexpr1318 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1318)) mu__boolexpr1317 = FALSE ;
  else {
  mu__boolexpr1317 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1317)) mu__boolexpr1316 = FALSE ;
  else {
  mu__boolexpr1316 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1316)) mu__boolexpr1315 = FALSE ;
  else {
  mu__boolexpr1315 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1315)) mu__boolexpr1314 = FALSE ;
  else {
  mu__boolexpr1314 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1313 = (!(mu__boolexpr1314)) ; 
}
if ( !(mu__boolexpr1313) )
  { mu__quant1312 = FALSE; break; }
};
};
};
};
return mu__quant1312;
};

bool mu__condition_1320() // Condition for Rule "test_reachable_state_115"
{
  return mu__invariant_1311( );
}

/**** end rule declaration ****/

int mu__invariant_1321() // Invariant "test_reachable_state_114"
{
bool mu__quant1322; 
mu__quant1322 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1323;
  if (!((mu_i) != (mu_j))) mu__boolexpr1323 = TRUE ;
  else {
bool mu__boolexpr1324;
bool mu__boolexpr1325;
bool mu__boolexpr1326;
bool mu__boolexpr1327;
bool mu__boolexpr1328;
bool mu__boolexpr1329;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1329 = FALSE ;
  else {
  mu__boolexpr1329 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1329)) mu__boolexpr1328 = FALSE ;
  else {
  mu__boolexpr1328 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1328)) mu__boolexpr1327 = FALSE ;
  else {
  mu__boolexpr1327 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1327)) mu__boolexpr1326 = FALSE ;
  else {
  mu__boolexpr1326 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1326)) mu__boolexpr1325 = FALSE ;
  else {
  mu__boolexpr1325 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1325)) mu__boolexpr1324 = FALSE ;
  else {
  mu__boolexpr1324 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1323 = (!(mu__boolexpr1324)) ; 
}
if ( !(mu__boolexpr1323) )
  { mu__quant1322 = FALSE; break; }
};
};
};
};
return mu__quant1322;
};

bool mu__condition_1330() // Condition for Rule "test_reachable_state_114"
{
  return mu__invariant_1321( );
}

/**** end rule declaration ****/

int mu__invariant_1331() // Invariant "test_reachable_state_113"
{
bool mu__quant1332; 
mu__quant1332 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1333;
  if (!((mu_i) != (mu_j))) mu__boolexpr1333 = TRUE ;
  else {
bool mu__boolexpr1334;
bool mu__boolexpr1335;
bool mu__boolexpr1336;
bool mu__boolexpr1337;
bool mu__boolexpr1338;
bool mu__boolexpr1339;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1339 = FALSE ;
  else {
  mu__boolexpr1339 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1339)) mu__boolexpr1338 = FALSE ;
  else {
  mu__boolexpr1338 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1338)) mu__boolexpr1337 = FALSE ;
  else {
  mu__boolexpr1337 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1337)) mu__boolexpr1336 = FALSE ;
  else {
  mu__boolexpr1336 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1336)) mu__boolexpr1335 = FALSE ;
  else {
  mu__boolexpr1335 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1335)) mu__boolexpr1334 = FALSE ;
  else {
  mu__boolexpr1334 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1333 = (!(mu__boolexpr1334)) ; 
}
if ( !(mu__boolexpr1333) )
  { mu__quant1332 = FALSE; break; }
};
};
};
};
return mu__quant1332;
};

bool mu__condition_1340() // Condition for Rule "test_reachable_state_113"
{
  return mu__invariant_1331( );
}

/**** end rule declaration ****/

int mu__invariant_1341() // Invariant "test_reachable_state_112"
{
bool mu__quant1342; 
mu__quant1342 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1343;
  if (!((mu_i) != (mu_j))) mu__boolexpr1343 = TRUE ;
  else {
bool mu__boolexpr1344;
bool mu__boolexpr1345;
bool mu__boolexpr1346;
bool mu__boolexpr1347;
bool mu__boolexpr1348;
bool mu__boolexpr1349;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1349 = FALSE ;
  else {
  mu__boolexpr1349 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1349)) mu__boolexpr1348 = FALSE ;
  else {
  mu__boolexpr1348 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1348)) mu__boolexpr1347 = FALSE ;
  else {
  mu__boolexpr1347 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1347)) mu__boolexpr1346 = FALSE ;
  else {
  mu__boolexpr1346 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1346)) mu__boolexpr1345 = FALSE ;
  else {
  mu__boolexpr1345 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1345)) mu__boolexpr1344 = FALSE ;
  else {
  mu__boolexpr1344 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1343 = (!(mu__boolexpr1344)) ; 
}
if ( !(mu__boolexpr1343) )
  { mu__quant1342 = FALSE; break; }
};
};
};
};
return mu__quant1342;
};

bool mu__condition_1350() // Condition for Rule "test_reachable_state_112"
{
  return mu__invariant_1341( );
}

/**** end rule declaration ****/

int mu__invariant_1351() // Invariant "test_reachable_state_111"
{
bool mu__quant1352; 
mu__quant1352 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1353;
  if (!((mu_i) != (mu_j))) mu__boolexpr1353 = TRUE ;
  else {
bool mu__boolexpr1354;
bool mu__boolexpr1355;
bool mu__boolexpr1356;
bool mu__boolexpr1357;
bool mu__boolexpr1358;
bool mu__boolexpr1359;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1359 = FALSE ;
  else {
  mu__boolexpr1359 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1359)) mu__boolexpr1358 = FALSE ;
  else {
  mu__boolexpr1358 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1358)) mu__boolexpr1357 = FALSE ;
  else {
  mu__boolexpr1357 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1357)) mu__boolexpr1356 = FALSE ;
  else {
  mu__boolexpr1356 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1356)) mu__boolexpr1355 = FALSE ;
  else {
  mu__boolexpr1355 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1355)) mu__boolexpr1354 = FALSE ;
  else {
  mu__boolexpr1354 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1353 = (!(mu__boolexpr1354)) ; 
}
if ( !(mu__boolexpr1353) )
  { mu__quant1352 = FALSE; break; }
};
};
};
};
return mu__quant1352;
};

bool mu__condition_1360() // Condition for Rule "test_reachable_state_111"
{
  return mu__invariant_1351( );
}

/**** end rule declaration ****/

int mu__invariant_1361() // Invariant "test_reachable_state_110"
{
bool mu__quant1362; 
mu__quant1362 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1363;
  if (!((mu_i) != (mu_j))) mu__boolexpr1363 = TRUE ;
  else {
bool mu__boolexpr1364;
bool mu__boolexpr1365;
bool mu__boolexpr1366;
bool mu__boolexpr1367;
bool mu__boolexpr1368;
bool mu__boolexpr1369;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1369 = FALSE ;
  else {
  mu__boolexpr1369 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1369)) mu__boolexpr1368 = FALSE ;
  else {
  mu__boolexpr1368 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1368)) mu__boolexpr1367 = FALSE ;
  else {
  mu__boolexpr1367 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1367)) mu__boolexpr1366 = FALSE ;
  else {
  mu__boolexpr1366 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1366)) mu__boolexpr1365 = FALSE ;
  else {
  mu__boolexpr1365 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1365)) mu__boolexpr1364 = FALSE ;
  else {
  mu__boolexpr1364 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1363 = (!(mu__boolexpr1364)) ; 
}
if ( !(mu__boolexpr1363) )
  { mu__quant1362 = FALSE; break; }
};
};
};
};
return mu__quant1362;
};

bool mu__condition_1370() // Condition for Rule "test_reachable_state_110"
{
  return mu__invariant_1361( );
}

/**** end rule declaration ****/

int mu__invariant_1371() // Invariant "test_reachable_state_109"
{
bool mu__quant1372; 
mu__quant1372 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1373;
  if (!((mu_i) != (mu_j))) mu__boolexpr1373 = TRUE ;
  else {
bool mu__boolexpr1374;
bool mu__boolexpr1375;
bool mu__boolexpr1376;
bool mu__boolexpr1377;
bool mu__boolexpr1378;
bool mu__boolexpr1379;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1379 = FALSE ;
  else {
  mu__boolexpr1379 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1379)) mu__boolexpr1378 = FALSE ;
  else {
  mu__boolexpr1378 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1378)) mu__boolexpr1377 = FALSE ;
  else {
  mu__boolexpr1377 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1377)) mu__boolexpr1376 = FALSE ;
  else {
  mu__boolexpr1376 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1376)) mu__boolexpr1375 = FALSE ;
  else {
  mu__boolexpr1375 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1375)) mu__boolexpr1374 = FALSE ;
  else {
  mu__boolexpr1374 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1373 = (!(mu__boolexpr1374)) ; 
}
if ( !(mu__boolexpr1373) )
  { mu__quant1372 = FALSE; break; }
};
};
};
};
return mu__quant1372;
};

bool mu__condition_1380() // Condition for Rule "test_reachable_state_109"
{
  return mu__invariant_1371( );
}

/**** end rule declaration ****/

int mu__invariant_1381() // Invariant "test_reachable_state_108"
{
bool mu__quant1382; 
mu__quant1382 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1383;
  if (!((mu_i) != (mu_j))) mu__boolexpr1383 = TRUE ;
  else {
bool mu__boolexpr1384;
bool mu__boolexpr1385;
bool mu__boolexpr1386;
bool mu__boolexpr1387;
bool mu__boolexpr1388;
bool mu__boolexpr1389;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1389 = FALSE ;
  else {
  mu__boolexpr1389 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1389)) mu__boolexpr1388 = FALSE ;
  else {
  mu__boolexpr1388 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1388)) mu__boolexpr1387 = FALSE ;
  else {
  mu__boolexpr1387 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1387)) mu__boolexpr1386 = FALSE ;
  else {
  mu__boolexpr1386 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1386)) mu__boolexpr1385 = FALSE ;
  else {
  mu__boolexpr1385 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1385)) mu__boolexpr1384 = FALSE ;
  else {
  mu__boolexpr1384 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1383 = (!(mu__boolexpr1384)) ; 
}
if ( !(mu__boolexpr1383) )
  { mu__quant1382 = FALSE; break; }
};
};
};
};
return mu__quant1382;
};

bool mu__condition_1390() // Condition for Rule "test_reachable_state_108"
{
  return mu__invariant_1381( );
}

/**** end rule declaration ****/

int mu__invariant_1391() // Invariant "test_reachable_state_107"
{
bool mu__quant1392; 
mu__quant1392 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1393;
  if (!((mu_i) != (mu_j))) mu__boolexpr1393 = TRUE ;
  else {
bool mu__boolexpr1394;
bool mu__boolexpr1395;
bool mu__boolexpr1396;
bool mu__boolexpr1397;
bool mu__boolexpr1398;
bool mu__boolexpr1399;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1399 = FALSE ;
  else {
  mu__boolexpr1399 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1399)) mu__boolexpr1398 = FALSE ;
  else {
  mu__boolexpr1398 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1398)) mu__boolexpr1397 = FALSE ;
  else {
  mu__boolexpr1397 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1397)) mu__boolexpr1396 = FALSE ;
  else {
  mu__boolexpr1396 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1396)) mu__boolexpr1395 = FALSE ;
  else {
  mu__boolexpr1395 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1395)) mu__boolexpr1394 = FALSE ;
  else {
  mu__boolexpr1394 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1393 = (!(mu__boolexpr1394)) ; 
}
if ( !(mu__boolexpr1393) )
  { mu__quant1392 = FALSE; break; }
};
};
};
};
return mu__quant1392;
};

bool mu__condition_1400() // Condition for Rule "test_reachable_state_107"
{
  return mu__invariant_1391( );
}

/**** end rule declaration ****/

int mu__invariant_1401() // Invariant "test_reachable_state_106"
{
bool mu__quant1402; 
mu__quant1402 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1403;
  if (!((mu_i) != (mu_j))) mu__boolexpr1403 = TRUE ;
  else {
bool mu__boolexpr1404;
bool mu__boolexpr1405;
bool mu__boolexpr1406;
bool mu__boolexpr1407;
bool mu__boolexpr1408;
bool mu__boolexpr1409;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1409 = FALSE ;
  else {
  mu__boolexpr1409 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1409)) mu__boolexpr1408 = FALSE ;
  else {
  mu__boolexpr1408 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1408)) mu__boolexpr1407 = FALSE ;
  else {
  mu__boolexpr1407 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1407)) mu__boolexpr1406 = FALSE ;
  else {
  mu__boolexpr1406 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1406)) mu__boolexpr1405 = FALSE ;
  else {
  mu__boolexpr1405 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1405)) mu__boolexpr1404 = FALSE ;
  else {
  mu__boolexpr1404 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1403 = (!(mu__boolexpr1404)) ; 
}
if ( !(mu__boolexpr1403) )
  { mu__quant1402 = FALSE; break; }
};
};
};
};
return mu__quant1402;
};

bool mu__condition_1410() // Condition for Rule "test_reachable_state_106"
{
  return mu__invariant_1401( );
}

/**** end rule declaration ****/

int mu__invariant_1411() // Invariant "test_reachable_state_105"
{
bool mu__quant1412; 
mu__quant1412 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1413;
  if (!((mu_i) != (mu_j))) mu__boolexpr1413 = TRUE ;
  else {
bool mu__boolexpr1414;
bool mu__boolexpr1415;
bool mu__boolexpr1416;
bool mu__boolexpr1417;
bool mu__boolexpr1418;
bool mu__boolexpr1419;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1419 = FALSE ;
  else {
  mu__boolexpr1419 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1419)) mu__boolexpr1418 = FALSE ;
  else {
  mu__boolexpr1418 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1418)) mu__boolexpr1417 = FALSE ;
  else {
  mu__boolexpr1417 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1417)) mu__boolexpr1416 = FALSE ;
  else {
  mu__boolexpr1416 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1416)) mu__boolexpr1415 = FALSE ;
  else {
  mu__boolexpr1415 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1415)) mu__boolexpr1414 = FALSE ;
  else {
  mu__boolexpr1414 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1413 = (!(mu__boolexpr1414)) ; 
}
if ( !(mu__boolexpr1413) )
  { mu__quant1412 = FALSE; break; }
};
};
};
};
return mu__quant1412;
};

bool mu__condition_1420() // Condition for Rule "test_reachable_state_105"
{
  return mu__invariant_1411( );
}

/**** end rule declaration ****/

int mu__invariant_1421() // Invariant "test_reachable_state_104"
{
bool mu__quant1422; 
mu__quant1422 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1423;
  if (!((mu_i) != (mu_j))) mu__boolexpr1423 = TRUE ;
  else {
bool mu__boolexpr1424;
bool mu__boolexpr1425;
bool mu__boolexpr1426;
bool mu__boolexpr1427;
bool mu__boolexpr1428;
bool mu__boolexpr1429;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1429 = FALSE ;
  else {
  mu__boolexpr1429 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1429)) mu__boolexpr1428 = FALSE ;
  else {
  mu__boolexpr1428 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1428)) mu__boolexpr1427 = FALSE ;
  else {
  mu__boolexpr1427 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1427)) mu__boolexpr1426 = FALSE ;
  else {
  mu__boolexpr1426 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1426)) mu__boolexpr1425 = FALSE ;
  else {
  mu__boolexpr1425 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1425)) mu__boolexpr1424 = FALSE ;
  else {
  mu__boolexpr1424 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1423 = (!(mu__boolexpr1424)) ; 
}
if ( !(mu__boolexpr1423) )
  { mu__quant1422 = FALSE; break; }
};
};
};
};
return mu__quant1422;
};

bool mu__condition_1430() // Condition for Rule "test_reachable_state_104"
{
  return mu__invariant_1421( );
}

/**** end rule declaration ****/

int mu__invariant_1431() // Invariant "test_reachable_state_103"
{
bool mu__quant1432; 
mu__quant1432 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1433;
  if (!((mu_i) != (mu_j))) mu__boolexpr1433 = TRUE ;
  else {
bool mu__boolexpr1434;
bool mu__boolexpr1435;
bool mu__boolexpr1436;
bool mu__boolexpr1437;
bool mu__boolexpr1438;
bool mu__boolexpr1439;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1439 = FALSE ;
  else {
  mu__boolexpr1439 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1439)) mu__boolexpr1438 = FALSE ;
  else {
  mu__boolexpr1438 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1438)) mu__boolexpr1437 = FALSE ;
  else {
  mu__boolexpr1437 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1437)) mu__boolexpr1436 = FALSE ;
  else {
  mu__boolexpr1436 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1436)) mu__boolexpr1435 = FALSE ;
  else {
  mu__boolexpr1435 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1435)) mu__boolexpr1434 = FALSE ;
  else {
  mu__boolexpr1434 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1433 = (!(mu__boolexpr1434)) ; 
}
if ( !(mu__boolexpr1433) )
  { mu__quant1432 = FALSE; break; }
};
};
};
};
return mu__quant1432;
};

bool mu__condition_1440() // Condition for Rule "test_reachable_state_103"
{
  return mu__invariant_1431( );
}

/**** end rule declaration ****/

int mu__invariant_1441() // Invariant "test_reachable_state_102"
{
bool mu__quant1442; 
mu__quant1442 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1443;
  if (!((mu_i) != (mu_j))) mu__boolexpr1443 = TRUE ;
  else {
bool mu__boolexpr1444;
bool mu__boolexpr1445;
bool mu__boolexpr1446;
bool mu__boolexpr1447;
bool mu__boolexpr1448;
bool mu__boolexpr1449;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1449 = FALSE ;
  else {
  mu__boolexpr1449 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1449)) mu__boolexpr1448 = FALSE ;
  else {
  mu__boolexpr1448 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1448)) mu__boolexpr1447 = FALSE ;
  else {
  mu__boolexpr1447 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1447)) mu__boolexpr1446 = FALSE ;
  else {
  mu__boolexpr1446 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1446)) mu__boolexpr1445 = FALSE ;
  else {
  mu__boolexpr1445 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1445)) mu__boolexpr1444 = FALSE ;
  else {
  mu__boolexpr1444 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1443 = (!(mu__boolexpr1444)) ; 
}
if ( !(mu__boolexpr1443) )
  { mu__quant1442 = FALSE; break; }
};
};
};
};
return mu__quant1442;
};

bool mu__condition_1450() // Condition for Rule "test_reachable_state_102"
{
  return mu__invariant_1441( );
}

/**** end rule declaration ****/

int mu__invariant_1451() // Invariant "test_reachable_state_101"
{
bool mu__quant1452; 
mu__quant1452 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1453;
  if (!((mu_i) != (mu_j))) mu__boolexpr1453 = TRUE ;
  else {
bool mu__boolexpr1454;
bool mu__boolexpr1455;
bool mu__boolexpr1456;
bool mu__boolexpr1457;
bool mu__boolexpr1458;
bool mu__boolexpr1459;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1459 = FALSE ;
  else {
  mu__boolexpr1459 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1459)) mu__boolexpr1458 = FALSE ;
  else {
  mu__boolexpr1458 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1458)) mu__boolexpr1457 = FALSE ;
  else {
  mu__boolexpr1457 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1457)) mu__boolexpr1456 = FALSE ;
  else {
  mu__boolexpr1456 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1456)) mu__boolexpr1455 = FALSE ;
  else {
  mu__boolexpr1455 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1455)) mu__boolexpr1454 = FALSE ;
  else {
  mu__boolexpr1454 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1453 = (!(mu__boolexpr1454)) ; 
}
if ( !(mu__boolexpr1453) )
  { mu__quant1452 = FALSE; break; }
};
};
};
};
return mu__quant1452;
};

bool mu__condition_1460() // Condition for Rule "test_reachable_state_101"
{
  return mu__invariant_1451( );
}

/**** end rule declaration ****/

int mu__invariant_1461() // Invariant "test_reachable_state_100"
{
bool mu__quant1462; 
mu__quant1462 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1463;
  if (!((mu_i) != (mu_j))) mu__boolexpr1463 = TRUE ;
  else {
bool mu__boolexpr1464;
bool mu__boolexpr1465;
bool mu__boolexpr1466;
bool mu__boolexpr1467;
bool mu__boolexpr1468;
bool mu__boolexpr1469;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1469 = FALSE ;
  else {
  mu__boolexpr1469 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1469)) mu__boolexpr1468 = FALSE ;
  else {
  mu__boolexpr1468 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1468)) mu__boolexpr1467 = FALSE ;
  else {
  mu__boolexpr1467 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1467)) mu__boolexpr1466 = FALSE ;
  else {
  mu__boolexpr1466 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1466)) mu__boolexpr1465 = FALSE ;
  else {
  mu__boolexpr1465 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1465)) mu__boolexpr1464 = FALSE ;
  else {
  mu__boolexpr1464 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1463 = (!(mu__boolexpr1464)) ; 
}
if ( !(mu__boolexpr1463) )
  { mu__quant1462 = FALSE; break; }
};
};
};
};
return mu__quant1462;
};

bool mu__condition_1470() // Condition for Rule "test_reachable_state_100"
{
  return mu__invariant_1461( );
}

/**** end rule declaration ****/

int mu__invariant_1471() // Invariant "test_reachable_state_99"
{
bool mu__quant1472; 
mu__quant1472 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1473;
  if (!((mu_i) != (mu_j))) mu__boolexpr1473 = TRUE ;
  else {
bool mu__boolexpr1474;
bool mu__boolexpr1475;
bool mu__boolexpr1476;
bool mu__boolexpr1477;
bool mu__boolexpr1478;
bool mu__boolexpr1479;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1479 = FALSE ;
  else {
  mu__boolexpr1479 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1479)) mu__boolexpr1478 = FALSE ;
  else {
  mu__boolexpr1478 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1478)) mu__boolexpr1477 = FALSE ;
  else {
  mu__boolexpr1477 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1477)) mu__boolexpr1476 = FALSE ;
  else {
  mu__boolexpr1476 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1476)) mu__boolexpr1475 = FALSE ;
  else {
  mu__boolexpr1475 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1475)) mu__boolexpr1474 = FALSE ;
  else {
  mu__boolexpr1474 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1473 = (!(mu__boolexpr1474)) ; 
}
if ( !(mu__boolexpr1473) )
  { mu__quant1472 = FALSE; break; }
};
};
};
};
return mu__quant1472;
};

bool mu__condition_1480() // Condition for Rule "test_reachable_state_99"
{
  return mu__invariant_1471( );
}

/**** end rule declaration ****/

int mu__invariant_1481() // Invariant "test_reachable_state_98"
{
bool mu__quant1482; 
mu__quant1482 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1483;
  if (!((mu_i) != (mu_j))) mu__boolexpr1483 = TRUE ;
  else {
bool mu__boolexpr1484;
bool mu__boolexpr1485;
bool mu__boolexpr1486;
bool mu__boolexpr1487;
bool mu__boolexpr1488;
bool mu__boolexpr1489;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1489 = FALSE ;
  else {
  mu__boolexpr1489 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1489)) mu__boolexpr1488 = FALSE ;
  else {
  mu__boolexpr1488 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1488)) mu__boolexpr1487 = FALSE ;
  else {
  mu__boolexpr1487 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1487)) mu__boolexpr1486 = FALSE ;
  else {
  mu__boolexpr1486 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1486)) mu__boolexpr1485 = FALSE ;
  else {
  mu__boolexpr1485 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1485)) mu__boolexpr1484 = FALSE ;
  else {
  mu__boolexpr1484 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1483 = (!(mu__boolexpr1484)) ; 
}
if ( !(mu__boolexpr1483) )
  { mu__quant1482 = FALSE; break; }
};
};
};
};
return mu__quant1482;
};

bool mu__condition_1490() // Condition for Rule "test_reachable_state_98"
{
  return mu__invariant_1481( );
}

/**** end rule declaration ****/

int mu__invariant_1491() // Invariant "test_reachable_state_97"
{
bool mu__quant1492; 
mu__quant1492 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1493;
  if (!((mu_i) != (mu_j))) mu__boolexpr1493 = TRUE ;
  else {
bool mu__boolexpr1494;
bool mu__boolexpr1495;
bool mu__boolexpr1496;
bool mu__boolexpr1497;
bool mu__boolexpr1498;
bool mu__boolexpr1499;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1499 = FALSE ;
  else {
  mu__boolexpr1499 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1499)) mu__boolexpr1498 = FALSE ;
  else {
  mu__boolexpr1498 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1498)) mu__boolexpr1497 = FALSE ;
  else {
  mu__boolexpr1497 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1497)) mu__boolexpr1496 = FALSE ;
  else {
  mu__boolexpr1496 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1496)) mu__boolexpr1495 = FALSE ;
  else {
  mu__boolexpr1495 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1495)) mu__boolexpr1494 = FALSE ;
  else {
  mu__boolexpr1494 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1493 = (!(mu__boolexpr1494)) ; 
}
if ( !(mu__boolexpr1493) )
  { mu__quant1492 = FALSE; break; }
};
};
};
};
return mu__quant1492;
};

bool mu__condition_1500() // Condition for Rule "test_reachable_state_97"
{
  return mu__invariant_1491( );
}

/**** end rule declaration ****/

int mu__invariant_1501() // Invariant "test_reachable_state_96"
{
bool mu__quant1502; 
mu__quant1502 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1503;
  if (!((mu_i) != (mu_j))) mu__boolexpr1503 = TRUE ;
  else {
bool mu__boolexpr1504;
bool mu__boolexpr1505;
bool mu__boolexpr1506;
bool mu__boolexpr1507;
bool mu__boolexpr1508;
bool mu__boolexpr1509;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1509 = FALSE ;
  else {
  mu__boolexpr1509 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1509)) mu__boolexpr1508 = FALSE ;
  else {
  mu__boolexpr1508 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1508)) mu__boolexpr1507 = FALSE ;
  else {
  mu__boolexpr1507 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1507)) mu__boolexpr1506 = FALSE ;
  else {
  mu__boolexpr1506 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1506)) mu__boolexpr1505 = FALSE ;
  else {
  mu__boolexpr1505 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1505)) mu__boolexpr1504 = FALSE ;
  else {
  mu__boolexpr1504 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1503 = (!(mu__boolexpr1504)) ; 
}
if ( !(mu__boolexpr1503) )
  { mu__quant1502 = FALSE; break; }
};
};
};
};
return mu__quant1502;
};

bool mu__condition_1510() // Condition for Rule "test_reachable_state_96"
{
  return mu__invariant_1501( );
}

/**** end rule declaration ****/

int mu__invariant_1511() // Invariant "test_reachable_state_95"
{
bool mu__quant1512; 
mu__quant1512 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1513;
  if (!((mu_i) != (mu_j))) mu__boolexpr1513 = TRUE ;
  else {
bool mu__boolexpr1514;
bool mu__boolexpr1515;
bool mu__boolexpr1516;
bool mu__boolexpr1517;
bool mu__boolexpr1518;
bool mu__boolexpr1519;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1519 = FALSE ;
  else {
  mu__boolexpr1519 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1519)) mu__boolexpr1518 = FALSE ;
  else {
  mu__boolexpr1518 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1518)) mu__boolexpr1517 = FALSE ;
  else {
  mu__boolexpr1517 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1517)) mu__boolexpr1516 = FALSE ;
  else {
  mu__boolexpr1516 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1516)) mu__boolexpr1515 = FALSE ;
  else {
  mu__boolexpr1515 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1515)) mu__boolexpr1514 = FALSE ;
  else {
  mu__boolexpr1514 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1513 = (!(mu__boolexpr1514)) ; 
}
if ( !(mu__boolexpr1513) )
  { mu__quant1512 = FALSE; break; }
};
};
};
};
return mu__quant1512;
};

bool mu__condition_1520() // Condition for Rule "test_reachable_state_95"
{
  return mu__invariant_1511( );
}

/**** end rule declaration ****/

int mu__invariant_1521() // Invariant "test_reachable_state_94"
{
bool mu__quant1522; 
mu__quant1522 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1523;
  if (!((mu_i) != (mu_j))) mu__boolexpr1523 = TRUE ;
  else {
bool mu__boolexpr1524;
bool mu__boolexpr1525;
bool mu__boolexpr1526;
bool mu__boolexpr1527;
bool mu__boolexpr1528;
bool mu__boolexpr1529;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1529 = FALSE ;
  else {
  mu__boolexpr1529 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1529)) mu__boolexpr1528 = FALSE ;
  else {
  mu__boolexpr1528 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1528)) mu__boolexpr1527 = FALSE ;
  else {
  mu__boolexpr1527 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1527)) mu__boolexpr1526 = FALSE ;
  else {
  mu__boolexpr1526 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1526)) mu__boolexpr1525 = FALSE ;
  else {
  mu__boolexpr1525 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1525)) mu__boolexpr1524 = FALSE ;
  else {
  mu__boolexpr1524 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1523 = (!(mu__boolexpr1524)) ; 
}
if ( !(mu__boolexpr1523) )
  { mu__quant1522 = FALSE; break; }
};
};
};
};
return mu__quant1522;
};

bool mu__condition_1530() // Condition for Rule "test_reachable_state_94"
{
  return mu__invariant_1521( );
}

/**** end rule declaration ****/

int mu__invariant_1531() // Invariant "test_reachable_state_93"
{
bool mu__quant1532; 
mu__quant1532 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1533;
  if (!((mu_i) != (mu_j))) mu__boolexpr1533 = TRUE ;
  else {
bool mu__boolexpr1534;
bool mu__boolexpr1535;
bool mu__boolexpr1536;
bool mu__boolexpr1537;
bool mu__boolexpr1538;
bool mu__boolexpr1539;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1539 = FALSE ;
  else {
  mu__boolexpr1539 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1539)) mu__boolexpr1538 = FALSE ;
  else {
  mu__boolexpr1538 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1538)) mu__boolexpr1537 = FALSE ;
  else {
  mu__boolexpr1537 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1537)) mu__boolexpr1536 = FALSE ;
  else {
  mu__boolexpr1536 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1536)) mu__boolexpr1535 = FALSE ;
  else {
  mu__boolexpr1535 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1535)) mu__boolexpr1534 = FALSE ;
  else {
  mu__boolexpr1534 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1533 = (!(mu__boolexpr1534)) ; 
}
if ( !(mu__boolexpr1533) )
  { mu__quant1532 = FALSE; break; }
};
};
};
};
return mu__quant1532;
};

bool mu__condition_1540() // Condition for Rule "test_reachable_state_93"
{
  return mu__invariant_1531( );
}

/**** end rule declaration ****/

int mu__invariant_1541() // Invariant "test_reachable_state_92"
{
bool mu__quant1542; 
mu__quant1542 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1543;
  if (!((mu_i) != (mu_j))) mu__boolexpr1543 = TRUE ;
  else {
bool mu__boolexpr1544;
bool mu__boolexpr1545;
bool mu__boolexpr1546;
bool mu__boolexpr1547;
bool mu__boolexpr1548;
bool mu__boolexpr1549;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1549 = FALSE ;
  else {
  mu__boolexpr1549 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1549)) mu__boolexpr1548 = FALSE ;
  else {
  mu__boolexpr1548 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1548)) mu__boolexpr1547 = FALSE ;
  else {
  mu__boolexpr1547 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1547)) mu__boolexpr1546 = FALSE ;
  else {
  mu__boolexpr1546 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1546)) mu__boolexpr1545 = FALSE ;
  else {
  mu__boolexpr1545 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1545)) mu__boolexpr1544 = FALSE ;
  else {
  mu__boolexpr1544 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1543 = (!(mu__boolexpr1544)) ; 
}
if ( !(mu__boolexpr1543) )
  { mu__quant1542 = FALSE; break; }
};
};
};
};
return mu__quant1542;
};

bool mu__condition_1550() // Condition for Rule "test_reachable_state_92"
{
  return mu__invariant_1541( );
}

/**** end rule declaration ****/

int mu__invariant_1551() // Invariant "test_reachable_state_91"
{
bool mu__quant1552; 
mu__quant1552 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1553;
  if (!((mu_i) != (mu_j))) mu__boolexpr1553 = TRUE ;
  else {
bool mu__boolexpr1554;
bool mu__boolexpr1555;
bool mu__boolexpr1556;
bool mu__boolexpr1557;
bool mu__boolexpr1558;
bool mu__boolexpr1559;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1559 = FALSE ;
  else {
  mu__boolexpr1559 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1559)) mu__boolexpr1558 = FALSE ;
  else {
  mu__boolexpr1558 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1558)) mu__boolexpr1557 = FALSE ;
  else {
  mu__boolexpr1557 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1557)) mu__boolexpr1556 = FALSE ;
  else {
  mu__boolexpr1556 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1556)) mu__boolexpr1555 = FALSE ;
  else {
  mu__boolexpr1555 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1555)) mu__boolexpr1554 = FALSE ;
  else {
  mu__boolexpr1554 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1553 = (!(mu__boolexpr1554)) ; 
}
if ( !(mu__boolexpr1553) )
  { mu__quant1552 = FALSE; break; }
};
};
};
};
return mu__quant1552;
};

bool mu__condition_1560() // Condition for Rule "test_reachable_state_91"
{
  return mu__invariant_1551( );
}

/**** end rule declaration ****/

int mu__invariant_1561() // Invariant "test_reachable_state_90"
{
bool mu__quant1562; 
mu__quant1562 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1563;
  if (!((mu_i) != (mu_j))) mu__boolexpr1563 = TRUE ;
  else {
bool mu__boolexpr1564;
bool mu__boolexpr1565;
bool mu__boolexpr1566;
bool mu__boolexpr1567;
bool mu__boolexpr1568;
bool mu__boolexpr1569;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1569 = FALSE ;
  else {
  mu__boolexpr1569 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1569)) mu__boolexpr1568 = FALSE ;
  else {
  mu__boolexpr1568 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1568)) mu__boolexpr1567 = FALSE ;
  else {
  mu__boolexpr1567 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1567)) mu__boolexpr1566 = FALSE ;
  else {
  mu__boolexpr1566 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1566)) mu__boolexpr1565 = FALSE ;
  else {
  mu__boolexpr1565 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1565)) mu__boolexpr1564 = FALSE ;
  else {
  mu__boolexpr1564 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1563 = (!(mu__boolexpr1564)) ; 
}
if ( !(mu__boolexpr1563) )
  { mu__quant1562 = FALSE; break; }
};
};
};
};
return mu__quant1562;
};

bool mu__condition_1570() // Condition for Rule "test_reachable_state_90"
{
  return mu__invariant_1561( );
}

/**** end rule declaration ****/

int mu__invariant_1571() // Invariant "test_reachable_state_89"
{
bool mu__quant1572; 
mu__quant1572 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1573;
  if (!((mu_i) != (mu_j))) mu__boolexpr1573 = TRUE ;
  else {
bool mu__boolexpr1574;
bool mu__boolexpr1575;
bool mu__boolexpr1576;
bool mu__boolexpr1577;
bool mu__boolexpr1578;
bool mu__boolexpr1579;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1579 = FALSE ;
  else {
  mu__boolexpr1579 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1579)) mu__boolexpr1578 = FALSE ;
  else {
  mu__boolexpr1578 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1578)) mu__boolexpr1577 = FALSE ;
  else {
  mu__boolexpr1577 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1577)) mu__boolexpr1576 = FALSE ;
  else {
  mu__boolexpr1576 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1576)) mu__boolexpr1575 = FALSE ;
  else {
  mu__boolexpr1575 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1575)) mu__boolexpr1574 = FALSE ;
  else {
  mu__boolexpr1574 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1573 = (!(mu__boolexpr1574)) ; 
}
if ( !(mu__boolexpr1573) )
  { mu__quant1572 = FALSE; break; }
};
};
};
};
return mu__quant1572;
};

bool mu__condition_1580() // Condition for Rule "test_reachable_state_89"
{
  return mu__invariant_1571( );
}

/**** end rule declaration ****/

int mu__invariant_1581() // Invariant "test_reachable_state_88"
{
bool mu__quant1582; 
mu__quant1582 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1583;
  if (!((mu_i) != (mu_j))) mu__boolexpr1583 = TRUE ;
  else {
bool mu__boolexpr1584;
bool mu__boolexpr1585;
bool mu__boolexpr1586;
bool mu__boolexpr1587;
bool mu__boolexpr1588;
bool mu__boolexpr1589;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1589 = FALSE ;
  else {
  mu__boolexpr1589 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1589)) mu__boolexpr1588 = FALSE ;
  else {
  mu__boolexpr1588 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1588)) mu__boolexpr1587 = FALSE ;
  else {
  mu__boolexpr1587 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1587)) mu__boolexpr1586 = FALSE ;
  else {
  mu__boolexpr1586 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1586)) mu__boolexpr1585 = FALSE ;
  else {
  mu__boolexpr1585 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1585)) mu__boolexpr1584 = FALSE ;
  else {
  mu__boolexpr1584 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1583 = (!(mu__boolexpr1584)) ; 
}
if ( !(mu__boolexpr1583) )
  { mu__quant1582 = FALSE; break; }
};
};
};
};
return mu__quant1582;
};

bool mu__condition_1590() // Condition for Rule "test_reachable_state_88"
{
  return mu__invariant_1581( );
}

/**** end rule declaration ****/

int mu__invariant_1591() // Invariant "test_reachable_state_87"
{
bool mu__quant1592; 
mu__quant1592 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1593;
  if (!((mu_i) != (mu_j))) mu__boolexpr1593 = TRUE ;
  else {
bool mu__boolexpr1594;
bool mu__boolexpr1595;
bool mu__boolexpr1596;
bool mu__boolexpr1597;
bool mu__boolexpr1598;
bool mu__boolexpr1599;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1599 = FALSE ;
  else {
  mu__boolexpr1599 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1599)) mu__boolexpr1598 = FALSE ;
  else {
  mu__boolexpr1598 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1598)) mu__boolexpr1597 = FALSE ;
  else {
  mu__boolexpr1597 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1597)) mu__boolexpr1596 = FALSE ;
  else {
  mu__boolexpr1596 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1596)) mu__boolexpr1595 = FALSE ;
  else {
  mu__boolexpr1595 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1595)) mu__boolexpr1594 = FALSE ;
  else {
  mu__boolexpr1594 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1593 = (!(mu__boolexpr1594)) ; 
}
if ( !(mu__boolexpr1593) )
  { mu__quant1592 = FALSE; break; }
};
};
};
};
return mu__quant1592;
};

bool mu__condition_1600() // Condition for Rule "test_reachable_state_87"
{
  return mu__invariant_1591( );
}

/**** end rule declaration ****/

int mu__invariant_1601() // Invariant "test_reachable_state_86"
{
bool mu__quant1602; 
mu__quant1602 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1603;
  if (!((mu_i) != (mu_j))) mu__boolexpr1603 = TRUE ;
  else {
bool mu__boolexpr1604;
bool mu__boolexpr1605;
bool mu__boolexpr1606;
bool mu__boolexpr1607;
bool mu__boolexpr1608;
bool mu__boolexpr1609;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1609 = FALSE ;
  else {
  mu__boolexpr1609 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1609)) mu__boolexpr1608 = FALSE ;
  else {
  mu__boolexpr1608 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1608)) mu__boolexpr1607 = FALSE ;
  else {
  mu__boolexpr1607 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1607)) mu__boolexpr1606 = FALSE ;
  else {
  mu__boolexpr1606 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1606)) mu__boolexpr1605 = FALSE ;
  else {
  mu__boolexpr1605 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1605)) mu__boolexpr1604 = FALSE ;
  else {
  mu__boolexpr1604 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1603 = (!(mu__boolexpr1604)) ; 
}
if ( !(mu__boolexpr1603) )
  { mu__quant1602 = FALSE; break; }
};
};
};
};
return mu__quant1602;
};

bool mu__condition_1610() // Condition for Rule "test_reachable_state_86"
{
  return mu__invariant_1601( );
}

/**** end rule declaration ****/

int mu__invariant_1611() // Invariant "test_reachable_state_85"
{
bool mu__quant1612; 
mu__quant1612 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1613;
  if (!((mu_i) != (mu_j))) mu__boolexpr1613 = TRUE ;
  else {
bool mu__boolexpr1614;
bool mu__boolexpr1615;
bool mu__boolexpr1616;
bool mu__boolexpr1617;
bool mu__boolexpr1618;
bool mu__boolexpr1619;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1619 = FALSE ;
  else {
  mu__boolexpr1619 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1619)) mu__boolexpr1618 = FALSE ;
  else {
  mu__boolexpr1618 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1618)) mu__boolexpr1617 = FALSE ;
  else {
  mu__boolexpr1617 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1617)) mu__boolexpr1616 = FALSE ;
  else {
  mu__boolexpr1616 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1616)) mu__boolexpr1615 = FALSE ;
  else {
  mu__boolexpr1615 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1615)) mu__boolexpr1614 = FALSE ;
  else {
  mu__boolexpr1614 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1613 = (!(mu__boolexpr1614)) ; 
}
if ( !(mu__boolexpr1613) )
  { mu__quant1612 = FALSE; break; }
};
};
};
};
return mu__quant1612;
};

bool mu__condition_1620() // Condition for Rule "test_reachable_state_85"
{
  return mu__invariant_1611( );
}

/**** end rule declaration ****/

int mu__invariant_1621() // Invariant "test_reachable_state_84"
{
bool mu__quant1622; 
mu__quant1622 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1623;
  if (!((mu_i) != (mu_j))) mu__boolexpr1623 = TRUE ;
  else {
bool mu__boolexpr1624;
bool mu__boolexpr1625;
bool mu__boolexpr1626;
bool mu__boolexpr1627;
bool mu__boolexpr1628;
bool mu__boolexpr1629;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1629 = FALSE ;
  else {
  mu__boolexpr1629 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1629)) mu__boolexpr1628 = FALSE ;
  else {
  mu__boolexpr1628 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1628)) mu__boolexpr1627 = FALSE ;
  else {
  mu__boolexpr1627 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1627)) mu__boolexpr1626 = FALSE ;
  else {
  mu__boolexpr1626 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1626)) mu__boolexpr1625 = FALSE ;
  else {
  mu__boolexpr1625 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1625)) mu__boolexpr1624 = FALSE ;
  else {
  mu__boolexpr1624 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1623 = (!(mu__boolexpr1624)) ; 
}
if ( !(mu__boolexpr1623) )
  { mu__quant1622 = FALSE; break; }
};
};
};
};
return mu__quant1622;
};

bool mu__condition_1630() // Condition for Rule "test_reachable_state_84"
{
  return mu__invariant_1621( );
}

/**** end rule declaration ****/

int mu__invariant_1631() // Invariant "test_reachable_state_83"
{
bool mu__quant1632; 
mu__quant1632 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1633;
  if (!((mu_i) != (mu_j))) mu__boolexpr1633 = TRUE ;
  else {
bool mu__boolexpr1634;
bool mu__boolexpr1635;
bool mu__boolexpr1636;
bool mu__boolexpr1637;
bool mu__boolexpr1638;
bool mu__boolexpr1639;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1639 = FALSE ;
  else {
  mu__boolexpr1639 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1639)) mu__boolexpr1638 = FALSE ;
  else {
  mu__boolexpr1638 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1638)) mu__boolexpr1637 = FALSE ;
  else {
  mu__boolexpr1637 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1637)) mu__boolexpr1636 = FALSE ;
  else {
  mu__boolexpr1636 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1636)) mu__boolexpr1635 = FALSE ;
  else {
  mu__boolexpr1635 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1635)) mu__boolexpr1634 = FALSE ;
  else {
  mu__boolexpr1634 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1633 = (!(mu__boolexpr1634)) ; 
}
if ( !(mu__boolexpr1633) )
  { mu__quant1632 = FALSE; break; }
};
};
};
};
return mu__quant1632;
};

bool mu__condition_1640() // Condition for Rule "test_reachable_state_83"
{
  return mu__invariant_1631( );
}

/**** end rule declaration ****/

int mu__invariant_1641() // Invariant "test_reachable_state_82"
{
bool mu__quant1642; 
mu__quant1642 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1643;
  if (!((mu_i) != (mu_j))) mu__boolexpr1643 = TRUE ;
  else {
bool mu__boolexpr1644;
bool mu__boolexpr1645;
bool mu__boolexpr1646;
bool mu__boolexpr1647;
bool mu__boolexpr1648;
bool mu__boolexpr1649;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1649 = FALSE ;
  else {
  mu__boolexpr1649 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1649)) mu__boolexpr1648 = FALSE ;
  else {
  mu__boolexpr1648 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1648)) mu__boolexpr1647 = FALSE ;
  else {
  mu__boolexpr1647 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1647)) mu__boolexpr1646 = FALSE ;
  else {
  mu__boolexpr1646 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1646)) mu__boolexpr1645 = FALSE ;
  else {
  mu__boolexpr1645 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1645)) mu__boolexpr1644 = FALSE ;
  else {
  mu__boolexpr1644 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1643 = (!(mu__boolexpr1644)) ; 
}
if ( !(mu__boolexpr1643) )
  { mu__quant1642 = FALSE; break; }
};
};
};
};
return mu__quant1642;
};

bool mu__condition_1650() // Condition for Rule "test_reachable_state_82"
{
  return mu__invariant_1641( );
}

/**** end rule declaration ****/

int mu__invariant_1651() // Invariant "test_reachable_state_81"
{
bool mu__quant1652; 
mu__quant1652 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1653;
  if (!((mu_i) != (mu_j))) mu__boolexpr1653 = TRUE ;
  else {
bool mu__boolexpr1654;
bool mu__boolexpr1655;
bool mu__boolexpr1656;
bool mu__boolexpr1657;
bool mu__boolexpr1658;
bool mu__boolexpr1659;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr1659 = FALSE ;
  else {
  mu__boolexpr1659 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1659)) mu__boolexpr1658 = FALSE ;
  else {
  mu__boolexpr1658 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1658)) mu__boolexpr1657 = FALSE ;
  else {
  mu__boolexpr1657 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1657)) mu__boolexpr1656 = FALSE ;
  else {
  mu__boolexpr1656 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1656)) mu__boolexpr1655 = FALSE ;
  else {
  mu__boolexpr1655 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1655)) mu__boolexpr1654 = FALSE ;
  else {
  mu__boolexpr1654 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1653 = (!(mu__boolexpr1654)) ; 
}
if ( !(mu__boolexpr1653) )
  { mu__quant1652 = FALSE; break; }
};
};
};
};
return mu__quant1652;
};

bool mu__condition_1660() // Condition for Rule "test_reachable_state_81"
{
  return mu__invariant_1651( );
}

/**** end rule declaration ****/

int mu__invariant_1661() // Invariant "test_reachable_state_80"
{
bool mu__quant1662; 
mu__quant1662 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1663;
  if (!((mu_i) != (mu_j))) mu__boolexpr1663 = TRUE ;
  else {
bool mu__boolexpr1664;
bool mu__boolexpr1665;
bool mu__boolexpr1666;
bool mu__boolexpr1667;
bool mu__boolexpr1668;
bool mu__boolexpr1669;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1669 = FALSE ;
  else {
  mu__boolexpr1669 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1669)) mu__boolexpr1668 = FALSE ;
  else {
  mu__boolexpr1668 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1668)) mu__boolexpr1667 = FALSE ;
  else {
  mu__boolexpr1667 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1667)) mu__boolexpr1666 = FALSE ;
  else {
  mu__boolexpr1666 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1666)) mu__boolexpr1665 = FALSE ;
  else {
  mu__boolexpr1665 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1665)) mu__boolexpr1664 = FALSE ;
  else {
  mu__boolexpr1664 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1663 = (!(mu__boolexpr1664)) ; 
}
if ( !(mu__boolexpr1663) )
  { mu__quant1662 = FALSE; break; }
};
};
};
};
return mu__quant1662;
};

bool mu__condition_1670() // Condition for Rule "test_reachable_state_80"
{
  return mu__invariant_1661( );
}

/**** end rule declaration ****/

int mu__invariant_1671() // Invariant "test_reachable_state_79"
{
bool mu__quant1672; 
mu__quant1672 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1673;
  if (!((mu_i) != (mu_j))) mu__boolexpr1673 = TRUE ;
  else {
bool mu__boolexpr1674;
bool mu__boolexpr1675;
bool mu__boolexpr1676;
bool mu__boolexpr1677;
bool mu__boolexpr1678;
bool mu__boolexpr1679;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1679 = FALSE ;
  else {
  mu__boolexpr1679 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1679)) mu__boolexpr1678 = FALSE ;
  else {
  mu__boolexpr1678 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1678)) mu__boolexpr1677 = FALSE ;
  else {
  mu__boolexpr1677 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1677)) mu__boolexpr1676 = FALSE ;
  else {
  mu__boolexpr1676 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1676)) mu__boolexpr1675 = FALSE ;
  else {
  mu__boolexpr1675 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1675)) mu__boolexpr1674 = FALSE ;
  else {
  mu__boolexpr1674 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1673 = (!(mu__boolexpr1674)) ; 
}
if ( !(mu__boolexpr1673) )
  { mu__quant1672 = FALSE; break; }
};
};
};
};
return mu__quant1672;
};

bool mu__condition_1680() // Condition for Rule "test_reachable_state_79"
{
  return mu__invariant_1671( );
}

/**** end rule declaration ****/

int mu__invariant_1681() // Invariant "test_reachable_state_78"
{
bool mu__quant1682; 
mu__quant1682 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1683;
  if (!((mu_i) != (mu_j))) mu__boolexpr1683 = TRUE ;
  else {
bool mu__boolexpr1684;
bool mu__boolexpr1685;
bool mu__boolexpr1686;
bool mu__boolexpr1687;
bool mu__boolexpr1688;
bool mu__boolexpr1689;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1689 = FALSE ;
  else {
  mu__boolexpr1689 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1689)) mu__boolexpr1688 = FALSE ;
  else {
  mu__boolexpr1688 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1688)) mu__boolexpr1687 = FALSE ;
  else {
  mu__boolexpr1687 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1687)) mu__boolexpr1686 = FALSE ;
  else {
  mu__boolexpr1686 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1686)) mu__boolexpr1685 = FALSE ;
  else {
  mu__boolexpr1685 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1685)) mu__boolexpr1684 = FALSE ;
  else {
  mu__boolexpr1684 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1683 = (!(mu__boolexpr1684)) ; 
}
if ( !(mu__boolexpr1683) )
  { mu__quant1682 = FALSE; break; }
};
};
};
};
return mu__quant1682;
};

bool mu__condition_1690() // Condition for Rule "test_reachable_state_78"
{
  return mu__invariant_1681( );
}

/**** end rule declaration ****/

int mu__invariant_1691() // Invariant "test_reachable_state_77"
{
bool mu__quant1692; 
mu__quant1692 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1693;
  if (!((mu_i) != (mu_j))) mu__boolexpr1693 = TRUE ;
  else {
bool mu__boolexpr1694;
bool mu__boolexpr1695;
bool mu__boolexpr1696;
bool mu__boolexpr1697;
bool mu__boolexpr1698;
bool mu__boolexpr1699;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1699 = FALSE ;
  else {
  mu__boolexpr1699 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1699)) mu__boolexpr1698 = FALSE ;
  else {
  mu__boolexpr1698 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1698)) mu__boolexpr1697 = FALSE ;
  else {
  mu__boolexpr1697 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1697)) mu__boolexpr1696 = FALSE ;
  else {
  mu__boolexpr1696 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1696)) mu__boolexpr1695 = FALSE ;
  else {
  mu__boolexpr1695 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1695)) mu__boolexpr1694 = FALSE ;
  else {
  mu__boolexpr1694 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1693 = (!(mu__boolexpr1694)) ; 
}
if ( !(mu__boolexpr1693) )
  { mu__quant1692 = FALSE; break; }
};
};
};
};
return mu__quant1692;
};

bool mu__condition_1700() // Condition for Rule "test_reachable_state_77"
{
  return mu__invariant_1691( );
}

/**** end rule declaration ****/

int mu__invariant_1701() // Invariant "test_reachable_state_76"
{
bool mu__quant1702; 
mu__quant1702 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1703;
  if (!((mu_i) != (mu_j))) mu__boolexpr1703 = TRUE ;
  else {
bool mu__boolexpr1704;
bool mu__boolexpr1705;
bool mu__boolexpr1706;
bool mu__boolexpr1707;
bool mu__boolexpr1708;
bool mu__boolexpr1709;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1709 = FALSE ;
  else {
  mu__boolexpr1709 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1709)) mu__boolexpr1708 = FALSE ;
  else {
  mu__boolexpr1708 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1708)) mu__boolexpr1707 = FALSE ;
  else {
  mu__boolexpr1707 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1707)) mu__boolexpr1706 = FALSE ;
  else {
  mu__boolexpr1706 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1706)) mu__boolexpr1705 = FALSE ;
  else {
  mu__boolexpr1705 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1705)) mu__boolexpr1704 = FALSE ;
  else {
  mu__boolexpr1704 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1703 = (!(mu__boolexpr1704)) ; 
}
if ( !(mu__boolexpr1703) )
  { mu__quant1702 = FALSE; break; }
};
};
};
};
return mu__quant1702;
};

bool mu__condition_1710() // Condition for Rule "test_reachable_state_76"
{
  return mu__invariant_1701( );
}

/**** end rule declaration ****/

int mu__invariant_1711() // Invariant "test_reachable_state_75"
{
bool mu__quant1712; 
mu__quant1712 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1713;
  if (!((mu_i) != (mu_j))) mu__boolexpr1713 = TRUE ;
  else {
bool mu__boolexpr1714;
bool mu__boolexpr1715;
bool mu__boolexpr1716;
bool mu__boolexpr1717;
bool mu__boolexpr1718;
bool mu__boolexpr1719;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1719 = FALSE ;
  else {
  mu__boolexpr1719 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1719)) mu__boolexpr1718 = FALSE ;
  else {
  mu__boolexpr1718 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1718)) mu__boolexpr1717 = FALSE ;
  else {
  mu__boolexpr1717 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1717)) mu__boolexpr1716 = FALSE ;
  else {
  mu__boolexpr1716 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1716)) mu__boolexpr1715 = FALSE ;
  else {
  mu__boolexpr1715 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1715)) mu__boolexpr1714 = FALSE ;
  else {
  mu__boolexpr1714 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1713 = (!(mu__boolexpr1714)) ; 
}
if ( !(mu__boolexpr1713) )
  { mu__quant1712 = FALSE; break; }
};
};
};
};
return mu__quant1712;
};

bool mu__condition_1720() // Condition for Rule "test_reachable_state_75"
{
  return mu__invariant_1711( );
}

/**** end rule declaration ****/

int mu__invariant_1721() // Invariant "test_reachable_state_74"
{
bool mu__quant1722; 
mu__quant1722 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1723;
  if (!((mu_i) != (mu_j))) mu__boolexpr1723 = TRUE ;
  else {
bool mu__boolexpr1724;
bool mu__boolexpr1725;
bool mu__boolexpr1726;
bool mu__boolexpr1727;
bool mu__boolexpr1728;
bool mu__boolexpr1729;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1729 = FALSE ;
  else {
  mu__boolexpr1729 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1729)) mu__boolexpr1728 = FALSE ;
  else {
  mu__boolexpr1728 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1728)) mu__boolexpr1727 = FALSE ;
  else {
  mu__boolexpr1727 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1727)) mu__boolexpr1726 = FALSE ;
  else {
  mu__boolexpr1726 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1726)) mu__boolexpr1725 = FALSE ;
  else {
  mu__boolexpr1725 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1725)) mu__boolexpr1724 = FALSE ;
  else {
  mu__boolexpr1724 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1723 = (!(mu__boolexpr1724)) ; 
}
if ( !(mu__boolexpr1723) )
  { mu__quant1722 = FALSE; break; }
};
};
};
};
return mu__quant1722;
};

bool mu__condition_1730() // Condition for Rule "test_reachable_state_74"
{
  return mu__invariant_1721( );
}

/**** end rule declaration ****/

int mu__invariant_1731() // Invariant "test_reachable_state_73"
{
bool mu__quant1732; 
mu__quant1732 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1733;
  if (!((mu_i) != (mu_j))) mu__boolexpr1733 = TRUE ;
  else {
bool mu__boolexpr1734;
bool mu__boolexpr1735;
bool mu__boolexpr1736;
bool mu__boolexpr1737;
bool mu__boolexpr1738;
bool mu__boolexpr1739;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1739 = FALSE ;
  else {
  mu__boolexpr1739 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1739)) mu__boolexpr1738 = FALSE ;
  else {
  mu__boolexpr1738 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1738)) mu__boolexpr1737 = FALSE ;
  else {
  mu__boolexpr1737 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1737)) mu__boolexpr1736 = FALSE ;
  else {
  mu__boolexpr1736 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1736)) mu__boolexpr1735 = FALSE ;
  else {
  mu__boolexpr1735 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1735)) mu__boolexpr1734 = FALSE ;
  else {
  mu__boolexpr1734 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1733 = (!(mu__boolexpr1734)) ; 
}
if ( !(mu__boolexpr1733) )
  { mu__quant1732 = FALSE; break; }
};
};
};
};
return mu__quant1732;
};

bool mu__condition_1740() // Condition for Rule "test_reachable_state_73"
{
  return mu__invariant_1731( );
}

/**** end rule declaration ****/

int mu__invariant_1741() // Invariant "test_reachable_state_72"
{
bool mu__quant1742; 
mu__quant1742 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1743;
  if (!((mu_i) != (mu_j))) mu__boolexpr1743 = TRUE ;
  else {
bool mu__boolexpr1744;
bool mu__boolexpr1745;
bool mu__boolexpr1746;
bool mu__boolexpr1747;
bool mu__boolexpr1748;
bool mu__boolexpr1749;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1749 = FALSE ;
  else {
  mu__boolexpr1749 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1749)) mu__boolexpr1748 = FALSE ;
  else {
  mu__boolexpr1748 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1748)) mu__boolexpr1747 = FALSE ;
  else {
  mu__boolexpr1747 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1747)) mu__boolexpr1746 = FALSE ;
  else {
  mu__boolexpr1746 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1746)) mu__boolexpr1745 = FALSE ;
  else {
  mu__boolexpr1745 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1745)) mu__boolexpr1744 = FALSE ;
  else {
  mu__boolexpr1744 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1743 = (!(mu__boolexpr1744)) ; 
}
if ( !(mu__boolexpr1743) )
  { mu__quant1742 = FALSE; break; }
};
};
};
};
return mu__quant1742;
};

bool mu__condition_1750() // Condition for Rule "test_reachable_state_72"
{
  return mu__invariant_1741( );
}

/**** end rule declaration ****/

int mu__invariant_1751() // Invariant "test_reachable_state_71"
{
bool mu__quant1752; 
mu__quant1752 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1753;
  if (!((mu_i) != (mu_j))) mu__boolexpr1753 = TRUE ;
  else {
bool mu__boolexpr1754;
bool mu__boolexpr1755;
bool mu__boolexpr1756;
bool mu__boolexpr1757;
bool mu__boolexpr1758;
bool mu__boolexpr1759;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1759 = FALSE ;
  else {
  mu__boolexpr1759 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1759)) mu__boolexpr1758 = FALSE ;
  else {
  mu__boolexpr1758 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1758)) mu__boolexpr1757 = FALSE ;
  else {
  mu__boolexpr1757 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1757)) mu__boolexpr1756 = FALSE ;
  else {
  mu__boolexpr1756 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1756)) mu__boolexpr1755 = FALSE ;
  else {
  mu__boolexpr1755 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1755)) mu__boolexpr1754 = FALSE ;
  else {
  mu__boolexpr1754 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1753 = (!(mu__boolexpr1754)) ; 
}
if ( !(mu__boolexpr1753) )
  { mu__quant1752 = FALSE; break; }
};
};
};
};
return mu__quant1752;
};

bool mu__condition_1760() // Condition for Rule "test_reachable_state_71"
{
  return mu__invariant_1751( );
}

/**** end rule declaration ****/

int mu__invariant_1761() // Invariant "test_reachable_state_70"
{
bool mu__quant1762; 
mu__quant1762 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1763;
  if (!((mu_i) != (mu_j))) mu__boolexpr1763 = TRUE ;
  else {
bool mu__boolexpr1764;
bool mu__boolexpr1765;
bool mu__boolexpr1766;
bool mu__boolexpr1767;
bool mu__boolexpr1768;
bool mu__boolexpr1769;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1769 = FALSE ;
  else {
  mu__boolexpr1769 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1769)) mu__boolexpr1768 = FALSE ;
  else {
  mu__boolexpr1768 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1768)) mu__boolexpr1767 = FALSE ;
  else {
  mu__boolexpr1767 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1767)) mu__boolexpr1766 = FALSE ;
  else {
  mu__boolexpr1766 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1766)) mu__boolexpr1765 = FALSE ;
  else {
  mu__boolexpr1765 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1765)) mu__boolexpr1764 = FALSE ;
  else {
  mu__boolexpr1764 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1763 = (!(mu__boolexpr1764)) ; 
}
if ( !(mu__boolexpr1763) )
  { mu__quant1762 = FALSE; break; }
};
};
};
};
return mu__quant1762;
};

bool mu__condition_1770() // Condition for Rule "test_reachable_state_70"
{
  return mu__invariant_1761( );
}

/**** end rule declaration ****/

int mu__invariant_1771() // Invariant "test_reachable_state_69"
{
bool mu__quant1772; 
mu__quant1772 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1773;
  if (!((mu_i) != (mu_j))) mu__boolexpr1773 = TRUE ;
  else {
bool mu__boolexpr1774;
bool mu__boolexpr1775;
bool mu__boolexpr1776;
bool mu__boolexpr1777;
bool mu__boolexpr1778;
bool mu__boolexpr1779;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1779 = FALSE ;
  else {
  mu__boolexpr1779 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1779)) mu__boolexpr1778 = FALSE ;
  else {
  mu__boolexpr1778 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1778)) mu__boolexpr1777 = FALSE ;
  else {
  mu__boolexpr1777 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1777)) mu__boolexpr1776 = FALSE ;
  else {
  mu__boolexpr1776 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1776)) mu__boolexpr1775 = FALSE ;
  else {
  mu__boolexpr1775 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1775)) mu__boolexpr1774 = FALSE ;
  else {
  mu__boolexpr1774 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1773 = (!(mu__boolexpr1774)) ; 
}
if ( !(mu__boolexpr1773) )
  { mu__quant1772 = FALSE; break; }
};
};
};
};
return mu__quant1772;
};

bool mu__condition_1780() // Condition for Rule "test_reachable_state_69"
{
  return mu__invariant_1771( );
}

/**** end rule declaration ****/

int mu__invariant_1781() // Invariant "test_reachable_state_68"
{
bool mu__quant1782; 
mu__quant1782 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1783;
  if (!((mu_i) != (mu_j))) mu__boolexpr1783 = TRUE ;
  else {
bool mu__boolexpr1784;
bool mu__boolexpr1785;
bool mu__boolexpr1786;
bool mu__boolexpr1787;
bool mu__boolexpr1788;
bool mu__boolexpr1789;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1789 = FALSE ;
  else {
  mu__boolexpr1789 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1789)) mu__boolexpr1788 = FALSE ;
  else {
  mu__boolexpr1788 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1788)) mu__boolexpr1787 = FALSE ;
  else {
  mu__boolexpr1787 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1787)) mu__boolexpr1786 = FALSE ;
  else {
  mu__boolexpr1786 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1786)) mu__boolexpr1785 = FALSE ;
  else {
  mu__boolexpr1785 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1785)) mu__boolexpr1784 = FALSE ;
  else {
  mu__boolexpr1784 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1783 = (!(mu__boolexpr1784)) ; 
}
if ( !(mu__boolexpr1783) )
  { mu__quant1782 = FALSE; break; }
};
};
};
};
return mu__quant1782;
};

bool mu__condition_1790() // Condition for Rule "test_reachable_state_68"
{
  return mu__invariant_1781( );
}

/**** end rule declaration ****/

int mu__invariant_1791() // Invariant "test_reachable_state_67"
{
bool mu__quant1792; 
mu__quant1792 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1793;
  if (!((mu_i) != (mu_j))) mu__boolexpr1793 = TRUE ;
  else {
bool mu__boolexpr1794;
bool mu__boolexpr1795;
bool mu__boolexpr1796;
bool mu__boolexpr1797;
bool mu__boolexpr1798;
bool mu__boolexpr1799;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1799 = FALSE ;
  else {
  mu__boolexpr1799 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1799)) mu__boolexpr1798 = FALSE ;
  else {
  mu__boolexpr1798 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1798)) mu__boolexpr1797 = FALSE ;
  else {
  mu__boolexpr1797 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1797)) mu__boolexpr1796 = FALSE ;
  else {
  mu__boolexpr1796 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1796)) mu__boolexpr1795 = FALSE ;
  else {
  mu__boolexpr1795 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1795)) mu__boolexpr1794 = FALSE ;
  else {
  mu__boolexpr1794 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1793 = (!(mu__boolexpr1794)) ; 
}
if ( !(mu__boolexpr1793) )
  { mu__quant1792 = FALSE; break; }
};
};
};
};
return mu__quant1792;
};

bool mu__condition_1800() // Condition for Rule "test_reachable_state_67"
{
  return mu__invariant_1791( );
}

/**** end rule declaration ****/

int mu__invariant_1801() // Invariant "test_reachable_state_66"
{
bool mu__quant1802; 
mu__quant1802 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1803;
  if (!((mu_i) != (mu_j))) mu__boolexpr1803 = TRUE ;
  else {
bool mu__boolexpr1804;
bool mu__boolexpr1805;
bool mu__boolexpr1806;
bool mu__boolexpr1807;
bool mu__boolexpr1808;
bool mu__boolexpr1809;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1809 = FALSE ;
  else {
  mu__boolexpr1809 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1809)) mu__boolexpr1808 = FALSE ;
  else {
  mu__boolexpr1808 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1808)) mu__boolexpr1807 = FALSE ;
  else {
  mu__boolexpr1807 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1807)) mu__boolexpr1806 = FALSE ;
  else {
  mu__boolexpr1806 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1806)) mu__boolexpr1805 = FALSE ;
  else {
  mu__boolexpr1805 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1805)) mu__boolexpr1804 = FALSE ;
  else {
  mu__boolexpr1804 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1803 = (!(mu__boolexpr1804)) ; 
}
if ( !(mu__boolexpr1803) )
  { mu__quant1802 = FALSE; break; }
};
};
};
};
return mu__quant1802;
};

bool mu__condition_1810() // Condition for Rule "test_reachable_state_66"
{
  return mu__invariant_1801( );
}

/**** end rule declaration ****/

int mu__invariant_1811() // Invariant "test_reachable_state_65"
{
bool mu__quant1812; 
mu__quant1812 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1813;
  if (!((mu_i) != (mu_j))) mu__boolexpr1813 = TRUE ;
  else {
bool mu__boolexpr1814;
bool mu__boolexpr1815;
bool mu__boolexpr1816;
bool mu__boolexpr1817;
bool mu__boolexpr1818;
bool mu__boolexpr1819;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1819 = FALSE ;
  else {
  mu__boolexpr1819 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1819)) mu__boolexpr1818 = FALSE ;
  else {
  mu__boolexpr1818 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1818)) mu__boolexpr1817 = FALSE ;
  else {
  mu__boolexpr1817 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1817)) mu__boolexpr1816 = FALSE ;
  else {
  mu__boolexpr1816 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1816)) mu__boolexpr1815 = FALSE ;
  else {
  mu__boolexpr1815 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1815)) mu__boolexpr1814 = FALSE ;
  else {
  mu__boolexpr1814 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1813 = (!(mu__boolexpr1814)) ; 
}
if ( !(mu__boolexpr1813) )
  { mu__quant1812 = FALSE; break; }
};
};
};
};
return mu__quant1812;
};

bool mu__condition_1820() // Condition for Rule "test_reachable_state_65"
{
  return mu__invariant_1811( );
}

/**** end rule declaration ****/

int mu__invariant_1821() // Invariant "test_reachable_state_64"
{
bool mu__quant1822; 
mu__quant1822 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1823;
  if (!((mu_i) != (mu_j))) mu__boolexpr1823 = TRUE ;
  else {
bool mu__boolexpr1824;
bool mu__boolexpr1825;
bool mu__boolexpr1826;
bool mu__boolexpr1827;
bool mu__boolexpr1828;
bool mu__boolexpr1829;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1829 = FALSE ;
  else {
  mu__boolexpr1829 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1829)) mu__boolexpr1828 = FALSE ;
  else {
  mu__boolexpr1828 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1828)) mu__boolexpr1827 = FALSE ;
  else {
  mu__boolexpr1827 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1827)) mu__boolexpr1826 = FALSE ;
  else {
  mu__boolexpr1826 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1826)) mu__boolexpr1825 = FALSE ;
  else {
  mu__boolexpr1825 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1825)) mu__boolexpr1824 = FALSE ;
  else {
  mu__boolexpr1824 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1823 = (!(mu__boolexpr1824)) ; 
}
if ( !(mu__boolexpr1823) )
  { mu__quant1822 = FALSE; break; }
};
};
};
};
return mu__quant1822;
};

bool mu__condition_1830() // Condition for Rule "test_reachable_state_64"
{
  return mu__invariant_1821( );
}

/**** end rule declaration ****/

int mu__invariant_1831() // Invariant "test_reachable_state_63"
{
bool mu__quant1832; 
mu__quant1832 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1833;
  if (!((mu_i) != (mu_j))) mu__boolexpr1833 = TRUE ;
  else {
bool mu__boolexpr1834;
bool mu__boolexpr1835;
bool mu__boolexpr1836;
bool mu__boolexpr1837;
bool mu__boolexpr1838;
bool mu__boolexpr1839;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1839 = FALSE ;
  else {
  mu__boolexpr1839 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1839)) mu__boolexpr1838 = FALSE ;
  else {
  mu__boolexpr1838 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1838)) mu__boolexpr1837 = FALSE ;
  else {
  mu__boolexpr1837 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1837)) mu__boolexpr1836 = FALSE ;
  else {
  mu__boolexpr1836 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1836)) mu__boolexpr1835 = FALSE ;
  else {
  mu__boolexpr1835 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1835)) mu__boolexpr1834 = FALSE ;
  else {
  mu__boolexpr1834 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1833 = (!(mu__boolexpr1834)) ; 
}
if ( !(mu__boolexpr1833) )
  { mu__quant1832 = FALSE; break; }
};
};
};
};
return mu__quant1832;
};

bool mu__condition_1840() // Condition for Rule "test_reachable_state_63"
{
  return mu__invariant_1831( );
}

/**** end rule declaration ****/

int mu__invariant_1841() // Invariant "test_reachable_state_62"
{
bool mu__quant1842; 
mu__quant1842 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1843;
  if (!((mu_i) != (mu_j))) mu__boolexpr1843 = TRUE ;
  else {
bool mu__boolexpr1844;
bool mu__boolexpr1845;
bool mu__boolexpr1846;
bool mu__boolexpr1847;
bool mu__boolexpr1848;
bool mu__boolexpr1849;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1849 = FALSE ;
  else {
  mu__boolexpr1849 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1849)) mu__boolexpr1848 = FALSE ;
  else {
  mu__boolexpr1848 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1848)) mu__boolexpr1847 = FALSE ;
  else {
  mu__boolexpr1847 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1847)) mu__boolexpr1846 = FALSE ;
  else {
  mu__boolexpr1846 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1846)) mu__boolexpr1845 = FALSE ;
  else {
  mu__boolexpr1845 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1845)) mu__boolexpr1844 = FALSE ;
  else {
  mu__boolexpr1844 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1843 = (!(mu__boolexpr1844)) ; 
}
if ( !(mu__boolexpr1843) )
  { mu__quant1842 = FALSE; break; }
};
};
};
};
return mu__quant1842;
};

bool mu__condition_1850() // Condition for Rule "test_reachable_state_62"
{
  return mu__invariant_1841( );
}

/**** end rule declaration ****/

int mu__invariant_1851() // Invariant "test_reachable_state_61"
{
bool mu__quant1852; 
mu__quant1852 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1853;
  if (!((mu_i) != (mu_j))) mu__boolexpr1853 = TRUE ;
  else {
bool mu__boolexpr1854;
bool mu__boolexpr1855;
bool mu__boolexpr1856;
bool mu__boolexpr1857;
bool mu__boolexpr1858;
bool mu__boolexpr1859;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1859 = FALSE ;
  else {
  mu__boolexpr1859 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1859)) mu__boolexpr1858 = FALSE ;
  else {
  mu__boolexpr1858 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1858)) mu__boolexpr1857 = FALSE ;
  else {
  mu__boolexpr1857 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1857)) mu__boolexpr1856 = FALSE ;
  else {
  mu__boolexpr1856 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1856)) mu__boolexpr1855 = FALSE ;
  else {
  mu__boolexpr1855 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1855)) mu__boolexpr1854 = FALSE ;
  else {
  mu__boolexpr1854 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1853 = (!(mu__boolexpr1854)) ; 
}
if ( !(mu__boolexpr1853) )
  { mu__quant1852 = FALSE; break; }
};
};
};
};
return mu__quant1852;
};

bool mu__condition_1860() // Condition for Rule "test_reachable_state_61"
{
  return mu__invariant_1851( );
}

/**** end rule declaration ****/

int mu__invariant_1861() // Invariant "test_reachable_state_60"
{
bool mu__quant1862; 
mu__quant1862 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1863;
  if (!((mu_i) != (mu_j))) mu__boolexpr1863 = TRUE ;
  else {
bool mu__boolexpr1864;
bool mu__boolexpr1865;
bool mu__boolexpr1866;
bool mu__boolexpr1867;
bool mu__boolexpr1868;
bool mu__boolexpr1869;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1869 = FALSE ;
  else {
  mu__boolexpr1869 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1869)) mu__boolexpr1868 = FALSE ;
  else {
  mu__boolexpr1868 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1868)) mu__boolexpr1867 = FALSE ;
  else {
  mu__boolexpr1867 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1867)) mu__boolexpr1866 = FALSE ;
  else {
  mu__boolexpr1866 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1866)) mu__boolexpr1865 = FALSE ;
  else {
  mu__boolexpr1865 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1865)) mu__boolexpr1864 = FALSE ;
  else {
  mu__boolexpr1864 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1863 = (!(mu__boolexpr1864)) ; 
}
if ( !(mu__boolexpr1863) )
  { mu__quant1862 = FALSE; break; }
};
};
};
};
return mu__quant1862;
};

bool mu__condition_1870() // Condition for Rule "test_reachable_state_60"
{
  return mu__invariant_1861( );
}

/**** end rule declaration ****/

int mu__invariant_1871() // Invariant "test_reachable_state_59"
{
bool mu__quant1872; 
mu__quant1872 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1873;
  if (!((mu_i) != (mu_j))) mu__boolexpr1873 = TRUE ;
  else {
bool mu__boolexpr1874;
bool mu__boolexpr1875;
bool mu__boolexpr1876;
bool mu__boolexpr1877;
bool mu__boolexpr1878;
bool mu__boolexpr1879;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1879 = FALSE ;
  else {
  mu__boolexpr1879 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1879)) mu__boolexpr1878 = FALSE ;
  else {
  mu__boolexpr1878 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1878)) mu__boolexpr1877 = FALSE ;
  else {
  mu__boolexpr1877 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1877)) mu__boolexpr1876 = FALSE ;
  else {
  mu__boolexpr1876 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1876)) mu__boolexpr1875 = FALSE ;
  else {
  mu__boolexpr1875 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1875)) mu__boolexpr1874 = FALSE ;
  else {
  mu__boolexpr1874 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1873 = (!(mu__boolexpr1874)) ; 
}
if ( !(mu__boolexpr1873) )
  { mu__quant1872 = FALSE; break; }
};
};
};
};
return mu__quant1872;
};

bool mu__condition_1880() // Condition for Rule "test_reachable_state_59"
{
  return mu__invariant_1871( );
}

/**** end rule declaration ****/

int mu__invariant_1881() // Invariant "test_reachable_state_58"
{
bool mu__quant1882; 
mu__quant1882 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1883;
  if (!((mu_i) != (mu_j))) mu__boolexpr1883 = TRUE ;
  else {
bool mu__boolexpr1884;
bool mu__boolexpr1885;
bool mu__boolexpr1886;
bool mu__boolexpr1887;
bool mu__boolexpr1888;
bool mu__boolexpr1889;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1889 = FALSE ;
  else {
  mu__boolexpr1889 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1889)) mu__boolexpr1888 = FALSE ;
  else {
  mu__boolexpr1888 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1888)) mu__boolexpr1887 = FALSE ;
  else {
  mu__boolexpr1887 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1887)) mu__boolexpr1886 = FALSE ;
  else {
  mu__boolexpr1886 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1886)) mu__boolexpr1885 = FALSE ;
  else {
  mu__boolexpr1885 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1885)) mu__boolexpr1884 = FALSE ;
  else {
  mu__boolexpr1884 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1883 = (!(mu__boolexpr1884)) ; 
}
if ( !(mu__boolexpr1883) )
  { mu__quant1882 = FALSE; break; }
};
};
};
};
return mu__quant1882;
};

bool mu__condition_1890() // Condition for Rule "test_reachable_state_58"
{
  return mu__invariant_1881( );
}

/**** end rule declaration ****/

int mu__invariant_1891() // Invariant "test_reachable_state_57"
{
bool mu__quant1892; 
mu__quant1892 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1893;
  if (!((mu_i) != (mu_j))) mu__boolexpr1893 = TRUE ;
  else {
bool mu__boolexpr1894;
bool mu__boolexpr1895;
bool mu__boolexpr1896;
bool mu__boolexpr1897;
bool mu__boolexpr1898;
bool mu__boolexpr1899;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1899 = FALSE ;
  else {
  mu__boolexpr1899 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1899)) mu__boolexpr1898 = FALSE ;
  else {
  mu__boolexpr1898 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1898)) mu__boolexpr1897 = FALSE ;
  else {
  mu__boolexpr1897 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1897)) mu__boolexpr1896 = FALSE ;
  else {
  mu__boolexpr1896 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1896)) mu__boolexpr1895 = FALSE ;
  else {
  mu__boolexpr1895 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1895)) mu__boolexpr1894 = FALSE ;
  else {
  mu__boolexpr1894 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1893 = (!(mu__boolexpr1894)) ; 
}
if ( !(mu__boolexpr1893) )
  { mu__quant1892 = FALSE; break; }
};
};
};
};
return mu__quant1892;
};

bool mu__condition_1900() // Condition for Rule "test_reachable_state_57"
{
  return mu__invariant_1891( );
}

/**** end rule declaration ****/

int mu__invariant_1901() // Invariant "test_reachable_state_56"
{
bool mu__quant1902; 
mu__quant1902 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1903;
  if (!((mu_i) != (mu_j))) mu__boolexpr1903 = TRUE ;
  else {
bool mu__boolexpr1904;
bool mu__boolexpr1905;
bool mu__boolexpr1906;
bool mu__boolexpr1907;
bool mu__boolexpr1908;
bool mu__boolexpr1909;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1909 = FALSE ;
  else {
  mu__boolexpr1909 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1909)) mu__boolexpr1908 = FALSE ;
  else {
  mu__boolexpr1908 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1908)) mu__boolexpr1907 = FALSE ;
  else {
  mu__boolexpr1907 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1907)) mu__boolexpr1906 = FALSE ;
  else {
  mu__boolexpr1906 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1906)) mu__boolexpr1905 = FALSE ;
  else {
  mu__boolexpr1905 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1905)) mu__boolexpr1904 = FALSE ;
  else {
  mu__boolexpr1904 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1903 = (!(mu__boolexpr1904)) ; 
}
if ( !(mu__boolexpr1903) )
  { mu__quant1902 = FALSE; break; }
};
};
};
};
return mu__quant1902;
};

bool mu__condition_1910() // Condition for Rule "test_reachable_state_56"
{
  return mu__invariant_1901( );
}

/**** end rule declaration ****/

int mu__invariant_1911() // Invariant "test_reachable_state_55"
{
bool mu__quant1912; 
mu__quant1912 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1913;
  if (!((mu_i) != (mu_j))) mu__boolexpr1913 = TRUE ;
  else {
bool mu__boolexpr1914;
bool mu__boolexpr1915;
bool mu__boolexpr1916;
bool mu__boolexpr1917;
bool mu__boolexpr1918;
bool mu__boolexpr1919;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1919 = FALSE ;
  else {
  mu__boolexpr1919 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1919)) mu__boolexpr1918 = FALSE ;
  else {
  mu__boolexpr1918 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1918)) mu__boolexpr1917 = FALSE ;
  else {
  mu__boolexpr1917 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1917)) mu__boolexpr1916 = FALSE ;
  else {
  mu__boolexpr1916 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1916)) mu__boolexpr1915 = FALSE ;
  else {
  mu__boolexpr1915 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1915)) mu__boolexpr1914 = FALSE ;
  else {
  mu__boolexpr1914 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1913 = (!(mu__boolexpr1914)) ; 
}
if ( !(mu__boolexpr1913) )
  { mu__quant1912 = FALSE; break; }
};
};
};
};
return mu__quant1912;
};

bool mu__condition_1920() // Condition for Rule "test_reachable_state_55"
{
  return mu__invariant_1911( );
}

/**** end rule declaration ****/

int mu__invariant_1921() // Invariant "test_reachable_state_54"
{
bool mu__quant1922; 
mu__quant1922 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1923;
  if (!((mu_i) != (mu_j))) mu__boolexpr1923 = TRUE ;
  else {
bool mu__boolexpr1924;
bool mu__boolexpr1925;
bool mu__boolexpr1926;
bool mu__boolexpr1927;
bool mu__boolexpr1928;
bool mu__boolexpr1929;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1929 = FALSE ;
  else {
  mu__boolexpr1929 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1929)) mu__boolexpr1928 = FALSE ;
  else {
  mu__boolexpr1928 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1928)) mu__boolexpr1927 = FALSE ;
  else {
  mu__boolexpr1927 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1927)) mu__boolexpr1926 = FALSE ;
  else {
  mu__boolexpr1926 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1926)) mu__boolexpr1925 = FALSE ;
  else {
  mu__boolexpr1925 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1925)) mu__boolexpr1924 = FALSE ;
  else {
  mu__boolexpr1924 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1923 = (!(mu__boolexpr1924)) ; 
}
if ( !(mu__boolexpr1923) )
  { mu__quant1922 = FALSE; break; }
};
};
};
};
return mu__quant1922;
};

bool mu__condition_1930() // Condition for Rule "test_reachable_state_54"
{
  return mu__invariant_1921( );
}

/**** end rule declaration ****/

int mu__invariant_1931() // Invariant "test_reachable_state_53"
{
bool mu__quant1932; 
mu__quant1932 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1933;
  if (!((mu_i) != (mu_j))) mu__boolexpr1933 = TRUE ;
  else {
bool mu__boolexpr1934;
bool mu__boolexpr1935;
bool mu__boolexpr1936;
bool mu__boolexpr1937;
bool mu__boolexpr1938;
bool mu__boolexpr1939;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1939 = FALSE ;
  else {
  mu__boolexpr1939 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1939)) mu__boolexpr1938 = FALSE ;
  else {
  mu__boolexpr1938 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1938)) mu__boolexpr1937 = FALSE ;
  else {
  mu__boolexpr1937 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1937)) mu__boolexpr1936 = FALSE ;
  else {
  mu__boolexpr1936 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1936)) mu__boolexpr1935 = FALSE ;
  else {
  mu__boolexpr1935 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1935)) mu__boolexpr1934 = FALSE ;
  else {
  mu__boolexpr1934 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1933 = (!(mu__boolexpr1934)) ; 
}
if ( !(mu__boolexpr1933) )
  { mu__quant1932 = FALSE; break; }
};
};
};
};
return mu__quant1932;
};

bool mu__condition_1940() // Condition for Rule "test_reachable_state_53"
{
  return mu__invariant_1931( );
}

/**** end rule declaration ****/

int mu__invariant_1941() // Invariant "test_reachable_state_52"
{
bool mu__quant1942; 
mu__quant1942 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1943;
  if (!((mu_i) != (mu_j))) mu__boolexpr1943 = TRUE ;
  else {
bool mu__boolexpr1944;
bool mu__boolexpr1945;
bool mu__boolexpr1946;
bool mu__boolexpr1947;
bool mu__boolexpr1948;
bool mu__boolexpr1949;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1949 = FALSE ;
  else {
  mu__boolexpr1949 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1949)) mu__boolexpr1948 = FALSE ;
  else {
  mu__boolexpr1948 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1948)) mu__boolexpr1947 = FALSE ;
  else {
  mu__boolexpr1947 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1947)) mu__boolexpr1946 = FALSE ;
  else {
  mu__boolexpr1946 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1946)) mu__boolexpr1945 = FALSE ;
  else {
  mu__boolexpr1945 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1945)) mu__boolexpr1944 = FALSE ;
  else {
  mu__boolexpr1944 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1943 = (!(mu__boolexpr1944)) ; 
}
if ( !(mu__boolexpr1943) )
  { mu__quant1942 = FALSE; break; }
};
};
};
};
return mu__quant1942;
};

bool mu__condition_1950() // Condition for Rule "test_reachable_state_52"
{
  return mu__invariant_1941( );
}

/**** end rule declaration ****/

int mu__invariant_1951() // Invariant "test_reachable_state_51"
{
bool mu__quant1952; 
mu__quant1952 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1953;
  if (!((mu_i) != (mu_j))) mu__boolexpr1953 = TRUE ;
  else {
bool mu__boolexpr1954;
bool mu__boolexpr1955;
bool mu__boolexpr1956;
bool mu__boolexpr1957;
bool mu__boolexpr1958;
bool mu__boolexpr1959;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1959 = FALSE ;
  else {
  mu__boolexpr1959 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1959)) mu__boolexpr1958 = FALSE ;
  else {
  mu__boolexpr1958 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1958)) mu__boolexpr1957 = FALSE ;
  else {
  mu__boolexpr1957 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1957)) mu__boolexpr1956 = FALSE ;
  else {
  mu__boolexpr1956 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1956)) mu__boolexpr1955 = FALSE ;
  else {
  mu__boolexpr1955 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1955)) mu__boolexpr1954 = FALSE ;
  else {
  mu__boolexpr1954 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1953 = (!(mu__boolexpr1954)) ; 
}
if ( !(mu__boolexpr1953) )
  { mu__quant1952 = FALSE; break; }
};
};
};
};
return mu__quant1952;
};

bool mu__condition_1960() // Condition for Rule "test_reachable_state_51"
{
  return mu__invariant_1951( );
}

/**** end rule declaration ****/

int mu__invariant_1961() // Invariant "test_reachable_state_50"
{
bool mu__quant1962; 
mu__quant1962 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1963;
  if (!((mu_i) != (mu_j))) mu__boolexpr1963 = TRUE ;
  else {
bool mu__boolexpr1964;
bool mu__boolexpr1965;
bool mu__boolexpr1966;
bool mu__boolexpr1967;
bool mu__boolexpr1968;
bool mu__boolexpr1969;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1969 = FALSE ;
  else {
  mu__boolexpr1969 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1969)) mu__boolexpr1968 = FALSE ;
  else {
  mu__boolexpr1968 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1968)) mu__boolexpr1967 = FALSE ;
  else {
  mu__boolexpr1967 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1967)) mu__boolexpr1966 = FALSE ;
  else {
  mu__boolexpr1966 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1966)) mu__boolexpr1965 = FALSE ;
  else {
  mu__boolexpr1965 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1965)) mu__boolexpr1964 = FALSE ;
  else {
  mu__boolexpr1964 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1963 = (!(mu__boolexpr1964)) ; 
}
if ( !(mu__boolexpr1963) )
  { mu__quant1962 = FALSE; break; }
};
};
};
};
return mu__quant1962;
};

bool mu__condition_1970() // Condition for Rule "test_reachable_state_50"
{
  return mu__invariant_1961( );
}

/**** end rule declaration ****/

int mu__invariant_1971() // Invariant "test_reachable_state_49"
{
bool mu__quant1972; 
mu__quant1972 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1973;
  if (!((mu_i) != (mu_j))) mu__boolexpr1973 = TRUE ;
  else {
bool mu__boolexpr1974;
bool mu__boolexpr1975;
bool mu__boolexpr1976;
bool mu__boolexpr1977;
bool mu__boolexpr1978;
bool mu__boolexpr1979;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1979 = FALSE ;
  else {
  mu__boolexpr1979 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1979)) mu__boolexpr1978 = FALSE ;
  else {
  mu__boolexpr1978 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1978)) mu__boolexpr1977 = FALSE ;
  else {
  mu__boolexpr1977 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1977)) mu__boolexpr1976 = FALSE ;
  else {
  mu__boolexpr1976 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1976)) mu__boolexpr1975 = FALSE ;
  else {
  mu__boolexpr1975 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1975)) mu__boolexpr1974 = FALSE ;
  else {
  mu__boolexpr1974 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1973 = (!(mu__boolexpr1974)) ; 
}
if ( !(mu__boolexpr1973) )
  { mu__quant1972 = FALSE; break; }
};
};
};
};
return mu__quant1972;
};

bool mu__condition_1980() // Condition for Rule "test_reachable_state_49"
{
  return mu__invariant_1971( );
}

/**** end rule declaration ****/

int mu__invariant_1981() // Invariant "test_reachable_state_48"
{
bool mu__quant1982; 
mu__quant1982 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1983;
  if (!((mu_i) != (mu_j))) mu__boolexpr1983 = TRUE ;
  else {
bool mu__boolexpr1984;
bool mu__boolexpr1985;
bool mu__boolexpr1986;
bool mu__boolexpr1987;
bool mu__boolexpr1988;
bool mu__boolexpr1989;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1989 = FALSE ;
  else {
  mu__boolexpr1989 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1989)) mu__boolexpr1988 = FALSE ;
  else {
  mu__boolexpr1988 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1988)) mu__boolexpr1987 = FALSE ;
  else {
  mu__boolexpr1987 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1987)) mu__boolexpr1986 = FALSE ;
  else {
  mu__boolexpr1986 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1986)) mu__boolexpr1985 = FALSE ;
  else {
  mu__boolexpr1985 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1985)) mu__boolexpr1984 = FALSE ;
  else {
  mu__boolexpr1984 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr1983 = (!(mu__boolexpr1984)) ; 
}
if ( !(mu__boolexpr1983) )
  { mu__quant1982 = FALSE; break; }
};
};
};
};
return mu__quant1982;
};

bool mu__condition_1990() // Condition for Rule "test_reachable_state_48"
{
  return mu__invariant_1981( );
}

/**** end rule declaration ****/

int mu__invariant_1991() // Invariant "test_reachable_state_47"
{
bool mu__quant1992; 
mu__quant1992 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr1993;
  if (!((mu_i) != (mu_j))) mu__boolexpr1993 = TRUE ;
  else {
bool mu__boolexpr1994;
bool mu__boolexpr1995;
bool mu__boolexpr1996;
bool mu__boolexpr1997;
bool mu__boolexpr1998;
bool mu__boolexpr1999;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr1999 = FALSE ;
  else {
  mu__boolexpr1999 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1999)) mu__boolexpr1998 = FALSE ;
  else {
  mu__boolexpr1998 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1998)) mu__boolexpr1997 = FALSE ;
  else {
  mu__boolexpr1997 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1997)) mu__boolexpr1996 = FALSE ;
  else {
  mu__boolexpr1996 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1996)) mu__boolexpr1995 = FALSE ;
  else {
  mu__boolexpr1995 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1995)) mu__boolexpr1994 = FALSE ;
  else {
  mu__boolexpr1994 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr1993 = (!(mu__boolexpr1994)) ; 
}
if ( !(mu__boolexpr1993) )
  { mu__quant1992 = FALSE; break; }
};
};
};
};
return mu__quant1992;
};

bool mu__condition_2000() // Condition for Rule "test_reachable_state_47"
{
  return mu__invariant_1991( );
}

/**** end rule declaration ****/

int mu__invariant_2001() // Invariant "test_reachable_state_46"
{
bool mu__quant2002; 
mu__quant2002 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2003;
  if (!((mu_i) != (mu_j))) mu__boolexpr2003 = TRUE ;
  else {
bool mu__boolexpr2004;
bool mu__boolexpr2005;
bool mu__boolexpr2006;
bool mu__boolexpr2007;
bool mu__boolexpr2008;
bool mu__boolexpr2009;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2009 = FALSE ;
  else {
  mu__boolexpr2009 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2009)) mu__boolexpr2008 = FALSE ;
  else {
  mu__boolexpr2008 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2008)) mu__boolexpr2007 = FALSE ;
  else {
  mu__boolexpr2007 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2007)) mu__boolexpr2006 = FALSE ;
  else {
  mu__boolexpr2006 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2006)) mu__boolexpr2005 = FALSE ;
  else {
  mu__boolexpr2005 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2005)) mu__boolexpr2004 = FALSE ;
  else {
  mu__boolexpr2004 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2003 = (!(mu__boolexpr2004)) ; 
}
if ( !(mu__boolexpr2003) )
  { mu__quant2002 = FALSE; break; }
};
};
};
};
return mu__quant2002;
};

bool mu__condition_2010() // Condition for Rule "test_reachable_state_46"
{
  return mu__invariant_2001( );
}

/**** end rule declaration ****/

int mu__invariant_2011() // Invariant "test_reachable_state_45"
{
bool mu__quant2012; 
mu__quant2012 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2013;
  if (!((mu_i) != (mu_j))) mu__boolexpr2013 = TRUE ;
  else {
bool mu__boolexpr2014;
bool mu__boolexpr2015;
bool mu__boolexpr2016;
bool mu__boolexpr2017;
bool mu__boolexpr2018;
bool mu__boolexpr2019;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2019 = FALSE ;
  else {
  mu__boolexpr2019 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2019)) mu__boolexpr2018 = FALSE ;
  else {
  mu__boolexpr2018 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2018)) mu__boolexpr2017 = FALSE ;
  else {
  mu__boolexpr2017 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2017)) mu__boolexpr2016 = FALSE ;
  else {
  mu__boolexpr2016 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2016)) mu__boolexpr2015 = FALSE ;
  else {
  mu__boolexpr2015 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2015)) mu__boolexpr2014 = FALSE ;
  else {
  mu__boolexpr2014 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2013 = (!(mu__boolexpr2014)) ; 
}
if ( !(mu__boolexpr2013) )
  { mu__quant2012 = FALSE; break; }
};
};
};
};
return mu__quant2012;
};

bool mu__condition_2020() // Condition for Rule "test_reachable_state_45"
{
  return mu__invariant_2011( );
}

/**** end rule declaration ****/

int mu__invariant_2021() // Invariant "test_reachable_state_44"
{
bool mu__quant2022; 
mu__quant2022 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2023;
  if (!((mu_i) != (mu_j))) mu__boolexpr2023 = TRUE ;
  else {
bool mu__boolexpr2024;
bool mu__boolexpr2025;
bool mu__boolexpr2026;
bool mu__boolexpr2027;
bool mu__boolexpr2028;
bool mu__boolexpr2029;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2029 = FALSE ;
  else {
  mu__boolexpr2029 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2029)) mu__boolexpr2028 = FALSE ;
  else {
  mu__boolexpr2028 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2028)) mu__boolexpr2027 = FALSE ;
  else {
  mu__boolexpr2027 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2027)) mu__boolexpr2026 = FALSE ;
  else {
  mu__boolexpr2026 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2026)) mu__boolexpr2025 = FALSE ;
  else {
  mu__boolexpr2025 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2025)) mu__boolexpr2024 = FALSE ;
  else {
  mu__boolexpr2024 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2023 = (!(mu__boolexpr2024)) ; 
}
if ( !(mu__boolexpr2023) )
  { mu__quant2022 = FALSE; break; }
};
};
};
};
return mu__quant2022;
};

bool mu__condition_2030() // Condition for Rule "test_reachable_state_44"
{
  return mu__invariant_2021( );
}

/**** end rule declaration ****/

int mu__invariant_2031() // Invariant "test_reachable_state_43"
{
bool mu__quant2032; 
mu__quant2032 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2033;
  if (!((mu_i) != (mu_j))) mu__boolexpr2033 = TRUE ;
  else {
bool mu__boolexpr2034;
bool mu__boolexpr2035;
bool mu__boolexpr2036;
bool mu__boolexpr2037;
bool mu__boolexpr2038;
bool mu__boolexpr2039;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2039 = FALSE ;
  else {
  mu__boolexpr2039 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2039)) mu__boolexpr2038 = FALSE ;
  else {
  mu__boolexpr2038 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2038)) mu__boolexpr2037 = FALSE ;
  else {
  mu__boolexpr2037 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2037)) mu__boolexpr2036 = FALSE ;
  else {
  mu__boolexpr2036 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2036)) mu__boolexpr2035 = FALSE ;
  else {
  mu__boolexpr2035 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2035)) mu__boolexpr2034 = FALSE ;
  else {
  mu__boolexpr2034 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2033 = (!(mu__boolexpr2034)) ; 
}
if ( !(mu__boolexpr2033) )
  { mu__quant2032 = FALSE; break; }
};
};
};
};
return mu__quant2032;
};

bool mu__condition_2040() // Condition for Rule "test_reachable_state_43"
{
  return mu__invariant_2031( );
}

/**** end rule declaration ****/

int mu__invariant_2041() // Invariant "test_reachable_state_42"
{
bool mu__quant2042; 
mu__quant2042 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2043;
  if (!((mu_i) != (mu_j))) mu__boolexpr2043 = TRUE ;
  else {
bool mu__boolexpr2044;
bool mu__boolexpr2045;
bool mu__boolexpr2046;
bool mu__boolexpr2047;
bool mu__boolexpr2048;
bool mu__boolexpr2049;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2049 = FALSE ;
  else {
  mu__boolexpr2049 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2049)) mu__boolexpr2048 = FALSE ;
  else {
  mu__boolexpr2048 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2048)) mu__boolexpr2047 = FALSE ;
  else {
  mu__boolexpr2047 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2047)) mu__boolexpr2046 = FALSE ;
  else {
  mu__boolexpr2046 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2046)) mu__boolexpr2045 = FALSE ;
  else {
  mu__boolexpr2045 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2045)) mu__boolexpr2044 = FALSE ;
  else {
  mu__boolexpr2044 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2043 = (!(mu__boolexpr2044)) ; 
}
if ( !(mu__boolexpr2043) )
  { mu__quant2042 = FALSE; break; }
};
};
};
};
return mu__quant2042;
};

bool mu__condition_2050() // Condition for Rule "test_reachable_state_42"
{
  return mu__invariant_2041( );
}

/**** end rule declaration ****/

int mu__invariant_2051() // Invariant "test_reachable_state_41"
{
bool mu__quant2052; 
mu__quant2052 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2053;
  if (!((mu_i) != (mu_j))) mu__boolexpr2053 = TRUE ;
  else {
bool mu__boolexpr2054;
bool mu__boolexpr2055;
bool mu__boolexpr2056;
bool mu__boolexpr2057;
bool mu__boolexpr2058;
bool mu__boolexpr2059;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2059 = FALSE ;
  else {
  mu__boolexpr2059 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2059)) mu__boolexpr2058 = FALSE ;
  else {
  mu__boolexpr2058 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2058)) mu__boolexpr2057 = FALSE ;
  else {
  mu__boolexpr2057 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2057)) mu__boolexpr2056 = FALSE ;
  else {
  mu__boolexpr2056 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2056)) mu__boolexpr2055 = FALSE ;
  else {
  mu__boolexpr2055 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2055)) mu__boolexpr2054 = FALSE ;
  else {
  mu__boolexpr2054 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2053 = (!(mu__boolexpr2054)) ; 
}
if ( !(mu__boolexpr2053) )
  { mu__quant2052 = FALSE; break; }
};
};
};
};
return mu__quant2052;
};

bool mu__condition_2060() // Condition for Rule "test_reachable_state_41"
{
  return mu__invariant_2051( );
}

/**** end rule declaration ****/

int mu__invariant_2061() // Invariant "test_reachable_state_40"
{
bool mu__quant2062; 
mu__quant2062 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2063;
  if (!((mu_i) != (mu_j))) mu__boolexpr2063 = TRUE ;
  else {
bool mu__boolexpr2064;
bool mu__boolexpr2065;
bool mu__boolexpr2066;
bool mu__boolexpr2067;
bool mu__boolexpr2068;
bool mu__boolexpr2069;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2069 = FALSE ;
  else {
  mu__boolexpr2069 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2069)) mu__boolexpr2068 = FALSE ;
  else {
  mu__boolexpr2068 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2068)) mu__boolexpr2067 = FALSE ;
  else {
  mu__boolexpr2067 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2067)) mu__boolexpr2066 = FALSE ;
  else {
  mu__boolexpr2066 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2066)) mu__boolexpr2065 = FALSE ;
  else {
  mu__boolexpr2065 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2065)) mu__boolexpr2064 = FALSE ;
  else {
  mu__boolexpr2064 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2063 = (!(mu__boolexpr2064)) ; 
}
if ( !(mu__boolexpr2063) )
  { mu__quant2062 = FALSE; break; }
};
};
};
};
return mu__quant2062;
};

bool mu__condition_2070() // Condition for Rule "test_reachable_state_40"
{
  return mu__invariant_2061( );
}

/**** end rule declaration ****/

int mu__invariant_2071() // Invariant "test_reachable_state_39"
{
bool mu__quant2072; 
mu__quant2072 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2073;
  if (!((mu_i) != (mu_j))) mu__boolexpr2073 = TRUE ;
  else {
bool mu__boolexpr2074;
bool mu__boolexpr2075;
bool mu__boolexpr2076;
bool mu__boolexpr2077;
bool mu__boolexpr2078;
bool mu__boolexpr2079;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2079 = FALSE ;
  else {
  mu__boolexpr2079 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2079)) mu__boolexpr2078 = FALSE ;
  else {
  mu__boolexpr2078 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2078)) mu__boolexpr2077 = FALSE ;
  else {
  mu__boolexpr2077 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2077)) mu__boolexpr2076 = FALSE ;
  else {
  mu__boolexpr2076 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2076)) mu__boolexpr2075 = FALSE ;
  else {
  mu__boolexpr2075 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2075)) mu__boolexpr2074 = FALSE ;
  else {
  mu__boolexpr2074 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2073 = (!(mu__boolexpr2074)) ; 
}
if ( !(mu__boolexpr2073) )
  { mu__quant2072 = FALSE; break; }
};
};
};
};
return mu__quant2072;
};

bool mu__condition_2080() // Condition for Rule "test_reachable_state_39"
{
  return mu__invariant_2071( );
}

/**** end rule declaration ****/

int mu__invariant_2081() // Invariant "test_reachable_state_38"
{
bool mu__quant2082; 
mu__quant2082 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2083;
  if (!((mu_i) != (mu_j))) mu__boolexpr2083 = TRUE ;
  else {
bool mu__boolexpr2084;
bool mu__boolexpr2085;
bool mu__boolexpr2086;
bool mu__boolexpr2087;
bool mu__boolexpr2088;
bool mu__boolexpr2089;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2089 = FALSE ;
  else {
  mu__boolexpr2089 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2089)) mu__boolexpr2088 = FALSE ;
  else {
  mu__boolexpr2088 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2088)) mu__boolexpr2087 = FALSE ;
  else {
  mu__boolexpr2087 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2087)) mu__boolexpr2086 = FALSE ;
  else {
  mu__boolexpr2086 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2086)) mu__boolexpr2085 = FALSE ;
  else {
  mu__boolexpr2085 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2085)) mu__boolexpr2084 = FALSE ;
  else {
  mu__boolexpr2084 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2083 = (!(mu__boolexpr2084)) ; 
}
if ( !(mu__boolexpr2083) )
  { mu__quant2082 = FALSE; break; }
};
};
};
};
return mu__quant2082;
};

bool mu__condition_2090() // Condition for Rule "test_reachable_state_38"
{
  return mu__invariant_2081( );
}

/**** end rule declaration ****/

int mu__invariant_2091() // Invariant "test_reachable_state_37"
{
bool mu__quant2092; 
mu__quant2092 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2093;
  if (!((mu_i) != (mu_j))) mu__boolexpr2093 = TRUE ;
  else {
bool mu__boolexpr2094;
bool mu__boolexpr2095;
bool mu__boolexpr2096;
bool mu__boolexpr2097;
bool mu__boolexpr2098;
bool mu__boolexpr2099;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2099 = FALSE ;
  else {
  mu__boolexpr2099 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2099)) mu__boolexpr2098 = FALSE ;
  else {
  mu__boolexpr2098 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2098)) mu__boolexpr2097 = FALSE ;
  else {
  mu__boolexpr2097 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2097)) mu__boolexpr2096 = FALSE ;
  else {
  mu__boolexpr2096 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2096)) mu__boolexpr2095 = FALSE ;
  else {
  mu__boolexpr2095 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2095)) mu__boolexpr2094 = FALSE ;
  else {
  mu__boolexpr2094 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr2093 = (!(mu__boolexpr2094)) ; 
}
if ( !(mu__boolexpr2093) )
  { mu__quant2092 = FALSE; break; }
};
};
};
};
return mu__quant2092;
};

bool mu__condition_2100() // Condition for Rule "test_reachable_state_37"
{
  return mu__invariant_2091( );
}

/**** end rule declaration ****/

int mu__invariant_2101() // Invariant "test_reachable_state_36"
{
bool mu__quant2102; 
mu__quant2102 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2103;
  if (!((mu_i) != (mu_j))) mu__boolexpr2103 = TRUE ;
  else {
bool mu__boolexpr2104;
bool mu__boolexpr2105;
bool mu__boolexpr2106;
bool mu__boolexpr2107;
bool mu__boolexpr2108;
bool mu__boolexpr2109;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2109 = FALSE ;
  else {
  mu__boolexpr2109 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2109)) mu__boolexpr2108 = FALSE ;
  else {
  mu__boolexpr2108 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2108)) mu__boolexpr2107 = FALSE ;
  else {
  mu__boolexpr2107 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2107)) mu__boolexpr2106 = FALSE ;
  else {
  mu__boolexpr2106 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2106)) mu__boolexpr2105 = FALSE ;
  else {
  mu__boolexpr2105 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2105)) mu__boolexpr2104 = FALSE ;
  else {
  mu__boolexpr2104 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2103 = (!(mu__boolexpr2104)) ; 
}
if ( !(mu__boolexpr2103) )
  { mu__quant2102 = FALSE; break; }
};
};
};
};
return mu__quant2102;
};

bool mu__condition_2110() // Condition for Rule "test_reachable_state_36"
{
  return mu__invariant_2101( );
}

/**** end rule declaration ****/

int mu__invariant_2111() // Invariant "test_reachable_state_35"
{
bool mu__quant2112; 
mu__quant2112 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2113;
  if (!((mu_i) != (mu_j))) mu__boolexpr2113 = TRUE ;
  else {
bool mu__boolexpr2114;
bool mu__boolexpr2115;
bool mu__boolexpr2116;
bool mu__boolexpr2117;
bool mu__boolexpr2118;
bool mu__boolexpr2119;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2119 = FALSE ;
  else {
  mu__boolexpr2119 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2119)) mu__boolexpr2118 = FALSE ;
  else {
  mu__boolexpr2118 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2118)) mu__boolexpr2117 = FALSE ;
  else {
  mu__boolexpr2117 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2117)) mu__boolexpr2116 = FALSE ;
  else {
  mu__boolexpr2116 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2116)) mu__boolexpr2115 = FALSE ;
  else {
  mu__boolexpr2115 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2115)) mu__boolexpr2114 = FALSE ;
  else {
  mu__boolexpr2114 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2113 = (!(mu__boolexpr2114)) ; 
}
if ( !(mu__boolexpr2113) )
  { mu__quant2112 = FALSE; break; }
};
};
};
};
return mu__quant2112;
};

bool mu__condition_2120() // Condition for Rule "test_reachable_state_35"
{
  return mu__invariant_2111( );
}

/**** end rule declaration ****/

int mu__invariant_2121() // Invariant "test_reachable_state_34"
{
bool mu__quant2122; 
mu__quant2122 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2123;
  if (!((mu_i) != (mu_j))) mu__boolexpr2123 = TRUE ;
  else {
bool mu__boolexpr2124;
bool mu__boolexpr2125;
bool mu__boolexpr2126;
bool mu__boolexpr2127;
bool mu__boolexpr2128;
bool mu__boolexpr2129;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2129 = FALSE ;
  else {
  mu__boolexpr2129 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2129)) mu__boolexpr2128 = FALSE ;
  else {
  mu__boolexpr2128 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2128)) mu__boolexpr2127 = FALSE ;
  else {
  mu__boolexpr2127 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2127)) mu__boolexpr2126 = FALSE ;
  else {
  mu__boolexpr2126 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2126)) mu__boolexpr2125 = FALSE ;
  else {
  mu__boolexpr2125 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2125)) mu__boolexpr2124 = FALSE ;
  else {
  mu__boolexpr2124 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2123 = (!(mu__boolexpr2124)) ; 
}
if ( !(mu__boolexpr2123) )
  { mu__quant2122 = FALSE; break; }
};
};
};
};
return mu__quant2122;
};

bool mu__condition_2130() // Condition for Rule "test_reachable_state_34"
{
  return mu__invariant_2121( );
}

/**** end rule declaration ****/

int mu__invariant_2131() // Invariant "test_reachable_state_33"
{
bool mu__quant2132; 
mu__quant2132 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2133;
  if (!((mu_i) != (mu_j))) mu__boolexpr2133 = TRUE ;
  else {
bool mu__boolexpr2134;
bool mu__boolexpr2135;
bool mu__boolexpr2136;
bool mu__boolexpr2137;
bool mu__boolexpr2138;
bool mu__boolexpr2139;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2139 = FALSE ;
  else {
  mu__boolexpr2139 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2139)) mu__boolexpr2138 = FALSE ;
  else {
  mu__boolexpr2138 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2138)) mu__boolexpr2137 = FALSE ;
  else {
  mu__boolexpr2137 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2137)) mu__boolexpr2136 = FALSE ;
  else {
  mu__boolexpr2136 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2136)) mu__boolexpr2135 = FALSE ;
  else {
  mu__boolexpr2135 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2135)) mu__boolexpr2134 = FALSE ;
  else {
  mu__boolexpr2134 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2133 = (!(mu__boolexpr2134)) ; 
}
if ( !(mu__boolexpr2133) )
  { mu__quant2132 = FALSE; break; }
};
};
};
};
return mu__quant2132;
};

bool mu__condition_2140() // Condition for Rule "test_reachable_state_33"
{
  return mu__invariant_2131( );
}

/**** end rule declaration ****/

int mu__invariant_2141() // Invariant "test_reachable_state_32"
{
bool mu__quant2142; 
mu__quant2142 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2143;
  if (!((mu_i) != (mu_j))) mu__boolexpr2143 = TRUE ;
  else {
bool mu__boolexpr2144;
bool mu__boolexpr2145;
bool mu__boolexpr2146;
bool mu__boolexpr2147;
bool mu__boolexpr2148;
bool mu__boolexpr2149;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2149 = FALSE ;
  else {
  mu__boolexpr2149 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2149)) mu__boolexpr2148 = FALSE ;
  else {
  mu__boolexpr2148 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2148)) mu__boolexpr2147 = FALSE ;
  else {
  mu__boolexpr2147 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2147)) mu__boolexpr2146 = FALSE ;
  else {
  mu__boolexpr2146 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2146)) mu__boolexpr2145 = FALSE ;
  else {
  mu__boolexpr2145 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2145)) mu__boolexpr2144 = FALSE ;
  else {
  mu__boolexpr2144 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2143 = (!(mu__boolexpr2144)) ; 
}
if ( !(mu__boolexpr2143) )
  { mu__quant2142 = FALSE; break; }
};
};
};
};
return mu__quant2142;
};

bool mu__condition_2150() // Condition for Rule "test_reachable_state_32"
{
  return mu__invariant_2141( );
}

/**** end rule declaration ****/

int mu__invariant_2151() // Invariant "test_reachable_state_31"
{
bool mu__quant2152; 
mu__quant2152 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2153;
  if (!((mu_i) != (mu_j))) mu__boolexpr2153 = TRUE ;
  else {
bool mu__boolexpr2154;
bool mu__boolexpr2155;
bool mu__boolexpr2156;
bool mu__boolexpr2157;
bool mu__boolexpr2158;
bool mu__boolexpr2159;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2159 = FALSE ;
  else {
  mu__boolexpr2159 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2159)) mu__boolexpr2158 = FALSE ;
  else {
  mu__boolexpr2158 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2158)) mu__boolexpr2157 = FALSE ;
  else {
  mu__boolexpr2157 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2157)) mu__boolexpr2156 = FALSE ;
  else {
  mu__boolexpr2156 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2156)) mu__boolexpr2155 = FALSE ;
  else {
  mu__boolexpr2155 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2155)) mu__boolexpr2154 = FALSE ;
  else {
  mu__boolexpr2154 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2153 = (!(mu__boolexpr2154)) ; 
}
if ( !(mu__boolexpr2153) )
  { mu__quant2152 = FALSE; break; }
};
};
};
};
return mu__quant2152;
};

bool mu__condition_2160() // Condition for Rule "test_reachable_state_31"
{
  return mu__invariant_2151( );
}

/**** end rule declaration ****/

int mu__invariant_2161() // Invariant "test_reachable_state_30"
{
bool mu__quant2162; 
mu__quant2162 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2163;
  if (!((mu_i) != (mu_j))) mu__boolexpr2163 = TRUE ;
  else {
bool mu__boolexpr2164;
bool mu__boolexpr2165;
bool mu__boolexpr2166;
bool mu__boolexpr2167;
bool mu__boolexpr2168;
bool mu__boolexpr2169;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2169 = FALSE ;
  else {
  mu__boolexpr2169 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2169)) mu__boolexpr2168 = FALSE ;
  else {
  mu__boolexpr2168 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2168)) mu__boolexpr2167 = FALSE ;
  else {
  mu__boolexpr2167 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2167)) mu__boolexpr2166 = FALSE ;
  else {
  mu__boolexpr2166 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2166)) mu__boolexpr2165 = FALSE ;
  else {
  mu__boolexpr2165 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2165)) mu__boolexpr2164 = FALSE ;
  else {
  mu__boolexpr2164 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2163 = (!(mu__boolexpr2164)) ; 
}
if ( !(mu__boolexpr2163) )
  { mu__quant2162 = FALSE; break; }
};
};
};
};
return mu__quant2162;
};

bool mu__condition_2170() // Condition for Rule "test_reachable_state_30"
{
  return mu__invariant_2161( );
}

/**** end rule declaration ****/

int mu__invariant_2171() // Invariant "test_reachable_state_29"
{
bool mu__quant2172; 
mu__quant2172 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2173;
  if (!((mu_i) != (mu_j))) mu__boolexpr2173 = TRUE ;
  else {
bool mu__boolexpr2174;
bool mu__boolexpr2175;
bool mu__boolexpr2176;
bool mu__boolexpr2177;
bool mu__boolexpr2178;
bool mu__boolexpr2179;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2179 = FALSE ;
  else {
  mu__boolexpr2179 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2179)) mu__boolexpr2178 = FALSE ;
  else {
  mu__boolexpr2178 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2178)) mu__boolexpr2177 = FALSE ;
  else {
  mu__boolexpr2177 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2177)) mu__boolexpr2176 = FALSE ;
  else {
  mu__boolexpr2176 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2176)) mu__boolexpr2175 = FALSE ;
  else {
  mu__boolexpr2175 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2175)) mu__boolexpr2174 = FALSE ;
  else {
  mu__boolexpr2174 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2173 = (!(mu__boolexpr2174)) ; 
}
if ( !(mu__boolexpr2173) )
  { mu__quant2172 = FALSE; break; }
};
};
};
};
return mu__quant2172;
};

bool mu__condition_2180() // Condition for Rule "test_reachable_state_29"
{
  return mu__invariant_2171( );
}

/**** end rule declaration ****/

int mu__invariant_2181() // Invariant "test_reachable_state_28"
{
bool mu__quant2182; 
mu__quant2182 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2183;
  if (!((mu_i) != (mu_j))) mu__boolexpr2183 = TRUE ;
  else {
bool mu__boolexpr2184;
bool mu__boolexpr2185;
bool mu__boolexpr2186;
bool mu__boolexpr2187;
bool mu__boolexpr2188;
bool mu__boolexpr2189;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2189 = FALSE ;
  else {
  mu__boolexpr2189 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2189)) mu__boolexpr2188 = FALSE ;
  else {
  mu__boolexpr2188 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2188)) mu__boolexpr2187 = FALSE ;
  else {
  mu__boolexpr2187 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2187)) mu__boolexpr2186 = FALSE ;
  else {
  mu__boolexpr2186 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2186)) mu__boolexpr2185 = FALSE ;
  else {
  mu__boolexpr2185 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2185)) mu__boolexpr2184 = FALSE ;
  else {
  mu__boolexpr2184 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2183 = (!(mu__boolexpr2184)) ; 
}
if ( !(mu__boolexpr2183) )
  { mu__quant2182 = FALSE; break; }
};
};
};
};
return mu__quant2182;
};

bool mu__condition_2190() // Condition for Rule "test_reachable_state_28"
{
  return mu__invariant_2181( );
}

/**** end rule declaration ****/

int mu__invariant_2191() // Invariant "test_reachable_state_27"
{
bool mu__quant2192; 
mu__quant2192 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2193;
  if (!((mu_i) != (mu_j))) mu__boolexpr2193 = TRUE ;
  else {
bool mu__boolexpr2194;
bool mu__boolexpr2195;
bool mu__boolexpr2196;
bool mu__boolexpr2197;
bool mu__boolexpr2198;
bool mu__boolexpr2199;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2199 = FALSE ;
  else {
  mu__boolexpr2199 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2199)) mu__boolexpr2198 = FALSE ;
  else {
  mu__boolexpr2198 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2198)) mu__boolexpr2197 = FALSE ;
  else {
  mu__boolexpr2197 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2197)) mu__boolexpr2196 = FALSE ;
  else {
  mu__boolexpr2196 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2196)) mu__boolexpr2195 = FALSE ;
  else {
  mu__boolexpr2195 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2195)) mu__boolexpr2194 = FALSE ;
  else {
  mu__boolexpr2194 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2193 = (!(mu__boolexpr2194)) ; 
}
if ( !(mu__boolexpr2193) )
  { mu__quant2192 = FALSE; break; }
};
};
};
};
return mu__quant2192;
};

bool mu__condition_2200() // Condition for Rule "test_reachable_state_27"
{
  return mu__invariant_2191( );
}

/**** end rule declaration ****/

int mu__invariant_2201() // Invariant "test_reachable_state_26"
{
bool mu__quant2202; 
mu__quant2202 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2203;
  if (!((mu_i) != (mu_j))) mu__boolexpr2203 = TRUE ;
  else {
bool mu__boolexpr2204;
bool mu__boolexpr2205;
bool mu__boolexpr2206;
bool mu__boolexpr2207;
bool mu__boolexpr2208;
bool mu__boolexpr2209;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2209 = FALSE ;
  else {
  mu__boolexpr2209 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2209)) mu__boolexpr2208 = FALSE ;
  else {
  mu__boolexpr2208 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2208)) mu__boolexpr2207 = FALSE ;
  else {
  mu__boolexpr2207 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2207)) mu__boolexpr2206 = FALSE ;
  else {
  mu__boolexpr2206 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2206)) mu__boolexpr2205 = FALSE ;
  else {
  mu__boolexpr2205 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2205)) mu__boolexpr2204 = FALSE ;
  else {
  mu__boolexpr2204 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2203 = (!(mu__boolexpr2204)) ; 
}
if ( !(mu__boolexpr2203) )
  { mu__quant2202 = FALSE; break; }
};
};
};
};
return mu__quant2202;
};

bool mu__condition_2210() // Condition for Rule "test_reachable_state_26"
{
  return mu__invariant_2201( );
}

/**** end rule declaration ****/

int mu__invariant_2211() // Invariant "test_reachable_state_25"
{
bool mu__quant2212; 
mu__quant2212 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2213;
  if (!((mu_i) != (mu_j))) mu__boolexpr2213 = TRUE ;
  else {
bool mu__boolexpr2214;
bool mu__boolexpr2215;
bool mu__boolexpr2216;
bool mu__boolexpr2217;
bool mu__boolexpr2218;
bool mu__boolexpr2219;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2219 = FALSE ;
  else {
  mu__boolexpr2219 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2219)) mu__boolexpr2218 = FALSE ;
  else {
  mu__boolexpr2218 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2218)) mu__boolexpr2217 = FALSE ;
  else {
  mu__boolexpr2217 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2217)) mu__boolexpr2216 = FALSE ;
  else {
  mu__boolexpr2216 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2216)) mu__boolexpr2215 = FALSE ;
  else {
  mu__boolexpr2215 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2215)) mu__boolexpr2214 = FALSE ;
  else {
  mu__boolexpr2214 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2213 = (!(mu__boolexpr2214)) ; 
}
if ( !(mu__boolexpr2213) )
  { mu__quant2212 = FALSE; break; }
};
};
};
};
return mu__quant2212;
};

bool mu__condition_2220() // Condition for Rule "test_reachable_state_25"
{
  return mu__invariant_2211( );
}

/**** end rule declaration ****/

int mu__invariant_2221() // Invariant "test_reachable_state_24"
{
bool mu__quant2222; 
mu__quant2222 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2223;
  if (!((mu_i) != (mu_j))) mu__boolexpr2223 = TRUE ;
  else {
bool mu__boolexpr2224;
bool mu__boolexpr2225;
bool mu__boolexpr2226;
bool mu__boolexpr2227;
bool mu__boolexpr2228;
bool mu__boolexpr2229;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2229 = FALSE ;
  else {
  mu__boolexpr2229 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2229)) mu__boolexpr2228 = FALSE ;
  else {
  mu__boolexpr2228 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2228)) mu__boolexpr2227 = FALSE ;
  else {
  mu__boolexpr2227 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2227)) mu__boolexpr2226 = FALSE ;
  else {
  mu__boolexpr2226 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2226)) mu__boolexpr2225 = FALSE ;
  else {
  mu__boolexpr2225 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2225)) mu__boolexpr2224 = FALSE ;
  else {
  mu__boolexpr2224 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2223 = (!(mu__boolexpr2224)) ; 
}
if ( !(mu__boolexpr2223) )
  { mu__quant2222 = FALSE; break; }
};
};
};
};
return mu__quant2222;
};

bool mu__condition_2230() // Condition for Rule "test_reachable_state_24"
{
  return mu__invariant_2221( );
}

/**** end rule declaration ****/

int mu__invariant_2231() // Invariant "test_reachable_state_23"
{
bool mu__quant2232; 
mu__quant2232 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2233;
  if (!((mu_i) != (mu_j))) mu__boolexpr2233 = TRUE ;
  else {
bool mu__boolexpr2234;
bool mu__boolexpr2235;
bool mu__boolexpr2236;
bool mu__boolexpr2237;
bool mu__boolexpr2238;
bool mu__boolexpr2239;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2239 = FALSE ;
  else {
  mu__boolexpr2239 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2239)) mu__boolexpr2238 = FALSE ;
  else {
  mu__boolexpr2238 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2238)) mu__boolexpr2237 = FALSE ;
  else {
  mu__boolexpr2237 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2237)) mu__boolexpr2236 = FALSE ;
  else {
  mu__boolexpr2236 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2236)) mu__boolexpr2235 = FALSE ;
  else {
  mu__boolexpr2235 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2235)) mu__boolexpr2234 = FALSE ;
  else {
  mu__boolexpr2234 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2233 = (!(mu__boolexpr2234)) ; 
}
if ( !(mu__boolexpr2233) )
  { mu__quant2232 = FALSE; break; }
};
};
};
};
return mu__quant2232;
};

bool mu__condition_2240() // Condition for Rule "test_reachable_state_23"
{
  return mu__invariant_2231( );
}

/**** end rule declaration ****/

int mu__invariant_2241() // Invariant "test_reachable_state_22"
{
bool mu__quant2242; 
mu__quant2242 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2243;
  if (!((mu_i) != (mu_j))) mu__boolexpr2243 = TRUE ;
  else {
bool mu__boolexpr2244;
bool mu__boolexpr2245;
bool mu__boolexpr2246;
bool mu__boolexpr2247;
bool mu__boolexpr2248;
bool mu__boolexpr2249;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2249 = FALSE ;
  else {
  mu__boolexpr2249 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2249)) mu__boolexpr2248 = FALSE ;
  else {
  mu__boolexpr2248 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2248)) mu__boolexpr2247 = FALSE ;
  else {
  mu__boolexpr2247 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2247)) mu__boolexpr2246 = FALSE ;
  else {
  mu__boolexpr2246 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2246)) mu__boolexpr2245 = FALSE ;
  else {
  mu__boolexpr2245 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2245)) mu__boolexpr2244 = FALSE ;
  else {
  mu__boolexpr2244 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2243 = (!(mu__boolexpr2244)) ; 
}
if ( !(mu__boolexpr2243) )
  { mu__quant2242 = FALSE; break; }
};
};
};
};
return mu__quant2242;
};

bool mu__condition_2250() // Condition for Rule "test_reachable_state_22"
{
  return mu__invariant_2241( );
}

/**** end rule declaration ****/

int mu__invariant_2251() // Invariant "test_reachable_state_21"
{
bool mu__quant2252; 
mu__quant2252 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2253;
  if (!((mu_i) != (mu_j))) mu__boolexpr2253 = TRUE ;
  else {
bool mu__boolexpr2254;
bool mu__boolexpr2255;
bool mu__boolexpr2256;
bool mu__boolexpr2257;
bool mu__boolexpr2258;
bool mu__boolexpr2259;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2259 = FALSE ;
  else {
  mu__boolexpr2259 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2259)) mu__boolexpr2258 = FALSE ;
  else {
  mu__boolexpr2258 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2258)) mu__boolexpr2257 = FALSE ;
  else {
  mu__boolexpr2257 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2257)) mu__boolexpr2256 = FALSE ;
  else {
  mu__boolexpr2256 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2256)) mu__boolexpr2255 = FALSE ;
  else {
  mu__boolexpr2255 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2255)) mu__boolexpr2254 = FALSE ;
  else {
  mu__boolexpr2254 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2253 = (!(mu__boolexpr2254)) ; 
}
if ( !(mu__boolexpr2253) )
  { mu__quant2252 = FALSE; break; }
};
};
};
};
return mu__quant2252;
};

bool mu__condition_2260() // Condition for Rule "test_reachable_state_21"
{
  return mu__invariant_2251( );
}

/**** end rule declaration ****/

int mu__invariant_2261() // Invariant "test_reachable_state_20"
{
bool mu__quant2262; 
mu__quant2262 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2263;
  if (!((mu_i) != (mu_j))) mu__boolexpr2263 = TRUE ;
  else {
bool mu__boolexpr2264;
bool mu__boolexpr2265;
bool mu__boolexpr2266;
bool mu__boolexpr2267;
bool mu__boolexpr2268;
bool mu__boolexpr2269;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2269 = FALSE ;
  else {
  mu__boolexpr2269 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2269)) mu__boolexpr2268 = FALSE ;
  else {
  mu__boolexpr2268 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2268)) mu__boolexpr2267 = FALSE ;
  else {
  mu__boolexpr2267 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2267)) mu__boolexpr2266 = FALSE ;
  else {
  mu__boolexpr2266 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2266)) mu__boolexpr2265 = FALSE ;
  else {
  mu__boolexpr2265 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2265)) mu__boolexpr2264 = FALSE ;
  else {
  mu__boolexpr2264 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2263 = (!(mu__boolexpr2264)) ; 
}
if ( !(mu__boolexpr2263) )
  { mu__quant2262 = FALSE; break; }
};
};
};
};
return mu__quant2262;
};

bool mu__condition_2270() // Condition for Rule "test_reachable_state_20"
{
  return mu__invariant_2261( );
}

/**** end rule declaration ****/

int mu__invariant_2271() // Invariant "test_reachable_state_19"
{
bool mu__quant2272; 
mu__quant2272 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2273;
  if (!((mu_i) != (mu_j))) mu__boolexpr2273 = TRUE ;
  else {
bool mu__boolexpr2274;
bool mu__boolexpr2275;
bool mu__boolexpr2276;
bool mu__boolexpr2277;
bool mu__boolexpr2278;
bool mu__boolexpr2279;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2279 = FALSE ;
  else {
  mu__boolexpr2279 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2279)) mu__boolexpr2278 = FALSE ;
  else {
  mu__boolexpr2278 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2278)) mu__boolexpr2277 = FALSE ;
  else {
  mu__boolexpr2277 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2277)) mu__boolexpr2276 = FALSE ;
  else {
  mu__boolexpr2276 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2276)) mu__boolexpr2275 = FALSE ;
  else {
  mu__boolexpr2275 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2275)) mu__boolexpr2274 = FALSE ;
  else {
  mu__boolexpr2274 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2273 = (!(mu__boolexpr2274)) ; 
}
if ( !(mu__boolexpr2273) )
  { mu__quant2272 = FALSE; break; }
};
};
};
};
return mu__quant2272;
};

bool mu__condition_2280() // Condition for Rule "test_reachable_state_19"
{
  return mu__invariant_2271( );
}

/**** end rule declaration ****/

int mu__invariant_2281() // Invariant "test_reachable_state_18"
{
bool mu__quant2282; 
mu__quant2282 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2283;
  if (!((mu_i) != (mu_j))) mu__boolexpr2283 = TRUE ;
  else {
bool mu__boolexpr2284;
bool mu__boolexpr2285;
bool mu__boolexpr2286;
bool mu__boolexpr2287;
bool mu__boolexpr2288;
bool mu__boolexpr2289;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2289 = FALSE ;
  else {
  mu__boolexpr2289 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2289)) mu__boolexpr2288 = FALSE ;
  else {
  mu__boolexpr2288 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2288)) mu__boolexpr2287 = FALSE ;
  else {
  mu__boolexpr2287 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2287)) mu__boolexpr2286 = FALSE ;
  else {
  mu__boolexpr2286 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2286)) mu__boolexpr2285 = FALSE ;
  else {
  mu__boolexpr2285 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2285)) mu__boolexpr2284 = FALSE ;
  else {
  mu__boolexpr2284 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2283 = (!(mu__boolexpr2284)) ; 
}
if ( !(mu__boolexpr2283) )
  { mu__quant2282 = FALSE; break; }
};
};
};
};
return mu__quant2282;
};

bool mu__condition_2290() // Condition for Rule "test_reachable_state_18"
{
  return mu__invariant_2281( );
}

/**** end rule declaration ****/

int mu__invariant_2291() // Invariant "test_reachable_state_17"
{
bool mu__quant2292; 
mu__quant2292 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2293;
  if (!((mu_i) != (mu_j))) mu__boolexpr2293 = TRUE ;
  else {
bool mu__boolexpr2294;
bool mu__boolexpr2295;
bool mu__boolexpr2296;
bool mu__boolexpr2297;
bool mu__boolexpr2298;
bool mu__boolexpr2299;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2299 = FALSE ;
  else {
  mu__boolexpr2299 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2299)) mu__boolexpr2298 = FALSE ;
  else {
  mu__boolexpr2298 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2298)) mu__boolexpr2297 = FALSE ;
  else {
  mu__boolexpr2297 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2297)) mu__boolexpr2296 = FALSE ;
  else {
  mu__boolexpr2296 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2296)) mu__boolexpr2295 = FALSE ;
  else {
  mu__boolexpr2295 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2295)) mu__boolexpr2294 = FALSE ;
  else {
  mu__boolexpr2294 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2293 = (!(mu__boolexpr2294)) ; 
}
if ( !(mu__boolexpr2293) )
  { mu__quant2292 = FALSE; break; }
};
};
};
};
return mu__quant2292;
};

bool mu__condition_2300() // Condition for Rule "test_reachable_state_17"
{
  return mu__invariant_2291( );
}

/**** end rule declaration ****/

int mu__invariant_2301() // Invariant "test_reachable_state_16"
{
bool mu__quant2302; 
mu__quant2302 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2303;
  if (!((mu_i) != (mu_j))) mu__boolexpr2303 = TRUE ;
  else {
bool mu__boolexpr2304;
bool mu__boolexpr2305;
bool mu__boolexpr2306;
bool mu__boolexpr2307;
bool mu__boolexpr2308;
bool mu__boolexpr2309;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2309 = FALSE ;
  else {
  mu__boolexpr2309 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2309)) mu__boolexpr2308 = FALSE ;
  else {
  mu__boolexpr2308 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2308)) mu__boolexpr2307 = FALSE ;
  else {
  mu__boolexpr2307 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2307)) mu__boolexpr2306 = FALSE ;
  else {
  mu__boolexpr2306 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2306)) mu__boolexpr2305 = FALSE ;
  else {
  mu__boolexpr2305 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2305)) mu__boolexpr2304 = FALSE ;
  else {
  mu__boolexpr2304 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2303 = (!(mu__boolexpr2304)) ; 
}
if ( !(mu__boolexpr2303) )
  { mu__quant2302 = FALSE; break; }
};
};
};
};
return mu__quant2302;
};

bool mu__condition_2310() // Condition for Rule "test_reachable_state_16"
{
  return mu__invariant_2301( );
}

/**** end rule declaration ****/

int mu__invariant_2311() // Invariant "test_reachable_state_15"
{
bool mu__quant2312; 
mu__quant2312 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2313;
  if (!((mu_i) != (mu_j))) mu__boolexpr2313 = TRUE ;
  else {
bool mu__boolexpr2314;
bool mu__boolexpr2315;
bool mu__boolexpr2316;
bool mu__boolexpr2317;
bool mu__boolexpr2318;
bool mu__boolexpr2319;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2319 = FALSE ;
  else {
  mu__boolexpr2319 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2319)) mu__boolexpr2318 = FALSE ;
  else {
  mu__boolexpr2318 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2318)) mu__boolexpr2317 = FALSE ;
  else {
  mu__boolexpr2317 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2317)) mu__boolexpr2316 = FALSE ;
  else {
  mu__boolexpr2316 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2316)) mu__boolexpr2315 = FALSE ;
  else {
  mu__boolexpr2315 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2315)) mu__boolexpr2314 = FALSE ;
  else {
  mu__boolexpr2314 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2313 = (!(mu__boolexpr2314)) ; 
}
if ( !(mu__boolexpr2313) )
  { mu__quant2312 = FALSE; break; }
};
};
};
};
return mu__quant2312;
};

bool mu__condition_2320() // Condition for Rule "test_reachable_state_15"
{
  return mu__invariant_2311( );
}

/**** end rule declaration ****/

int mu__invariant_2321() // Invariant "test_reachable_state_14"
{
bool mu__quant2322; 
mu__quant2322 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2323;
  if (!((mu_i) != (mu_j))) mu__boolexpr2323 = TRUE ;
  else {
bool mu__boolexpr2324;
bool mu__boolexpr2325;
bool mu__boolexpr2326;
bool mu__boolexpr2327;
bool mu__boolexpr2328;
bool mu__boolexpr2329;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2329 = FALSE ;
  else {
  mu__boolexpr2329 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2329)) mu__boolexpr2328 = FALSE ;
  else {
  mu__boolexpr2328 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2328)) mu__boolexpr2327 = FALSE ;
  else {
  mu__boolexpr2327 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2327)) mu__boolexpr2326 = FALSE ;
  else {
  mu__boolexpr2326 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2326)) mu__boolexpr2325 = FALSE ;
  else {
  mu__boolexpr2325 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2325)) mu__boolexpr2324 = FALSE ;
  else {
  mu__boolexpr2324 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2323 = (!(mu__boolexpr2324)) ; 
}
if ( !(mu__boolexpr2323) )
  { mu__quant2322 = FALSE; break; }
};
};
};
};
return mu__quant2322;
};

bool mu__condition_2330() // Condition for Rule "test_reachable_state_14"
{
  return mu__invariant_2321( );
}

/**** end rule declaration ****/

int mu__invariant_2331() // Invariant "test_reachable_state_13"
{
bool mu__quant2332; 
mu__quant2332 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2333;
  if (!((mu_i) != (mu_j))) mu__boolexpr2333 = TRUE ;
  else {
bool mu__boolexpr2334;
bool mu__boolexpr2335;
bool mu__boolexpr2336;
bool mu__boolexpr2337;
bool mu__boolexpr2338;
bool mu__boolexpr2339;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2339 = FALSE ;
  else {
  mu__boolexpr2339 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2339)) mu__boolexpr2338 = FALSE ;
  else {
  mu__boolexpr2338 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2338)) mu__boolexpr2337 = FALSE ;
  else {
  mu__boolexpr2337 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2337)) mu__boolexpr2336 = FALSE ;
  else {
  mu__boolexpr2336 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2336)) mu__boolexpr2335 = FALSE ;
  else {
  mu__boolexpr2335 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2335)) mu__boolexpr2334 = FALSE ;
  else {
  mu__boolexpr2334 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2333 = (!(mu__boolexpr2334)) ; 
}
if ( !(mu__boolexpr2333) )
  { mu__quant2332 = FALSE; break; }
};
};
};
};
return mu__quant2332;
};

bool mu__condition_2340() // Condition for Rule "test_reachable_state_13"
{
  return mu__invariant_2331( );
}

/**** end rule declaration ****/

int mu__invariant_2341() // Invariant "test_reachable_state_12"
{
bool mu__quant2342; 
mu__quant2342 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2343;
  if (!((mu_i) != (mu_j))) mu__boolexpr2343 = TRUE ;
  else {
bool mu__boolexpr2344;
bool mu__boolexpr2345;
bool mu__boolexpr2346;
bool mu__boolexpr2347;
bool mu__boolexpr2348;
bool mu__boolexpr2349;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2349 = FALSE ;
  else {
  mu__boolexpr2349 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2349)) mu__boolexpr2348 = FALSE ;
  else {
  mu__boolexpr2348 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2348)) mu__boolexpr2347 = FALSE ;
  else {
  mu__boolexpr2347 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2347)) mu__boolexpr2346 = FALSE ;
  else {
  mu__boolexpr2346 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2346)) mu__boolexpr2345 = FALSE ;
  else {
  mu__boolexpr2345 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2345)) mu__boolexpr2344 = FALSE ;
  else {
  mu__boolexpr2344 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2343 = (!(mu__boolexpr2344)) ; 
}
if ( !(mu__boolexpr2343) )
  { mu__quant2342 = FALSE; break; }
};
};
};
};
return mu__quant2342;
};

bool mu__condition_2350() // Condition for Rule "test_reachable_state_12"
{
  return mu__invariant_2341( );
}

/**** end rule declaration ****/

int mu__invariant_2351() // Invariant "test_reachable_state_11"
{
bool mu__quant2352; 
mu__quant2352 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2353;
  if (!((mu_i) != (mu_j))) mu__boolexpr2353 = TRUE ;
  else {
bool mu__boolexpr2354;
bool mu__boolexpr2355;
bool mu__boolexpr2356;
bool mu__boolexpr2357;
bool mu__boolexpr2358;
bool mu__boolexpr2359;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2359 = FALSE ;
  else {
  mu__boolexpr2359 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2359)) mu__boolexpr2358 = FALSE ;
  else {
  mu__boolexpr2358 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2358)) mu__boolexpr2357 = FALSE ;
  else {
  mu__boolexpr2357 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2357)) mu__boolexpr2356 = FALSE ;
  else {
  mu__boolexpr2356 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2356)) mu__boolexpr2355 = FALSE ;
  else {
  mu__boolexpr2355 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2355)) mu__boolexpr2354 = FALSE ;
  else {
  mu__boolexpr2354 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2353 = (!(mu__boolexpr2354)) ; 
}
if ( !(mu__boolexpr2353) )
  { mu__quant2352 = FALSE; break; }
};
};
};
};
return mu__quant2352;
};

bool mu__condition_2360() // Condition for Rule "test_reachable_state_11"
{
  return mu__invariant_2351( );
}

/**** end rule declaration ****/

int mu__invariant_2361() // Invariant "test_reachable_state_10"
{
bool mu__quant2362; 
mu__quant2362 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2363;
  if (!((mu_i) != (mu_j))) mu__boolexpr2363 = TRUE ;
  else {
bool mu__boolexpr2364;
bool mu__boolexpr2365;
bool mu__boolexpr2366;
bool mu__boolexpr2367;
bool mu__boolexpr2368;
bool mu__boolexpr2369;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2369 = FALSE ;
  else {
  mu__boolexpr2369 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2369)) mu__boolexpr2368 = FALSE ;
  else {
  mu__boolexpr2368 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2368)) mu__boolexpr2367 = FALSE ;
  else {
  mu__boolexpr2367 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2367)) mu__boolexpr2366 = FALSE ;
  else {
  mu__boolexpr2366 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2366)) mu__boolexpr2365 = FALSE ;
  else {
  mu__boolexpr2365 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2365)) mu__boolexpr2364 = FALSE ;
  else {
  mu__boolexpr2364 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2363 = (!(mu__boolexpr2364)) ; 
}
if ( !(mu__boolexpr2363) )
  { mu__quant2362 = FALSE; break; }
};
};
};
};
return mu__quant2362;
};

bool mu__condition_2370() // Condition for Rule "test_reachable_state_10"
{
  return mu__invariant_2361( );
}

/**** end rule declaration ****/

int mu__invariant_2371() // Invariant "test_reachable_state_9"
{
bool mu__quant2372; 
mu__quant2372 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2373;
  if (!((mu_i) != (mu_j))) mu__boolexpr2373 = TRUE ;
  else {
bool mu__boolexpr2374;
bool mu__boolexpr2375;
bool mu__boolexpr2376;
bool mu__boolexpr2377;
bool mu__boolexpr2378;
bool mu__boolexpr2379;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2379 = FALSE ;
  else {
  mu__boolexpr2379 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2379)) mu__boolexpr2378 = FALSE ;
  else {
  mu__boolexpr2378 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2378)) mu__boolexpr2377 = FALSE ;
  else {
  mu__boolexpr2377 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2377)) mu__boolexpr2376 = FALSE ;
  else {
  mu__boolexpr2376 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2376)) mu__boolexpr2375 = FALSE ;
  else {
  mu__boolexpr2375 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2375)) mu__boolexpr2374 = FALSE ;
  else {
  mu__boolexpr2374 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2373 = (!(mu__boolexpr2374)) ; 
}
if ( !(mu__boolexpr2373) )
  { mu__quant2372 = FALSE; break; }
};
};
};
};
return mu__quant2372;
};

bool mu__condition_2380() // Condition for Rule "test_reachable_state_9"
{
  return mu__invariant_2371( );
}

/**** end rule declaration ****/

int mu__invariant_2381() // Invariant "test_reachable_state_8"
{
bool mu__quant2382; 
mu__quant2382 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2383;
  if (!((mu_i) != (mu_j))) mu__boolexpr2383 = TRUE ;
  else {
bool mu__boolexpr2384;
bool mu__boolexpr2385;
bool mu__boolexpr2386;
bool mu__boolexpr2387;
bool mu__boolexpr2388;
bool mu__boolexpr2389;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2389 = FALSE ;
  else {
  mu__boolexpr2389 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2389)) mu__boolexpr2388 = FALSE ;
  else {
  mu__boolexpr2388 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2388)) mu__boolexpr2387 = FALSE ;
  else {
  mu__boolexpr2387 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2387)) mu__boolexpr2386 = FALSE ;
  else {
  mu__boolexpr2386 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2386)) mu__boolexpr2385 = FALSE ;
  else {
  mu__boolexpr2385 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2385)) mu__boolexpr2384 = FALSE ;
  else {
  mu__boolexpr2384 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2383 = (!(mu__boolexpr2384)) ; 
}
if ( !(mu__boolexpr2383) )
  { mu__quant2382 = FALSE; break; }
};
};
};
};
return mu__quant2382;
};

bool mu__condition_2390() // Condition for Rule "test_reachable_state_8"
{
  return mu__invariant_2381( );
}

/**** end rule declaration ****/

int mu__invariant_2391() // Invariant "test_reachable_state_7"
{
bool mu__quant2392; 
mu__quant2392 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2393;
  if (!((mu_i) != (mu_j))) mu__boolexpr2393 = TRUE ;
  else {
bool mu__boolexpr2394;
bool mu__boolexpr2395;
bool mu__boolexpr2396;
bool mu__boolexpr2397;
bool mu__boolexpr2398;
bool mu__boolexpr2399;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2399 = FALSE ;
  else {
  mu__boolexpr2399 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2399)) mu__boolexpr2398 = FALSE ;
  else {
  mu__boolexpr2398 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2398)) mu__boolexpr2397 = FALSE ;
  else {
  mu__boolexpr2397 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2397)) mu__boolexpr2396 = FALSE ;
  else {
  mu__boolexpr2396 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2396)) mu__boolexpr2395 = FALSE ;
  else {
  mu__boolexpr2395 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2395)) mu__boolexpr2394 = FALSE ;
  else {
  mu__boolexpr2394 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2393 = (!(mu__boolexpr2394)) ; 
}
if ( !(mu__boolexpr2393) )
  { mu__quant2392 = FALSE; break; }
};
};
};
};
return mu__quant2392;
};

bool mu__condition_2400() // Condition for Rule "test_reachable_state_7"
{
  return mu__invariant_2391( );
}

/**** end rule declaration ****/

int mu__invariant_2401() // Invariant "test_reachable_state_6"
{
bool mu__quant2402; 
mu__quant2402 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2403;
  if (!((mu_i) != (mu_j))) mu__boolexpr2403 = TRUE ;
  else {
bool mu__boolexpr2404;
bool mu__boolexpr2405;
bool mu__boolexpr2406;
bool mu__boolexpr2407;
bool mu__boolexpr2408;
bool mu__boolexpr2409;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2409 = FALSE ;
  else {
  mu__boolexpr2409 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2409)) mu__boolexpr2408 = FALSE ;
  else {
  mu__boolexpr2408 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2408)) mu__boolexpr2407 = FALSE ;
  else {
  mu__boolexpr2407 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2407)) mu__boolexpr2406 = FALSE ;
  else {
  mu__boolexpr2406 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2406)) mu__boolexpr2405 = FALSE ;
  else {
  mu__boolexpr2405 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2405)) mu__boolexpr2404 = FALSE ;
  else {
  mu__boolexpr2404 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2403 = (!(mu__boolexpr2404)) ; 
}
if ( !(mu__boolexpr2403) )
  { mu__quant2402 = FALSE; break; }
};
};
};
};
return mu__quant2402;
};

bool mu__condition_2410() // Condition for Rule "test_reachable_state_6"
{
  return mu__invariant_2401( );
}

/**** end rule declaration ****/

int mu__invariant_2411() // Invariant "test_reachable_state_5"
{
bool mu__quant2412; 
mu__quant2412 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2413;
  if (!((mu_i) != (mu_j))) mu__boolexpr2413 = TRUE ;
  else {
bool mu__boolexpr2414;
bool mu__boolexpr2415;
bool mu__boolexpr2416;
bool mu__boolexpr2417;
bool mu__boolexpr2418;
bool mu__boolexpr2419;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2419 = FALSE ;
  else {
  mu__boolexpr2419 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2419)) mu__boolexpr2418 = FALSE ;
  else {
  mu__boolexpr2418 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2418)) mu__boolexpr2417 = FALSE ;
  else {
  mu__boolexpr2417 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2417)) mu__boolexpr2416 = FALSE ;
  else {
  mu__boolexpr2416 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2416)) mu__boolexpr2415 = FALSE ;
  else {
  mu__boolexpr2415 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2415)) mu__boolexpr2414 = FALSE ;
  else {
  mu__boolexpr2414 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2413 = (!(mu__boolexpr2414)) ; 
}
if ( !(mu__boolexpr2413) )
  { mu__quant2412 = FALSE; break; }
};
};
};
};
return mu__quant2412;
};

bool mu__condition_2420() // Condition for Rule "test_reachable_state_5"
{
  return mu__invariant_2411( );
}

/**** end rule declaration ****/

int mu__invariant_2421() // Invariant "test_reachable_state_4"
{
bool mu__quant2422; 
mu__quant2422 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2423;
  if (!((mu_i) != (mu_j))) mu__boolexpr2423 = TRUE ;
  else {
bool mu__boolexpr2424;
bool mu__boolexpr2425;
bool mu__boolexpr2426;
bool mu__boolexpr2427;
bool mu__boolexpr2428;
bool mu__boolexpr2429;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2429 = FALSE ;
  else {
  mu__boolexpr2429 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2429)) mu__boolexpr2428 = FALSE ;
  else {
  mu__boolexpr2428 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2428)) mu__boolexpr2427 = FALSE ;
  else {
  mu__boolexpr2427 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2427)) mu__boolexpr2426 = FALSE ;
  else {
  mu__boolexpr2426 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2426)) mu__boolexpr2425 = FALSE ;
  else {
  mu__boolexpr2425 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2425)) mu__boolexpr2424 = FALSE ;
  else {
  mu__boolexpr2424 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2423 = (!(mu__boolexpr2424)) ; 
}
if ( !(mu__boolexpr2423) )
  { mu__quant2422 = FALSE; break; }
};
};
};
};
return mu__quant2422;
};

bool mu__condition_2430() // Condition for Rule "test_reachable_state_4"
{
  return mu__invariant_2421( );
}

/**** end rule declaration ****/

int mu__invariant_2431() // Invariant "test_reachable_state_3"
{
bool mu__quant2432; 
mu__quant2432 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2433;
  if (!((mu_i) != (mu_j))) mu__boolexpr2433 = TRUE ;
  else {
bool mu__boolexpr2434;
bool mu__boolexpr2435;
bool mu__boolexpr2436;
bool mu__boolexpr2437;
bool mu__boolexpr2438;
bool mu__boolexpr2439;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2439 = FALSE ;
  else {
  mu__boolexpr2439 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2439)) mu__boolexpr2438 = FALSE ;
  else {
  mu__boolexpr2438 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2438)) mu__boolexpr2437 = FALSE ;
  else {
  mu__boolexpr2437 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2437)) mu__boolexpr2436 = FALSE ;
  else {
  mu__boolexpr2436 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2436)) mu__boolexpr2435 = FALSE ;
  else {
  mu__boolexpr2435 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2435)) mu__boolexpr2434 = FALSE ;
  else {
  mu__boolexpr2434 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr2433 = (!(mu__boolexpr2434)) ; 
}
if ( !(mu__boolexpr2433) )
  { mu__quant2432 = FALSE; break; }
};
};
};
};
return mu__quant2432;
};

bool mu__condition_2440() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_2431( );
}

/**** end rule declaration ****/

int mu__invariant_2441() // Invariant "test_reachable_state_2"
{
bool mu__quant2442; 
mu__quant2442 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2443;
  if (!((mu_i) != (mu_j))) mu__boolexpr2443 = TRUE ;
  else {
bool mu__boolexpr2444;
bool mu__boolexpr2445;
bool mu__boolexpr2446;
bool mu__boolexpr2447;
bool mu__boolexpr2448;
bool mu__boolexpr2449;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2449 = FALSE ;
  else {
  mu__boolexpr2449 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2449)) mu__boolexpr2448 = FALSE ;
  else {
  mu__boolexpr2448 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2448)) mu__boolexpr2447 = FALSE ;
  else {
  mu__boolexpr2447 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2447)) mu__boolexpr2446 = FALSE ;
  else {
  mu__boolexpr2446 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2446)) mu__boolexpr2445 = FALSE ;
  else {
  mu__boolexpr2445 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2445)) mu__boolexpr2444 = FALSE ;
  else {
  mu__boolexpr2444 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  mu__boolexpr2443 = (!(mu__boolexpr2444)) ; 
}
if ( !(mu__boolexpr2443) )
  { mu__quant2442 = FALSE; break; }
};
};
};
};
return mu__quant2442;
};

bool mu__condition_2450() // Condition for Rule "test_reachable_state_2"
{
  return mu__invariant_2441( );
}

/**** end rule declaration ****/

int mu__invariant_2451() // Invariant "test_reachable_state_1"
{
bool mu__quant2452; 
mu__quant2452 = TRUE;
{
for(int mu_i = 4; mu_i <= 5; mu_i++) {
for(int mu_j = 4; mu_j <= 5; mu_j++) {
for(int mu_a = 1; mu_a <= 1; mu_a++) {
bool mu__boolexpr2453;
  if (!((mu_i) != (mu_j))) mu__boolexpr2453 = TRUE ;
  else {
bool mu__boolexpr2454;
bool mu__boolexpr2455;
bool mu__boolexpr2456;
bool mu__boolexpr2457;
bool mu__boolexpr2458;
bool mu__boolexpr2459;
  if (!((mu_L3.mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr2459 = FALSE ;
  else {
  mu__boolexpr2459 = ((mu_L3.mu_L2[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2459)) mu__boolexpr2458 = FALSE ;
  else {
  mu__boolexpr2458 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2458)) mu__boolexpr2457 = FALSE ;
  else {
  mu__boolexpr2457 = ((mu_L3.mu_L2[mu_i].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2457)) mu__boolexpr2456 = FALSE ;
  else {
  mu__boolexpr2456 = ((mu_L3.mu_L2[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2456)) mu__boolexpr2455 = FALSE ;
  else {
  mu__boolexpr2455 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2455)) mu__boolexpr2454 = FALSE ;
  else {
  mu__boolexpr2454 = ((mu_L3.mu_L2[mu_j].mu_L1[mu_j].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  mu__boolexpr2453 = (!(mu__boolexpr2454)) ; 
}
if ( !(mu__boolexpr2453) )
  { mu__quant2452 = FALSE; break; }
};
};
};
};
return mu__quant2452;
};

bool mu__condition_2460() // Condition for Rule "test_reachable_state_1"
{
  return mu__invariant_2451( );
}

/**** end rule declaration ****/

// set invariants
const rulerec invariants[] = {
{"test_reachable_state_2", &mu__condition_2450, NULL, },
};// set invariants
const unsigned short numinvariants = 1;

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
