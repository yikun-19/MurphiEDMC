/******************************
  Program "test.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Oct 24 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Oct 24 2023"
#define PROTOCOL_NAME "test"
#define BITS_IN_WORLD 4152
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_L1_node: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_L1_node& val) { return mu__byte::operator=((int) val); };
  mu_1_L1_node (const char *name, int os): mu__byte(4, 7, 3, name, os) {};
  mu_1_L1_node (void): mu__byte(4, 7, 3) {};
  mu_1_L1_node (int val): mu__byte(4, 7, 3, "Parameter or function result.", 0)
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
mu_1_L1_node mu_1_L1_node_undefined_var;

class mu_1_L2_node: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_L2_node& val) { return mu__byte::operator=((int) val); };
  mu_1_L2_node (const char *name, int os): mu__byte(2, 3, 2, name, os) {};
  mu_1_L2_node (void): mu__byte(2, 3, 2) {};
  mu_1_L2_node (int val): mu__byte(2, 3, 2, "Parameter or function result.", 0)
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
mu_1_L2_node mu_1_L2_node_undefined_var;

class mu_1_L3_node: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_L3_node& val) { return mu__byte::operator=((int) val); };
  mu_1_L3_node (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_L3_node (void): mu__byte(1, 1, 1) {};
  mu_1_L3_node (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_L3_node mu_1_L3_node_undefined_var;

class mu_1_node: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_node& val) { return mu__byte::operator=((int) val); };
  mu_1_node (const char *name, int os): mu__byte(1, 7, 3, name, os) {};
  mu_1_node (void): mu__byte(1, 7, 3) {};
  mu_1_node (int val): mu__byte(1, 7, 3, "Parameter or function result.", 0)
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
mu_1_node mu_1_node_undefined_var;

class mu_1_master_node: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_master_node& val) { return mu__byte::operator=((int) val); };
  mu_1_master_node (const char *name, int os): mu__byte(2, 7, 3, name, os) {};
  mu_1_master_node (void): mu__byte(2, 7, 3) {};
  mu_1_master_node (int val): mu__byte(2, 7, 3, "Parameter or function result.", 0)
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
mu_1_master_node mu_1_master_node_undefined_var;

class mu_1_slave_node: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_slave_node& val) { return mu__byte::operator=((int) val); };
  mu_1_slave_node (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_slave_node (void): mu__byte(1, 3, 2) {};
  mu_1_slave_node (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
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
mu_1_slave_node mu_1_slave_node_undefined_var;

class mu_1_child_range: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_child_range& val) { return mu__byte::operator=((int) val); };
  mu_1_child_range (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_child_range (void): mu__byte(0, 1, 2) {};
  mu_1_child_range (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu_1_child_range mu_1_child_range_undefined_var;

class mu_1_addr: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_addr& val) { return mu__byte::operator=((int) val); };
  mu_1_addr (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_addr (void): mu__byte(1, 2, 2) {};
  mu_1_addr (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_addr mu_1_addr_undefined_var;

class mu_1_data_type: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_data_type& val) { return mu__byte::operator=((int) val); };
  mu_1_data_type (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_data_type (void): mu__byte(1, 2, 2) {};
  mu_1_data_type (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_data_type mu_1_data_type_undefined_var;

class mu_1_extend_data_type: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_extend_data_type& val) { return mu__byte::operator=((int) val); };
  mu_1_extend_data_type (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_extend_data_type (void): mu__byte(0, 2, 2) {};
  mu_1_extend_data_type (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu_1_extend_data_type mu_1_extend_data_type_undefined_var;

class mu_1_chan_num: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chan_num& val) { return mu__byte::operator=((int) val); };
  mu_1_chan_num (const char *name, int os): mu__byte(1, 5, 3, name, os) {};
  mu_1_chan_num (void): mu__byte(1, 5, 3) {};
  mu_1_chan_num (int val): mu__byte(1, 5, 3, "Parameter or function result.", 0)
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
mu_1_chan_num mu_1_chan_num_undefined_var;

class mu_1_stor_range: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_stor_range& val) { return mu__byte::operator=((int) val); };
  mu_1_stor_range (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_stor_range (void): mu__byte(1, 2, 2) {};
  mu_1_stor_range (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_stor_range mu_1_stor_range_undefined_var;

class mu_1_extend_stor_range: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_extend_stor_range& val) { return mu__byte::operator=((int) val); };
  mu_1_extend_stor_range (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_extend_stor_range (void): mu__byte(0, 2, 2) {};
  mu_1_extend_stor_range (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu_1_extend_stor_range mu_1_extend_stor_range_undefined_var;

class mu_1_msg_range: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msg_range& val) { return mu__byte::operator=((int) val); };
  mu_1_msg_range (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_msg_range (void): mu__byte(1, 2, 2) {};
  mu_1_msg_range (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_msg_range mu_1_msg_range_undefined_var;

class mu_1_extend_msg_range: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_extend_msg_range& val) { return mu__byte::operator=((int) val); };
  mu_1_extend_msg_range (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_extend_msg_range (void): mu__byte(0, 2, 2) {};
  mu_1_extend_msg_range (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu_1_extend_msg_range mu_1_extend_msg_range_undefined_var;

class mu_1_cache_state: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_cache_state& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_cache_state& val)
  {
    if (val.defined())
      return ( s << mu_1_cache_state::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_cache_state (const char *name, int os): mu__byte(1, 4, 3, name, os) {};
  mu_1_cache_state (void): mu__byte(1, 4, 3) {};
  mu_1_cache_state (int val): mu__byte(1, 4, 3, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -1] << '\n';}
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
      return ( s << mu_1_op_type::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_op_type (const char *name, int os): mu__byte(5, 17, 4, name, os) {};
  mu_1_op_type (void): mu__byte(5, 17, 4) {};
  mu_1_op_type (int val): mu__byte(5, 17, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -5]; };
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
      cout << name << ":" << values[ value() -5] << '\n';}
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
      return ( s << mu_1_trans::values[ int(val) - 18] );
    else return ( s << "Undefined" );
  };

  mu_1_trans (const char *name, int os): mu__byte(18, 29, 4, name, os) {};
  mu_1_trans (void): mu__byte(18, 29, 4) {};
  mu_1_trans (int val): mu__byte(18, 29, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -18]; };
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
      cout << name << ":" << values[ value() -18] << '\n';}
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
  mu_1_master_node mu_src;
  mu_1_slave_node mu_sink;
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

class mu_1_cacheline
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_addr mu_address;
  mu_1_cache_state mu_state;
  mu_1_data_type mu_data;
  mu_0_boolean mu_dirty;
  mu_1_cacheline ( const char *n, int os ) { set_self(n,os); };
  mu_1_cacheline ( void ) {};

  virtual ~mu_1_cacheline(); 
friend int CompareWeight(mu_1_cacheline& a, mu_1_cacheline& b)
  {
    int w;
    w = CompareWeight(a.mu_address, b.mu_address);
    if (w!=0) return w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dirty, b.mu_dirty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_cacheline& a, mu_1_cacheline& b)
  {
    int w;
    w = Compare(a.mu_address, b.mu_address);
    if (w!=0) return w;
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
    mu_address.MultisetSort();
    mu_state.MultisetSort();
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_address.print_statistic();
    mu_state.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_address.clear();
    mu_state.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_address.undefine();
    mu_state.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_address.reset();
    mu_state.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_address.print();
    mu_state.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_address.print_diff(prevstate);
    mu_state.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_address.to_state(thestate);
    mu_state.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_cacheline& operator= (const mu_1_cacheline& from) {
    mu_address.value(from.mu_address.value());
    mu_state.value(from.mu_state.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_cacheline::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_cacheline::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_cacheline::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_address.set_self_2(name, ".address", os + 0 ); else mu_address.set_self_2(NULL, NULL, 0);
  if (name) mu_state.set_self_2(name, ".state", os + 8 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 24 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_cacheline::~mu_1_cacheline()
{
}

/*** end record declaration ***/
mu_1_cacheline mu_1_cacheline_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_cacheline array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_cacheline& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_extend_stor_range array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_extend_stor_range& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_cache_record
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_extend_stor_range mu_used;
  mu_1__type_0 mu_line;
  mu_1__type_1 mu_valid;
  mu_1_cache_record ( const char *n, int os ) { set_self(n,os); };
  mu_1_cache_record ( void ) {};

  virtual ~mu_1_cache_record(); 
