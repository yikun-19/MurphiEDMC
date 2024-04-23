/******************************
  Program "./test/test.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Apr 18 2024"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Apr 18 2024"
#define PROTOCOL_NAME "./test/test"
#define BITS_IN_WORLD 2944
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_dataType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_dataType& val) { return mu__byte::operator=((int) val); };
  mu_1_dataType (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_dataType (void): mu__byte(0, 2, 2) {};
  mu_1_dataType (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu_1_dataType mu_1_dataType_undefined_var;

class mu_1_addrType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_addrType& val) { return mu__byte::operator=((int) val); };
  mu_1_addrType (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_addrType (void): mu__byte(1, 2, 2) {};
  mu_1_addrType (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_addrType mu_1_addrType_undefined_var;

class mu_1_validDataType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_validDataType& val) { return mu__byte::operator=((int) val); };
  mu_1_validDataType (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_validDataType (void): mu__byte(1, 2, 2) {};
  mu_1_validDataType (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_validDataType mu_1_validDataType_undefined_var;

class mu_1_l1Id: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_l1Id& val) { return mu__byte::operator=((int) val); };
  mu_1_l1Id (const char *name, int os): mu__byte(4, 7, 3, name, os) {};
  mu_1_l1Id (void): mu__byte(4, 7, 3) {};
  mu_1_l1Id (int val): mu__byte(4, 7, 3, "Parameter or function result.", 0)
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
mu_1_l1Id mu_1_l1Id_undefined_var;

class mu_1_cacheId: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_cacheId& val) { return mu__byte::operator=((int) val); };
  mu_1_cacheId (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_cacheId (void): mu__byte(1, 3, 2) {};
  mu_1_cacheId (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
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
mu_1_cacheId mu_1_cacheId_undefined_var;

class mu_1_nodeId: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_nodeId& val) { return mu__byte::operator=((int) val); };
  mu_1_nodeId (const char *name, int os): mu__byte(1, 7, 3, name, os) {};
  mu_1_nodeId (void): mu__byte(1, 7, 3) {};
  mu_1_nodeId (int val): mu__byte(1, 7, 3, "Parameter or function result.", 0)
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
mu_1_nodeId mu_1_nodeId_undefined_var;

class mu_1_branchType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_branchType& val) { return mu__byte::operator=((int) val); };
  mu_1_branchType (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_branchType (void): mu__byte(1, 2, 2) {};
  mu_1_branchType (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_branchType mu_1_branchType_undefined_var;

class mu_1_stateType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_stateType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_stateType& val)
  {
    if (val.defined())
      return ( s << mu_1_stateType::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_stateType (const char *name, int os): mu__byte(1, 4, 3, name, os) {};
  mu_1_stateType (void): mu__byte(1, 4, 3) {};
  mu_1_stateType (int val): mu__byte(1, 4, 3, "Parameter or function result.", 0)
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

const char *mu_1_stateType::values[] = {"None","Trunk","Branch","Tip",NULL };

/*** end of enum declaration ***/
mu_1_stateType mu_1_stateType_undefined_var;

class mu_1_AType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AType& val)
  {
    if (val.defined())
      return ( s << mu_1_AType::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_AType (const char *name, int os): mu__byte(5, 7, 2, name, os) {};
  mu_1_AType (void): mu__byte(5, 7, 2) {};
  mu_1_AType (int val): mu__byte(5, 7, 2, "Parameter or function result.", 0)
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
    if (defined())
      cout << name << ":" << values[ value() -5] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AType::values[] = {"A_None","AcquirePerm","AcquireBlock",NULL };

/*** end of enum declaration ***/
mu_1_AType mu_1_AType_undefined_var;

class mu_1_BType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BType& val)
  {
    if (val.defined())
      return ( s << mu_1_BType::values[ int(val) - 8] );
    else return ( s << "Undefined" );
  };

  mu_1_BType (const char *name, int os): mu__byte(8, 9, 2, name, os) {};
  mu_1_BType (void): mu__byte(8, 9, 2) {};
  mu_1_BType (int val): mu__byte(8, 9, 2, "Parameter or function result.", 0)
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

const char *mu_1_BType::values[] = {"B_None","Probe",NULL };

/*** end of enum declaration ***/
mu_1_BType mu_1_BType_undefined_var;

class mu_1_CType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_CType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_CType& val)
  {
    if (val.defined())
      return ( s << mu_1_CType::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_CType (const char *name, int os): mu__byte(10, 12, 2, name, os) {};
  mu_1_CType (void): mu__byte(10, 12, 2) {};
  mu_1_CType (int val): mu__byte(10, 12, 2, "Parameter or function result.", 0)
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
    if (defined())
      cout << name << ":" << values[ value() -10] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_CType::values[] = {"C_None","ReleaseData","ProbeAckData",NULL };

/*** end of enum declaration ***/
mu_1_CType mu_1_CType_undefined_var;

class mu_1_DType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_DType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_DType& val)
  {
    if (val.defined())
      return ( s << mu_1_DType::values[ int(val) - 13] );
    else return ( s << "Undefined" );
  };

  mu_1_DType (const char *name, int os): mu__byte(13, 16, 3, name, os) {};
  mu_1_DType (void): mu__byte(13, 16, 3) {};
  mu_1_DType (int val): mu__byte(13, 16, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -13]; };
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
      cout << name << ":" << values[ value() -13] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_DType::values[] = {"D_None","Grant","GrantData","ReleaseAck",NULL };

/*** end of enum declaration ***/
mu_1_DType mu_1_DType_undefined_var;

class mu_1_EType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_EType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_EType& val)
  {
    if (val.defined())
      return ( s << mu_1_EType::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_EType (const char *name, int os): mu__byte(17, 18, 2, name, os) {};
  mu_1_EType (void): mu__byte(17, 18, 2) {};
  mu_1_EType (int val): mu__byte(17, 18, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -17]; };
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
      cout << name << ":" << values[ value() -17] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_EType::values[] = {"E_None","GrantAck",NULL };

/*** end of enum declaration ***/
mu_1_EType mu_1_EType_undefined_var;

class mu_1_growType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_growType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_growType& val)
  {
    if (val.defined())
      return ( s << mu_1_growType::values[ int(val) - 19] );
    else return ( s << "Undefined" );
  };

  mu_1_growType (const char *name, int os): mu__byte(19, 21, 2, name, os) {};
  mu_1_growType (void): mu__byte(19, 21, 2) {};
  mu_1_growType (int val): mu__byte(19, 21, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -19]; };
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
      cout << name << ":" << values[ value() -19] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_growType::values[] = {"NtoB","NtoT","BtoT",NULL };

/*** end of enum declaration ***/
mu_1_growType mu_1_growType_undefined_var;

class mu_1_capType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_capType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_capType& val)
  {
    if (val.defined())
      return ( s << mu_1_capType::values[ int(val) - 22] );
    else return ( s << "Undefined" );
  };

  mu_1_capType (const char *name, int os): mu__byte(22, 24, 2, name, os) {};
  mu_1_capType (void): mu__byte(22, 24, 2) {};
  mu_1_capType (int val): mu__byte(22, 24, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -22]; };
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
      cout << name << ":" << values[ value() -22] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_capType::values[] = {"toN","toB","toT",NULL };

/*** end of enum declaration ***/
mu_1_capType mu_1_capType_undefined_var;

class mu_1_pruneType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_pruneType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_pruneType& val)
  {
    if (val.defined())
      return ( s << mu_1_pruneType::values[ int(val) - 25] );
    else return ( s << "Undefined" );
  };

  mu_1_pruneType (const char *name, int os): mu__byte(25, 29, 3, name, os) {};
  mu_1_pruneType (void): mu__byte(25, 29, 3) {};
  mu_1_pruneType (int val): mu__byte(25, 29, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -25]; };
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
      cout << name << ":" << values[ value() -25] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_pruneType::values[] = {"BtoN","TtoN","TtoB","NtoN","BtoB",NULL };

/*** end of enum declaration ***/
mu_1_pruneType mu_1_pruneType_undefined_var;

class mu_1_chAType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AType mu_opcode;
  mu_1_growType mu_para;
  mu_1_addrType mu_addr;
  mu_1_chAType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chAType ( void ) {};

  virtual ~mu_1_chAType(); 
friend int CompareWeight(mu_1_chAType& a, mu_1_chAType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chAType& a, mu_1_chAType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
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
    mu_addr.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_addr.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_addr.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_addr.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_addr.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_addr.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_addr.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chAType& operator= (const mu_1_chAType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    return *this;
  };
};

  void mu_1_chAType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chAType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chAType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
}

mu_1_chAType::~mu_1_chAType()
{
}

/*** end record declaration ***/
mu_1_chAType mu_1_chAType_undefined_var;

class mu_1_chBType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_BType mu_opcode;
  mu_1_capType mu_para;
  mu_1_addrType mu_addr;
  mu_1_chBType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chBType ( void ) {};

  virtual ~mu_1_chBType(); 
friend int CompareWeight(mu_1_chBType& a, mu_1_chBType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chBType& a, mu_1_chBType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
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
    mu_addr.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_addr.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_addr.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_addr.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_addr.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_addr.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_addr.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chBType& operator= (const mu_1_chBType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    return *this;
  };
};

  void mu_1_chBType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chBType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chBType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
}

mu_1_chBType::~mu_1_chBType()
{
}

/*** end record declaration ***/
mu_1_chBType mu_1_chBType_undefined_var;

class mu_1_chCType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_CType mu_opcode;
  mu_1_pruneType mu_para;
  mu_1_addrType mu_addr;
  mu_1_dataType mu_data;
  mu_0_boolean mu_dirty;
  mu_1_chCType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chCType ( void ) {};

  virtual ~mu_1_chCType(); 
friend int CompareWeight(mu_1_chCType& a, mu_1_chCType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dirty, b.mu_dirty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chCType& a, mu_1_chCType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
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
    mu_opcode.MultisetSort();
    mu_para.MultisetSort();
    mu_addr.MultisetSort();
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_addr.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_addr.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_addr.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_addr.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_addr.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chCType& operator= (const mu_1_chCType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_chCType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chCType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chCType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 32 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_chCType::~mu_1_chCType()
{
}

/*** end record declaration ***/
mu_1_chCType mu_1_chCType_undefined_var;

class mu_1_chDType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_DType mu_opcode;
  mu_1_capType mu_para;
  mu_1_addrType mu_addr;
  mu_1_dataType mu_data;
  mu_1_chDType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chDType ( void ) {};

  virtual ~mu_1_chDType(); 
friend int CompareWeight(mu_1_chDType& a, mu_1_chDType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chDType& a, mu_1_chDType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
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
    mu_addr.MultisetSort();
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_addr.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_addr.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_addr.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_addr.reset();
    mu_data.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_addr.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chDType& operator= (const mu_1_chDType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    return *this;
  };
};

  void mu_1_chDType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chDType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chDType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
}

mu_1_chDType::~mu_1_chDType()
{
}

/*** end record declaration ***/
mu_1_chDType mu_1_chDType_undefined_var;

class mu_1_chEType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EType mu_opcode;
  mu_1_addrType mu_addr;
  mu_1_chEType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chEType ( void ) {};

  virtual ~mu_1_chEType(); 
friend int CompareWeight(mu_1_chEType& a, mu_1_chEType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chEType& a, mu_1_chEType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
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
    mu_addr.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_addr.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_addr.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_addr.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_addr.reset();
 };
  void print() {
    mu_opcode.print();
    mu_addr.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_addr.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chEType& operator= (const mu_1_chEType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_addr.value(from.mu_addr.value());
    return *this;
  };
};

  void mu_1_chEType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chEType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chEType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
}

mu_1_chEType::~mu_1_chEType()
{
}

/*** end record declaration ***/
mu_1_chEType mu_1_chEType_undefined_var;

class mu_1_slave_pending_Type: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_slave_pending_Type& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_slave_pending_Type& val)
  {
    if (val.defined())
      return ( s << mu_1_slave_pending_Type::values[ int(val) - 30] );
    else return ( s << "Undefined" );
  };

  mu_1_slave_pending_Type (const char *name, int os): mu__byte(30, 32, 2, name, os) {};
  mu_1_slave_pending_Type (void): mu__byte(30, 32, 2) {};
  mu_1_slave_pending_Type (int val): mu__byte(30, 32, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -30]; };
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
      cout << name << ":" << values[ value() -30] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_slave_pending_Type::values[] = {"S_None","pending_ProbeAckData","pending_GrantAck",NULL };

/*** end of enum declaration ***/
mu_1_slave_pending_Type mu_1_slave_pending_Type_undefined_var;

class mu_1_master_pending_Type: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_master_pending_Type& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_master_pending_Type& val)
  {
    if (val.defined())
      return ( s << mu_1_master_pending_Type::values[ int(val) - 33] );
    else return ( s << "Undefined" );
  };

  mu_1_master_pending_Type (const char *name, int os): mu__byte(33, 36, 3, name, os) {};
  mu_1_master_pending_Type (void): mu__byte(33, 36, 3) {};
  mu_1_master_pending_Type (int val): mu__byte(33, 36, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -33]; };
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
      cout << name << ":" << values[ value() -33] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_master_pending_Type::values[] = {"M_None","pending_Grant","pending_GrantData","pending_ReleaseAck",NULL };

/*** end of enum declaration ***/
mu_1_master_pending_Type mu_1_master_pending_Type_undefined_var;

class mu_1_cacheType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_stateType mu_state;
  mu_1_dataType mu_data;
  mu_0_boolean mu_dirty;
  mu_1_cacheType ( const char *n, int os ) { set_self(n,os); };
  mu_1_cacheType ( void ) {};

  virtual ~mu_1_cacheType(); 