friend int CompareWeight(mu_1_cache_record& a, mu_1_cache_record& b)
  {
    int w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
    w = CompareWeight(a.mu_line, b.mu_line);
    if (w!=0) return w;
    w = CompareWeight(a.mu_valid, b.mu_valid);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_cache_record& a, mu_1_cache_record& b)
  {
    int w;
    w = Compare(a.mu_used, b.mu_used);
    if (w!=0) return w;
    w = Compare(a.mu_line, b.mu_line);
    if (w!=0) return w;
    w = Compare(a.mu_valid, b.mu_valid);
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
    mu_used.MultisetSort();
    mu_line.MultisetSort();
    mu_valid.MultisetSort();
  }
  void print_statistic()
  {
    mu_used.print_statistic();
    mu_line.print_statistic();
    mu_valid.print_statistic();
  }
  void clear() {
    mu_used.clear();
    mu_line.clear();
    mu_valid.clear();
 };
  void undefine() {
    mu_used.undefine();
    mu_line.undefine();
    mu_valid.undefine();
 };
  void reset() {
    mu_used.reset();
    mu_line.reset();
    mu_valid.reset();
 };
  void print() {
    mu_used.print();
    mu_line.print();
    mu_valid.print();
  };
  void print_diff(state *prevstate) {
    mu_used.print_diff(prevstate);
    mu_line.print_diff(prevstate);
    mu_valid.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_used.to_state(thestate);
    mu_line.to_state(thestate);
    mu_valid.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_cache_record& operator= (const mu_1_cache_record& from) {
    mu_used.value(from.mu_used.value());
    mu_line = from.mu_line;
    mu_valid = from.mu_valid;
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

  if (name) mu_used.set_self_2(name, ".used", os + 0 ); else mu_used.set_self_2(NULL, NULL, 0);
  if (name) mu_line.set_self_2(name, ".line", os + 8 ); else mu_line.set_self_2(NULL, NULL, 0);
  if (name) mu_valid.set_self_2(name, ".valid", os + 72 ); else mu_valid.set_self_2(NULL, NULL, 0);
}

mu_1_cache_record::~mu_1_cache_record()
{
}

/*** end record declaration ***/
mu_1_cache_record mu_1_cache_record_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_op_type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1_L1_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_node mu_paren;
  mu_1_cache_record mu_cache;
  mu_1__type_2 mu_pending;
  mu_1_L1_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_L1_cache ( void ) {};

  virtual ~mu_1_L1_cache(); 
friend int CompareWeight(mu_1_L1_cache& a, mu_1_L1_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_paren, b.mu_paren);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pending, b.mu_pending);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_L1_cache& a, mu_1_L1_cache& b)
  {
    int w;
    w = Compare(a.mu_paren, b.mu_paren);
    if (w!=0) return w;
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
    mu_paren.MultisetSort();
    mu_cache.MultisetSort();
    mu_pending.MultisetSort();
  }
  void print_statistic()
  {
    mu_paren.print_statistic();
    mu_cache.print_statistic();
    mu_pending.print_statistic();
  }
  void clear() {
    mu_paren.clear();
    mu_cache.clear();
    mu_pending.clear();
 };
  void undefine() {
    mu_paren.undefine();
    mu_cache.undefine();
    mu_pending.undefine();
 };
  void reset() {
    mu_paren.reset();
    mu_cache.reset();
    mu_pending.reset();
 };
  void print() {
    mu_paren.print();
    mu_cache.print();
    mu_pending.print();
  };
  void print_diff(state *prevstate) {
    mu_paren.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_pending.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_paren.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_pending.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_L1_cache& operator= (const mu_1_L1_cache& from) {
    mu_paren.value(from.mu_paren.value());
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

  if (name) mu_paren.set_self_2(name, ".paren", os + 0 ); else mu_paren.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 8 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_pending.set_self_2(name, ".pending", os + 96 ); else mu_pending.set_self_2(NULL, NULL, 0);
}

mu_1_L1_cache::~mu_1_L1_cache()
{
}

/*** end record declaration ***/
mu_1_L1_cache mu_1_L1_cache_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_op_type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
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
  for(int i = 0; i < 2; i++) {
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
    if ( ( index >= 0 ) && ( index <= 1 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
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
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_op_type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_op_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_1_cache_state array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_cache_state& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
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
    if ( ( index >= 0 ) && ( index <= 1 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
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
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1_Ln_cache
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_node mu_child;
  mu_1_node mu_paren;
  mu_1_cache_record mu_cache;
  mu_1__type_4 mu_master_pending;
  mu_1__type_5 mu_slave_pending;
  mu_1__type_7 mu_directory;
  mu_1_Ln_cache ( const char *n, int os ) { set_self(n,os); };
  mu_1_Ln_cache ( void ) {};

  virtual ~mu_1_Ln_cache(); 
friend int CompareWeight(mu_1_Ln_cache& a, mu_1_Ln_cache& b)
  {
    int w;
    w = CompareWeight(a.mu_child, b.mu_child);
    if (w!=0) return w;
    w = CompareWeight(a.mu_paren, b.mu_paren);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_master_pending, b.mu_master_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_slave_pending, b.mu_slave_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Ln_cache& a, mu_1_Ln_cache& b)
  {
    int w;
    w = Compare(a.mu_child, b.mu_child);
    if (w!=0) return w;
    w = Compare(a.mu_paren, b.mu_paren);
    if (w!=0) return w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_master_pending, b.mu_master_pending);
    if (w!=0) return w;
    w = Compare(a.mu_slave_pending, b.mu_slave_pending);
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
    mu_child.MultisetSort();
    mu_paren.MultisetSort();
    mu_cache.MultisetSort();
    mu_master_pending.MultisetSort();
    mu_slave_pending.MultisetSort();
    mu_directory.MultisetSort();
  }
  void print_statistic()
  {
    mu_child.print_statistic();
    mu_paren.print_statistic();
    mu_cache.print_statistic();
    mu_master_pending.print_statistic();
    mu_slave_pending.print_statistic();
    mu_directory.print_statistic();
  }
  void clear() {
    mu_child.clear();
    mu_paren.clear();
    mu_cache.clear();
    mu_master_pending.clear();
    mu_slave_pending.clear();
    mu_directory.clear();
 };
  void undefine() {
    mu_child.undefine();
    mu_paren.undefine();
    mu_cache.undefine();
    mu_master_pending.undefine();
    mu_slave_pending.undefine();
    mu_directory.undefine();
 };
  void reset() {
    mu_child.reset();
    mu_paren.reset();
    mu_cache.reset();
    mu_master_pending.reset();
    mu_slave_pending.reset();
    mu_directory.reset();
 };
  void print() {
    mu_child.print();
    mu_paren.print();
    mu_cache.print();
    mu_master_pending.print();
    mu_slave_pending.print();
    mu_directory.print();
  };
  void print_diff(state *prevstate) {
    mu_child.print_diff(prevstate);
    mu_paren.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_master_pending.print_diff(prevstate);
    mu_slave_pending.print_diff(prevstate);
    mu_directory.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_child.to_state(thestate);
    mu_paren.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_master_pending.to_state(thestate);
    mu_slave_pending.to_state(thestate);
    mu_directory.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Ln_cache& operator= (const mu_1_Ln_cache& from) {
    mu_child.value(from.mu_child.value());
    mu_paren.value(from.mu_paren.value());
    mu_cache = from.mu_cache;
    mu_master_pending = from.mu_master_pending;
    mu_slave_pending = from.mu_slave_pending;
    mu_directory = from.mu_directory;
    return *this;
  };
};

  void mu_1_Ln_cache::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Ln_cache::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Ln_cache::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_child.set_self_2(name, ".child", os + 0 ); else mu_child.set_self_2(NULL, NULL, 0);
  if (name) mu_paren.set_self_2(name, ".paren", os + 8 ); else mu_paren.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 16 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 104 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 136 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 152 ); else mu_directory.set_self_2(NULL, NULL, 0);
}

mu_1_Ln_cache::~mu_1_Ln_cache()
{
}

/*** end record declaration ***/
mu_1_Ln_cache mu_1_Ln_cache_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_msg_type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_msg_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 48 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1_channel
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_8 mu_messages;
  mu_1_extend_msg_range mu_used;
  mu_1_channel ( const char *n, int os ) { set_self(n,os); };
  mu_1_channel ( void ) {};

  virtual ~mu_1_channel(); 
friend int CompareWeight(mu_1_channel& a, mu_1_channel& b)
  {
    int w;
    w = CompareWeight(a.mu_messages, b.mu_messages);
    if (w!=0) return w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_channel& a, mu_1_channel& b)
  {
    int w;
    w = Compare(a.mu_messages, b.mu_messages);
    if (w!=0) return w;
    w = Compare(a.mu_used, b.mu_used);
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
    mu_messages.MultisetSort();
    mu_used.MultisetSort();
  }
  void print_statistic()
  {
    mu_messages.print_statistic();
    mu_used.print_statistic();
  }
  void clear() {
    mu_messages.clear();
    mu_used.clear();
 };
  void undefine() {
    mu_messages.undefine();
    mu_used.undefine();
 };
  void reset() {
    mu_messages.reset();
    mu_used.reset();
 };
  void print() {
    mu_messages.print();
    mu_used.print();
  };
  void print_diff(state *prevstate) {
    mu_messages.print_diff(prevstate);
    mu_used.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_messages.to_state(thestate);
    mu_used.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_channel& operator= (const mu_1_channel& from) {
    mu_messages = from.mu_messages;
    mu_used.value(from.mu_used.value());
    return *this;
  };
};

  void mu_1_channel::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_channel::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_channel::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_messages.set_self_2(name, ".messages", os + 0 ); else mu_messages.set_self_2(NULL, NULL, 0);
  if (name) mu_used.set_self_2(name, ".used", os + 96 ); else mu_used.set_self_2(NULL, NULL, 0);
}

mu_1_channel::~mu_1_channel()
{
}

/*** end record declaration ***/
mu_1_channel mu_1_channel_undefined_var;

class mu_1__type_9
{
 public:
  mu_1_L1_cache array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1_L1_cache& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 4 ) && ( index <= 7 ) )
      return array[ index - 4 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 4 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 4; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 4; i++)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 4), i * 112 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_1_Ln_cache array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1_Ln_cache& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 3 ) )
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
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<3; i++) {
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
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 184 + os);
    delete[] s;
  }
};
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11
{
 public:
  mu_1_channel array[ 5 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_channel& operator[] (int index) /* const */
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
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 5; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 104 + os);
    delete[] s;
  }
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12
{
 public:
  mu_1__type_11 array[ 6 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1__type_11& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 2 ) && ( index <= 7 ) )
      return array[ index - 2 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 6; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 6; i++)
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
  for(int i = 0; i < 6; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 2), i * 520 + os);
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
  mu_1_data_type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_1_data_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14
{
 public:
  mu_1_data_type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1_data_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

const int mu_num_L1 = 4;
const int mu_num_L2 = 2;
const int mu_num_L3 = 1;
const int mu_child_num = 2;
const int mu_stor_num = 2;
const int mu_msg_num = 2;
const int mu_None = 1;
const int mu_Trunk = 2;
const int mu_Branch = 3;
const int mu_Tip = 4;
const int mu_Empty = 5;
const int mu_AcquireBlock = 6;
const int mu_AcquirePerm = 7;
const int mu_ProbeBlock = 8;
const int mu_ProbePerm = 9;
const int mu_ProbeAck = 10;
const int mu_ProbeAckData = 11;
const int mu_Grant = 12;
const int mu_GrantData = 13;
const int mu_GrantAck = 14;
const int mu_Release = 15;
const int mu_ReleaseData = 16;
const int mu_ReleaseAck = 17;
const int mu_toN = 18;
const int mu_toB = 19;
const int mu_toT = 20;
const int mu_NtoB = 21;
const int mu_NtoT = 22;
const int mu_BtoT = 23;
const int mu_TtoB = 24;
const int mu_TtoN = 25;
const int mu_BtoN = 26;
const int mu_TtoT = 27;
const int mu_BtoB = 28;
const int mu_NtoN = 29;
/*** Variable declaration ***/
mu_1__type_9 mu_L1("L1",0);

/*** Variable declaration ***/
mu_1__type_10 mu_Ln("Ln",448);

/*** Variable declaration ***/
mu_1__type_12 mu_link("link",1000);

/*** Variable declaration ***/
mu_1__type_13 mu_memdata("memdata",4120);

/*** Variable declaration ***/
mu_1__type_14 mu_auxdata("auxdata",4136);

void mu_removeReco(mu_1_cache_record& mu_c_record, const mu_1_addr& mu_address)
{
bool mu__boolexpr15;
  if (!((mu_c_record.mu_valid[mu_address]) <= (mu_stor_num))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_c_record.mu_valid[mu_address]) >= (1)) ; 
}
if ( mu__boolexpr15 )
{
{
int mu__ub16 = (mu_c_record.mu_used) - (1);
for (int mu_i = mu_c_record.mu_valid[mu_address]; mu_i <= mu__ub16; mu_i += 1) {
mu_c_record.mu_line[mu_i] = mu_c_record.mu_line[(mu_i) + (1)];
mu_c_record.mu_valid[mu_c_record.mu_line[(mu_i) + (1)].mu_address] = mu_i;
};
};
mu_c_record.mu_valid[mu_address] = 0;
mu_c_record.mu_used = (mu_c_record.mu_used) - (1);
}
};
/*** end procedure declaration ***/

mu_0_boolean mu_updateReco(mu_1_cache_record& mu_c_record,const mu_1_addr& mu_address,mu_1_cacheline& mu_info)
{
bool mu__boolexpr17;
  if (!((mu_c_record.mu_valid[mu_address]) <= (mu_stor_num))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_c_record.mu_valid[mu_address]) >= (1)) ; 
}
if ( mu__boolexpr17 )
{
mu_c_record.mu_line[mu_c_record.mu_valid[mu_address]] = mu_info;
return mu_true;
}
else
{
if ( (mu_c_record.mu_used) < (mu_stor_num) )
{
mu_c_record.mu_used = (mu_c_record.mu_used) + (1);
mu_c_record.mu_line[mu_c_record.mu_used] = mu_info;
mu_c_record.mu_valid[mu_address] = mu_c_record.mu_used;
return mu_true;
}
else
{
return mu_false;
}
}
	Error.Error("The end of function updateReco reached without returning values.");
};
/*** end function declaration ***/

mu_1_cache_state mu_getState(mu_1_cache_record& mu_c_record,const mu_1_addr& mu_address)
{
if ( (mu_c_record.mu_valid[mu_address]) == (0) )
{
return mu_None;
}
else
{
return mu_c_record.mu_line[mu_c_record.mu_valid[mu_address]].mu_state;
}
	Error.Error("The end of function getState reached without returning values.");
};
/*** end function declaration ***/

mu_1_cache_state mu_getCacheState(const mu_1_node& mu_i,const mu_1_addr& mu_address)
{
/*** Variable declaration ***/
mu_1_cache_record mu_local_cache("local_cache",0);

bool mu__boolexpr18;
  if (!((mu_i) >= (4))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr18 )
{
mu_local_cache = mu_L1[mu_i].mu_cache;
return mu_getState( mu_local_cache, mu_address );
}
else
{
mu_local_cache = mu_Ln[mu_i].mu_cache;
return mu_getState( mu_local_cache, mu_address );
}
	Error.Error("The end of function getCacheState reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_addMsg(mu_1_channel& mu_ch,mu_1_msg_type& mu_msg)
{
if ( (mu_ch.mu_used) < (mu_msg_num) )
{
mu_ch.mu_used = (mu_ch.mu_used) + (1);
mu_ch.mu_messages[mu_ch.mu_used] = mu_msg;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function addMsg reached without returning values.");
};
/*** end function declaration ***/

void mu_popMsg(mu_1_channel& mu_ch)
{
{
int mu__ub19 = (mu_ch.mu_used) - (1);
for (int mu_i = 1; mu_i <= mu__ub19; mu_i += 1) {
mu_ch.mu_messages[mu_i] = mu_ch.mu_messages[(mu_i) + (1)];
};
};
mu_ch.mu_used = (mu_ch.mu_used) - (1);
};
/*** end procedure declaration ***/

mu_1_msg_type mu_topMsg(mu_1_channel& mu_ch)
{
/*** Variable declaration ***/
mu_1_msg_type mu_emptyMsg("emptyMsg",0);

if ( (mu_ch.mu_used) == (0) )
{
return mu_emptyMsg;
}
else
{
return mu_ch.mu_messages[1];
}
	Error.Error("The end of function topMsg reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_send(const mu_1_op_type& mu_op,const mu_1_trans& mu_para,const mu_1_master_node& mu_src,const mu_1_node& mu_sink,const mu_1_addr& mu_a,const mu_1_data_type& mu_d,const mu_1_node& mu_n,const mu_0_boolean& mu_up,const mu_1_child_range& mu_r)
{
/*** Variable declaration ***/
mu_1_msg_type mu_msg("msg",0);

/*** Variable declaration ***/
mu_0_boolean mu_isL1("isL1",48);

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
bool mu__boolexpr20;
  if (!((mu_n) >= (4))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_n) <= (7)) ; 
}
mu_isL1 = (mu__boolexpr20) ? (mu_true) : (mu_false);
{
  const int mu_c = (mu_isL1) ? (mu_L1[mu_n].mu_pending[mu_a]) : ((mu_up) ? (mu_Ln[mu_n].mu_master_pending[mu_r][mu_a]) : (mu_Ln[mu_n].mu_slave_pending[mu_a]));
switch ((int) mu_op) {
case mu_AcquirePerm:
case mu_AcquireBlock:
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_c) != (mu_GrantData))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_c) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_c) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr21 )
{
return mu_addMsg( mu_link[mu_src][1], mu_msg );
}
else
{
return mu_false;
}
break;
case mu_ProbePerm:
case mu_ProbeBlock:
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!((mu_c) != (mu_ProbeAck))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_c) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_c) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr23 )
{
return mu_addMsg( mu_link[mu_src][2], mu_msg );
}
else
{
return mu_false;
}
break;
case mu_ProbeAckData:
case mu_ProbeAck:
case mu_ReleaseData:
case mu_Release:
bool mu__boolexpr25;
bool mu__boolexpr26;
  if (!((mu_c) != (mu_GrantData))) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_c) != (mu_Grant)) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_c) != (mu_ReleaseAck)) ; 
}
if ( mu__boolexpr25 )
{
return mu_addMsg( mu_link[mu_src][3], mu_msg );
}
else
{
return mu_false;
}
break;
case mu_GrantData:
case mu_Grant:
bool mu__boolexpr27;
bool mu__boolexpr28;
  if (!((mu_c) != (mu_ProbeAck))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_c) != (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_c) != (mu_GrantAck)) ; 
}
if ( mu__boolexpr27 )
{
return mu_addMsg( mu_link[mu_src][4], mu_msg );
}
else
{
return mu_false;
}
break;
case mu_ReleaseAck:
return mu_addMsg( mu_link[mu_src][4], mu_msg );
break;
case mu_GrantAck:
return mu_addMsg( mu_link[mu_src][5], mu_msg );
break;
}
}
	Error.Error("The end of function send reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_L1.clear();
  mu_Ln.clear();
  mu_link.clear();
  mu_memdata.clear();
  mu_auxdata.clear();
}
void world_class::undefine()
{
  mu_L1.undefine();
  mu_Ln.undefine();
  mu_link.undefine();
  mu_memdata.undefine();
  mu_auxdata.undefine();
}
void world_class::reset()
{
  mu_L1.reset();
  mu_Ln.reset();
  mu_link.reset();
  mu_memdata.reset();
  mu_auxdata.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_L1.print();
  mu_Ln.print();
  mu_link.print();
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
  mu_L1.print_statistic();
  mu_Ln.print_statistic();
  mu_link.print_statistic();
  mu_memdata.print_statistic();
  mu_auxdata.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_L1.print_diff(prevstate);
    mu_Ln.print_diff(prevstate);
    mu_link.print_diff(prevstate);
    mu_memdata.print_diff(prevstate);
    mu_auxdata.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_L1.to_state( newstate );
  mu_Ln.to_state( newstate );
  mu_link.to_state( newstate );
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
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("store, d:%s, j:%s, i:%s", mu_d.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
    return (mu_getState( mu_l1, mu_j )) == (mu_Tip);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
	      if ((mu_getState( mu_l1, mu_j )) == (mu_Tip)) {
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
    r = what_rule - 0;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_data_type mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
mu_l1.mu_line[mu_l1.mu_valid[mu_j]].mu_dirty = mu_true;
mu_l1.mu_line[mu_l1.mu_valid[mu_j]].mu_data = mu_d;
mu_auxdata[mu_j] = mu_d;
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
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("slave_send_Release3, j:%s, k:%s", mu_j.Name(), mu_k.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
bool mu__boolexpr29;
  if (!((mu_getState( mu_ln, mu_j )) == (mu_Trunk))) mu__boolexpr29 = FALSE ;
  else {
bool mu__quant30; 
mu__quant30 = FALSE;
{
int mu__ub31 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub31; mu_i += 1) {
if ( ((mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_Tip)) )
  { mu__quant30 = TRUE; break; }
};
};
  mu__boolexpr29 = (mu__quant30) ; 
}
    return mu__boolexpr29;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 22 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
bool mu__boolexpr32;
  if (!((mu_getState( mu_ln, mu_j )) == (mu_Trunk))) mu__boolexpr32 = FALSE ;
  else {
bool mu__quant33; 
mu__quant33 = FALSE;
{
int mu__ub34 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub34; mu_i += 1) {
if ( ((mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_Tip)) )
  { mu__quant33 = TRUE; break; }
};
};
  mu__boolexpr32 = (mu__quant33) ; 
}
	      if (mu__boolexpr32) {
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
    r = what_rule - 16;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
{
int mu__ub35 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub35; mu_i += 1) {
if ( (mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_Tip) )
{
if ( mu_send( mu_ProbeBlock, mu_toN, mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_k, mu_true, (mu_i) - (mu_Ln[mu_k].mu_child) ) )
{
mu_Ln[mu_k].mu_master_pending[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j] = mu_ProbeAckData;
}
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
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("slave_send_Release2, j:%s, k:%s", mu_j.Name(), mu_k.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
bool mu__boolexpr36;
  if (!((mu_getState( mu_ln, mu_j )) == (mu_Tip))) mu__boolexpr36 = FALSE ;
  else {
bool mu__quant37; 
mu__quant37 = FALSE;
{
int mu__ub38 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub38; mu_i += 1) {
if ( ((mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_Branch)) )
  { mu__quant37 = TRUE; break; }
};
};
  mu__boolexpr36 = (mu__quant37) ; 
}
    return mu__boolexpr36;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 22;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 28 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
bool mu__boolexpr39;
  if (!((mu_getState( mu_ln, mu_j )) == (mu_Tip))) mu__boolexpr39 = FALSE ;
  else {
bool mu__quant40; 
mu__quant40 = FALSE;
{
int mu__ub41 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub41; mu_i += 1) {
if ( ((mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_Branch)) )
  { mu__quant40 = TRUE; break; }
};
};
  mu__boolexpr39 = (mu__quant40) ; 
}
	      if (mu__boolexpr39) {
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
    r = what_rule - 22;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
{
int mu__ub42 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub42; mu_i += 1) {
if ( (mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_Branch) )
{
bool mu__boolexpr43;
  if (!((mu_Ln[mu_k].mu_master_pending[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) != (mu_GrantAck))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_send( mu_ProbePerm, mu_toN, mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_k, mu_true, (mu_i) - (mu_Ln[mu_k].mu_child) )) ; 
}
if ( mu__boolexpr43 )
{
mu_Ln[mu_k].mu_master_pending[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j] = mu_ProbeAck;
}
}
};
};
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
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("slave_send_Release1, j:%s, k:%s", mu_j.Name(), mu_k.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
bool mu__boolexpr44;
bool mu__boolexpr45;
  if ((mu_getState( mu_ln, mu_j )) == (mu_Tip)) mu__boolexpr45 = TRUE ;
  else {
  mu__boolexpr45 = ((mu_getState( mu_ln, mu_j )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
bool mu__quant46; 
mu__quant46 = TRUE;
{
int mu__ub47 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub47; mu_i += 1) {
if ( !((mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_None)) )
  { mu__quant46 = FALSE; break; }
};
};
  mu__boolexpr44 = (mu__quant46) ; 
}
    return mu__boolexpr44;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 28;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 34 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
bool mu__boolexpr48;
bool mu__boolexpr49;
  if ((mu_getState( mu_ln, mu_j )) == (mu_Tip)) mu__boolexpr49 = TRUE ;
  else {
  mu__boolexpr49 = ((mu_getState( mu_ln, mu_j )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
bool mu__quant50; 
mu__quant50 = TRUE;
{
int mu__ub51 = ((mu_Ln[mu_k].mu_child) + (mu_child_num)) - (1);
for (int mu_i = mu_Ln[mu_k].mu_child; mu_i <= mu__ub51; mu_i += 1) {
if ( !((mu_Ln[mu_k].mu_directory[(mu_i) - (mu_Ln[mu_k].mu_child)][mu_j]) == (mu_None)) )
  { mu__quant50 = FALSE; break; }
};
};
  mu__boolexpr48 = (mu__quant50) ; 
}
	      if (mu__boolexpr48) {
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
    r = what_rule - 28;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_k.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_slave_node mu_k;
    mu_k.value((r % 3) + 1);
    r = r / 3;
  mu_1_cache_record& mu_ln = mu_Ln[mu_k].mu_cache;
/*** Variable declaration ***/
mu_1_slave_node mu_p("p",0);

/*** Variable declaration ***/
mu_0_boolean mu_sendSucc("sendSucc",8);

bool mu__boolexpr52;
  if (!((mu_k) >= (1))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_k) <= (mu_num_L3)) ; 
}
if ( mu__boolexpr52 )
{
mu_memdata[mu_j] = mu_ln.mu_line[mu_ln.mu_valid[mu_j]].mu_data;
mu_removeReco ( mu_ln, mu_j );
}
else
{
bool mu__boolexpr53;
  if (!((mu_k) >= (2))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_k) <= (3)) ; 
}
if ( mu__boolexpr53 )
{
mu_p = mu_Ln[mu_k].mu_paren;
if ( (mu_getState( mu_ln, mu_j )) == (mu_Branch) )
{
mu_sendSucc = mu_send( mu_Release, mu_BtoN, (int)mu_k, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_k, mu_false, 0 );
}
else
{
if ( (mu_getState( mu_ln, mu_j )) == (mu_Tip) )
{
if ( !(mu_ln.mu_line[mu_ln.mu_valid[mu_j]].mu_dirty) )
{
mu_sendSucc = mu_send( mu_Release, mu_TtoN, (int)mu_k, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_k, mu_false, 0 );
}
else
{
mu_sendSucc = mu_send( mu_ReleaseData, mu_TtoN, (int)mu_k, mu_1_node_undefined_var, mu_j, mu_ln.mu_line[mu_ln.mu_valid[mu_j]].mu_data, (int)mu_k, mu_false, 0 );
if ( mu_sendSucc )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_j]].mu_dirty = mu_false;
}
}
}
}
if ( mu_sendSucc )
{
mu_removeReco ( mu_ln, mu_j );
mu_Ln[mu_k].mu_slave_pending[mu_j] = mu_ReleaseAck;
}
}
}
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
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Probe2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
  mu_1_cache_record& mu_ln = mu_Ln[mu_i].mu_cache;
bool mu__boolexpr54;
bool mu__boolexpr55;
  if (!((mu_link[mu_i][2].mu_used) > (0))) mu__boolexpr55 = FALSE ;
  else {
bool mu__boolexpr56;
  if ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbePerm)) mu__boolexpr56 = TRUE ;
  else {
  mu__boolexpr56 = ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr55 = (mu__boolexpr56) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
bool mu__boolexpr57;
  if ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toN)) mu__boolexpr57 = TRUE ;
  else {
  mu__boolexpr57 = ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr54 = (mu__boolexpr57) ; 
}
    return mu__boolexpr54;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 34;
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 36 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_ln = mu_Ln[mu_i].mu_cache;
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!((mu_link[mu_i][2].mu_used) > (0))) mu__boolexpr59 = FALSE ;
  else {
bool mu__boolexpr60;
  if ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbePerm)) mu__boolexpr60 = TRUE ;
  else {
  mu__boolexpr60 = ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr59 = (mu__boolexpr60) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
bool mu__boolexpr61;
  if ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toN)) mu__boolexpr61 = TRUE ;
  else {
  mu__boolexpr61 = ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr58 = (mu__boolexpr61) ; 
}
	      if (mu__boolexpr58) {
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
    r = what_rule - 34;
    mu_i.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
  mu_1_cache_record& mu_ln = mu_Ln[mu_i].mu_cache;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_0_boolean mu_sendSucc("sendSucc",48);

mu_m = mu_link[mu_i][2].mu_messages[1];
if ( (mu_m.mu_para) == (mu_toN) )
{
if ( (mu_getState( mu_ln, mu_m.mu_address )) == (mu_None) )
{
if ( mu_send( mu_ProbeAck, mu_NtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_popMsg ( mu_link[mu_i][2] );
mu_removeReco ( mu_ln, mu_m.mu_address );
}
}
else
{
bool mu__boolexpr62;
  if (!((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Branch))) mu__boolexpr62 = FALSE ;
  else {
bool mu__quant63; 
mu__quant63 = TRUE;
{
int mu__ub64 = ((mu_Ln[mu_i].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_i].mu_child; mu_k <= mu__ub64; mu_k += 1) {
if ( !((mu_Ln[mu_i].mu_directory[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address]) == (mu_None)) )
  { mu__quant63 = FALSE; break; }
};
};
  mu__boolexpr62 = (mu__quant63) ; 
}
if ( mu__boolexpr62 )
{
if ( mu_send( mu_ProbeAck, mu_BtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_popMsg ( mu_link[mu_i][2] );
mu_removeReco ( mu_ln, mu_m.mu_address );
}
}
else
{
bool mu__boolexpr65;
  if (!((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Branch))) mu__boolexpr65 = FALSE ;
  else {
bool mu__quant66; 
mu__quant66 = FALSE;
{
int mu__ub67 = ((mu_Ln[mu_i].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_i].mu_child; mu_k <= mu__ub67; mu_k += 1) {
if ( ((mu_Ln[mu_i].mu_directory[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address]) == (mu_Branch)) )
  { mu__quant66 = TRUE; break; }
};
};
  mu__boolexpr65 = (mu__quant66) ; 
}
if ( mu__boolexpr65 )
{
{
int mu__ub68 = ((mu_Ln[mu_i].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_i].mu_child; mu_k <= mu__ub68; mu_k += 1) {
if ( (mu_Ln[mu_i].mu_directory[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address]) == (mu_Branch) )
{
if ( mu_send( mu_ProbeBlock, mu_toN, mu_k, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_true, (mu_k) - (mu_Ln[mu_i].mu_child) ) )
{
mu_Ln[mu_i].mu_master_pending[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address] = mu_ProbeAckData;
}
}
};
};
}
else
{
bool mu__boolexpr69;
  if (!((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Tip))) mu__boolexpr69 = FALSE ;
  else {
bool mu__quant70; 
mu__quant70 = TRUE;
{
int mu__ub71 = ((mu_Ln[mu_i].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_i].mu_child; mu_k <= mu__ub71; mu_k += 1) {
if ( !((mu_Ln[mu_i].mu_directory[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address]) == (mu_None)) )
  { mu__quant70 = FALSE; break; }
};
};
  mu__boolexpr69 = (mu__quant70) ; 
}
if ( mu__boolexpr69 )
{
if ( (mu_m.mu_opcode) == (mu_ProbeBlock) )
{
if ( mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_dirty )
{
if ( mu_send( mu_ProbeAckData, mu_TtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_data, (int)mu_i, mu_false, 0 ) )
{
mu_popMsg ( mu_link[mu_i][2] );
mu_removeReco ( mu_ln, mu_m.mu_address );
}
}
else
{
if ( !(mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_dirty) )
{
if ( mu_send( mu_ProbeAck, mu_TtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_popMsg ( mu_link[mu_i][2] );
mu_removeReco ( mu_ln, mu_m.mu_address );
}
}
}
}
}
else
{
bool mu__boolexpr72;
  if (!((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Tip))) mu__boolexpr72 = FALSE ;
  else {
bool mu__quant73; 
mu__quant73 = FALSE;
{
int mu__ub74 = ((mu_Ln[mu_i].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_i].mu_child; mu_k <= mu__ub74; mu_k += 1) {
if ( ((mu_Ln[mu_i].mu_directory[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address]) == (mu_Branch)) )
  { mu__quant73 = TRUE; break; }
};
};
  mu__boolexpr72 = (mu__quant73) ; 
}
if ( mu__boolexpr72 )
{
{
int mu__ub75 = ((mu_Ln[mu_i].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_i].mu_child; mu_k <= mu__ub75; mu_k += 1) {
bool mu__boolexpr76;
  if (!((mu_k) != (mu_i))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_Ln[mu_i].mu_directory[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( mu__boolexpr76 )
{
if ( mu_send( mu_ProbeBlock, mu_toN, mu_k, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_true, (mu_k) - (mu_Ln[mu_i].mu_child) ) )
{
mu_Ln[mu_i].mu_master_pending[(mu_k) - (mu_Ln[mu_i].mu_child)][mu_m.mu_address] = mu_ProbeAckData;
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
else
{
if ( (mu_m.mu_para) == (mu_toB) )
{
mu_sendSucc = mu_false;
if ( (mu_getState( mu_ln, mu_m.mu_address )) == (mu_None) )
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_NtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
else
{
if ( (mu_getState( mu_ln, mu_m.mu_address )) == (mu_Tip) )
{
if ( mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_dirty )
{
mu_sendSucc = mu_send( mu_ProbeAckData, mu_TtoB, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_data, (int)mu_i, mu_false, 0 );
}
else
{
if ( !(mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_dirty) )
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_TtoB, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
}
if ( mu_sendSucc )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Branch;
}
}
else
{
if ( (mu_getState( mu_ln, mu_m.mu_address )) == (mu_Branch) )
{
mu_sendSucc = mu_true;
}
}
}
if ( mu_sendSucc )
{
mu_popMsg ( mu_link[mu_i][2] );
}
}
}
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
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Grant2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
  mu_1_cache_record& mu_ln = mu_Ln[mu_i].mu_cache;
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr78 = FALSE ;
  else {
bool mu__boolexpr79;
  if ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_Grant)) mu__boolexpr79 = TRUE ;
  else {
  mu__boolexpr79 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_GrantData)) ; 
}
  mu__boolexpr78 = (mu__boolexpr79) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
bool mu__boolexpr80;
  if ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toB)) mu__boolexpr80 = TRUE ;
  else {
  mu__boolexpr80 = ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr77 = (mu__boolexpr80) ; 
}
    return mu__boolexpr77;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 38 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_ln = mu_Ln[mu_i].mu_cache;
bool mu__boolexpr81;
bool mu__boolexpr82;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr82 = FALSE ;
  else {
bool mu__boolexpr83;
  if ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_Grant)) mu__boolexpr83 = TRUE ;
  else {
  mu__boolexpr83 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_GrantData)) ; 
}
  mu__boolexpr82 = (mu__boolexpr83) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
bool mu__boolexpr84;
  if ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toB)) mu__boolexpr84 = TRUE ;
  else {
  mu__boolexpr84 = ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr81 = (mu__boolexpr84) ; 
}
	      if (mu__boolexpr81) {
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
    r = what_rule - 36;
    mu_i.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_L2_node mu_i;
    mu_i.value((r % 2) + 2);
    r = r / 2;
  mu_1_cache_record& mu_ln = mu_Ln[mu_i].mu_cache;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_cacheline mu_cline("cline",48);

mu_m = mu_link[mu_i][4].mu_messages[1];
if ( (mu_m.mu_opcode) == (mu_GrantData) )
{
mu_cline.mu_data = mu_m.mu_data;
mu_cline.mu_dirty = mu_false;
mu_cline.mu_address = mu_m.mu_address;
if ( mu_updateReco( mu_ln, mu_m.mu_address, mu_cline ) )
{
if ( (mu_m.mu_para) == (mu_toB) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Branch;
}
else
{
if ( (mu_m.mu_para) == (mu_toT) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Tip;
}
}
if ( mu_send( mu_GrantAck, mu_1_trans_undefined_var, (int)mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_popMsg ( mu_link[mu_i][4] );
mu_Ln[mu_i].mu_slave_pending[mu_m.mu_address] = mu_Empty;
}
}
}
else
{
if ( (mu_m.mu_para) == (mu_toB) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Branch;
}
else
{
if ( (mu_m.mu_para) == (mu_toT) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Tip;
}
}
if ( mu_send( mu_GrantAck, mu_1_trans_undefined_var, (int)mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_popMsg ( mu_link[mu_i][4] );
mu_Ln[mu_i].mu_slave_pending[mu_m.mu_address] = mu_Empty;
}
}
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_ReleaseAck2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_i) >= (2)) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_i) <= (3)) ; 
}
    return mu__boolexpr85;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 38;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 44 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_i) >= (2)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_i) <= (3)) ; 
}
	      if (mu__boolexpr88) {
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
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
mu_Ln[mu_i].mu_slave_pending[mu_link[mu_i][4].mu_messages[1].mu_address] = mu_Empty;
mu_popMsg ( mu_link[mu_i][4] );
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_GrantAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr91;
  if (!((mu_link[mu_i][5].mu_used) > (0))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_link[mu_i][5].mu_messages[1].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr91;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 44;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 50 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr92;
  if (!((mu_link[mu_i][5].mu_used) > (0))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_link[mu_i][5].mu_messages[1].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr92) {
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
    r = what_rule - 44;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_slave_node mu_p("p",0);

bool mu__boolexpr93;
  if (!((mu_i) >= (4))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr93 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr94;
  if (!((mu_i) >= (2))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr94 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
mu_Ln[mu_p].mu_master_pending[(mu_i) - (mu_Ln[mu_p].mu_child)][mu_link[mu_i][5].mu_messages[1].mu_address] = mu_Empty;
mu_popMsg ( mu_link[mu_i][5] );
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_Release[Data], i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!((mu_link[mu_i][3].mu_used) > (0))) mu__boolexpr96 = FALSE ;
  else {
bool mu__boolexpr97;
  if ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_Release)) mu__boolexpr97 = TRUE ;
  else {
  mu__boolexpr97 = ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_ReleaseData)) ; 
}
  mu__boolexpr96 = (mu__boolexpr97) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
bool mu__boolexpr98;
  if ((mu_link[mu_i][3].mu_messages[1].mu_para) == (mu_BtoN)) mu__boolexpr98 = TRUE ;
  else {
  mu__boolexpr98 = ((mu_link[mu_i][3].mu_messages[1].mu_para) == (mu_TtoN)) ; 
}
  mu__boolexpr95 = (mu__boolexpr98) ; 
}
    return mu__boolexpr95;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 50;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 56 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_link[mu_i][3].mu_used) > (0))) mu__boolexpr100 = FALSE ;
  else {
bool mu__boolexpr101;
  if ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_Release)) mu__boolexpr101 = TRUE ;
  else {
  mu__boolexpr101 = ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_ReleaseData)) ; 
}
  mu__boolexpr100 = (mu__boolexpr101) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