friend int CompareWeight(mu_1_cacheType& a, mu_1_cacheType& b)
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
friend int Compare(mu_1_cacheType& a, mu_1_cacheType& b)
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
  mu_1_cacheType& operator= (const mu_1_cacheType& from) {
    mu_state.value(from.mu_state.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_cacheType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_cacheType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_cacheType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 8 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 16 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_cacheType::~mu_1_cacheType()
{
}

/*** end record declaration ***/
mu_1_cacheType mu_1_cacheType_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_cacheType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_cacheType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_1_nodeId array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_nodeId& operator[] (int index) /* const */
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

class mu_1__type_2
{
 public:
  mu_1_stateType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_stateType& operator[] (int index) /* const */
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

class mu_1__type_3
{
 public:
  mu_1__type_2 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1__type_2& operator[] (int index) /* const */
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
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
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
  mu_1_slave_pending_Type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_slave_pending_Type& operator[] (int index) /* const */
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
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
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
  mu_1__type_4 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1__type_4& operator[] (int index) /* const */
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
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
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
  mu_1_master_pending_Type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_master_pending_Type& operator[] (int index) /* const */
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
  mu_1_chAType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1_chAType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_chBType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_chBType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_1_chCType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1_chCType& operator[] (int index) /* const */
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
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 40 + os);
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
  mu_1_chDType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1_chDType& operator[] (int index) /* const */
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
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_chEType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_chEType& operator[] (int index) /* const */
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
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1_TreeNode
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_cache;
  mu_1__type_1 mu_sons;
  mu_1__type_3 mu_directory;
  mu_1__type_5 mu_slave_pending;
  mu_1__type_6 mu_master_pending;
  mu_1__type_7 mu_chanA;
  mu_1__type_8 mu_chanB;
  mu_1__type_9 mu_chanC;
  mu_1__type_10 mu_chanD;
  mu_1__type_11 mu_chanE;
  mu_1_TreeNode ( const char *n, int os ) { set_self(n,os); };
  mu_1_TreeNode ( void ) {};

  virtual ~mu_1_TreeNode(); 
friend int CompareWeight(mu_1_TreeNode& a, mu_1_TreeNode& b)
  {
    int w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sons, b.mu_sons);
    if (w!=0) return w;
    w = CompareWeight(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
    w = CompareWeight(a.mu_slave_pending, b.mu_slave_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_master_pending, b.mu_master_pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chanA, b.mu_chanA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chanB, b.mu_chanB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chanC, b.mu_chanC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chanD, b.mu_chanD);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chanE, b.mu_chanE);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_TreeNode& a, mu_1_TreeNode& b)
  {
    int w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_sons, b.mu_sons);
    if (w!=0) return w;
    w = Compare(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
    w = Compare(a.mu_slave_pending, b.mu_slave_pending);
    if (w!=0) return w;
    w = Compare(a.mu_master_pending, b.mu_master_pending);
    if (w!=0) return w;
    w = Compare(a.mu_chanA, b.mu_chanA);
    if (w!=0) return w;
    w = Compare(a.mu_chanB, b.mu_chanB);
    if (w!=0) return w;
    w = Compare(a.mu_chanC, b.mu_chanC);
    if (w!=0) return w;
    w = Compare(a.mu_chanD, b.mu_chanD);
    if (w!=0) return w;
    w = Compare(a.mu_chanE, b.mu_chanE);
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
    mu_sons.MultisetSort();
    mu_directory.MultisetSort();
    mu_slave_pending.MultisetSort();
    mu_master_pending.MultisetSort();
    mu_chanA.MultisetSort();
    mu_chanB.MultisetSort();
    mu_chanC.MultisetSort();
    mu_chanD.MultisetSort();
    mu_chanE.MultisetSort();
  }
  void print_statistic()
  {
    mu_cache.print_statistic();
    mu_sons.print_statistic();
    mu_directory.print_statistic();
    mu_slave_pending.print_statistic();
    mu_master_pending.print_statistic();
    mu_chanA.print_statistic();
    mu_chanB.print_statistic();
    mu_chanC.print_statistic();
    mu_chanD.print_statistic();
    mu_chanE.print_statistic();
  }
  void clear() {
    mu_cache.clear();
    mu_sons.clear();
    mu_directory.clear();
    mu_slave_pending.clear();
    mu_master_pending.clear();
    mu_chanA.clear();
    mu_chanB.clear();
    mu_chanC.clear();
    mu_chanD.clear();
    mu_chanE.clear();
 };
  void undefine() {
    mu_cache.undefine();
    mu_sons.undefine();
    mu_directory.undefine();
    mu_slave_pending.undefine();
    mu_master_pending.undefine();
    mu_chanA.undefine();
    mu_chanB.undefine();
    mu_chanC.undefine();
    mu_chanD.undefine();
    mu_chanE.undefine();
 };
  void reset() {
    mu_cache.reset();
    mu_sons.reset();
    mu_directory.reset();
    mu_slave_pending.reset();
    mu_master_pending.reset();
    mu_chanA.reset();
    mu_chanB.reset();
    mu_chanC.reset();
    mu_chanD.reset();
    mu_chanE.reset();
 };
  void print() {
    mu_cache.print();
    mu_sons.print();
    mu_directory.print();
    mu_slave_pending.print();
    mu_master_pending.print();
    mu_chanA.print();
    mu_chanB.print();
    mu_chanC.print();
    mu_chanD.print();
    mu_chanE.print();
  };
  void print_diff(state *prevstate) {
    mu_cache.print_diff(prevstate);
    mu_sons.print_diff(prevstate);
    mu_directory.print_diff(prevstate);
    mu_slave_pending.print_diff(prevstate);
    mu_master_pending.print_diff(prevstate);
    mu_chanA.print_diff(prevstate);
    mu_chanB.print_diff(prevstate);
    mu_chanC.print_diff(prevstate);
    mu_chanD.print_diff(prevstate);
    mu_chanE.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cache.to_state(thestate);
    mu_sons.to_state(thestate);
    mu_directory.to_state(thestate);
    mu_slave_pending.to_state(thestate);
    mu_master_pending.to_state(thestate);
    mu_chanA.to_state(thestate);
    mu_chanB.to_state(thestate);
    mu_chanC.to_state(thestate);
    mu_chanD.to_state(thestate);
    mu_chanE.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_TreeNode& operator= (const mu_1_TreeNode& from) {
    mu_cache = from.mu_cache;
    mu_sons = from.mu_sons;
    mu_directory = from.mu_directory;
    mu_slave_pending = from.mu_slave_pending;
    mu_master_pending = from.mu_master_pending;
    mu_chanA = from.mu_chanA;
    mu_chanB = from.mu_chanB;
    mu_chanC = from.mu_chanC;
    mu_chanD = from.mu_chanD;
    mu_chanE = from.mu_chanE;
    return *this;
  };
};

  void mu_1_TreeNode::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_TreeNode::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_TreeNode::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cache.set_self_2(name, ".cache", os + 0 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_sons.set_self_2(name, ".sons", os + 48 ); else mu_sons.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 64 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 96 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 128 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_chanA.set_self_2(name, ".chanA", os + 144 ); else mu_chanA.set_self_2(NULL, NULL, 0);
  if (name) mu_chanB.set_self_2(name, ".chanB", os + 192 ); else mu_chanB.set_self_2(NULL, NULL, 0);
  if (name) mu_chanC.set_self_2(name, ".chanC", os + 240 ); else mu_chanC.set_self_2(NULL, NULL, 0);
  if (name) mu_chanD.set_self_2(name, ".chanD", os + 320 ); else mu_chanD.set_self_2(NULL, NULL, 0);
  if (name) mu_chanE.set_self_2(name, ".chanE", os + 384 ); else mu_chanE.set_self_2(NULL, NULL, 0);
}

mu_1_TreeNode::~mu_1_TreeNode()
{
}

/*** end record declaration ***/
mu_1_TreeNode mu_1_TreeNode_undefined_var;

class mu_1__type_12
{
 public:
  mu_1_TreeNode array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1_TreeNode& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 7 ) )
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
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<7; i++) {
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
    for (int i=0; i<7; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<7; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 7; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 7; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 7; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 7; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 7; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 7; i++)
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
  for(int i = 0; i < 7; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 416 + os);
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
  mu_1_validDataType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_1_validDataType& operator[] (int index) /* const */
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
  mu_1_validDataType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1_validDataType& operator[] (int index) /* const */
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

class mu_1__type_15: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_15& val) { return mu__byte::operator=((int) val); };
  mu_1__type_15 (const char *name, int os): mu__byte(1, 8, 4, name, os) {};
  mu_1__type_15 (void): mu__byte(1, 8, 4) {};
  mu_1__type_15 (int val): mu__byte(1, 8, 4, "Parameter or function result.", 0)
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
mu_1__type_15 mu_1__type_15_undefined_var;

const int mu_coreNum = 4;
const int mu_allNodeNum = 7;
const int mu_allBranchNum = 2;
const int mu_dataNum = 2;
const int mu_addrNum = 2;
const int mu_None = 1;
const int mu_Trunk = 2;
const int mu_Branch = 3;
const int mu_Tip = 4;
const int mu_A_None = 5;
const int mu_AcquirePerm = 6;
const int mu_AcquireBlock = 7;
const int mu_B_None = 8;
const int mu_Probe = 9;
const int mu_C_None = 10;
const int mu_ReleaseData = 11;
const int mu_ProbeAckData = 12;
const int mu_D_None = 13;
const int mu_Grant = 14;
const int mu_GrantData = 15;
const int mu_ReleaseAck = 16;
const int mu_E_None = 17;
const int mu_GrantAck = 18;
const int mu_NtoB = 19;
const int mu_NtoT = 20;
const int mu_BtoT = 21;
const int mu_toN = 22;
const int mu_toB = 23;
const int mu_toT = 24;
const int mu_BtoN = 25;
const int mu_TtoN = 26;
const int mu_TtoB = 27;
const int mu_NtoN = 28;
const int mu_BtoB = 29;
const int mu_S_None = 30;
const int mu_pending_ProbeAckData = 31;
const int mu_pending_GrantAck = 32;
const int mu_M_None = 33;
const int mu_pending_Grant = 34;
const int mu_pending_GrantData = 35;
const int mu_pending_ReleaseAck = 36;
/*** Variable declaration ***/
mu_1__type_12 mu_Tree("Tree",0);

/*** Variable declaration ***/
mu_1__type_13 mu_memData("memData",2912);

/*** Variable declaration ***/
mu_1__type_14 mu_auxData("auxData",2928);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_Tree.clear();
  mu_memData.clear();
  mu_auxData.clear();
}
void world_class::undefine()
{
  mu_Tree.undefine();
  mu_memData.undefine();
  mu_auxData.undefine();
}
void world_class::reset()
{
  mu_Tree.reset();
  mu_memData.reset();
  mu_auxData.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Tree.print();
  mu_memData.print();
  mu_auxData.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Tree.print_statistic();
  mu_memData.print_statistic();
  mu_auxData.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_Tree.print_diff(prevstate);
    mu_memData.print_diff(prevstate);
    mu_auxData.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_Tree.to_state( newstate );
  mu_memData.to_state( newstate );
  mu_auxData.to_state( newstate );
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquireBlock_NtoT_Branch_None_None, a:%s, b:%s", mu_a.Name(), mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_Tree[1].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_Tree[1].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
bool mu__quant20; 
mu__quant20 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant20 = FALSE; break; }
};
};
  mu__boolexpr16 = (mu__quant20) ; 
}
    return mu__boolexpr16;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 4 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr21;
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Tree[1].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_Tree[1].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
bool mu__quant25; 
mu__quant25 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant25 = FALSE; break; }
};
};
  mu__boolexpr21 = (mu__quant25) ; 
}
	      if (mu__boolexpr21) {
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
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[1].mu_cache[mu_a].mu_data = mu_memData[mu_a];
mu_auxData[mu_a] = mu_memData[mu_a];
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_Acquire_None_None_None, b:%s, a:%s", mu_b.Name(), mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr26;
  if (!((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr26 = FALSE ;
  else {
bool mu__quant27; 
mu__quant27 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant27 = FALSE; break; }
};
};
  mu__boolexpr26 = (mu__quant27) ; 
}
    return mu__boolexpr26;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 8 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr28;
  if (!((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr28 = FALSE ;
  else {
bool mu__quant29; 
mu__quant29 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant29 = FALSE; break; }
};
};
  mu__boolexpr28 = (mu__quant29) ; 
}
	      if (mu__boolexpr28) {
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
    r = what_rule - 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[1].mu_cache[mu_a].mu_data = mu_memData[mu_a];
mu_auxData[mu_a] = mu_memData[mu_a];
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquirePerm_None_Branch_x, a:%s, b:%s", mu_a.Name(), mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
    return mu__boolexpr30;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 12 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
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
    r = what_rule - 8;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[1].mu_cache[mu_a].mu_data = mu_memData[mu_a];
mu_auxData[mu_a] = mu_memData[mu_a];
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquirePerm_Branch_x_x, a:%s, b:%s", mu_a.Name(), mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr34;
  if (!((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr34;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr35;
  if (!((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Tree[1].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr35) {
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
    r = what_rule - 12;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[1].mu_cache[mu_a].mu_data = mu_memData[mu_a];
mu_auxData[mu_a] = mu_memData[mu_a];
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_send_release, a:%s", mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    return (mu_Tree[1].mu_cache[mu_a].mu_state) != (mu_None);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 18 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Tree[1].mu_cache[mu_a].mu_state) != (mu_None)) {
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
    mu_a.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_a].mu_state = mu_None;
mu_memData[mu_a] = mu_Tree[1].mu_cache[mu_a].mu_data;
mu_Tree[1].mu_cache[mu_a].mu_data = 0;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Trunk_Tip, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return (mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 18;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 24 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) {
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
    r = what_rule - 18;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Branch_Branch, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr36;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr36 = FALSE ;
  else {
bool mu__quant37; 
mu__quant37 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant37 = TRUE; break; }
};
};
  mu__boolexpr36 = (mu__quant37) ; 
}
    return mu__boolexpr36;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 24;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 30 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr38;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr38 = FALSE ;
  else {
bool mu__quant39; 
mu__quant39 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant39 = TRUE; break; }
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
    r = what_rule - 24;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Tip_Branch, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr40;
bool mu__boolexpr41;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!((mu_i) > (1))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
bool mu__quant45; 
mu__quant45 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant45 = TRUE; break; }
};
};
  mu__boolexpr43 = (mu__quant45) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
bool mu__quant46; 
mu__quant46 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr47;
  if ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) mu__boolexpr47 = TRUE ;
  else {
  mu__boolexpr47 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_addr) == (mu_a)) ; 
}
if ( !(mu__boolexpr47) )
  { mu__quant46 = FALSE; break; }
};
};
  mu__boolexpr42 = (mu__quant46) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr40;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 30;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 36 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
  if (!((mu_i) > (1))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
bool mu__quant53; 
mu__quant53 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant53 = TRUE; break; }
};
};
  mu__boolexpr51 = (mu__quant53) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
bool mu__quant54; 
mu__quant54 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr55;
  if ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) mu__boolexpr55 = TRUE ;
  else {
  mu__boolexpr55 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_addr) == (mu_a)) ; 
}
if ( !(mu__boolexpr55) )
  { mu__quant54 = FALSE; break; }
};
};
  mu__boolexpr50 = (mu__quant54) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
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
    r = what_rule - 30;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Tip_None, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!((mu_i) > (1))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
bool mu__quant60; 
mu__quant60 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr61;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None))) mu__boolexpr61 = FALSE ;
  else {
bool mu__boolexpr62;
  if ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) mu__boolexpr62 = TRUE ;
  else {
  mu__boolexpr62 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_addr) == (mu_a)) ; 
}
  mu__boolexpr61 = (mu__boolexpr62) ; 
}
if ( !(mu__boolexpr61) )
  { mu__quant60 = FALSE; break; }
};
};
  mu__boolexpr58 = (mu__quant60) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr56;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_i) > (1))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