bool mu__boolexpr102;
  if ((mu_link[mu_i][3].mu_messages[1].mu_para) == (mu_BtoN)) mu__boolexpr102 = TRUE ;
  else {
  mu__boolexpr102 = ((mu_link[mu_i][3].mu_messages[1].mu_para) == (mu_TtoN)) ; 
}
  mu__boolexpr99 = (mu__boolexpr102) ; 
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
    r = what_rule - 50;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_slave_node mu_p("p",48);

mu_m = mu_link[mu_i][3].mu_messages[1];
bool mu__boolexpr103;
  if (!((mu_i) >= (4))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr103 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr104;
  if (!((mu_i) >= (2))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr104 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
{
  mu_1_cache_record& mu_ln = mu_Ln[mu_p].mu_cache;
if ( mu_send( mu_ReleaseAck, mu_1_trans_undefined_var, mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_true, (mu_i) - (mu_Ln[mu_p].mu_child) ) )
{
if ( (mu_m.mu_para) == (mu_TtoN) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Tip;
}
if ( (mu_m.mu_opcode) == (mu_ReleaseData) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_data = mu_m.mu_data;
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_dirty = mu_true;
}
mu_popMsg ( mu_link[mu_i][3] );
mu_Ln[mu_p].mu_directory[(mu_i) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_None;
}
}
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_ProbeAck[Data], i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr105;
  if (!((mu_link[mu_i][3].mu_used) > (0))) mu__boolexpr105 = FALSE ;
  else {
bool mu__boolexpr106;
  if ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_ProbeAck)) mu__boolexpr106 = TRUE ;
  else {
  mu__boolexpr106 = ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_ProbeAckData)) ; 
}
  mu__boolexpr105 = (mu__boolexpr106) ; 
}
    return mu__boolexpr105;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 56;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 62 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr107;
  if (!((mu_link[mu_i][3].mu_used) > (0))) mu__boolexpr107 = FALSE ;
  else {
bool mu__boolexpr108;
  if ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_ProbeAck)) mu__boolexpr108 = TRUE ;
  else {
  mu__boolexpr108 = ((mu_link[mu_i][3].mu_messages[1].mu_opcode) == (mu_ProbeAckData)) ; 
}
  mu__boolexpr107 = (mu__boolexpr108) ; 
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
    r = what_rule - 56;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_slave_node mu_p("p",48);

mu_m = mu_link[mu_i][3].mu_messages[1];
bool mu__boolexpr109;
  if (!((mu_i) >= (4))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr109 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr110;
  if (!((mu_i) >= (2))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr110 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
{
  mu_1_cache_record& mu_ln = mu_Ln[mu_p].mu_cache;
if ( (mu_m.mu_para) == (mu_TtoN) )
{
mu_Ln[mu_p].mu_directory[(mu_i) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_None;
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Tip;
}
else
{
if ( (mu_m.mu_para) == (mu_TtoB) )
{
mu_Ln[mu_p].mu_directory[(mu_i) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_Branch;
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Tip;
}
else
{
bool mu__boolexpr111;
  if ((mu_m.mu_para) == (mu_BtoN)) mu__boolexpr111 = TRUE ;
  else {
  mu__boolexpr111 = ((mu_m.mu_para) == (mu_NtoN)) ; 
}
if ( mu__boolexpr111 )
{
mu_Ln[mu_p].mu_directory[(mu_i) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_None;
}
}
}
if ( (mu_m.mu_opcode) == (mu_ProbeAckData) )
{
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_data = mu_m.mu_data;
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_dirty = mu_true;
}
mu_popMsg ( mu_link[mu_i][3] );
mu_Ln[mu_p].mu_master_pending[(mu_i) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_Empty;
}
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive Acquire4, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr112;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr112 = FALSE ;
  else {
bool mu__boolexpr113;
  if ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) mu__boolexpr113 = TRUE ;
  else {
  mu__boolexpr113 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  mu__boolexpr112 = (mu__boolexpr113) ; 
}
    return mu__boolexpr112;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 62;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 68 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr114;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr114 = FALSE ;
  else {
bool mu__boolexpr115;
  if ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) mu__boolexpr115 = TRUE ;
  else {
  mu__boolexpr115 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  mu__boolexpr114 = (mu__boolexpr115) ; 
}
	      if (mu__boolexpr114) {
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
    r = what_rule - 62;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_slave_node mu_p("p",48);

/*** Variable declaration ***/
mu_0_boolean mu_sendSucc("sendSucc",56);

/*** Variable declaration ***/
mu_1_cacheline mu_cline("cline",64);

mu_m = mu_link[mu_i][1].mu_messages[1];
bool mu__boolexpr116;
  if (!((mu_i) >= (4))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr116 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr117;
  if (!((mu_i) >= (2))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr117 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
{
  mu_1_cache_record& mu_ln = mu_Ln[mu_p].mu_cache;
bool mu__boolexpr118;
  if (!((mu_p) == (mu_num_L3))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_getState( mu_Ln[mu_p].mu_cache, mu_m.mu_address )) == (mu_None)) ; 
}
if ( mu__boolexpr118 )
{
mu_cline.mu_address = mu_m.mu_address;
mu_cline.mu_data = mu_memdata[mu_m.mu_address];
mu_cline.mu_state = mu_Tip;
mu_cline.mu_dirty = mu_false;
if ( mu_updateReco( mu_ln, mu_m.mu_address, mu_cline ) )
{
mu_auxdata[mu_m.mu_address] = mu_memdata[mu_m.mu_address];
}
}
else
{
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!((mu_p) >= (2))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_p) <= (3)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_getState( mu_Ln[mu_p].mu_cache, mu_m.mu_address )) == (mu_None)) ; 
}
if ( mu__boolexpr119 )
{
if ( (mu_m.mu_para) == (mu_NtoT) )
{
mu_sendSucc = mu_send( mu_AcquireBlock, mu_NtoT, (int)mu_p, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_false, 0 );
}
else
{
if ( (mu_m.mu_para) == (mu_NtoB) )
{
mu_sendSucc = mu_send( mu_AcquireBlock, mu_NtoB, (int)mu_p, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_false, 0 );
}
}
if ( mu_sendSucc )
{
mu_Ln[mu_p].mu_slave_pending[mu_m.mu_address] = mu_GrantData;
}
}
else
{
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
  if (!((mu_p) >= (2))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_p) <= (3)) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
bool mu__boolexpr124;
  if ((mu_m.mu_para) == (mu_NtoT)) mu__boolexpr124 = TRUE ;
  else {
  mu__boolexpr124 = ((mu_m.mu_para) == (mu_BtoT)) ; 
}
  mu__boolexpr122 = (mu__boolexpr124) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_getState( mu_Ln[mu_p].mu_cache, mu_m.mu_address )) == (mu_Branch)) ; 
}
if ( mu__boolexpr121 )
{
mu_sendSucc = mu_send( mu_AcquireBlock, mu_BtoT, (int)mu_p, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_false, 0 );
if ( mu_sendSucc )
{
mu_Ln[mu_p].mu_slave_pending[mu_m.mu_address] = mu_Grant;
}
}
}
}
}
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_Acquire3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr125;
bool mu__boolexpr126;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
bool mu__boolexpr127;
  if ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_NtoT)) mu__boolexpr127 = TRUE ;
  else {
  mu__boolexpr127 = ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_NtoB)) ; 
}
  mu__boolexpr125 = (mu__boolexpr127) ; 
}
    return mu__boolexpr125;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 68;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 74 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr128;
bool mu__boolexpr129;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
bool mu__boolexpr130;
  if ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_NtoT)) mu__boolexpr130 = TRUE ;
  else {
  mu__boolexpr130 = ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_NtoB)) ; 
}
  mu__boolexpr128 = (mu__boolexpr130) ; 
}
	      if (mu__boolexpr128) {
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
    r = what_rule - 68;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_trans mu_pa("pa",48);

/*** Variable declaration ***/
mu_1_slave_node mu_p("p",56);

mu_m = mu_link[mu_i][1].mu_messages[1];
if ( (mu_m.mu_para) == (mu_NtoT) )
{
mu_pa = mu_toN;
}
else
{
if ( (mu_m.mu_para) == (mu_NtoB) )
{
mu_pa = mu_toB;
}
}
bool mu__boolexpr131;
  if (!((mu_i) >= (4))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr131 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr132;
  if (!((mu_i) >= (2))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr132 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
if ( (mu_getState( mu_Ln[mu_p].mu_cache, mu_m.mu_address )) == (mu_Trunk) )
{
{
int mu__ub133 = ((mu_Ln[mu_p].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_p].mu_child; mu_k <= mu__ub133; mu_k += 1) {
bool mu__boolexpr134;
  if (!((mu_k) != (mu_i))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_Ln[mu_p].mu_directory[(mu_k) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address]) == (mu_Tip)) ; 
}
if ( mu__boolexpr134 )
{
if ( mu_send( mu_ProbeBlock, mu_pa, mu_k, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_true, (mu_k) - (mu_Ln[mu_p].mu_child) ) )
{
mu_Ln[mu_p].mu_master_pending[(mu_k) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_ProbeAckData;
}
}
};
};
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_Acquire2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr136 = FALSE ;
  else {
bool mu__boolexpr137;
  if ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquirePerm)) mu__boolexpr137 = TRUE ;
  else {
  mu__boolexpr137 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  mu__boolexpr136 = (mu__boolexpr137) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
bool mu__boolexpr138;
  if ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_NtoT)) mu__boolexpr138 = TRUE ;
  else {
  mu__boolexpr138 = ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_BtoT)) ; 
}
  mu__boolexpr135 = (mu__boolexpr138) ; 
}
    return mu__boolexpr135;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 74;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 80 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr140 = FALSE ;
  else {
bool mu__boolexpr141;
  if ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquirePerm)) mu__boolexpr141 = TRUE ;
  else {
  mu__boolexpr141 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  mu__boolexpr140 = (mu__boolexpr141) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
bool mu__boolexpr142;
  if ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_NtoT)) mu__boolexpr142 = TRUE ;
  else {
  mu__boolexpr142 = ((mu_link[mu_i][1].mu_messages[1].mu_para) == (mu_BtoT)) ; 
}
  mu__boolexpr139 = (mu__boolexpr142) ; 
}
	      if (mu__boolexpr139) {
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
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_slave_node mu_p("p",48);

mu_m = mu_link[mu_i][1].mu_messages[1];
bool mu__boolexpr143;
  if (!((mu_i) >= (4))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr143 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr144;
  if (!((mu_i) >= (2))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr144 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
bool mu__boolexpr145;
  if (!((mu_getState( mu_Ln[mu_p].mu_cache, mu_m.mu_address )) == (mu_Tip))) mu__boolexpr145 = FALSE ;
  else {
bool mu__quant146; 
mu__quant146 = FALSE;
{
int mu__ub147 = ((mu_Ln[mu_p].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_p].mu_child; mu_k <= mu__ub147; mu_k += 1) {
bool mu__boolexpr148;
  if (!((mu_k) != (mu_i))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_Ln[mu_p].mu_directory[(mu_k) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( (mu__boolexpr148) )
  { mu__quant146 = TRUE; break; }
};
};
  mu__boolexpr145 = (mu__quant146) ; 
}
if ( mu__boolexpr145 )
{
{
int mu__ub149 = ((mu_Ln[mu_p].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_p].mu_child; mu_k <= mu__ub149; mu_k += 1) {
bool mu__boolexpr150;
  if (!((mu_k) != (mu_i))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_Ln[mu_p].mu_directory[(mu_k) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address]) == (mu_Branch)) ; 
}
if ( mu__boolexpr150 )
{
if ( mu_send( mu_ProbePerm, mu_toN, mu_k, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_true, (mu_k) - (mu_Ln[mu_p].mu_child) ) )
{
mu_Ln[mu_p].mu_master_pending[(mu_k) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address] = mu_ProbeAck;
}
}
};
};
}
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
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    return tsprintf("receive_Acquire1, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
bool mu__boolexpr151;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr151 = FALSE ;
  else {
bool mu__boolexpr152;
  if ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquirePerm)) mu__boolexpr152 = TRUE ;
  else {
  mu__boolexpr152 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  mu__boolexpr151 = (mu__boolexpr152) ; 
}
    return mu__boolexpr151;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 80;
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    while (what_rule < 86 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr153;
  if (!((mu_link[mu_i][1].mu_used) > (0))) mu__boolexpr153 = FALSE ;
  else {
bool mu__boolexpr154;
  if ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquirePerm)) mu__boolexpr154 = TRUE ;
  else {
  mu__boolexpr154 = ((mu_link[mu_i][1].mu_messages[1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  mu__boolexpr153 = (mu__boolexpr154) ; 
}
	      if (mu__boolexpr153) {
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
    r = what_rule - 80;
    mu_i.value((r % 6) + 2);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_master_node mu_i;
    mu_i.value((r % 6) + 2);
    r = r / 6;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_slave_node mu_p("p",48);

/*** Variable declaration ***/
mu_1_child_range mu_child_index("child_index",56);

mu_m = mu_link[mu_i][1].mu_messages[1];
bool mu__boolexpr155;
  if (!((mu_i) >= (4))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_i) <= (7)) ; 
}
if ( mu__boolexpr155 )
{
mu_p = mu_L1[mu_i].mu_paren;
}
else
{
bool mu__boolexpr156;
  if (!((mu_i) >= (2))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_i) <= (3)) ; 
}
if ( mu__boolexpr156 )
{
mu_p = mu_Ln[mu_i].mu_paren;
}
}
mu_child_index = (mu_i) - (mu_Ln[mu_p].mu_child);
{
  mu_1_cache_record& mu_ln = mu_Ln[mu_p].mu_cache;
bool mu__boolexpr157;
  if (!((mu_m.mu_para) == (mu_NtoB))) mu__boolexpr157 = FALSE ;
  else {
bool mu__boolexpr158;
  if ((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Branch)) mu__boolexpr158 = TRUE ;
  else {
  mu__boolexpr158 = ((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Tip)) ; 
}
  mu__boolexpr157 = (mu__boolexpr158) ; 
}
if ( mu__boolexpr157 )
{
if ( mu_send( mu_GrantData, mu_toB, mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_data, (int)mu_p, mu_true, mu_child_index ) )
{
mu_Ln[mu_p].mu_directory[mu_child_index][mu_m.mu_address] = mu_Branch;
mu_popMsg ( mu_link[mu_i][1] );
mu_Ln[mu_p].mu_master_pending[mu_child_index][mu_m.mu_address] = mu_GrantAck;
}
}
else
{
bool mu__boolexpr159;
  if (!((mu_getState( mu_ln, mu_m.mu_address )) == (mu_Tip))) mu__boolexpr159 = FALSE ;
  else {
bool mu__quant160; 
mu__quant160 = TRUE;
{
int mu__ub161 = ((mu_Ln[mu_p].mu_child) + (mu_child_num)) - (1);
for (int mu_k = mu_Ln[mu_p].mu_child; mu_k <= mu__ub161; mu_k += 1) {
bool mu__boolexpr162;
  if (!((mu_k) != (mu_i))) mu__boolexpr162 = TRUE ;
  else {
  mu__boolexpr162 = ((mu_Ln[mu_p].mu_directory[(mu_k) - (mu_Ln[mu_p].mu_child)][mu_m.mu_address]) == (mu_None)) ; 
}
if ( !(mu__boolexpr162) )
  { mu__quant160 = FALSE; break; }
};
};
  mu__boolexpr159 = (mu__quant160) ; 
}
if ( mu__boolexpr159 )
{
if ( (mu_Ln[mu_p].mu_directory[mu_child_index][mu_m.mu_address]) == (mu_None) )
{
if ( mu_send( mu_GrantData, mu_toT, mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_data, (int)mu_p, mu_true, mu_child_index ) )
{
mu_Ln[mu_p].mu_directory[mu_child_index][mu_m.mu_address] = mu_Tip;
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Trunk;
mu_popMsg ( mu_link[mu_i][1] );
mu_Ln[mu_p].mu_master_pending[mu_child_index][mu_m.mu_address] = mu_GrantAck;
}
}
else
{
if ( (mu_Ln[mu_p].mu_directory[mu_child_index][mu_m.mu_address]) == (mu_Branch) )
{
if ( mu_send( mu_Grant, mu_toT, mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_p, mu_true, mu_child_index ) )
{
mu_Ln[mu_p].mu_directory[mu_child_index][mu_m.mu_address] = mu_Tip;
mu_ln.mu_line[mu_ln.mu_valid[mu_m.mu_address]].mu_state = mu_Trunk;
mu_popMsg ( mu_link[mu_i][1] );
mu_Ln[mu_p].mu_master_pending[mu_child_index][mu_m.mu_address] = mu_GrantAck;
}
}
}
}
}
}
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
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("receive_ReleaseAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr163;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr163;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 86;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 90 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr164;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr164) {
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
    r = what_rule - 86;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_L1[mu_i].mu_pending[mu_link[mu_i][4].mu_messages[1].mu_address] = mu_Empty;
mu_popMsg ( mu_link[mu_i][4] );
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
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!((mu_link[mu_i][2].mu_used) > (0))) mu__boolexpr166 = FALSE ;
  else {
bool mu__boolexpr167;
  if ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbePerm)) mu__boolexpr167 = TRUE ;
  else {
  mu__boolexpr167 = ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr166 = (mu__boolexpr167) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
bool mu__boolexpr168;
  if ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toN)) mu__boolexpr168 = TRUE ;
  else {
  mu__boolexpr168 = ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr165 = (mu__boolexpr168) ; 
}
    return mu__boolexpr165;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 90;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 94 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr169;
bool mu__boolexpr170;
  if (!((mu_link[mu_i][2].mu_used) > (0))) mu__boolexpr170 = FALSE ;
  else {
bool mu__boolexpr171;
  if ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbePerm)) mu__boolexpr171 = TRUE ;
  else {
  mu__boolexpr171 = ((mu_link[mu_i][2].mu_messages[1].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr170 = (mu__boolexpr171) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
bool mu__boolexpr172;
  if ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toN)) mu__boolexpr172 = TRUE ;
  else {
  mu__boolexpr172 = ((mu_link[mu_i][2].mu_messages[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr169 = (mu__boolexpr172) ; 
}
	      if (mu__boolexpr169) {
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
    r = what_rule - 90;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_0_boolean mu_sendSucc("sendSucc",48);

{
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
mu_m = mu_link[mu_i][2].mu_messages[1];
if ( (mu_m.mu_para) == (mu_toN) )
{
if ( (mu_getState( mu_l1, mu_m.mu_address )) == (mu_None) )
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_NtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
else
{
if ( (mu_getState( mu_l1, mu_m.mu_address )) == (mu_Branch) )
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_BtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
else
{
if ( (mu_getState( mu_l1, mu_m.mu_address )) == (mu_Tip) )
{
if ( (mu_m.mu_opcode) == (mu_ProbeBlock) )
{
if ( mu_l1.mu_line[mu_l1.mu_valid[mu_m.mu_address]].mu_dirty )
{
mu_sendSucc = mu_send( mu_ProbeAckData, mu_TtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_l1.mu_line[mu_l1.mu_valid[mu_m.mu_address]].mu_data, (int)mu_i, mu_false, 0 );
}
else
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_TtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
}
}
}
}
if ( mu_sendSucc )
{
mu_popMsg ( mu_link[mu_i][2] );
mu_removeReco ( mu_l1, mu_m.mu_address );
}
}
else
{
if ( (mu_m.mu_para) == (mu_toB) )
{
if ( (mu_getState( mu_l1, mu_m.mu_address )) == (mu_None) )
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_NtoN, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
else
{
if ( (mu_getState( mu_l1, mu_m.mu_address )) == (mu_Tip) )
{
if ( (mu_m.mu_opcode) == (mu_ProbeBlock) )
{
if ( mu_l1.mu_line[mu_l1.mu_valid[mu_m.mu_address]].mu_dirty )
{
mu_sendSucc = mu_send( mu_ProbeAckData, mu_TtoB, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_l1.mu_line[mu_l1.mu_valid[mu_m.mu_address]].mu_data, (int)mu_i, mu_false, 0 );
}
else
{
mu_sendSucc = mu_send( mu_ProbeAck, mu_TtoB, mu_m.mu_src, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
if ( mu_sendSucc )
{
mu_l1.mu_line[mu_l1.mu_valid[mu_m.mu_address]].mu_state = mu_Branch;
}
}
}
else
{
if ( (mu_getState( mu_l1, mu_m.mu_address )) == (mu_Branch) )
{
mu_sendSucc = mu_true;
}
}
}
if ( mu_sendSucc )
{
mu_popMsg ( mu_link[mu_i][2] );
}
}
}
}
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
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Grant, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr173;
bool mu__boolexpr174;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr174 = FALSE ;
  else {
bool mu__boolexpr175;
  if ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_Grant)) mu__boolexpr175 = TRUE ;
  else {
  mu__boolexpr175 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_GrantData)) ; 
}
  mu__boolexpr174 = (mu__boolexpr175) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
bool mu__boolexpr176;
  if ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toB)) mu__boolexpr176 = TRUE ;
  else {
  mu__boolexpr176 = ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr173 = (mu__boolexpr176) ; 
}
    return mu__boolexpr173;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 94;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 98 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr177;
bool mu__boolexpr178;
  if (!((mu_link[mu_i][4].mu_used) > (0))) mu__boolexpr178 = FALSE ;
  else {
bool mu__boolexpr179;
  if ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_Grant)) mu__boolexpr179 = TRUE ;
  else {
  mu__boolexpr179 = ((mu_link[mu_i][4].mu_messages[1].mu_opcode) == (mu_GrantData)) ; 
}
  mu__boolexpr178 = (mu__boolexpr179) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
bool mu__boolexpr180;
  if ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toB)) mu__boolexpr180 = TRUE ;
  else {
  mu__boolexpr180 = ((mu_link[mu_i][4].mu_messages[1].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr177 = (mu__boolexpr180) ; 
}
	      if (mu__boolexpr177) {
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
    r = what_rule - 94;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
/*** Variable declaration ***/
mu_1_msg_type mu_m("m",0);

/*** Variable declaration ***/
mu_1_cacheline mu_cline("cline",48);

mu_m = mu_link[mu_i][4].mu_messages[1];
mu_cline.mu_dirty = mu_false;
mu_cline.mu_address = mu_m.mu_address;
if ( (mu_L1[mu_i].mu_cache.mu_valid[mu_m.mu_address]) > (0) )
{
mu_cline = mu_L1[mu_i].mu_cache.mu_line[mu_L1[mu_i].mu_cache.mu_valid[mu_m.mu_address]];
}
if ( (mu_m.mu_opcode) == (mu_GrantData) )
{
mu_cline.mu_data = mu_m.mu_data;
}
if ( (mu_m.mu_para) == (mu_toB) )
{
mu_cline.mu_state = mu_Branch;
}
else
{
if ( (mu_m.mu_para) == (mu_toT) )
{
mu_cline.mu_state = mu_Tip;
}
}
bool mu__boolexpr181;
  if (!(mu_updateReco( mu_L1[mu_i].mu_cache, mu_m.mu_address, mu_cline ))) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_send( mu_GrantAck, mu_1_trans_undefined_var, (int)mu_i, mu_1_node_undefined_var, mu_m.mu_address, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 )) ; 
}
if ( mu__boolexpr181 )
{
mu_popMsg ( mu_link[mu_i][4] );
mu_L1[mu_i].mu_pending[mu_m.mu_address] = mu_Empty;
}
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
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
bool mu__boolexpr182;
  if ((mu_getState( mu_l1, mu_j )) == (mu_Branch)) mu__boolexpr182 = TRUE ;
  else {
  mu__boolexpr182 = ((mu_getState( mu_l1, mu_j )) == (mu_Tip)) ; 
}
    return mu__boolexpr182;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 98;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 106 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
bool mu__boolexpr183;
  if ((mu_getState( mu_l1, mu_j )) == (mu_Branch)) mu__boolexpr183 = TRUE ;
  else {
  mu__boolexpr183 = ((mu_getState( mu_l1, mu_j )) == (mu_Tip)) ; 
}
	      if (mu__boolexpr183) {
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
    r = what_rule - 98;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
/*** Variable declaration ***/
mu_0_boolean mu_sendSucc("sendSucc",0);

if ( (mu_getState( mu_l1, mu_j )) == (mu_Branch) )
{
mu_sendSucc = mu_send( mu_Release, mu_BtoN, (int)mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
else
{
if ( (mu_getState( mu_l1, mu_j )) == (mu_Tip) )
{
if ( !(mu_l1.mu_line[mu_l1.mu_valid[mu_j]].mu_dirty) )
{
mu_sendSucc = mu_send( mu_Release, mu_TtoN, (int)mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 );
}
else
{
mu_sendSucc = mu_send( mu_ReleaseData, mu_TtoN, (int)mu_i, mu_1_node_undefined_var, mu_j, mu_l1.mu_line[mu_l1.mu_valid[mu_j]].mu_data, (int)mu_i, mu_false, 0 );
mu_l1.mu_line[mu_l1.mu_valid[mu_j]].mu_dirty = mu_false;
}
}
}
if ( mu_sendSucc )
{
mu_removeReco ( mu_l1, mu_j );
mu_L1[mu_i].mu_pending[mu_j] = mu_ReleaseAck;
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
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Acquire_toT, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
bool mu__boolexpr184;
  if ((mu_getState( mu_l1, mu_j )) == (mu_None)) mu__boolexpr184 = TRUE ;
  else {
  mu__boolexpr184 = ((mu_getState( mu_l1, mu_j )) == (mu_Branch)) ; 
}
    return mu__boolexpr184;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 106;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 114 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
bool mu__boolexpr185;
  if ((mu_getState( mu_l1, mu_j )) == (mu_None)) mu__boolexpr185 = TRUE ;
  else {
  mu__boolexpr185 = ((mu_getState( mu_l1, mu_j )) == (mu_Branch)) ; 
}
	      if (mu__boolexpr185) {
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
    r = what_rule - 106;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
if ( (mu_getState( mu_l1, mu_j )) == (mu_None) )
{
if ( mu_send( mu_AcquireBlock, mu_NtoT, (int)mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_L1[mu_i].mu_pending[mu_j] = mu_GrantData;
}
}
else
{
if ( (mu_getState( mu_l1, mu_j )) == (mu_Branch) )
{
if ( mu_send( mu_AcquirePerm, mu_BtoT, (int)mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_L1[mu_i].mu_pending[mu_j] = mu_Grant;
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
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Acquire_toB, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
    return (mu_getState( mu_l1, mu_j )) == (mu_None);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 114;
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 122 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
	      if ((mu_getState( mu_l1, mu_j )) == (mu_None)) {
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
    r = what_rule - 114;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_L1_node mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  mu_1_cache_record& mu_l1 = mu_L1[mu_i].mu_cache;
if ( mu_send( mu_AcquireBlock, mu_NtoB, (int)mu_i, mu_1_node_undefined_var, mu_j, mu_1_data_type_undefined_var, (int)mu_i, mu_false, 0 ) )
{
mu_L1[mu_i].mu_pending[mu_j] = mu_GrantData;
}
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<16)
    { R0.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<22)
    { R1.NextRule(what_rule);
      if (what_rule<22) return; }
  if (what_rule>=22 && what_rule<28)
    { R2.NextRule(what_rule);
      if (what_rule<28) return; }
  if (what_rule>=28 && what_rule<34)
    { R3.NextRule(what_rule);
      if (what_rule<34) return; }
  if (what_rule>=34 && what_rule<36)
    { R4.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<38)
    { R5.NextRule(what_rule);
      if (what_rule<38) return; }
  if (what_rule>=38 && what_rule<44)
    { R6.NextRule(what_rule);
      if (what_rule<44) return; }
  if (what_rule>=44 && what_rule<50)
    { R7.NextRule(what_rule);
      if (what_rule<50) return; }
  if (what_rule>=50 && what_rule<56)
    { R8.NextRule(what_rule);
      if (what_rule<56) return; }
  if (what_rule>=56 && what_rule<62)
    { R9.NextRule(what_rule);
      if (what_rule<62) return; }
  if (what_rule>=62 && what_rule<68)
    { R10.NextRule(what_rule);
      if (what_rule<68) return; }
  if (what_rule>=68 && what_rule<74)
    { R11.NextRule(what_rule);
      if (what_rule<74) return; }
  if (what_rule>=74 && what_rule<80)
    { R12.NextRule(what_rule);
      if (what_rule<80) return; }
  if (what_rule>=80 && what_rule<86)
    { R13.NextRule(what_rule);
      if (what_rule<86) return; }
  if (what_rule>=86 && what_rule<90)
    { R14.NextRule(what_rule);
      if (what_rule<90) return; }
  if (what_rule>=90 && what_rule<94)
    { R15.NextRule(what_rule);
      if (what_rule<94) return; }
  if (what_rule>=94 && what_rule<98)
    { R16.NextRule(what_rule);
      if (what_rule<98) return; }
  if (what_rule>=98 && what_rule<106)
    { R17.NextRule(what_rule);
      if (what_rule<106) return; }
  if (what_rule>=106 && what_rule<114)
    { R18.NextRule(what_rule);
      if (what_rule<114) return; }
  if (what_rule>=114 && what_rule<122)
    { R19.NextRule(what_rule);
      if (what_rule<122) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=15) return R0.Condition(r-0);
  if (r>=16 && r<=21) return R1.Condition(r-16);
  if (r>=22 && r<=27) return R2.Condition(r-22);
  if (r>=28 && r<=33) return R3.Condition(r-28);
  if (r>=34 && r<=35) return R4.Condition(r-34);
  if (r>=36 && r<=37) return R5.Condition(r-36);
  if (r>=38 && r<=43) return R6.Condition(r-38);
  if (r>=44 && r<=49) return R7.Condition(r-44);
  if (r>=50 && r<=55) return R8.Condition(r-50);
  if (r>=56 && r<=61) return R9.Condition(r-56);
  if (r>=62 && r<=67) return R10.Condition(r-62);
  if (r>=68 && r<=73) return R11.Condition(r-68);
  if (r>=74 && r<=79) return R12.Condition(r-74);
  if (r>=80 && r<=85) return R13.Condition(r-80);
  if (r>=86 && r<=89) return R14.Condition(r-86);
  if (r>=90 && r<=93) return R15.Condition(r-90);
  if (r>=94 && r<=97) return R16.Condition(r-94);
  if (r>=98 && r<=105) return R17.Condition(r-98);
  if (r>=106 && r<=113) return R18.Condition(r-106);
  if (r>=114 && r<=121) return R19.Condition(r-114);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=15) { R0.Code(r-0); return; } 
  if (r>=16 && r<=21) { R1.Code(r-16); return; } 
  if (r>=22 && r<=27) { R2.Code(r-22); return; } 
  if (r>=28 && r<=33) { R3.Code(r-28); return; } 
  if (r>=34 && r<=35) { R4.Code(r-34); return; } 
  if (r>=36 && r<=37) { R5.Code(r-36); return; } 
  if (r>=38 && r<=43) { R6.Code(r-38); return; } 
  if (r>=44 && r<=49) { R7.Code(r-44); return; } 
  if (r>=50 && r<=55) { R8.Code(r-50); return; } 
  if (r>=56 && r<=61) { R9.Code(r-56); return; } 
  if (r>=62 && r<=67) { R10.Code(r-62); return; } 
  if (r>=68 && r<=73) { R11.Code(r-68); return; } 
  if (r>=74 && r<=79) { R12.Code(r-74); return; } 
  if (r>=80 && r<=85) { R13.Code(r-80); return; } 
  if (r>=86 && r<=89) { R14.Code(r-86); return; } 
  if (r>=90 && r<=93) { R15.Code(r-90); return; } 
  if (r>=94 && r<=97) { R16.Code(r-94); return; } 
  if (r>=98 && r<=105) { R17.Code(r-98); return; } 
  if (r>=106 && r<=113) { R18.Code(r-106); return; } 
  if (r>=114 && r<=121) { R19.Code(r-114); return; } 
}
int Priority(unsigned short r)
{
  if (r<=15) { return R0.Priority(); } 
  if (r>=16 && r<=21) { return R1.Priority(); } 
  if (r>=22 && r<=27) { return R2.Priority(); } 
  if (r>=28 && r<=33) { return R3.Priority(); } 
  if (r>=34 && r<=35) { return R4.Priority(); } 
  if (r>=36 && r<=37) { return R5.Priority(); } 
  if (r>=38 && r<=43) { return R6.Priority(); } 
  if (r>=44 && r<=49) { return R7.Priority(); } 
  if (r>=50 && r<=55) { return R8.Priority(); } 
  if (r>=56 && r<=61) { return R9.Priority(); } 
  if (r>=62 && r<=67) { return R10.Priority(); } 
  if (r>=68 && r<=73) { return R11.Priority(); } 
  if (r>=74 && r<=79) { return R12.Priority(); } 
  if (r>=80 && r<=85) { return R13.Priority(); } 
  if (r>=86 && r<=89) { return R14.Priority(); } 
  if (r>=90 && r<=93) { return R15.Priority(); } 
  if (r>=94 && r<=97) { return R16.Priority(); } 
  if (r>=98 && r<=105) { return R17.Priority(); } 
  if (r>=106 && r<=113) { return R18.Priority(); } 
  if (r>=114 && r<=121) { return R19.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=15) return R0.Name(r-0);
  if (r>=16 && r<=21) return R1.Name(r-16);
  if (r>=22 && r<=27) return R2.Name(r-22);
  if (r>=28 && r<=33) return R3.Name(r-28);
  if (r>=34 && r<=35) return R4.Name(r-34);
  if (r>=36 && r<=37) return R5.Name(r-36);
  if (r>=38 && r<=43) return R6.Name(r-38);
  if (r>=44 && r<=49) return R7.Name(r-44);
  if (r>=50 && r<=55) return R8.Name(r-50);
  if (r>=56 && r<=61) return R9.Name(r-56);
  if (r>=62 && r<=67) return R10.Name(r-62);
  if (r>=68 && r<=73) return R11.Name(r-68);
  if (r>=74 && r<=79) return R12.Name(r-74);
  if (r>=80 && r<=85) return R13.Name(r-80);
  if (r>=86 && r<=89) return R14.Name(r-86);
  if (r>=90 && r<=93) return R15.Name(r-90);
  if (r>=94 && r<=97) return R16.Name(r-94);
  if (r>=98 && r<=105) return R17.Name(r-98);
  if (r>=106 && r<=113) return R18.Name(r-106);
  if (r>=114 && r<=121) return R19.Name(r-114);
  return NULL;
}
};
const unsigned numrules = 122;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 122


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
for(int mu_i = 4; mu_i <= 7; mu_i++) {
mu_L1[mu_i].mu_paren = (mu_i) / (2);
mu_L1[mu_i].mu_cache.undefine();
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_L1[mu_i].mu_cache.mu_valid[mu_j] = 0;
mu_L1[mu_i].mu_cache.mu_used = 0;
mu_L1[mu_i].mu_pending[mu_j] = mu_Empty;
};
};
{
for(int mu_l = 1; mu_l <= 5; mu_l++) {
mu_link[mu_i][mu_l].undefine();
mu_link[mu_i][mu_l].mu_used = 0;
};
};
};
};
{
for(int mu_i = 2; mu_i <= 3; mu_i++) {
mu_Ln[mu_i].mu_child = (mu_i) * (2);
mu_Ln[mu_i].mu_paren = 1;
mu_Ln[mu_i].mu_cache.undefine();
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Ln[mu_i].mu_cache.mu_valid[mu_j] = 0;
mu_Ln[mu_i].mu_cache.mu_used = 0;
mu_Ln[mu_i].mu_slave_pending[mu_j] = mu_Empty;
{
for(int mu_k = 0; mu_k <= 1; mu_k++) {
mu_Ln[mu_i].mu_directory[mu_k][mu_j] = mu_None;
mu_Ln[mu_i].mu_master_pending[mu_k][mu_j] = mu_Empty;
};
};
};
};
{
for(int mu_l = 1; mu_l <= 5; mu_l++) {
mu_link[mu_i][mu_l].undefine();
mu_link[mu_i][mu_l].mu_used = 0;
};
};
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_Ln[mu_i].mu_child = (mu_i) + (1);
mu_Ln[mu_i].mu_paren = mu_i;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Ln[mu_i].mu_cache.mu_valid[mu_j] = 0;
mu_Ln[mu_i].mu_cache.mu_used = 0;
mu_Ln[mu_i].mu_slave_pending[mu_j] = mu_Empty;
{
for(int mu_k = 0; mu_k <= 1; mu_k++) {
mu_Ln[mu_i].mu_directory[mu_k][mu_j] = mu_None;
mu_Ln[mu_i].mu_master_pending[mu_k][mu_j] = mu_Empty;
};
};
};
};
};
};
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
for(int mu_d = 1; mu_d <= 2; mu_d++) {
mu_memdata[mu_j] = mu_d;
mu_auxdata[mu_j] = mu_d;
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
int mu__invariant_186() // Invariant "test_reachable_state_38"
{
bool mu__quant187; 
mu__quant187 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr188)) )
  { mu__quant187 = FALSE; break; }
};
};
return mu__quant187;
};