bool mu__quant67; 
mu__quant67 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr68;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None))) mu__boolexpr68 = FALSE ;
  else {
bool mu__boolexpr69;
  if ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) mu__boolexpr69 = TRUE ;
  else {
  mu__boolexpr69 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_addr) == (mu_a)) ; 
}
  mu__boolexpr68 = (mu__boolexpr69) ; 
}
if ( !(mu__boolexpr68) )
  { mu__quant67 = FALSE; break; }
};
};
  mu__boolexpr65 = (mu__quant67) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr63) {
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
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Branch_None, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr70;
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
  if (!((mu_i) > (1))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
bool mu__quant74; 
mu__quant74 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr75;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None))) mu__boolexpr75 = FALSE ;
  else {
bool mu__boolexpr76;
  if ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) mu__boolexpr76 = TRUE ;
  else {
  mu__boolexpr76 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_addr) == (mu_a)) ; 
}
  mu__boolexpr75 = (mu__boolexpr76) ; 
}
if ( !(mu__boolexpr75) )
  { mu__quant74 = FALSE; break; }
};
};
  mu__boolexpr72 = (mu__quant74) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr70;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
  if (!((mu_i) > (1))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
bool mu__quant81; 
mu__quant81 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr82;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None))) mu__boolexpr82 = FALSE ;
  else {
bool mu__boolexpr83;
  if ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) mu__boolexpr83 = TRUE ;
  else {
  mu__boolexpr83 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_addr) == (mu_a)) ; 
}
  mu__boolexpr82 = (mu__boolexpr83) ; 
}
if ( !(mu__boolexpr82) )
  { mu__quant81 = FALSE; break; }
};
};
  mu__boolexpr79 = (mu__quant81) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr77) {
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
    r = what_rule - 42;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_Trunk, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!((mu_i) > (1))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr84;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 54 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
  if (!((mu_i) > (1))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
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
    r = what_rule - 48;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr92;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr92 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Trunk, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!((mu_i) > (1))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr93;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 54;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 60 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_i) > (1))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr97) {
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
    r = what_rule - 54;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr101;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr101 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_Tip, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
  if (!((mu_i) > (1))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
bool mu__boolexpr107;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr107 = TRUE ;
  else {
  mu__boolexpr107 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr102 = (mu__boolexpr107) ; 
}
    return mu__boolexpr102;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 66 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!((mu_i) > (1))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
bool mu__boolexpr113;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr113 = TRUE ;
  else {
  mu__boolexpr113 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr108 = (mu__boolexpr113) ; 
}
	      if (mu__boolexpr108) {
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
    r = what_rule - 60;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_None_Branch, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
  if (!((mu_i) > (1))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
bool mu__quant119; 
mu__quant119 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr120;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr120) )
  { mu__quant119 = TRUE; break; }
};
};
  mu__boolexpr114 = (mu__quant119) ; 
}
    return mu__boolexpr114;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 66;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 72 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
  if (!((mu_i) > (1))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
bool mu__quant126; 
mu__quant126 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr127;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr127) )
  { mu__quant126 = TRUE; break; }
};
};
  mu__boolexpr121 = (mu__quant126) ; 
}
	      if (mu__boolexpr121) {
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
    r = what_rule - 66;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr128;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr128 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_Branch, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_i) > (1))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
bool mu__boolexpr134;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr134 = TRUE ;
  else {
  mu__boolexpr134 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr129 = (mu__boolexpr134) ; 
}
    return mu__boolexpr129;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 72;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 78 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr135;
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
  if (!((mu_i) > (1))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
bool mu__boolexpr140;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr140 = TRUE ;
  else {
  mu__boolexpr140 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr135 = (mu__boolexpr140) ; 
}
	      if (mu__boolexpr135) {
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
    r = what_rule - 72;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Tip_None, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
  if (!((mu_i) > (1))) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
bool mu__quant147; 
mu__quant147 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant147 = FALSE; break; }
};
};
  mu__boolexpr142 = (mu__quant147) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
bool mu__boolexpr148;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr148 = TRUE ;
  else {
  mu__boolexpr148 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr141 = (mu__boolexpr148) ; 
}
    return mu__boolexpr141;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 78;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 84 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!((mu_i) > (1))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
bool mu__quant155; 
mu__quant155 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant155 = FALSE; break; }
};
};
  mu__boolexpr150 = (mu__quant155) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
bool mu__boolexpr156;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr156 = TRUE ;
  else {
  mu__boolexpr156 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr149 = (mu__boolexpr156) ; 
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
    r = what_rule - 78;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Branch_Branch, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
  if (!((mu_i) > (1))) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
bool mu__quant162; 
mu__quant162 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr163;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr163) )
  { mu__quant162 = TRUE; break; }
};
};
  mu__boolexpr157 = (mu__quant162) ; 
}
    return mu__boolexpr157;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 84;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 90 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!((mu_i) > (1))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
bool mu__quant169; 
mu__quant169 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr170;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr170) )
  { mu__quant169 = TRUE; break; }
};
};
  mu__boolexpr164 = (mu__quant169) ; 
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
    r = what_rule - 84;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr171;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr171 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Branch_None, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!((mu_i) > (1))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
bool mu__quant178; 
mu__quant178 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant178 = FALSE; break; }
};
};
  mu__boolexpr173 = (mu__quant178) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
bool mu__boolexpr179;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr179 = TRUE ;
  else {
  mu__boolexpr179 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr172 = (mu__boolexpr179) ; 
}
    return mu__boolexpr172;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 90;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 96 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_i) > (1))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
bool mu__quant186; 
mu__quant186 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant186 = FALSE; break; }
};
};
  mu__boolexpr181 = (mu__quant186) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
bool mu__boolexpr187;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr187 = TRUE ;
  else {
  mu__boolexpr187 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr180 = (mu__boolexpr187) ; 
}
	      if (mu__boolexpr180) {
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
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_false;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_None_Branch/Tip, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
  if (!((mu_i) > (1))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
bool mu__quant193; 
mu__quant193 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr194;
bool mu__boolexpr195;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr195 = TRUE ;
  else {
  mu__boolexpr195 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr194) )
  { mu__quant193 = TRUE; break; }
};
};
  mu__boolexpr188 = (mu__quant193) ; 
}
    return mu__boolexpr188;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 96;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 102 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr196;
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
  if (!((mu_i) > (1))) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
bool mu__quant201; 
mu__quant201 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr202;
bool mu__boolexpr203;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr203 = TRUE ;
  else {
  mu__boolexpr203 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr202) )
  { mu__quant201 = TRUE; break; }
};
};
  mu__boolexpr196 = (mu__quant201) ; 
}
	      if (mu__boolexpr196) {
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
    r = what_rule - 96;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr204;
bool mu__boolexpr205;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr205 = TRUE ;
  else {
  mu__boolexpr205 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr204 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_None_Branch/Tip, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
  if (!((mu_i) > (1))) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
bool mu__quant211; 
mu__quant211 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr212;
bool mu__boolexpr213;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr213 = TRUE ;
  else {
  mu__boolexpr213 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr212) )
  { mu__quant211 = TRUE; break; }
};
};
  mu__boolexpr206 = (mu__quant211) ; 
}
    return mu__boolexpr206;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 102;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 108 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
bool mu__boolexpr218;
  if (!((mu_i) > (1))) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
bool mu__quant219; 
mu__quant219 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr220;
bool mu__boolexpr221;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr221 = TRUE ;
  else {
  mu__boolexpr221 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr220) )
  { mu__quant219 = TRUE; break; }
};
};
  mu__boolexpr214 = (mu__quant219) ; 
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
    r = what_rule - 102;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr222;
bool mu__boolexpr223;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr223 = TRUE ;
  else {
  mu__boolexpr223 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr222 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_None_None_None, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
  if (!((mu_i) > (1))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
bool mu__quant229; 
mu__quant229 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant229 = FALSE; break; }
};
};
  mu__boolexpr225 = (mu__quant229) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
bool mu__boolexpr230;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr230 = TRUE ;
  else {
  mu__boolexpr230 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr224 = (mu__boolexpr230) ; 
}
    return mu__boolexpr224;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 108;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 114 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr231;
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
  if (!((mu_i) > (1))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
bool mu__quant236; 
mu__quant236 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant236 = FALSE; break; }
};
};
  mu__boolexpr232 = (mu__quant236) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
bool mu__boolexpr237;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr237 = TRUE ;
  else {
  mu__boolexpr237 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr231 = (mu__boolexpr237) ; 
}
	      if (mu__boolexpr231) {
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
    r = what_rule - 108;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_NtoN;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ReleaseAck, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!((mu_i) > (1))) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr238;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 114;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 120 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr240;
bool mu__boolexpr241;
  if (!((mu_i) > (1))) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr240) {
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
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantData_toT, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
  if (!((mu_i) > (1))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr242;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 120;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 126 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
  if (!((mu_i) > (1))) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr245) {
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
    r = what_rule - 120;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantData_toB, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
  if (!((mu_i) > (1))) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr248;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 126;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 132 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
  if (!((mu_i) > (1))) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr251) {
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
    r = what_rule - 126;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Grant, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_i) > (1))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr254;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 132;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 138 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
  if (!((mu_i) > (1))) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr257) {
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
    r = what_rule - 132;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Branch_None_None, a:%s, b1:%s, i:%s", mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
  if (!((mu_i) > (1))) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
bool mu__quant266; 
mu__quant266 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant266 = FALSE; break; }
};
};
  mu__boolexpr261 = (mu__quant266) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr260;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 138;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 150 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
  if (!((mu_i) > (1))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
bool mu__quant273; 
mu__quant273 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant273 = FALSE; break; }
};
};
  mu__boolexpr268 = (mu__quant273) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr267) {
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
    r = what_rule - 138;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_Grant;
  };

};
/******************** RuleBase26 ********************/
class RuleBase26
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_None_None_None, a:%s, b1:%s, i:%s", mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
  if (!((mu_i) > (1))) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
bool mu__quant280; 
mu__quant280 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant280 = FALSE; break; }
};
};
  mu__boolexpr275 = (mu__quant280) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr274;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 150;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 162 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr281;
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
  if (!((mu_i) > (1))) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
bool mu__quant287; 
mu__quant287 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant287 = FALSE; break; }
};
};
  mu__boolexpr282 = (mu__quant287) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr281) {
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
    r = what_rule - 150;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
  };

};
/******************** RuleBase27 ********************/
class RuleBase27
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_None_None_None, a:%s, b1:%s, i:%s", mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!((mu_i) > (1))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
bool mu__quant294; 
mu__quant294 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant294 = FALSE; break; }
};
};
  mu__boolexpr289 = (mu__quant294) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr288;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 162;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 174 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr295;
bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
  if (!((mu_i) > (1))) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
bool mu__quant301; 
mu__quant301 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant301 = FALSE; break; }
};
};
  mu__boolexpr296 = (mu__quant301) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr295) {
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
    r = what_rule - 162;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
  };

};
/******************** RuleBase28 ********************/
class RuleBase28
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_None_None_None, a:%s, b1:%s, i:%s", mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
  if (!((mu_i) > (1))) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
bool mu__quant307; 
mu__quant307 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant307 = FALSE; break; }
};
};
  mu__boolexpr303 = (mu__quant307) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr302;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 174;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 186 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
  if (!((mu_i) > (1))) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
bool mu__quant313; 
mu__quant313 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant313 = FALSE; break; }
};
};
  mu__boolexpr309 = (mu__quant313) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr308) {
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
    r = what_rule - 174;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
  };

};
/******************** RuleBase29 ********************/
class RuleBase29
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_None_Branch_x, a:%s, b1:%s, i:%s", mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
  if (!((mu_i) > (1))) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr314;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 186;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 198 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
bool mu__boolexpr323;
  if (!((mu_i) > (1))) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr319) {
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
    r = what_rule - 186;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
  };

};
/******************** RuleBase30 ********************/
class RuleBase30
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Branch_x_x, a:%s, b1:%s, i:%s", mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!((mu_i) > (1))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr324;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 198;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 210 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr328;
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
  if (!((mu_i) > (1))) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr328) {
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
    r = what_rule - 198;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_Grant;
  };

};
/******************** RuleBase31 ********************/
class RuleBase31
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantAck, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr332;
  if (!((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck))) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr332;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 210;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 222 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr333;
  if (!((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr333) {
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
    r = what_rule - 210;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode = mu_E_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_S_None;
  };

};
/******************** RuleBase32 ********************/
class RuleBase32
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Release_TtoB, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr334;
bool mu__boolexpr335;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData))) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr334;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 222;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 234 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr336;
bool mu__boolexpr337;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData))) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr336) {
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
    r = what_rule - 222;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
mu_Tree[mu_i].mu_chanD[mu_b].mu_addr = mu_a;
  };

};
/******************** RuleBase33 ********************/
class RuleBase33
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Release_TtoN, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr338;
bool mu__boolexpr339;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData))) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr338;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 234;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 246 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr340;
bool mu__boolexpr341;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData))) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr340) {
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
    r = what_rule - 234;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
mu_Tree[mu_i].mu_chanD[mu_b].mu_addr = mu_a;
  };

};
/******************** RuleBase34 ********************/
class RuleBase34
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Release_BtoN, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr342;
bool mu__boolexpr343;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData))) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr342;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 246;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 258 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr344;
bool mu__boolexpr345;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData))) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr344) {
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
    r = what_rule - 246;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
if ( (mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None) )
{
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
}
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
  };

};
/******************** RuleBase35 ********************/
class RuleBase35
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAckData_TtoB, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr346;
bool mu__boolexpr347;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr346;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 258;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 270 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr348;
bool mu__boolexpr349;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr348) {
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
    r = what_rule - 258;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_S_None;
  };

};
/******************** RuleBase36 ********************/
class RuleBase36
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAckData_TtoN, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr350;
bool mu__boolexpr351;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr350;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 270;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 282 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr352;
bool mu__boolexpr353;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr352) {
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
    r = what_rule - 270;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_S_None;
  };

};
/******************** RuleBase37 ********************/
class RuleBase37
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_BtoB, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr354;
bool mu__boolexpr355;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoB)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr354;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 282;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 294 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr356;
bool mu__boolexpr357;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoB)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr356) {
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
    r = what_rule - 282;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
if ( (mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None) )
{
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
}
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_S_None;
  };

};
/******************** RuleBase38 ********************/
class RuleBase38
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_BtoN, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr358;
bool mu__boolexpr359;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr358;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 294;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 306 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr360;
bool mu__boolexpr361;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr360) {
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
    r = what_rule - 294;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
if ( (mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None) )
{
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
}
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_S_None;
  };

};
/******************** RuleBase39 ********************/
class RuleBase39
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_NtoN, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr362;
bool mu__boolexpr363;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr362;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 306;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 318 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr364;
bool mu__boolexpr365;
  if (!((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData))) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr364) {
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
    r = what_rule - 306;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_S_None;
  };

};
/******************** RuleBase40 ********************/
class RuleBase40
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_x_None_Tip, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
bool mu__quant370; 
mu__quant370 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!((mu_k) != (mu_b))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr371) )
  { mu__quant370 = TRUE; break; }
};
};
  mu__boolexpr366 = (mu__quant370) ; 
}
    return mu__boolexpr366;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 318;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 330 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
bool mu__quant377; 
mu__quant377 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr378;
bool mu__boolexpr379;
  if (!((mu_k) != (mu_b))) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr378) )
  { mu__quant377 = TRUE; break; }
};
};
  mu__boolexpr373 = (mu__quant377) ; 
}
	      if (mu__boolexpr373) {
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
    r = what_rule - 318;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr380;
  if (!((mu_k) != (mu_b))) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
if ( mu__boolexpr380 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
  };

};
/******************** RuleBase41 ********************/
class RuleBase41
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Tip_x_Branch, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr381;
bool mu__boolexpr382;
bool mu__boolexpr383;
bool mu__boolexpr384;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
bool mu__quant385; 
mu__quant385 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr386;
bool mu__boolexpr387;
  if (!((mu_k) != (mu_b))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr386) )
  { mu__quant385 = TRUE; break; }
};
};
  mu__boolexpr381 = (mu__quant385) ; 
}
    return mu__boolexpr381;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 330;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 342 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr388;
bool mu__boolexpr389;
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
bool mu__quant392; 
mu__quant392 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr393;
bool mu__boolexpr394;
  if (!((mu_k) != (mu_b))) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr393) )
  { mu__quant392 = TRUE; break; }
};
};
  mu__boolexpr388 = (mu__quant392) ; 
}
	      if (mu__boolexpr388) {
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
    r = what_rule - 330;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr395;
bool mu__boolexpr396;
  if (!((mu_k) != (mu_b))) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr395 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
  };

};
/******************** RuleBase42 ********************/
class RuleBase42
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Tip_None_None, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
bool mu__quant401; 
mu__quant401 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr402;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None))) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr402) )
  { mu__quant401 = FALSE; break; }
};
};
  mu__boolexpr397 = (mu__quant401) ; 
}
    return mu__boolexpr397;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 342;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 354 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr403;
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
bool mu__quant407; 
mu__quant407 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr408;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None))) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr408) )
  { mu__quant407 = FALSE; break; }
};
};
  mu__boolexpr403 = (mu__quant407) ; 
}
	      if (mu__boolexpr403) {
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
    r = what_rule - 342;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode = mu_A_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_GrantData;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toT;
mu_Tree[mu_i].mu_chanD[mu_b].mu_addr = mu_a;
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Trunk;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Tip;
  };

};
/******************** RuleBase43 ********************/
class RuleBase43
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_None_Branch, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr409;
bool mu__boolexpr410;
bool mu__boolexpr411;
bool mu__boolexpr412;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
bool mu__quant413; 
mu__quant413 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr414;
bool mu__boolexpr415;
  if (!((mu_k) != (mu_b))) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr414) )
  { mu__quant413 = TRUE; break; }
};
};
  mu__boolexpr409 = (mu__quant413) ; 
}
    return mu__boolexpr409;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 354;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 366 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
bool mu__quant420; 
mu__quant420 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr421;
bool mu__boolexpr422;
  if (!((mu_k) != (mu_b))) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr421) )
  { mu__quant420 = TRUE; break; }
};
};
  mu__boolexpr416 = (mu__quant420) ; 
}
	      if (mu__boolexpr416) {
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
    r = what_rule - 354;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr423;
bool mu__boolexpr424;
  if (!((mu_k) != (mu_b))) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr423 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
  };

};
/******************** RuleBase44 ********************/
class RuleBase44
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_x_None_Tip, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
bool mu__quant428; 
mu__quant428 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr429;
bool mu__boolexpr430;
  if (!((mu_k) != (mu_b))) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr429) )
  { mu__quant428 = TRUE; break; }
};
};
  mu__boolexpr425 = (mu__quant428) ; 
}
    return mu__boolexpr425;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 366;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 378 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr431;
bool mu__boolexpr432;
bool mu__boolexpr433;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
bool mu__quant434; 
mu__quant434 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!((mu_k) != (mu_b))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr435) )
  { mu__quant434 = TRUE; break; }
};
};
  mu__boolexpr431 = (mu__quant434) ; 
}
	      if (mu__boolexpr431) {
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
    r = what_rule - 366;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr437;
bool mu__boolexpr438;
  if (!((mu_k) != (mu_b))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr437 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
  };

};
/******************** RuleBase45 ********************/
class RuleBase45
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr439;
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
bool mu__boolexpr443;
  if ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) mu__boolexpr443 = TRUE ;
  else {
  mu__boolexpr443 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr440 = (mu__boolexpr443) ; 
}
  if (!(mu__boolexpr440)) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a]) == (mu_S_None)) ; 
}
    return mu__boolexpr439;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 378;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 390 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
bool mu__boolexpr447;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock))) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
bool mu__boolexpr448;
  if ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) mu__boolexpr448 = TRUE ;
  else {
  mu__boolexpr448 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr445 = (mu__boolexpr448) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a]) == (mu_S_None)) ; 
}
	      if (mu__boolexpr444) {
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
    r = what_rule - 378;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode = mu_A_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_GrantData;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanD[mu_b].mu_addr = mu_a;
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Branch;
  };

};
/******************** RuleBase46 ********************/
class RuleBase46
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_x_None_Tip, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
bool mu__quant452; 
mu__quant452 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr453;
bool mu__boolexpr454;
  if (!((mu_k) != (mu_b))) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr453) )
  { mu__quant452 = TRUE; break; }
};
};
  mu__boolexpr449 = (mu__quant452) ; 
}
    return mu__boolexpr449;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 390;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 402 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
bool mu__quant458; 
mu__quant458 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr459;
bool mu__boolexpr460;
  if (!((mu_k) != (mu_b))) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr459) )
  { mu__quant458 = TRUE; break; }
};
};
  mu__boolexpr455 = (mu__quant458) ; 
}
	      if (mu__boolexpr455) {
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
    r = what_rule - 390;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr461;
bool mu__boolexpr462;
  if (!((mu_k) != (mu_b))) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr461 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
  };

};
/******************** RuleBase47 ********************/
class RuleBase47
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_x_Branch, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr463;
bool mu__boolexpr464;
bool mu__boolexpr465;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
bool mu__quant466; 
mu__quant466 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr467;
bool mu__boolexpr468;
  if (!((mu_k) != (mu_b))) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr467) )
  { mu__quant466 = TRUE; break; }
};
};
  mu__boolexpr463 = (mu__quant466) ; 
}
    return mu__boolexpr463;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 402;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 414 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr469;
bool mu__boolexpr470;
bool mu__boolexpr471;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
bool mu__quant472; 
mu__quant472 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr473;
bool mu__boolexpr474;
  if (!((mu_k) != (mu_b))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr473) )
  { mu__quant472 = TRUE; break; }
};
};
  mu__boolexpr469 = (mu__quant472) ; 
}
	      if (mu__boolexpr469) {
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
    r = what_rule - 402;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr475;
bool mu__boolexpr476;
  if (!((mu_k) != (mu_b))) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( mu__boolexpr475 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAckData;
}
};
};
  };

};
/******************** RuleBase48 ********************/
class RuleBase48
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_None_None, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
bool mu__quant481; 
mu__quant481 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr482;
bool mu__boolexpr483;
  if (!((mu_k) != (mu_b))) mu__boolexpr483 = TRUE ;
  else {
  mu__boolexpr483 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr482) )
  { mu__quant481 = FALSE; break; }
};
};
  mu__boolexpr478 = (mu__quant481) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
    return mu__boolexpr477;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 414;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 426 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr484;
bool mu__boolexpr485;
bool mu__boolexpr486;
bool mu__boolexpr487;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
bool mu__quant488; 
mu__quant488 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr489;
bool mu__boolexpr490;
  if (!((mu_k) != (mu_b))) mu__boolexpr490 = TRUE ;
  else {
  mu__boolexpr490 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr489) )
  { mu__quant488 = FALSE; break; }
};
};
  mu__boolexpr485 = (mu__quant488) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
	      if (mu__boolexpr484) {
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
    r = what_rule - 414;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode = mu_A_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_GrantData;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toT;
mu_Tree[mu_i].mu_chanD[mu_b].mu_addr = mu_a;
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Trunk;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
  };

};
/******************** RuleBase49 ********************/
class RuleBase49
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_Branch_None, a:%s, b:%s, i:%s", mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr491;
bool mu__boolexpr492;
bool mu__boolexpr493;
bool mu__boolexpr494;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
bool mu__quant495; 
mu__quant495 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr496;
bool mu__boolexpr497;
  if (!((mu_k) != (mu_b))) mu__boolexpr497 = TRUE ;
  else {
  mu__boolexpr497 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr496) )
  { mu__quant495 = FALSE; break; }
};
};
  mu__boolexpr492 = (mu__quant495) ; 
}
  if (!(mu__boolexpr492)) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
    return mu__boolexpr491;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 426;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 438 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr498;
bool mu__boolexpr499;
bool mu__boolexpr500;
bool mu__boolexpr501;
  if (!((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm))) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr501)) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
bool mu__quant502; 
mu__quant502 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr503;
bool mu__boolexpr504;
  if (!((mu_k) != (mu_b))) mu__boolexpr504 = TRUE ;
  else {
  mu__boolexpr504 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr503) )
  { mu__quant502 = FALSE; break; }
};
};
  mu__boolexpr499 = (mu__quant502) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
	      if (mu__boolexpr498) {
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
    r = what_rule - 426;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode = mu_A_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_Grant;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toT;
mu_Tree[mu_i].mu_chanD[mu_b].mu_addr = mu_a;
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Trunk;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
  };

};
/******************** RuleBase50 ********************/
class RuleBase50
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("receive_ReleaseAck, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr505;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck))) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr505;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 438;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 446 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr506;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck))) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr506) {
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
    r = what_rule - 438;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
  };

};
/******************** RuleBase51 ********************/
class RuleBase51
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_TtoB, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
bool mu__boolexpr511;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr511 = TRUE ;
  else {
  mu__boolexpr511 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr508 = (mu__boolexpr511) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr507;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 446;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 454 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
bool mu__boolexpr515;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
bool mu__boolexpr516;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr516 = TRUE ;
  else {
  mu__boolexpr516 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr513 = (mu__boolexpr516) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr512) {
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
    r = what_rule - 446;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_false;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
  };

};
/******************** RuleBase52 ********************/
class RuleBase52
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_TtoN, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
bool mu__boolexpr520;
bool mu__boolexpr521;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr520)) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
bool mu__boolexpr522;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr522 = TRUE ;
  else {
  mu__boolexpr522 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr518 = (mu__boolexpr522) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr517;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 454;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 462 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr523;
bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
bool mu__boolexpr527;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
bool mu__boolexpr528;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr528 = TRUE ;
  else {
  mu__boolexpr528 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr524 = (mu__boolexpr528) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr523) {
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
    r = what_rule - 454;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_Tree[mu_i].mu_cache[mu_a].mu_dirty;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_false;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
  };

};
/******************** RuleBase53 ********************/
class RuleBase53
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_BtoB, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
bool mu__boolexpr533;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr533)) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
bool mu__boolexpr534;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr534 = TRUE ;
  else {
  mu__boolexpr534 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr530 = (mu__boolexpr534) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr529;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 462;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 470 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr535;
bool mu__boolexpr536;
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
bool mu__boolexpr540;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr540 = TRUE ;
  else {
  mu__boolexpr540 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr536 = (mu__boolexpr540) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr535) {
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
    r = what_rule - 462;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
  };

};
/******************** RuleBase54 ********************/
class RuleBase54
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_BtoN, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr541;
bool mu__boolexpr542;
bool mu__boolexpr543;
bool mu__boolexpr544;
bool mu__boolexpr545;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
bool mu__boolexpr546;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr546 = TRUE ;
  else {
  mu__boolexpr546 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr542 = (mu__boolexpr546) ; 
}
  if (!(mu__boolexpr542)) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr541;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 470;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 478 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr547;
bool mu__boolexpr548;
bool mu__boolexpr549;
bool mu__boolexpr550;
bool mu__boolexpr551;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe))) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr551)) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
bool mu__boolexpr552;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr552 = TRUE ;
  else {
  mu__boolexpr552 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr548 = (mu__boolexpr552) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr547) {
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
    r = what_rule - 470;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
  };

};
/******************** RuleBase55 ********************/
class RuleBase55
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_NtoN, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) mu__boolexpr558 = TRUE ;
  else {
  mu__boolexpr558 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
bool mu__boolexpr559;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) mu__boolexpr559 = TRUE ;
  else {
  mu__boolexpr559 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr556 = (mu__boolexpr559) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
bool mu__boolexpr560;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr560 = TRUE ;
  else {
  mu__boolexpr560 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr554 = (mu__boolexpr560) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
    return mu__boolexpr553;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 478;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 486 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr561;
bool mu__boolexpr562;
bool mu__boolexpr563;
bool mu__boolexpr564;
bool mu__boolexpr565;
bool mu__boolexpr566;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) mu__boolexpr566 = TRUE ;
  else {
  mu__boolexpr566 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
bool mu__boolexpr567;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) mu__boolexpr567 = TRUE ;
  else {
  mu__boolexpr567 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr564 = (mu__boolexpr567) ; 
}
  if (!(mu__boolexpr564)) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
bool mu__boolexpr568;
  if ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) mu__boolexpr568 = TRUE ;
  else {
  mu__boolexpr568 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr562 = (mu__boolexpr568) ; 
}
  if (!(mu__boolexpr562)) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr561) {
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
    r = what_rule - 478;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_NtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
  };

};
/******************** RuleBase56 ********************/
class RuleBase56
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_GrantData_toT, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr569;
bool mu__boolexpr570;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData))) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr569;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 486;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 494 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr571;
bool mu__boolexpr572;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData))) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr571) {
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
    r = what_rule - 486;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
  };

};
/******************** RuleBase57 ********************/
class RuleBase57
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_GrantData_toB, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr573;
bool mu__boolexpr574;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData))) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr573;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 494;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 502 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr575;
bool mu__boolexpr576;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData))) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr575) {
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
    r = what_rule - 494;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
  };

};
/******************** RuleBase58 ********************/
class RuleBase58
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Grant_toT, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr577;
bool mu__boolexpr578;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant))) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr577;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 502;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 510 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr579;
bool mu__boolexpr580;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant))) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr579) {
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
    r = what_rule - 502;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_Tip;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
  };

};
/******************** RuleBase59 ********************/
class RuleBase59
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release_TtoN, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr581;
bool mu__boolexpr582;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr581;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 510;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 518 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr583;
bool mu__boolexpr584;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip))) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr583) {
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
    r = what_rule - 510;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
  };

};
/******************** RuleBase60 ********************/
class RuleBase60
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release_BtoN, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr585;
bool mu__boolexpr586;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr585;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 518;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 526 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr587;
bool mu__boolexpr588;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr587) {
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
    r = what_rule - 518;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_a].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_a].mu_state = mu_None;
  };

};
/******************** RuleBase61 ********************/
class RuleBase61
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquireBlock_toT, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr589;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr589;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 526;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 534 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr590;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr590) {
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
    r = what_rule - 526;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
  };

};
/******************** RuleBase62 ********************/
class RuleBase62
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquirePerm_toT, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr591;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr591;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 534;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 542 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr592;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Branch))) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr592) {
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
    r = what_rule - 534;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_Grant;
  };

};
/******************** RuleBase63 ********************/
class RuleBase63
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquireBlock_toB, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr593;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
    return mu__boolexpr593;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 542;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 550 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr594;
  if (!((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_None))) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) == (mu_M_None)) ; 
}
	      if (mu__boolexpr594) {
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
    r = what_rule - 542;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
  };

};
/******************** RuleBase64 ********************/
class RuleBase64
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("Store, d:%s, a:%s, i:%s", mu_d.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return (mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 550;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 566 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Tree[mu_i].mu_cache[mu_a].mu_state) == (mu_Tip)) {
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
    r = what_rule - 550;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_a].mu_data = mu_d;