bool mu__condition_194() // Condition for Rule "test_reachable_state_38"
{
  return mu__invariant_186( );
}

/**** end rule declaration ****/

int mu__invariant_195() // Invariant "test_reachable_state_37"
{
bool mu__quant196; 
mu__quant196 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr197)) )
  { mu__quant196 = FALSE; break; }
};
};
return mu__quant196;
};

bool mu__condition_203() // Condition for Rule "test_reachable_state_37"
{
  return mu__invariant_195( );
}

/**** end rule declaration ****/

int mu__invariant_204() // Invariant "test_reachable_state_36"
{
bool mu__quant205; 
mu__quant205 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr206)) )
  { mu__quant205 = FALSE; break; }
};
};
return mu__quant205;
};

bool mu__condition_212() // Condition for Rule "test_reachable_state_36"
{
  return mu__invariant_204( );
}

/**** end rule declaration ****/

int mu__invariant_213() // Invariant "test_reachable_state_35"
{
bool mu__quant214; 
mu__quant214 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr215)) )
  { mu__quant214 = FALSE; break; }
};
};
return mu__quant214;
};

bool mu__condition_221() // Condition for Rule "test_reachable_state_35"
{
  return mu__invariant_213( );
}

/**** end rule declaration ****/

int mu__invariant_222() // Invariant "test_reachable_state_34"
{
bool mu__quant223; 
mu__quant223 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr224)) )
  { mu__quant223 = FALSE; break; }
};
};
return mu__quant223;
};