mu_Tree[mu_i].mu_cache[mu_a].mu_dirty = mu_true;
mu_auxData[mu_a] = mu_d;
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
  RuleBase26 R26;
  RuleBase27 R27;
  RuleBase28 R28;
  RuleBase29 R29;
  RuleBase30 R30;
  RuleBase31 R31;
  RuleBase32 R32;
  RuleBase33 R33;
  RuleBase34 R34;
  RuleBase35 R35;
  RuleBase36 R36;
  RuleBase37 R37;
  RuleBase38 R38;
  RuleBase39 R39;
  RuleBase40 R40;
  RuleBase41 R41;
  RuleBase42 R42;
  RuleBase43 R43;
  RuleBase44 R44;
  RuleBase45 R45;
  RuleBase46 R46;
  RuleBase47 R47;
  RuleBase48 R48;
  RuleBase49 R49;
  RuleBase50 R50;
  RuleBase51 R51;
  RuleBase52 R52;
  RuleBase53 R53;
  RuleBase54 R54;
  RuleBase55 R55;
  RuleBase56 R56;
  RuleBase57 R57;
  RuleBase58 R58;
  RuleBase59 R59;
  RuleBase60 R60;
  RuleBase61 R61;
  RuleBase62 R62;
  RuleBase63 R63;
  RuleBase64 R64;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<4)
    { R0.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<8)
    { R1.NextRule(what_rule);
      if (what_rule<8) return; }
  if (what_rule>=8 && what_rule<12)
    { R2.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<16)
    { R3.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<18)
    { R4.NextRule(what_rule);
      if (what_rule<18) return; }
  if (what_rule>=18 && what_rule<24)
    { R5.NextRule(what_rule);
      if (what_rule<24) return; }
  if (what_rule>=24 && what_rule<30)
    { R6.NextRule(what_rule);
      if (what_rule<30) return; }
  if (what_rule>=30 && what_rule<36)
    { R7.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<42)
    { R8.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<48)
    { R9.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<54)
    { R10.NextRule(what_rule);
      if (what_rule<54) return; }
  if (what_rule>=54 && what_rule<60)
    { R11.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<66)
    { R12.NextRule(what_rule);
      if (what_rule<66) return; }
  if (what_rule>=66 && what_rule<72)
    { R13.NextRule(what_rule);
      if (what_rule<72) return; }
  if (what_rule>=72 && what_rule<78)
    { R14.NextRule(what_rule);
      if (what_rule<78) return; }
  if (what_rule>=78 && what_rule<84)
    { R15.NextRule(what_rule);
      if (what_rule<84) return; }
  if (what_rule>=84 && what_rule<90)
    { R16.NextRule(what_rule);
      if (what_rule<90) return; }
  if (what_rule>=90 && what_rule<96)
    { R17.NextRule(what_rule);
      if (what_rule<96) return; }
  if (what_rule>=96 && what_rule<102)
    { R18.NextRule(what_rule);
      if (what_rule<102) return; }
  if (what_rule>=102 && what_rule<108)
    { R19.NextRule(what_rule);
      if (what_rule<108) return; }
  if (what_rule>=108 && what_rule<114)
    { R20.NextRule(what_rule);
      if (what_rule<114) return; }
  if (what_rule>=114 && what_rule<120)
    { R21.NextRule(what_rule);
      if (what_rule<120) return; }
  if (what_rule>=120 && what_rule<126)
    { R22.NextRule(what_rule);
      if (what_rule<126) return; }
  if (what_rule>=126 && what_rule<132)
    { R23.NextRule(what_rule);
      if (what_rule<132) return; }
  if (what_rule>=132 && what_rule<138)
    { R24.NextRule(what_rule);
      if (what_rule<138) return; }
  if (what_rule>=138 && what_rule<150)
    { R25.NextRule(what_rule);
      if (what_rule<150) return; }
  if (what_rule>=150 && what_rule<162)
    { R26.NextRule(what_rule);
      if (what_rule<162) return; }
  if (what_rule>=162 && what_rule<174)
    { R27.NextRule(what_rule);
      if (what_rule<174) return; }
  if (what_rule>=174 && what_rule<186)
    { R28.NextRule(what_rule);
      if (what_rule<186) return; }
  if (what_rule>=186 && what_rule<198)
    { R29.NextRule(what_rule);
      if (what_rule<198) return; }
  if (what_rule>=198 && what_rule<210)
    { R30.NextRule(what_rule);
      if (what_rule<210) return; }
  if (what_rule>=210 && what_rule<222)
    { R31.NextRule(what_rule);
      if (what_rule<222) return; }
  if (what_rule>=222 && what_rule<234)
    { R32.NextRule(what_rule);
      if (what_rule<234) return; }
  if (what_rule>=234 && what_rule<246)
    { R33.NextRule(what_rule);
      if (what_rule<246) return; }
  if (what_rule>=246 && what_rule<258)
    { R34.NextRule(what_rule);
      if (what_rule<258) return; }
  if (what_rule>=258 && what_rule<270)
    { R35.NextRule(what_rule);
      if (what_rule<270) return; }
  if (what_rule>=270 && what_rule<282)
    { R36.NextRule(what_rule);
      if (what_rule<282) return; }
  if (what_rule>=282 && what_rule<294)
    { R37.NextRule(what_rule);
      if (what_rule<294) return; }
  if (what_rule>=294 && what_rule<306)
    { R38.NextRule(what_rule);
      if (what_rule<306) return; }
  if (what_rule>=306 && what_rule<318)
    { R39.NextRule(what_rule);
      if (what_rule<318) return; }
  if (what_rule>=318 && what_rule<330)
    { R40.NextRule(what_rule);
      if (what_rule<330) return; }
  if (what_rule>=330 && what_rule<342)
    { R41.NextRule(what_rule);
      if (what_rule<342) return; }
  if (what_rule>=342 && what_rule<354)
    { R42.NextRule(what_rule);
      if (what_rule<354) return; }
  if (what_rule>=354 && what_rule<366)
    { R43.NextRule(what_rule);
      if (what_rule<366) return; }
  if (what_rule>=366 && what_rule<378)
    { R44.NextRule(what_rule);
      if (what_rule<378) return; }
  if (what_rule>=378 && what_rule<390)
    { R45.NextRule(what_rule);
      if (what_rule<390) return; }
  if (what_rule>=390 && what_rule<402)
    { R46.NextRule(what_rule);
      if (what_rule<402) return; }
  if (what_rule>=402 && what_rule<414)
    { R47.NextRule(what_rule);
      if (what_rule<414) return; }
  if (what_rule>=414 && what_rule<426)
    { R48.NextRule(what_rule);
      if (what_rule<426) return; }
  if (what_rule>=426 && what_rule<438)
    { R49.NextRule(what_rule);
      if (what_rule<438) return; }
  if (what_rule>=438 && what_rule<446)
    { R50.NextRule(what_rule);
      if (what_rule<446) return; }
  if (what_rule>=446 && what_rule<454)
    { R51.NextRule(what_rule);
      if (what_rule<454) return; }
  if (what_rule>=454 && what_rule<462)
    { R52.NextRule(what_rule);
      if (what_rule<462) return; }
  if (what_rule>=462 && what_rule<470)
    { R53.NextRule(what_rule);
      if (what_rule<470) return; }
  if (what_rule>=470 && what_rule<478)
    { R54.NextRule(what_rule);
      if (what_rule<478) return; }
  if (what_rule>=478 && what_rule<486)
    { R55.NextRule(what_rule);
      if (what_rule<486) return; }
  if (what_rule>=486 && what_rule<494)
    { R56.NextRule(what_rule);
      if (what_rule<494) return; }
  if (what_rule>=494 && what_rule<502)
    { R57.NextRule(what_rule);
      if (what_rule<502) return; }
  if (what_rule>=502 && what_rule<510)
    { R58.NextRule(what_rule);
      if (what_rule<510) return; }
  if (what_rule>=510 && what_rule<518)
    { R59.NextRule(what_rule);
      if (what_rule<518) return; }
  if (what_rule>=518 && what_rule<526)
    { R60.NextRule(what_rule);
      if (what_rule<526) return; }
  if (what_rule>=526 && what_rule<534)
    { R61.NextRule(what_rule);
      if (what_rule<534) return; }
  if (what_rule>=534 && what_rule<542)
    { R62.NextRule(what_rule);
      if (what_rule<542) return; }
  if (what_rule>=542 && what_rule<550)
    { R63.NextRule(what_rule);
      if (what_rule<550) return; }
  if (what_rule>=550 && what_rule<566)
    { R64.NextRule(what_rule);
      if (what_rule<566) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=3) return R0.Condition(r-0);
  if (r>=4 && r<=7) return R1.Condition(r-4);
  if (r>=8 && r<=11) return R2.Condition(r-8);
  if (r>=12 && r<=15) return R3.Condition(r-12);
  if (r>=16 && r<=17) return R4.Condition(r-16);
  if (r>=18 && r<=23) return R5.Condition(r-18);
  if (r>=24 && r<=29) return R6.Condition(r-24);
  if (r>=30 && r<=35) return R7.Condition(r-30);
  if (r>=36 && r<=41) return R8.Condition(r-36);
  if (r>=42 && r<=47) return R9.Condition(r-42);
  if (r>=48 && r<=53) return R10.Condition(r-48);
  if (r>=54 && r<=59) return R11.Condition(r-54);
  if (r>=60 && r<=65) return R12.Condition(r-60);
  if (r>=66 && r<=71) return R13.Condition(r-66);
  if (r>=72 && r<=77) return R14.Condition(r-72);
  if (r>=78 && r<=83) return R15.Condition(r-78);
  if (r>=84 && r<=89) return R16.Condition(r-84);
  if (r>=90 && r<=95) return R17.Condition(r-90);
  if (r>=96 && r<=101) return R18.Condition(r-96);
  if (r>=102 && r<=107) return R19.Condition(r-102);
  if (r>=108 && r<=113) return R20.Condition(r-108);
  if (r>=114 && r<=119) return R21.Condition(r-114);
  if (r>=120 && r<=125) return R22.Condition(r-120);
  if (r>=126 && r<=131) return R23.Condition(r-126);
  if (r>=132 && r<=137) return R24.Condition(r-132);
  if (r>=138 && r<=149) return R25.Condition(r-138);
  if (r>=150 && r<=161) return R26.Condition(r-150);
  if (r>=162 && r<=173) return R27.Condition(r-162);
  if (r>=174 && r<=185) return R28.Condition(r-174);
  if (r>=186 && r<=197) return R29.Condition(r-186);
  if (r>=198 && r<=209) return R30.Condition(r-198);
  if (r>=210 && r<=221) return R31.Condition(r-210);
  if (r>=222 && r<=233) return R32.Condition(r-222);
  if (r>=234 && r<=245) return R33.Condition(r-234);
  if (r>=246 && r<=257) return R34.Condition(r-246);
  if (r>=258 && r<=269) return R35.Condition(r-258);
  if (r>=270 && r<=281) return R36.Condition(r-270);
  if (r>=282 && r<=293) return R37.Condition(r-282);
  if (r>=294 && r<=305) return R38.Condition(r-294);
  if (r>=306 && r<=317) return R39.Condition(r-306);
  if (r>=318 && r<=329) return R40.Condition(r-318);
  if (r>=330 && r<=341) return R41.Condition(r-330);
  if (r>=342 && r<=353) return R42.Condition(r-342);
  if (r>=354 && r<=365) return R43.Condition(r-354);
  if (r>=366 && r<=377) return R44.Condition(r-366);
  if (r>=378 && r<=389) return R45.Condition(r-378);
  if (r>=390 && r<=401) return R46.Condition(r-390);
  if (r>=402 && r<=413) return R47.Condition(r-402);
  if (r>=414 && r<=425) return R48.Condition(r-414);
  if (r>=426 && r<=437) return R49.Condition(r-426);
  if (r>=438 && r<=445) return R50.Condition(r-438);
  if (r>=446 && r<=453) return R51.Condition(r-446);
  if (r>=454 && r<=461) return R52.Condition(r-454);
  if (r>=462 && r<=469) return R53.Condition(r-462);
  if (r>=470 && r<=477) return R54.Condition(r-470);
  if (r>=478 && r<=485) return R55.Condition(r-478);
  if (r>=486 && r<=493) return R56.Condition(r-486);
  if (r>=494 && r<=501) return R57.Condition(r-494);
  if (r>=502 && r<=509) return R58.Condition(r-502);
  if (r>=510 && r<=517) return R59.Condition(r-510);
  if (r>=518 && r<=525) return R60.Condition(r-518);
  if (r>=526 && r<=533) return R61.Condition(r-526);
  if (r>=534 && r<=541) return R62.Condition(r-534);
  if (r>=542 && r<=549) return R63.Condition(r-542);
  if (r>=550 && r<=565) return R64.Condition(r-550);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=3) { R0.Code(r-0); return; } 
  if (r>=4 && r<=7) { R1.Code(r-4); return; } 
  if (r>=8 && r<=11) { R2.Code(r-8); return; } 
  if (r>=12 && r<=15) { R3.Code(r-12); return; } 
  if (r>=16 && r<=17) { R4.Code(r-16); return; } 
  if (r>=18 && r<=23) { R5.Code(r-18); return; } 
  if (r>=24 && r<=29) { R6.Code(r-24); return; } 
  if (r>=30 && r<=35) { R7.Code(r-30); return; } 
  if (r>=36 && r<=41) { R8.Code(r-36); return; } 
  if (r>=42 && r<=47) { R9.Code(r-42); return; } 
  if (r>=48 && r<=53) { R10.Code(r-48); return; } 
  if (r>=54 && r<=59) { R11.Code(r-54); return; } 
  if (r>=60 && r<=65) { R12.Code(r-60); return; } 
  if (r>=66 && r<=71) { R13.Code(r-66); return; } 
  if (r>=72 && r<=77) { R14.Code(r-72); return; } 
  if (r>=78 && r<=83) { R15.Code(r-78); return; } 
  if (r>=84 && r<=89) { R16.Code(r-84); return; } 
  if (r>=90 && r<=95) { R17.Code(r-90); return; } 
  if (r>=96 && r<=101) { R18.Code(r-96); return; } 
  if (r>=102 && r<=107) { R19.Code(r-102); return; } 
  if (r>=108 && r<=113) { R20.Code(r-108); return; } 
  if (r>=114 && r<=119) { R21.Code(r-114); return; } 
  if (r>=120 && r<=125) { R22.Code(r-120); return; } 
  if (r>=126 && r<=131) { R23.Code(r-126); return; } 
  if (r>=132 && r<=137) { R24.Code(r-132); return; } 
  if (r>=138 && r<=149) { R25.Code(r-138); return; } 
  if (r>=150 && r<=161) { R26.Code(r-150); return; } 
  if (r>=162 && r<=173) { R27.Code(r-162); return; } 
  if (r>=174 && r<=185) { R28.Code(r-174); return; } 
  if (r>=186 && r<=197) { R29.Code(r-186); return; } 
  if (r>=198 && r<=209) { R30.Code(r-198); return; } 
  if (r>=210 && r<=221) { R31.Code(r-210); return; } 
  if (r>=222 && r<=233) { R32.Code(r-222); return; } 
  if (r>=234 && r<=245) { R33.Code(r-234); return; } 
  if (r>=246 && r<=257) { R34.Code(r-246); return; } 
  if (r>=258 && r<=269) { R35.Code(r-258); return; } 
  if (r>=270 && r<=281) { R36.Code(r-270); return; } 
  if (r>=282 && r<=293) { R37.Code(r-282); return; } 
  if (r>=294 && r<=305) { R38.Code(r-294); return; } 
  if (r>=306 && r<=317) { R39.Code(r-306); return; } 
  if (r>=318 && r<=329) { R40.Code(r-318); return; } 
  if (r>=330 && r<=341) { R41.Code(r-330); return; } 
  if (r>=342 && r<=353) { R42.Code(r-342); return; } 
  if (r>=354 && r<=365) { R43.Code(r-354); return; } 
  if (r>=366 && r<=377) { R44.Code(r-366); return; } 
  if (r>=378 && r<=389) { R45.Code(r-378); return; } 
  if (r>=390 && r<=401) { R46.Code(r-390); return; } 
  if (r>=402 && r<=413) { R47.Code(r-402); return; } 
  if (r>=414 && r<=425) { R48.Code(r-414); return; } 
  if (r>=426 && r<=437) { R49.Code(r-426); return; } 
  if (r>=438 && r<=445) { R50.Code(r-438); return; } 
  if (r>=446 && r<=453) { R51.Code(r-446); return; } 
  if (r>=454 && r<=461) { R52.Code(r-454); return; } 
  if (r>=462 && r<=469) { R53.Code(r-462); return; } 
  if (r>=470 && r<=477) { R54.Code(r-470); return; } 
  if (r>=478 && r<=485) { R55.Code(r-478); return; } 
  if (r>=486 && r<=493) { R56.Code(r-486); return; } 
  if (r>=494 && r<=501) { R57.Code(r-494); return; } 
  if (r>=502 && r<=509) { R58.Code(r-502); return; } 
  if (r>=510 && r<=517) { R59.Code(r-510); return; } 
  if (r>=518 && r<=525) { R60.Code(r-518); return; } 
  if (r>=526 && r<=533) { R61.Code(r-526); return; } 
  if (r>=534 && r<=541) { R62.Code(r-534); return; } 
  if (r>=542 && r<=549) { R63.Code(r-542); return; } 
  if (r>=550 && r<=565) { R64.Code(r-550); return; } 
}
int Priority(unsigned short r)
{
  if (r<=3) { return R0.Priority(); } 
  if (r>=4 && r<=7) { return R1.Priority(); } 
  if (r>=8 && r<=11) { return R2.Priority(); } 
  if (r>=12 && r<=15) { return R3.Priority(); } 
  if (r>=16 && r<=17) { return R4.Priority(); } 
  if (r>=18 && r<=23) { return R5.Priority(); } 
  if (r>=24 && r<=29) { return R6.Priority(); } 
  if (r>=30 && r<=35) { return R7.Priority(); } 
  if (r>=36 && r<=41) { return R8.Priority(); } 
  if (r>=42 && r<=47) { return R9.Priority(); } 
  if (r>=48 && r<=53) { return R10.Priority(); } 
  if (r>=54 && r<=59) { return R11.Priority(); } 
  if (r>=60 && r<=65) { return R12.Priority(); } 
  if (r>=66 && r<=71) { return R13.Priority(); } 
  if (r>=72 && r<=77) { return R14.Priority(); } 
  if (r>=78 && r<=83) { return R15.Priority(); } 
  if (r>=84 && r<=89) { return R16.Priority(); } 
  if (r>=90 && r<=95) { return R17.Priority(); } 
  if (r>=96 && r<=101) { return R18.Priority(); } 
  if (r>=102 && r<=107) { return R19.Priority(); } 
  if (r>=108 && r<=113) { return R20.Priority(); } 
  if (r>=114 && r<=119) { return R21.Priority(); } 
  if (r>=120 && r<=125) { return R22.Priority(); } 
  if (r>=126 && r<=131) { return R23.Priority(); } 
  if (r>=132 && r<=137) { return R24.Priority(); } 
  if (r>=138 && r<=149) { return R25.Priority(); } 
  if (r>=150 && r<=161) { return R26.Priority(); } 
  if (r>=162 && r<=173) { return R27.Priority(); } 
  if (r>=174 && r<=185) { return R28.Priority(); } 
  if (r>=186 && r<=197) { return R29.Priority(); } 
  if (r>=198 && r<=209) { return R30.Priority(); } 
  if (r>=210 && r<=221) { return R31.Priority(); } 
  if (r>=222 && r<=233) { return R32.Priority(); } 
  if (r>=234 && r<=245) { return R33.Priority(); } 
  if (r>=246 && r<=257) { return R34.Priority(); } 
  if (r>=258 && r<=269) { return R35.Priority(); } 
  if (r>=270 && r<=281) { return R36.Priority(); } 
  if (r>=282 && r<=293) { return R37.Priority(); } 
  if (r>=294 && r<=305) { return R38.Priority(); } 
  if (r>=306 && r<=317) { return R39.Priority(); } 
  if (r>=318 && r<=329) { return R40.Priority(); } 
  if (r>=330 && r<=341) { return R41.Priority(); } 
  if (r>=342 && r<=353) { return R42.Priority(); } 
  if (r>=354 && r<=365) { return R43.Priority(); } 
  if (r>=366 && r<=377) { return R44.Priority(); } 
  if (r>=378 && r<=389) { return R45.Priority(); } 
  if (r>=390 && r<=401) { return R46.Priority(); } 
  if (r>=402 && r<=413) { return R47.Priority(); } 
  if (r>=414 && r<=425) { return R48.Priority(); } 
  if (r>=426 && r<=437) { return R49.Priority(); } 
  if (r>=438 && r<=445) { return R50.Priority(); } 
  if (r>=446 && r<=453) { return R51.Priority(); } 
  if (r>=454 && r<=461) { return R52.Priority(); } 
  if (r>=462 && r<=469) { return R53.Priority(); } 
  if (r>=470 && r<=477) { return R54.Priority(); } 
  if (r>=478 && r<=485) { return R55.Priority(); } 
  if (r>=486 && r<=493) { return R56.Priority(); } 
  if (r>=494 && r<=501) { return R57.Priority(); } 
  if (r>=502 && r<=509) { return R58.Priority(); } 
  if (r>=510 && r<=517) { return R59.Priority(); } 
  if (r>=518 && r<=525) { return R60.Priority(); } 
  if (r>=526 && r<=533) { return R61.Priority(); } 
  if (r>=534 && r<=541) { return R62.Priority(); } 
  if (r>=542 && r<=549) { return R63.Priority(); } 
  if (r>=550 && r<=565) { return R64.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=3) return R0.Name(r-0);
  if (r>=4 && r<=7) return R1.Name(r-4);
  if (r>=8 && r<=11) return R2.Name(r-8);
  if (r>=12 && r<=15) return R3.Name(r-12);
  if (r>=16 && r<=17) return R4.Name(r-16);
  if (r>=18 && r<=23) return R5.Name(r-18);
  if (r>=24 && r<=29) return R6.Name(r-24);
  if (r>=30 && r<=35) return R7.Name(r-30);
  if (r>=36 && r<=41) return R8.Name(r-36);
  if (r>=42 && r<=47) return R9.Name(r-42);
  if (r>=48 && r<=53) return R10.Name(r-48);
  if (r>=54 && r<=59) return R11.Name(r-54);
  if (r>=60 && r<=65) return R12.Name(r-60);
  if (r>=66 && r<=71) return R13.Name(r-66);
  if (r>=72 && r<=77) return R14.Name(r-72);
  if (r>=78 && r<=83) return R15.Name(r-78);
  if (r>=84 && r<=89) return R16.Name(r-84);
  if (r>=90 && r<=95) return R17.Name(r-90);
  if (r>=96 && r<=101) return R18.Name(r-96);
  if (r>=102 && r<=107) return R19.Name(r-102);
  if (r>=108 && r<=113) return R20.Name(r-108);
  if (r>=114 && r<=119) return R21.Name(r-114);
  if (r>=120 && r<=125) return R22.Name(r-120);
  if (r>=126 && r<=131) return R23.Name(r-126);
  if (r>=132 && r<=137) return R24.Name(r-132);
  if (r>=138 && r<=149) return R25.Name(r-138);
  if (r>=150 && r<=161) return R26.Name(r-150);
  if (r>=162 && r<=173) return R27.Name(r-162);
  if (r>=174 && r<=185) return R28.Name(r-174);
  if (r>=186 && r<=197) return R29.Name(r-186);
  if (r>=198 && r<=209) return R30.Name(r-198);
  if (r>=210 && r<=221) return R31.Name(r-210);
  if (r>=222 && r<=233) return R32.Name(r-222);
  if (r>=234 && r<=245) return R33.Name(r-234);
  if (r>=246 && r<=257) return R34.Name(r-246);
  if (r>=258 && r<=269) return R35.Name(r-258);
  if (r>=270 && r<=281) return R36.Name(r-270);
  if (r>=282 && r<=293) return R37.Name(r-282);
  if (r>=294 && r<=305) return R38.Name(r-294);
  if (r>=306 && r<=317) return R39.Name(r-306);
  if (r>=318 && r<=329) return R40.Name(r-318);
  if (r>=330 && r<=341) return R41.Name(r-330);
  if (r>=342 && r<=353) return R42.Name(r-342);
  if (r>=354 && r<=365) return R43.Name(r-354);
  if (r>=366 && r<=377) return R44.Name(r-366);
  if (r>=378 && r<=389) return R45.Name(r-378);
  if (r>=390 && r<=401) return R46.Name(r-390);
  if (r>=402 && r<=413) return R47.Name(r-402);
  if (r>=414 && r<=425) return R48.Name(r-414);
  if (r>=426 && r<=437) return R49.Name(r-426);
  if (r>=438 && r<=445) return R50.Name(r-438);
  if (r>=446 && r<=453) return R51.Name(r-446);
  if (r>=454 && r<=461) return R52.Name(r-454);
  if (r>=462 && r<=469) return R53.Name(r-462);
  if (r>=470 && r<=477) return R54.Name(r-470);
  if (r>=478 && r<=485) return R55.Name(r-478);
  if (r>=486 && r<=493) return R56.Name(r-486);
  if (r>=494 && r<=501) return R57.Name(r-494);
  if (r>=502 && r<=509) return R58.Name(r-502);
  if (r>=510 && r<=517) return R59.Name(r-510);
  if (r>=518 && r<=525) return R60.Name(r-518);
  if (r>=526 && r<=533) return R61.Name(r-526);
  if (r>=534 && r<=541) return R62.Name(r-534);
  if (r>=542 && r<=549) return R63.Name(r-542);
  if (r>=550 && r<=565) return R64.Name(r-550);
  return NULL;
}
};
const unsigned numrules = 566;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 566


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
    // RuleName: L3_receive_AcquireBlock_NtoT_Branch_None_None 
    rule_info rule_tmp_1; 
    rule_tmp_1.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]",  }; 
    rule_tmp_1.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data",  }; 
    rules.push_back(rule_tmp_1); 
    // RuleName: L3_receive_Acquire_None_None_None 
    rule_info rule_tmp_2; 
    rule_tmp_2.guard = { "Tree[node].cache[node].state", "Tree[node].directory[node][node]",  }; 
    rule_tmp_2.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data",  }; 
    rules.push_back(rule_tmp_2); 
    // RuleName: L3_receive_AcquirePerm_None_Branch_x 
    rule_info rule_tmp_3; 
    rule_tmp_3.guard = { "Tree[node].chanA[node].opcode", "Tree[node].cache[node].state", "Tree[node].directory[node][node]",  }; 
    rule_tmp_3.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data",  }; 
    rules.push_back(rule_tmp_3); 
    // RuleName: L3_receive_AcquirePerm_Branch_x_x 
    rule_info rule_tmp_4; 
    rule_tmp_4.guard = { "Tree[node].chanA[node].opcode", "Tree[node].cache[node].state",  }; 
    rule_tmp_4.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data",  }; 
    rules.push_back(rule_tmp_4); 
    // RuleName: L3_send_release 
    rule_info rule_tmp_5; 
    rule_tmp_5.guard = { "Tree[node].cache[node].state",  }; 
    rule_tmp_5.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].cache[node].data",  }; 
    rules.push_back(rule_tmp_5); 
    // RuleName: Ln_send_Release_Trunk_Tip 
    rule_info rule_tmp_6; 
    rule_tmp_6.guard = { "Tree[node].cache[node].state",  }; 
    rule_tmp_6.action = { "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_6); 
    // RuleName: Ln_send_Release_Branch_Branch 
    rule_info rule_tmp_7; 
    rule_tmp_7.guard = { "Tree[node].cache[node].state", "Tree[node].directory[node][node]",  }; 
    rule_tmp_7.action = { "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_7); 
    // RuleName: Ln_send_Release_Tip_Branch 
    rule_info rule_tmp_8; 
    rule_tmp_8.guard = { "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]", "Tree[node].chanC[node].opcode",  }; 
    rule_tmp_8.action = { "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_8); 
    // RuleName: Ln_send_Release_Tip_None 
    rule_info rule_tmp_9; 
    rule_tmp_9.guard = { "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]", "Tree[node].chanC[node].opcode",  }; 
    rule_tmp_9.action = { "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_9); 
    // RuleName: Ln_send_Release_Branch_None 
    rule_info rule_tmp_10; 
    rule_tmp_10.guard = { "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]", "Tree[node].chanC[node].opcode",  }; 
    rule_tmp_10.action = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_10); 
    // RuleName: Ln_receive_Probe_toB_Trunk 
    rule_info rule_tmp_11; 
    rule_tmp_11.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state",  }; 
    rule_tmp_11.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_11); 
    // RuleName: Ln_receive_Probe_toN_Trunk 
    rule_info rule_tmp_12; 
    rule_tmp_12.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state",  }; 
    rule_tmp_12.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_12); 
    // RuleName: Ln_receive_Probe_toB_Tip 
    rule_info rule_tmp_13; 
    rule_tmp_13.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_13.action = { "Tree[node].chanB[node].opcode", "Tree[node].cache[node].state", "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty",  }; 
    rules.push_back(rule_tmp_13); 
    // RuleName: Ln_receive_Probe_toB_None_Branch 
    rule_info rule_tmp_14; 
    rule_tmp_14.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_14.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_14); 
    // RuleName: Ln_receive_Probe_toB_Branch 
    rule_info rule_tmp_15; 
    rule_tmp_15.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_15.action = { "Tree[node].chanB[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty",  }; 
    rules.push_back(rule_tmp_15); 
    // RuleName: Ln_receive_Probe_toN_Tip_None 
    rule_info rule_tmp_16; 
    rule_tmp_16.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_16.action = { "Tree[node].chanB[node].opcode", "Tree[node].cache[node].state", "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_16); 
    // RuleName: Ln_receive_Probe_toN_Branch_Branch 
    rule_info rule_tmp_17; 
    rule_tmp_17.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_17.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_17); 
    // RuleName: Ln_receive_Probe_toN_Branch_None 
    rule_info rule_tmp_18; 
    rule_tmp_18.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_18.action = { "Tree[node].chanB[node].opcode", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_18); 
    // RuleName: Ln_receive_Probe_toB_None_Branch/Tip 
    rule_info rule_tmp_19; 
    rule_tmp_19.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_19.action = { "Tree[node].directory[node][node]", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_19); 
    // RuleName: Ln_receive_Probe_toN_None_Branch/Tip 
    rule_info rule_tmp_20; 
    rule_tmp_20.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_20.action = { "Tree[node].directory[node][node]", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_20); 
    // RuleName: Ln_receive_Probe_None_None_None 
    rule_info rule_tmp_21; 
    rule_tmp_21.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_21.action = { "Tree[node].chanB[node].opcode", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].para",  }; 
    rules.push_back(rule_tmp_21); 
    // RuleName: Ln_receive_ReleaseAck 
    rule_info rule_tmp_22; 
    rule_tmp_22.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_22.action = { "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_22); 
    // RuleName: Ln_receive_GrantData_toT 
    rule_info rule_tmp_23; 
    rule_tmp_23.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_23.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanD[node].data", "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]", "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rules.push_back(rule_tmp_23); 
    // RuleName: Ln_receive_GrantData_toB 
    rule_info rule_tmp_24; 
    rule_tmp_24.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_24.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanD[node].data", "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]", "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rules.push_back(rule_tmp_24); 
    // RuleName: Ln_receive_Grant 
    rule_info rule_tmp_25; 
    rule_tmp_25.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_25.action = { "Tree[node].cache[node].state", "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]", "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rules.push_back(rule_tmp_25); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Branch_None_None 
    rule_info rule_tmp_26; 
    rule_tmp_26.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_26.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_26); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_None_None_None 
    rule_info rule_tmp_27; 
    rule_tmp_27.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_27.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_27); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_None_None_None 
    rule_info rule_tmp_28; 
    rule_tmp_28.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_28.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_28); 
    // RuleName: Ln_receive_AcquirePerm_None_None_None 
    rule_info rule_tmp_29; 
    rule_tmp_29.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_29.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_29); 
    // RuleName: Ln_receive_AcquirePerm_None_Branch_x 
    rule_info rule_tmp_30; 
    rule_tmp_30.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].master_pending[node]",  }; 
    rule_tmp_30.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_30); 
    // RuleName: Ln_receive_AcquirePerm_Branch_x_x 
    rule_info rule_tmp_31; 
    rule_tmp_31.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].master_pending[node]",  }; 
    rule_tmp_31.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_31); 
    // RuleName: Ln_receive_GrantAck 
    rule_info rule_tmp_32; 
    rule_tmp_32.guard = { "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rule_tmp_32.action = { "Tree[node].chanE[node].opcode", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_32); 
    // RuleName: Ln_receive_Release_TtoB 
    rule_info rule_tmp_33; 
    rule_tmp_33.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_33.action = { "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].chanC[node].opcode", "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].addr",  }; 
    rules.push_back(rule_tmp_33); 
    // RuleName: Ln_receive_Release_TtoN 
    rule_info rule_tmp_34; 
    rule_tmp_34.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_34.action = { "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].chanC[node].opcode", "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].addr",  }; 
    rules.push_back(rule_tmp_34); 
    // RuleName: Ln_receive_Release_BtoN 
    rule_info rule_tmp_35; 
    rule_tmp_35.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_35.action = { "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].chanD[node].opcode", "Tree[node].chanC[node].opcode",  }; 
    rules.push_back(rule_tmp_35); 
    // RuleName: Ln_receive_ProbeAckData_TtoB 
    rule_info rule_tmp_36; 
    rule_tmp_36.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_36.action = { "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].chanC[node].opcode", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_36); 
    // RuleName: Ln_receive_ProbeAckData_TtoN 
    rule_info rule_tmp_37; 
    rule_tmp_37.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_37.action = { "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].cache[node].dirty", "Tree[node].chanC[node].dirty", "Tree[node].chanC[node].opcode", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_37); 
    // RuleName: Ln_receive_ProbeAck_BtoB 
    rule_info rule_tmp_38; 
    rule_tmp_38.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_38.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].chanC[node].opcode", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_38); 
    // RuleName: Ln_receive_ProbeAck_BtoN 
    rule_info rule_tmp_39; 
    rule_tmp_39.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_39.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanC[node].data", "Tree[node].directory[node][node]", "Tree[node].chanC[node].opcode", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_39); 
    // RuleName: Ln_receive_ProbeAck_NtoN 
    rule_info rule_tmp_40; 
    rule_tmp_40.guard = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr",  }; 
    rule_tmp_40.action = { "Tree[node].directory[node][node]", "Tree[node].chanC[node].opcode", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_40); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_x_None_Tip 
    rule_info rule_tmp_41; 
    rule_tmp_41.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].directory[node][node]", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_41.action = { "Tree[node].directory[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_41); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Tip_x_Branch 
    rule_info rule_tmp_42; 
    rule_tmp_42.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_42.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_42); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Tip_None_None 
    rule_info rule_tmp_43; 
    rule_tmp_43.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_43.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr", "Tree[node].chanD[node].data", "Tree[node].cache[node].data", "Tree[node].slave_pending[node][node]", "Tree[node].cache[node].state", "Tree[node].directory[node][node]",  }; 
    rules.push_back(rule_tmp_43); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_None_Branch 
    rule_info rule_tmp_44; 
    rule_tmp_44.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_44.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_44); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_x_None_Tip 
    rule_info rule_tmp_45; 
    rule_tmp_45.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_45.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_45); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x 
    rule_info rule_tmp_46; 
    rule_tmp_46.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].cache[node].state", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_46.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr", "Tree[node].chanD[node].data", "Tree[node].cache[node].data", "Tree[node].slave_pending[node][node]", "Tree[node].directory[node][node]",  }; 
    rules.push_back(rule_tmp_46); 
    // RuleName: Ln_receive_AcquirePerm_x_None_Tip 
    rule_info rule_tmp_47; 
    rule_tmp_47.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].directory[node][node]", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_47.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_47); 
    // RuleName: Ln_receive_AcquirePerm_Tip_x_Branch 
    rule_info rule_tmp_48; 
    rule_tmp_48.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]",  }; 
    rule_tmp_48.action = { "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_48); 
    // RuleName: Ln_receive_AcquirePerm_Tip_None_None 
    rule_info rule_tmp_49; 
    rule_tmp_49.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].directory[node][node]",  }; 
    rule_tmp_49.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr", "Tree[node].chanD[node].data", "Tree[node].cache[node].data", "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_49); 
    // RuleName: Ln_receive_AcquirePerm_Tip_Branch_None 
    rule_info rule_tmp_50; 
    rule_tmp_50.guard = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].addr", "Tree[node].cache[node].state", "Tree[node].directory[node][node]", "Tree[node].slave_pending[node][node]", "Tree[node].directory[node][node]",  }; 
    rule_tmp_50.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr", "Tree[node].chanD[node].data", "Tree[node].cache[node].data", "Tree[node].directory[node][node]", "Tree[node].cache[node].state", "Tree[node].slave_pending[node][node]",  }; 
    rules.push_back(rule_tmp_50); 
    // RuleName: receive_ReleaseAck 
    rule_info rule_tmp_51; 
    rule_tmp_51.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_51.action = { "Tree[node].master_pending[node]", "Tree[node].chanD[node].opcode",  }; 
    rules.push_back(rule_tmp_51); 
    // RuleName: respond_Probe_TtoB 
    rule_info rule_tmp_52; 
    rule_tmp_52.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].addr", "Tree[node].chanC[node].opcode", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rule_tmp_52.action = { "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].cache[node].state", "Tree[node].chanB[node].opcode",  }; 
    rules.push_back(rule_tmp_52); 
    // RuleName: respond_Probe_TtoN 
    rule_info rule_tmp_53; 
    rule_tmp_53.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].chanC[node].opcode", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rule_tmp_53.action = { "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].cache[node].dirty", "Tree[node].chanB[node].opcode", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_53); 
    // RuleName: respond_Probe_BtoB 
    rule_info rule_tmp_54; 
    rule_tmp_54.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].chanC[node].opcode", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rule_tmp_54.action = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].chanB[node].opcode",  }; 
    rules.push_back(rule_tmp_54); 
    // RuleName: respond_Probe_BtoN 
    rule_info rule_tmp_55; 
    rule_tmp_55.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].para", "Tree[node].chanB[node].addr", "Tree[node].chanC[node].opcode", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rule_tmp_55.action = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].chanB[node].opcode", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_55); 
    // RuleName: respond_Probe_NtoN 
    rule_info rule_tmp_56; 
    rule_tmp_56.guard = { "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].opcode", "Tree[node].chanB[node].addr", "Tree[node].chanB[node].para", "Tree[node].chanB[node].para", "Tree[node].chanC[node].opcode", "Tree[node].master_pending[node]", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rule_tmp_56.action = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanB[node].opcode", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_56); 
    // RuleName: respond_GrantData_toT 
    rule_info rule_tmp_57; 
    rule_tmp_57.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_57.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanD[node].data", "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]", "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rules.push_back(rule_tmp_57); 
    // RuleName: respond_GrantData_toB 
    rule_info rule_tmp_58; 
    rule_tmp_58.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_58.action = { "Tree[node].cache[node].state", "Tree[node].cache[node].data", "Tree[node].chanD[node].data", "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]", "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rules.push_back(rule_tmp_58); 
    // RuleName: respond_Grant_toT 
    rule_info rule_tmp_59; 
    rule_tmp_59.guard = { "Tree[node].chanD[node].opcode", "Tree[node].chanD[node].para", "Tree[node].chanD[node].addr",  }; 
    rule_tmp_59.action = { "Tree[node].cache[node].state", "Tree[node].chanD[node].opcode", "Tree[node].master_pending[node]", "Tree[node].chanE[node].opcode", "Tree[node].chanE[node].addr",  }; 
    rules.push_back(rule_tmp_59); 
    // RuleName: send_Release_TtoN 
    rule_info rule_tmp_60; 
    rule_tmp_60.guard = { "Tree[node].cache[node].state", "Tree[node].master_pending[node]", "Tree[node].chanC[node].opcode",  }; 
    rule_tmp_60.action = { "Tree[node].chanC[node].para", "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_60); 
    // RuleName: send_Release_BtoN 
    rule_info rule_tmp_61; 
    rule_tmp_61.guard = { "Tree[node].cache[node].state", "Tree[node].master_pending[node]", "Tree[node].chanC[node].opcode",  }; 
    rule_tmp_61.action = { "Tree[node].chanC[node].opcode", "Tree[node].chanC[node].para", "Tree[node].chanC[node].addr", "Tree[node].chanC[node].data", "Tree[node].cache[node].data", "Tree[node].chanC[node].dirty", "Tree[node].master_pending[node]", "Tree[node].cache[node].state",  }; 
    rules.push_back(rule_tmp_61); 
    // RuleName: send_AcquireBlock_toT 
    rule_info rule_tmp_62; 
    rule_tmp_62.guard = { "Tree[node].cache[node].state", "Tree[node].master_pending[node]",  }; 
    rule_tmp_62.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_62); 
    // RuleName: send_AcquirePerm_toT 
    rule_info rule_tmp_63; 
    rule_tmp_63.guard = { "Tree[node].cache[node].state", "Tree[node].master_pending[node]",  }; 
    rule_tmp_63.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_63); 
    // RuleName: send_AcquireBlock_toB 
    rule_info rule_tmp_64; 
    rule_tmp_64.guard = { "Tree[node].cache[node].state", "Tree[node].master_pending[node]",  }; 
    rule_tmp_64.action = { "Tree[node].chanA[node].opcode", "Tree[node].chanA[node].para", "Tree[node].chanA[node].addr", "Tree[node].master_pending[node]",  }; 
    rules.push_back(rule_tmp_64); 
    // RuleName: Store 
    rule_info rule_tmp_65; 
    rule_tmp_65.guard = { "Tree[node].cache[node].state",  }; 
    rule_tmp_65.action = { "Tree[node].cache[node].data", "Tree[node].cache[node].dirty",  }; 
    rules.push_back(rule_tmp_65); 

    // inv: (!((((((((mu_Tree[1].mu_cache[1].mu_state) == (mu_None) & (mu_Tree[2].mu_cache[1].mu_state) == (mu_None)) & (mu_Tree[4].mu_cache[1].mu_state) == (mu_None)) & (mu_Tree[5].mu_cache[1].mu_state) == (mu_None)) & (mu_Tree[3].mu_cache[1].mu_state) == (mu_None)) & (mu_Tree[6].mu_cache[1].mu_state) == (mu_None)) & (mu_Tree[7].mu_cache[1].mu_state) == (mu_Tip))))
    vector<std::string> carelist_tmp; 
    carelists.push_back(carelist_tmp); 
    funcMap["Tree[1].cache[1].state"] = []() -> int { return mu_Tree[1].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[1].cache[1].state"] = mu_None; 
    carelists[0].push_back("Tree[1].cache[1].state"); 
    funcMap["Tree[2].cache[1].state"] = []() -> int { return mu_Tree[2].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[2].cache[1].state"] = mu_None; 
    carelists[0].push_back("Tree[2].cache[1].state"); 
    funcMap["Tree[3].cache[1].state"] = []() -> int { return mu_Tree[3].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[3].cache[1].state"] = mu_None; 
    carelists[0].push_back("Tree[3].cache[1].state"); 
    funcMap["Tree[4].cache[1].state"] = []() -> int { return mu_Tree[4].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[4].cache[1].state"] = mu_None; 
    carelists[0].push_back("Tree[4].cache[1].state"); 
    funcMap["Tree[5].cache[1].state"] = []() -> int { return mu_Tree[5].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[5].cache[1].state"] = mu_None; 
    carelists[0].push_back("Tree[5].cache[1].state"); 
    funcMap["Tree[6].cache[1].state"] = []() -> int { return mu_Tree[6].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[6].cache[1].state"] = mu_None; 
    carelists[0].push_back("Tree[6].cache[1].state"); 
    funcMap["Tree[7].cache[1].state"] = []() -> int { return mu_Tree[7].mu_cache[1].mu_state; }; 
    goalstateMap["Tree[7].cache[1].state"] = mu_Tip; 
    carelists[0].push_back("Tree[7].cache[1].state"); 
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
    return tsprintf("Init");
  }
  void Code(unsigned short r)
  {
/*** Variable declaration ***/
mu_1__type_15 mu_son("son",0);

mu_son = 2;
{
for(int mu_cur = 1; mu_cur <= 3; mu_cur++) {
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_Tree[mu_cur].mu_cache[mu_a].mu_state = mu_None;
mu_Tree[mu_cur].mu_cache[mu_a].mu_dirty = mu_false;
mu_Tree[mu_cur].mu_master_pending[mu_a] = mu_M_None;
};
};
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
if (mu_son.isundefined())
  mu_Tree[mu_cur].mu_sons[mu_i].undefine();
else
  mu_Tree[mu_cur].mu_sons[mu_i] = mu_son;
mu_Tree[mu_cur].mu_chanA[mu_i].mu_opcode = mu_A_None;
mu_Tree[mu_cur].mu_chanB[mu_i].mu_opcode = mu_B_None;
mu_Tree[mu_cur].mu_chanC[mu_i].mu_opcode = mu_C_None;
mu_Tree[mu_cur].mu_chanD[mu_i].mu_opcode = mu_D_None;
mu_Tree[mu_cur].mu_chanE[mu_i].mu_opcode = mu_E_None;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_Tree[mu_cur].mu_slave_pending[mu_i][mu_a] = mu_S_None;
mu_Tree[mu_cur].mu_directory[mu_i][mu_a] = mu_None;
};
};
mu_son = (mu_son) + (1);
};
};
};
};
{
for(int mu_cur = 4; mu_cur <= 7; mu_cur++) {
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_Tree[mu_cur].mu_cache[mu_a].mu_state = mu_None;
mu_Tree[mu_cur].mu_cache[mu_a].mu_dirty = mu_false;
mu_Tree[mu_cur].mu_master_pending[mu_a] = mu_M_None;
};
};
};
};
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
{
for(int mu_d = 1; mu_d <= 2; mu_d++) {
mu_memData[mu_a] = mu_d;
mu_auxData[mu_a] = mu_d;
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
int mu__invariant_595() // Invariant "test_reachable_state_3"
{
bool mu__quant596; 
mu__quant596 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr597;
bool mu__boolexpr598;
bool mu__boolexpr599;
bool mu__boolexpr600;
bool mu__boolexpr601;
bool mu__boolexpr602;
  if (!((mu_Tree[1].mu_cache[1].mu_state) == (mu_None))) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = ((mu_Tree[2].mu_cache[1].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr602)) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = ((mu_Tree[4].mu_cache[1].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = ((mu_Tree[5].mu_cache[1].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_Tree[3].mu_cache[1].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = ((mu_Tree[6].mu_cache[1].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr598)) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = ((mu_Tree[7].mu_cache[1].mu_state) == (mu_Tip)) ; 
}
if ( !(!(mu__boolexpr597)) )
  { mu__quant596 = FALSE; break; }
};
};
return mu__quant596;
};

bool mu__condition_603() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_595( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"test_reachable_state_3", &mu__condition_603, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Tree:NoScalarset
memData:NoScalarset
auxData:NoScalarset
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
        mu_Tree.MultisetSort();
        mu_memData.MultisetSort();
        mu_auxData.MultisetSort();
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
void mu_1_dataType::Permute(PermSet& Perm, int i) {};
void mu_1_dataType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_dataType::Canonicalize(PermSet& Perm) {};
void mu_1_dataType::SimpleLimit(PermSet& Perm) {};
void mu_1_dataType::ArrayLimit(PermSet& Perm) {};
void mu_1_dataType::Limit(PermSet& Perm) {};
void mu_1_dataType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_addrType::Permute(PermSet& Perm, int i) {};
void mu_1_addrType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_addrType::Canonicalize(PermSet& Perm) {};
void mu_1_addrType::SimpleLimit(PermSet& Perm) {};
void mu_1_addrType::ArrayLimit(PermSet& Perm) {};
void mu_1_addrType::Limit(PermSet& Perm) {};
void mu_1_addrType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_validDataType::Permute(PermSet& Perm, int i) {};
void mu_1_validDataType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_validDataType::Canonicalize(PermSet& Perm) {};
void mu_1_validDataType::SimpleLimit(PermSet& Perm) {};
void mu_1_validDataType::ArrayLimit(PermSet& Perm) {};
void mu_1_validDataType::Limit(PermSet& Perm) {};
void mu_1_validDataType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_l1Id::Permute(PermSet& Perm, int i) {};
void mu_1_l1Id::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_l1Id::Canonicalize(PermSet& Perm) {};
void mu_1_l1Id::SimpleLimit(PermSet& Perm) {};
void mu_1_l1Id::ArrayLimit(PermSet& Perm) {};
void mu_1_l1Id::Limit(PermSet& Perm) {};
void mu_1_l1Id::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_cacheId::Permute(PermSet& Perm, int i) {};
void mu_1_cacheId::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cacheId::Canonicalize(PermSet& Perm) {};
void mu_1_cacheId::SimpleLimit(PermSet& Perm) {};
void mu_1_cacheId::ArrayLimit(PermSet& Perm) {};
void mu_1_cacheId::Limit(PermSet& Perm) {};
void mu_1_cacheId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_nodeId::Permute(PermSet& Perm, int i) {};
void mu_1_nodeId::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_nodeId::Canonicalize(PermSet& Perm) {};
void mu_1_nodeId::SimpleLimit(PermSet& Perm) {};
void mu_1_nodeId::ArrayLimit(PermSet& Perm) {};
void mu_1_nodeId::Limit(PermSet& Perm) {};
void mu_1_nodeId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_branchType::Permute(PermSet& Perm, int i) {};
void mu_1_branchType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_branchType::Canonicalize(PermSet& Perm) {};
void mu_1_branchType::SimpleLimit(PermSet& Perm) {};
void mu_1_branchType::ArrayLimit(PermSet& Perm) {};
void mu_1_branchType::Limit(PermSet& Perm) {};
void mu_1_branchType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_stateType::Permute(PermSet& Perm, int i) {};
void mu_1_stateType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_stateType::Canonicalize(PermSet& Perm) {};
void mu_1_stateType::SimpleLimit(PermSet& Perm) {};
void mu_1_stateType::ArrayLimit(PermSet& Perm) {};
void mu_1_stateType::Limit(PermSet& Perm) {};
void mu_1_stateType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_AType::Permute(PermSet& Perm, int i) {};
void mu_1_AType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AType::Canonicalize(PermSet& Perm) {};
void mu_1_AType::SimpleLimit(PermSet& Perm) {};
void mu_1_AType::ArrayLimit(PermSet& Perm) {};
void mu_1_AType::Limit(PermSet& Perm) {};
void mu_1_AType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BType::Permute(PermSet& Perm, int i) {};
void mu_1_BType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BType::Canonicalize(PermSet& Perm) {};
void mu_1_BType::SimpleLimit(PermSet& Perm) {};
void mu_1_BType::ArrayLimit(PermSet& Perm) {};
void mu_1_BType::Limit(PermSet& Perm) {};
void mu_1_BType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_CType::Permute(PermSet& Perm, int i) {};
void mu_1_CType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_CType::Canonicalize(PermSet& Perm) {};
void mu_1_CType::SimpleLimit(PermSet& Perm) {};
void mu_1_CType::ArrayLimit(PermSet& Perm) {};
void mu_1_CType::Limit(PermSet& Perm) {};
void mu_1_CType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_DType::Permute(PermSet& Perm, int i) {};
void mu_1_DType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DType::Canonicalize(PermSet& Perm) {};
void mu_1_DType::SimpleLimit(PermSet& Perm) {};
void mu_1_DType::ArrayLimit(PermSet& Perm) {};
void mu_1_DType::Limit(PermSet& Perm) {};
void mu_1_DType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_EType::Permute(PermSet& Perm, int i) {};
void mu_1_EType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_EType::Canonicalize(PermSet& Perm) {};
void mu_1_EType::SimpleLimit(PermSet& Perm) {};
void mu_1_EType::ArrayLimit(PermSet& Perm) {};
void mu_1_EType::Limit(PermSet& Perm) {};
void mu_1_EType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_growType::Permute(PermSet& Perm, int i) {};
void mu_1_growType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_growType::Canonicalize(PermSet& Perm) {};
void mu_1_growType::SimpleLimit(PermSet& Perm) {};
void mu_1_growType::ArrayLimit(PermSet& Perm) {};
void mu_1_growType::Limit(PermSet& Perm) {};
void mu_1_growType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_capType::Permute(PermSet& Perm, int i) {};
void mu_1_capType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_capType::Canonicalize(PermSet& Perm) {};
void mu_1_capType::SimpleLimit(PermSet& Perm) {};
void mu_1_capType::ArrayLimit(PermSet& Perm) {};
void mu_1_capType::Limit(PermSet& Perm) {};
void mu_1_capType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_pruneType::Permute(PermSet& Perm, int i) {};
void mu_1_pruneType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_pruneType::Canonicalize(PermSet& Perm) {};
void mu_1_pruneType::SimpleLimit(PermSet& Perm) {};
void mu_1_pruneType::ArrayLimit(PermSet& Perm) {};
void mu_1_pruneType::Limit(PermSet& Perm) {};
void mu_1_pruneType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_chAType::Permute(PermSet& Perm, int i)
{
};
void mu_1_chAType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_chAType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chAType::SimpleLimit(PermSet& Perm){}
void mu_1_chAType::ArrayLimit(PermSet& Perm){}
void mu_1_chAType::Limit(PermSet& Perm)
{
};
void mu_1_chAType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_chBType::Permute(PermSet& Perm, int i)
{
};
void mu_1_chBType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_chBType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chBType::SimpleLimit(PermSet& Perm){}
void mu_1_chBType::ArrayLimit(PermSet& Perm){}
void mu_1_chBType::Limit(PermSet& Perm)
{
};
void mu_1_chBType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_chCType::Permute(PermSet& Perm, int i)
{
};
void mu_1_chCType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_chCType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chCType::SimpleLimit(PermSet& Perm){}
void mu_1_chCType::ArrayLimit(PermSet& Perm){}
void mu_1_chCType::Limit(PermSet& Perm)
{
};
void mu_1_chCType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_chDType::Permute(PermSet& Perm, int i)
{
};
void mu_1_chDType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_chDType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chDType::SimpleLimit(PermSet& Perm){}
void mu_1_chDType::ArrayLimit(PermSet& Perm){}
void mu_1_chDType::Limit(PermSet& Perm)
{
};
void mu_1_chDType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_chEType::Permute(PermSet& Perm, int i)
{
};
void mu_1_chEType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_chEType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chEType::SimpleLimit(PermSet& Perm){}
void mu_1_chEType::ArrayLimit(PermSet& Perm){}
void mu_1_chEType::Limit(PermSet& Perm)
{
};
void mu_1_chEType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_slave_pending_Type::Permute(PermSet& Perm, int i) {};
void mu_1_slave_pending_Type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_slave_pending_Type::Canonicalize(PermSet& Perm) {};
void mu_1_slave_pending_Type::SimpleLimit(PermSet& Perm) {};
void mu_1_slave_pending_Type::ArrayLimit(PermSet& Perm) {};
void mu_1_slave_pending_Type::Limit(PermSet& Perm) {};
void mu_1_slave_pending_Type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_master_pending_Type::Permute(PermSet& Perm, int i) {};
void mu_1_master_pending_Type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_master_pending_Type::Canonicalize(PermSet& Perm) {};
void mu_1_master_pending_Type::SimpleLimit(PermSet& Perm) {};
void mu_1_master_pending_Type::ArrayLimit(PermSet& Perm) {};
void mu_1_master_pending_Type::Limit(PermSet& Perm) {};
void mu_1_master_pending_Type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_cacheType::Permute(PermSet& Perm, int i)
{
};
void mu_1_cacheType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_cacheType::Canonicalize(PermSet& Perm)
{
};
void mu_1_cacheType::SimpleLimit(PermSet& Perm){}
void mu_1_cacheType::ArrayLimit(PermSet& Perm){}
void mu_1_cacheType::Limit(PermSet& Perm)
{
};
void mu_1_cacheType::MultisetLimit(PermSet& Perm)
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
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
void mu_1_TreeNode::Permute(PermSet& Perm, int i)
{
};
void mu_1_TreeNode::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_TreeNode::Canonicalize(PermSet& Perm)
{
};
void mu_1_TreeNode::SimpleLimit(PermSet& Perm){}
void mu_1_TreeNode::ArrayLimit(PermSet& Perm){}
void mu_1_TreeNode::Limit(PermSet& Perm)
{
};
void mu_1_TreeNode::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<7; j++)
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
void mu_1__type_15::Permute(PermSet& Perm, int i) {};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_15::Canonicalize(PermSet& Perm) {};
void mu_1__type_15::SimpleLimit(PermSet& Perm) {};
void mu_1__type_15::ArrayLimit(PermSet& Perm) {};
void mu_1__type_15::Limit(PermSet& Perm) {};
void mu_1__type_15::MultisetLimit(PermSet& Perm)
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
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_Tree.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Tree.MultisetSort();
              mu_memData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_memData.MultisetSort();
              mu_auxData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_auxData.MultisetSort();
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

          mu_Tree.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Tree.MultisetSort();
          mu_memData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_memData.MultisetSort();
          mu_auxData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_auxData.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_Tree.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Tree.MultisetSort();
              mu_memData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_memData.MultisetSort();
              mu_auxData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_auxData.MultisetSort();
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
      mu_Tree.MultisetSort();
      mu_memData.MultisetSort();
      mu_auxData.MultisetSort();
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
        mu_Tree.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Tree.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_memData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_memData.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_auxData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_auxData.MultisetSort();
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