bool mu__condition_230() // Condition for Rule "test_reachable_state_34"
{
  return mu__invariant_222( );
}

/**** end rule declaration ****/

int mu__invariant_231() // Invariant "test_reachable_state_33"
{
bool mu__quant232; 
mu__quant232 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr233)) )
  { mu__quant232 = FALSE; break; }
};
};
return mu__quant232;
};

bool mu__condition_239() // Condition for Rule "test_reachable_state_33"
{
  return mu__invariant_231( );
}

/**** end rule declaration ****/

int mu__invariant_240() // Invariant "test_reachable_state_32"
{
bool mu__quant241; 
mu__quant241 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr242)) )
  { mu__quant241 = FALSE; break; }
};
};
return mu__quant241;
};

bool mu__condition_248() // Condition for Rule "test_reachable_state_32"
{
  return mu__invariant_240( );
}

/**** end rule declaration ****/

int mu__invariant_249() // Invariant "test_reachable_state_31"
{
bool mu__quant250; 
mu__quant250 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr251)) )
  { mu__quant250 = FALSE; break; }
};
};
return mu__quant250;
};

bool mu__condition_257() // Condition for Rule "test_reachable_state_31"
{
  return mu__invariant_249( );
}

/**** end rule declaration ****/

int mu__invariant_258() // Invariant "test_reachable_state_30"
{
bool mu__quant259; 
mu__quant259 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr260)) )
  { mu__quant259 = FALSE; break; }
};
};
return mu__quant259;
};

bool mu__condition_266() // Condition for Rule "test_reachable_state_30"
{
  return mu__invariant_258( );
}

/**** end rule declaration ****/

int mu__invariant_267() // Invariant "test_reachable_state_29"
{
bool mu__quant268; 
mu__quant268 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr269)) )
  { mu__quant268 = FALSE; break; }
};
};
return mu__quant268;
};

bool mu__condition_275() // Condition for Rule "test_reachable_state_29"
{
  return mu__invariant_267( );
}

/**** end rule declaration ****/

int mu__invariant_276() // Invariant "test_reachable_state_28"
{
bool mu__quant277; 
mu__quant277 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
bool mu__boolexpr283;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr278)) )
  { mu__quant277 = FALSE; break; }
};
};
return mu__quant277;
};

bool mu__condition_284() // Condition for Rule "test_reachable_state_28"
{
  return mu__invariant_276( );
}

/**** end rule declaration ****/

int mu__invariant_285() // Invariant "test_reachable_state_27"
{
bool mu__quant286; 
mu__quant286 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr287)) )
  { mu__quant286 = FALSE; break; }
};
};
return mu__quant286;
};

bool mu__condition_293() // Condition for Rule "test_reachable_state_27"
{
  return mu__invariant_285( );
}

/**** end rule declaration ****/

int mu__invariant_294() // Invariant "test_reachable_state_26"
{
bool mu__quant295; 
mu__quant295 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
bool mu__boolexpr301;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr296)) )
  { mu__quant295 = FALSE; break; }
};
};
return mu__quant295;
};

bool mu__condition_302() // Condition for Rule "test_reachable_state_26"
{
  return mu__invariant_294( );
}

/**** end rule declaration ****/

int mu__invariant_303() // Invariant "test_reachable_state_25"
{
bool mu__quant304; 
mu__quant304 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr305)) )
  { mu__quant304 = FALSE; break; }
};
};
return mu__quant304;
};

bool mu__condition_311() // Condition for Rule "test_reachable_state_25"
{
  return mu__invariant_303( );
}

/**** end rule declaration ****/

int mu__invariant_312() // Invariant "test_reachable_state_24"
{
bool mu__quant313; 
mu__quant313 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr314)) )
  { mu__quant313 = FALSE; break; }
};
};
return mu__quant313;
};

bool mu__condition_320() // Condition for Rule "test_reachable_state_24"
{
  return mu__invariant_312( );
}

/**** end rule declaration ****/

int mu__invariant_321() // Invariant "test_reachable_state_23"
{
bool mu__quant322; 
mu__quant322 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
bool mu__boolexpr328;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr323)) )
  { mu__quant322 = FALSE; break; }
};
};
return mu__quant322;
};

bool mu__condition_329() // Condition for Rule "test_reachable_state_23"
{
  return mu__invariant_321( );
}

/**** end rule declaration ****/

int mu__invariant_330() // Invariant "test_reachable_state_22"
{
bool mu__quant331; 
mu__quant331 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr332)) )
  { mu__quant331 = FALSE; break; }
};
};
return mu__quant331;
};

bool mu__condition_338() // Condition for Rule "test_reachable_state_22"
{
  return mu__invariant_330( );
}

/**** end rule declaration ****/

int mu__invariant_339() // Invariant "test_reachable_state_21"
{
bool mu__quant340; 
mu__quant340 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr341)) )
  { mu__quant340 = FALSE; break; }
};
};
return mu__quant340;
};

bool mu__condition_347() // Condition for Rule "test_reachable_state_21"
{
  return mu__invariant_339( );
}

/**** end rule declaration ****/

int mu__invariant_348() // Invariant "test_reachable_state_20"
{
bool mu__quant349; 
mu__quant349 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
bool mu__boolexpr355;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr350)) )
  { mu__quant349 = FALSE; break; }
};
};
return mu__quant349;
};

bool mu__condition_356() // Condition for Rule "test_reachable_state_20"
{
  return mu__invariant_348( );
}

/**** end rule declaration ****/

int mu__invariant_357() // Invariant "test_reachable_state_19"
{
bool mu__quant358; 
mu__quant358 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
bool mu__boolexpr364;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_getCacheState( 2, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr359)) )
  { mu__quant358 = FALSE; break; }
};
};
return mu__quant358;
};

bool mu__condition_365() // Condition for Rule "test_reachable_state_19"
{
  return mu__invariant_357( );
}

/**** end rule declaration ****/

int mu__invariant_366() // Invariant "test_reachable_state_18"
{
bool mu__quant367; 
mu__quant367 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
bool mu__boolexpr373;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr368)) )
  { mu__quant367 = FALSE; break; }
};
};
return mu__quant367;
};

bool mu__condition_374() // Condition for Rule "test_reachable_state_18"
{
  return mu__invariant_366( );
}

/**** end rule declaration ****/

int mu__invariant_375() // Invariant "test_reachable_state_17"
{
bool mu__quant376; 
mu__quant376 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr377)) )
  { mu__quant376 = FALSE; break; }
};
};
return mu__quant376;
};

bool mu__condition_383() // Condition for Rule "test_reachable_state_17"
{
  return mu__invariant_375( );
}

/**** end rule declaration ****/

int mu__invariant_384() // Invariant "test_reachable_state_16"
{
bool mu__quant385; 
mu__quant385 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr386;
bool mu__boolexpr387;
bool mu__boolexpr388;
bool mu__boolexpr389;
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr388)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr386)) )
  { mu__quant385 = FALSE; break; }
};
};
return mu__quant385;
};

bool mu__condition_392() // Condition for Rule "test_reachable_state_16"
{
  return mu__invariant_384( );
}

/**** end rule declaration ****/

int mu__invariant_393() // Invariant "test_reachable_state_15"
{
bool mu__quant394; 
mu__quant394 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_getCacheState( 3, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr395)) )
  { mu__quant394 = FALSE; break; }
};
};
return mu__quant394;
};

bool mu__condition_401() // Condition for Rule "test_reachable_state_15"
{
  return mu__invariant_393( );
}

/**** end rule declaration ****/

int mu__invariant_402() // Invariant "test_reachable_state_14"
{
bool mu__quant403; 
mu__quant403 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
bool mu__boolexpr408;
bool mu__boolexpr409;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Tip))) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr404)) )
  { mu__quant403 = FALSE; break; }
};
};
return mu__quant403;
};

bool mu__condition_410() // Condition for Rule "test_reachable_state_14"
{
  return mu__invariant_402( );
}

/**** end rule declaration ****/

int mu__invariant_411() // Invariant "test_reachable_state_13"
{
bool mu__quant412; 
mu__quant412 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr413;
bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_getCacheState( 2, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr414)) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr413)) )
  { mu__quant412 = FALSE; break; }
};
};
return mu__quant412;
};

bool mu__condition_419() // Condition for Rule "test_reachable_state_13"
{
  return mu__invariant_411( );
}

/**** end rule declaration ****/

int mu__invariant_420() // Invariant "test_reachable_state_12"
{
bool mu__quant421; 
mu__quant421 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr422;
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_getCacheState( 2, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_getCacheState( 4, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr422)) )
  { mu__quant421 = FALSE; break; }
};
};
return mu__quant421;
};

bool mu__condition_428() // Condition for Rule "test_reachable_state_12"
{
  return mu__invariant_420( );
}

/**** end rule declaration ****/

int mu__invariant_429() // Invariant "test_reachable_state_11"
{
bool mu__quant430; 
mu__quant430 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr431;
bool mu__boolexpr432;
bool mu__boolexpr433;
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_getCacheState( 2, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_getCacheState( 5, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr431)) )
  { mu__quant430 = FALSE; break; }
};
};
return mu__quant430;
};

bool mu__condition_437() // Condition for Rule "test_reachable_state_11"
{
  return mu__invariant_429( );
}

/**** end rule declaration ****/

int mu__invariant_438() // Invariant "test_reachable_state_10"
{
bool mu__quant439; 
mu__quant439 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = ((mu_getCacheState( 2, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr440)) )
  { mu__quant439 = FALSE; break; }
};
};
return mu__quant439;
};

bool mu__condition_446() // Condition for Rule "test_reachable_state_10"
{
  return mu__invariant_438( );
}

/**** end rule declaration ****/

int mu__invariant_447() // Invariant "test_reachable_state_9"
{
bool mu__quant448; 
mu__quant448 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
bool mu__boolexpr454;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_getCacheState( 2, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_getCacheState( 4, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr449)) )
  { mu__quant448 = FALSE; break; }
};
};
return mu__quant448;
};

bool mu__condition_455() // Condition for Rule "test_reachable_state_9"
{
  return mu__invariant_447( );
}

/**** end rule declaration ****/

int mu__invariant_456() // Invariant "test_reachable_state_8"
{
bool mu__quant457; 
mu__quant457 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr458;
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
bool mu__boolexpr463;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = ((mu_getCacheState( 2, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr463)) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_getCacheState( 5, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr458)) )
  { mu__quant457 = FALSE; break; }
};
};
return mu__quant457;
};

bool mu__condition_464() // Condition for Rule "test_reachable_state_8"
{
  return mu__invariant_456( );
}

/**** end rule declaration ****/

int mu__invariant_465() // Invariant "test_reachable_state_7"
{
bool mu__quant466; 
mu__quant466 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
bool mu__boolexpr470;
bool mu__boolexpr471;
bool mu__boolexpr472;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = ((mu_getCacheState( 3, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr467)) )
  { mu__quant466 = FALSE; break; }
};
};
return mu__quant466;
};

bool mu__condition_473() // Condition for Rule "test_reachable_state_7"
{
  return mu__invariant_465( );
}

/**** end rule declaration ****/

int mu__invariant_474() // Invariant "test_reachable_state_6"
{
bool mu__quant475; 
mu__quant475 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr476;
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
bool mu__boolexpr481;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = ((mu_getCacheState( 3, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = ((mu_getCacheState( 6, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr476)) )
  { mu__quant475 = FALSE; break; }
};
};
return mu__quant475;
};

bool mu__condition_482() // Condition for Rule "test_reachable_state_6"
{
  return mu__invariant_474( );
}

/**** end rule declaration ****/

int mu__invariant_483() // Invariant "test_reachable_state_5"
{
bool mu__quant484; 
mu__quant484 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr485;
bool mu__boolexpr486;
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
bool mu__boolexpr490;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_getCacheState( 3, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = ((mu_getCacheState( 7, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr485)) )
  { mu__quant484 = FALSE; break; }
};
};
return mu__quant484;
};

bool mu__condition_491() // Condition for Rule "test_reachable_state_5"
{
  return mu__invariant_483( );
}

/**** end rule declaration ****/

int mu__invariant_492() // Invariant "test_reachable_state_4"
{
bool mu__quant493; 
mu__quant493 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
bool mu__boolexpr498;
bool mu__boolexpr499;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = ((mu_getCacheState( 3, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr494)) )
  { mu__quant493 = FALSE; break; }
};
};
return mu__quant493;
};

bool mu__condition_500() // Condition for Rule "test_reachable_state_4"
{
  return mu__invariant_492( );
}

/**** end rule declaration ****/

int mu__invariant_501() // Invariant "test_reachable_state_3"
{
bool mu__quant502; 
mu__quant502 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_getCacheState( 3, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = ((mu_getCacheState( 6, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr503)) )
  { mu__quant502 = FALSE; break; }
};
};
return mu__quant502;
};

bool mu__condition_509() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_501( );
}

/**** end rule declaration ****/

int mu__invariant_510() // Invariant "test_reachable_state_2"
{
bool mu__quant511; 
mu__quant511 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
bool mu__boolexpr517;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_Trunk))) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_getCacheState( 3, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = ((mu_getCacheState( 7, mu_a )) == (mu_Tip)) ; 
}
if ( !(!(mu__boolexpr512)) )
  { mu__quant511 = FALSE; break; }
};
};
return mu__quant511;
};

bool mu__condition_518() // Condition for Rule "test_reachable_state_2"
{
  return mu__invariant_510( );
}

/**** end rule declaration ****/

int mu__invariant_519() // Invariant "test_reachable_state_1"
{
bool mu__quant520; 
mu__quant520 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr521;
bool mu__boolexpr522;
bool mu__boolexpr523;
bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
  if (!((mu_getCacheState( 1, mu_a )) == (mu_None))) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = ((mu_getCacheState( 2, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_getCacheState( 4, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = ((mu_getCacheState( 5, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = ((mu_getCacheState( 3, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr523)) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = ((mu_getCacheState( 6, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = ((mu_getCacheState( 7, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr521)) )
  { mu__quant520 = FALSE; break; }
};
};
return mu__quant520;
};

bool mu__condition_527() // Condition for Rule "test_reachable_state_1"
{
  return mu__invariant_519( );
}

/**** end rule declaration ****/

// set invariants
const rulerec invariants[] = {
{"test_reachable_state_38", &mu__condition_194, NULL, },
};// set invariants
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Ln:NoScalarset
L1:NoScalarset
link:NoScalarset
memdata:NoScalarset
auxdata:NoScalarset
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
        mu_Ln.MultisetSort();
        mu_L1.MultisetSort();
        mu_link.MultisetSort();
        mu_memdata.MultisetSort();
        mu_auxdata.MultisetSort();
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
void mu_1_L1_node::Permute(PermSet& Perm, int i) {};
void mu_1_L1_node::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_L1_node::Canonicalize(PermSet& Perm) {};
void mu_1_L1_node::SimpleLimit(PermSet& Perm) {};
void mu_1_L1_node::ArrayLimit(PermSet& Perm) {};
void mu_1_L1_node::Limit(PermSet& Perm) {};
void mu_1_L1_node::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_L2_node::Permute(PermSet& Perm, int i) {};
void mu_1_L2_node::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_L2_node::Canonicalize(PermSet& Perm) {};
void mu_1_L2_node::SimpleLimit(PermSet& Perm) {};
void mu_1_L2_node::ArrayLimit(PermSet& Perm) {};
void mu_1_L2_node::Limit(PermSet& Perm) {};
void mu_1_L2_node::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_L3_node::Permute(PermSet& Perm, int i) {};
void mu_1_L3_node::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_L3_node::Canonicalize(PermSet& Perm) {};
void mu_1_L3_node::SimpleLimit(PermSet& Perm) {};
void mu_1_L3_node::ArrayLimit(PermSet& Perm) {};
void mu_1_L3_node::Limit(PermSet& Perm) {};
void mu_1_L3_node::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_node::Permute(PermSet& Perm, int i) {};
void mu_1_node::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_node::Canonicalize(PermSet& Perm) {};
void mu_1_node::SimpleLimit(PermSet& Perm) {};
void mu_1_node::ArrayLimit(PermSet& Perm) {};
void mu_1_node::Limit(PermSet& Perm) {};
void mu_1_node::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_master_node::Permute(PermSet& Perm, int i) {};
void mu_1_master_node::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_master_node::Canonicalize(PermSet& Perm) {};
void mu_1_master_node::SimpleLimit(PermSet& Perm) {};
void mu_1_master_node::ArrayLimit(PermSet& Perm) {};
void mu_1_master_node::Limit(PermSet& Perm) {};
void mu_1_master_node::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_slave_node::Permute(PermSet& Perm, int i) {};
void mu_1_slave_node::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_slave_node::Canonicalize(PermSet& Perm) {};
void mu_1_slave_node::SimpleLimit(PermSet& Perm) {};
void mu_1_slave_node::ArrayLimit(PermSet& Perm) {};
void mu_1_slave_node::Limit(PermSet& Perm) {};
void mu_1_slave_node::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_child_range::Permute(PermSet& Perm, int i) {};
void mu_1_child_range::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_child_range::Canonicalize(PermSet& Perm) {};
void mu_1_child_range::SimpleLimit(PermSet& Perm) {};
void mu_1_child_range::ArrayLimit(PermSet& Perm) {};
void mu_1_child_range::Limit(PermSet& Perm) {};
void mu_1_child_range::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_addr::Permute(PermSet& Perm, int i) {};
void mu_1_addr::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_addr::Canonicalize(PermSet& Perm) {};
void mu_1_addr::SimpleLimit(PermSet& Perm) {};
void mu_1_addr::ArrayLimit(PermSet& Perm) {};
void mu_1_addr::Limit(PermSet& Perm) {};
void mu_1_addr::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_data_type::Permute(PermSet& Perm, int i) {};
void mu_1_data_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_data_type::Canonicalize(PermSet& Perm) {};
void mu_1_data_type::SimpleLimit(PermSet& Perm) {};
void mu_1_data_type::ArrayLimit(PermSet& Perm) {};
void mu_1_data_type::Limit(PermSet& Perm) {};
void mu_1_data_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_extend_data_type::Permute(PermSet& Perm, int i) {};
void mu_1_extend_data_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_extend_data_type::Canonicalize(PermSet& Perm) {};
void mu_1_extend_data_type::SimpleLimit(PermSet& Perm) {};
void mu_1_extend_data_type::ArrayLimit(PermSet& Perm) {};
void mu_1_extend_data_type::Limit(PermSet& Perm) {};
void mu_1_extend_data_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_chan_num::Permute(PermSet& Perm, int i) {};
void mu_1_chan_num::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chan_num::Canonicalize(PermSet& Perm) {};
void mu_1_chan_num::SimpleLimit(PermSet& Perm) {};
void mu_1_chan_num::ArrayLimit(PermSet& Perm) {};
void mu_1_chan_num::Limit(PermSet& Perm) {};
void mu_1_chan_num::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_stor_range::Permute(PermSet& Perm, int i) {};
void mu_1_stor_range::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_stor_range::Canonicalize(PermSet& Perm) {};
void mu_1_stor_range::SimpleLimit(PermSet& Perm) {};
void mu_1_stor_range::ArrayLimit(PermSet& Perm) {};
void mu_1_stor_range::Limit(PermSet& Perm) {};
void mu_1_stor_range::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_extend_stor_range::Permute(PermSet& Perm, int i) {};
void mu_1_extend_stor_range::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_extend_stor_range::Canonicalize(PermSet& Perm) {};
void mu_1_extend_stor_range::SimpleLimit(PermSet& Perm) {};
void mu_1_extend_stor_range::ArrayLimit(PermSet& Perm) {};
void mu_1_extend_stor_range::Limit(PermSet& Perm) {};
void mu_1_extend_stor_range::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msg_range::Permute(PermSet& Perm, int i) {};
void mu_1_msg_range::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msg_range::Canonicalize(PermSet& Perm) {};
void mu_1_msg_range::SimpleLimit(PermSet& Perm) {};
void mu_1_msg_range::ArrayLimit(PermSet& Perm) {};
void mu_1_msg_range::Limit(PermSet& Perm) {};
void mu_1_msg_range::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_extend_msg_range::Permute(PermSet& Perm, int i) {};
void mu_1_extend_msg_range::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_extend_msg_range::Canonicalize(PermSet& Perm) {};
void mu_1_extend_msg_range::SimpleLimit(PermSet& Perm) {};
void mu_1_extend_msg_range::ArrayLimit(PermSet& Perm) {};
void mu_1_extend_msg_range::Limit(PermSet& Perm) {};
void mu_1_extend_msg_range::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
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
};
void mu_1_msg_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_msg_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_msg_type::SimpleLimit(PermSet& Perm){}
void mu_1_msg_type::ArrayLimit(PermSet& Perm){}
void mu_1_msg_type::Limit(PermSet& Perm)
{
};
void mu_1_msg_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1_cacheline::Permute(PermSet& Perm, int i)
{
};
void mu_1_cacheline::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_cacheline::Canonicalize(PermSet& Perm)
{
};
void mu_1_cacheline::SimpleLimit(PermSet& Perm){}
void mu_1_cacheline::ArrayLimit(PermSet& Perm){}
void mu_1_cacheline::Limit(PermSet& Perm)
{
};
void mu_1_cacheline::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
void mu_1_cache_record::Permute(PermSet& Perm, int i)
{
};
void mu_1_cache_record::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_cache_record::Canonicalize(PermSet& Perm)
{
};
void mu_1_cache_record::SimpleLimit(PermSet& Perm){}
void mu_1_cache_record::ArrayLimit(PermSet& Perm){}
void mu_1_cache_record::Limit(PermSet& Perm)
{
};
void mu_1_cache_record::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<2; j++)
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
void mu_1_L1_cache::Permute(PermSet& Perm, int i)
{
};
void mu_1_L1_cache::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_L1_cache::Canonicalize(PermSet& Perm)
{
};
void mu_1_L1_cache::SimpleLimit(PermSet& Perm){}
void mu_1_L1_cache::ArrayLimit(PermSet& Perm){}
void mu_1_L1_cache::Limit(PermSet& Perm)
{
};
void mu_1_L1_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<2; j++)
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
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_Ln_cache::Permute(PermSet& Perm, int i)
{
};
void mu_1_Ln_cache::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Ln_cache::Canonicalize(PermSet& Perm)
{
};
void mu_1_Ln_cache::SimpleLimit(PermSet& Perm){}
void mu_1_Ln_cache::ArrayLimit(PermSet& Perm){}
void mu_1_Ln_cache::Limit(PermSet& Perm)
{
};
void mu_1_Ln_cache::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<2; j++)
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
void mu_1_channel::Permute(PermSet& Perm, int i)
{
};
void mu_1_channel::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_channel::Canonicalize(PermSet& Perm)
{
};
void mu_1_channel::SimpleLimit(PermSet& Perm){}
void mu_1_channel::ArrayLimit(PermSet& Perm){}
void mu_1_channel::Limit(PermSet& Perm)
{
};
void mu_1_channel::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<4; j++)
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
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<5; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<6; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm){}
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
};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm){}
void mu_1__type_13::ArrayLimit(PermSet& Perm) {}
void mu_1__type_13::Limit(PermSet& Perm){}
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_14::Permute(PermSet& Perm, int i)
{
  static mu_1__type_14 temp("Permute_mu_1__type_14",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_14::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_14::Canonicalize(PermSet& Perm){};
void mu_1__type_14::SimpleLimit(PermSet& Perm){}
void mu_1__type_14::ArrayLimit(PermSet& Perm) {}
void mu_1__type_14::Limit(PermSet& Perm){}
void mu_1__type_14::MultisetLimit(PermSet& Perm)
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
              
              mu_Ln.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Ln.MultisetSort();
              mu_L1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_L1.MultisetSort();
              mu_link.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_link.MultisetSort();
              mu_memdata.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_memdata.MultisetSort();
              mu_auxdata.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_auxdata.MultisetSort();
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

          mu_Ln.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Ln.MultisetSort();
          mu_L1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_L1.MultisetSort();
          mu_link.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_link.MultisetSort();
          mu_memdata.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_memdata.MultisetSort();
          mu_auxdata.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_auxdata.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_Ln.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Ln.MultisetSort();
              mu_L1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_L1.MultisetSort();
              mu_link.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_link.MultisetSort();
              mu_memdata.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_memdata.MultisetSort();
              mu_auxdata.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_auxdata.MultisetSort();
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
      mu_Ln.MultisetSort();
      mu_L1.MultisetSort();
      mu_link.MultisetSort();
      mu_memdata.MultisetSort();
      mu_auxdata.MultisetSort();
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
        mu_Ln.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Ln.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_L1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_L1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_link.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_link.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

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
