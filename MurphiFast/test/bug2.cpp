/******************************
  Program "bug2.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Apr 10 2024"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Apr 10 2024"
#define PROTOCOL_NAME "bug2"
#define BITS_IN_WORLD 3032
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

class mu_1_lineType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_lineType& val) { return mu__byte::operator=((int) val); };
  mu_1_lineType (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_lineType (void): mu__byte(0, 1, 2) {};
  mu_1_lineType (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu_1_lineType mu_1_lineType_undefined_var;

class mu_1_markType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_markType& val) { return mu__byte::operator=((int) val); };
  mu_1_markType (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_markType (void): mu__byte(0, 1, 2) {};
  mu_1_markType (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu_1_markType mu_1_markType_undefined_var;

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

class mu_1_addrType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_addrType& val) { return mu__byte::operator=((int) val); };
  mu_1_addrType (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_addrType (void): mu__byte(0, 3, 3) {};
  mu_1_addrType (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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

  mu_1_BType (const char *name, int os): mu__byte(8, 10, 2, name, os) {};
  mu_1_BType (void): mu__byte(8, 10, 2) {};
  mu_1_BType (int val): mu__byte(8, 10, 2, "Parameter or function result.", 0)
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

const char *mu_1_BType::values[] = {"B_None","ProbePerm","ProbeBlock",NULL };

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
      return ( s << mu_1_CType::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_CType (const char *name, int os): mu__byte(11, 15, 3, name, os) {};
  mu_1_CType (void): mu__byte(11, 15, 3) {};
  mu_1_CType (int val): mu__byte(11, 15, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -11]; };
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
      cout << name << ":" << values[ value() -11] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_CType::values[] = {"C_None","Release","ReleaseData","ProbeAck","ProbeAckData",NULL };

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
      return ( s << mu_1_DType::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_DType (const char *name, int os): mu__byte(16, 19, 3, name, os) {};
  mu_1_DType (void): mu__byte(16, 19, 3) {};
  mu_1_DType (int val): mu__byte(16, 19, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -16]; };
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
      cout << name << ":" << values[ value() -16] << '\n';
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
      return ( s << mu_1_EType::values[ int(val) - 20] );
    else return ( s << "Undefined" );
  };

  mu_1_EType (const char *name, int os): mu__byte(20, 21, 2, name, os) {};
  mu_1_EType (void): mu__byte(20, 21, 2) {};
  mu_1_EType (int val): mu__byte(20, 21, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -20]; };
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
      cout << name << ":" << values[ value() -20] << '\n';
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
      return ( s << mu_1_growType::values[ int(val) - 22] );
    else return ( s << "Undefined" );
  };

  mu_1_growType (const char *name, int os): mu__byte(22, 24, 2, name, os) {};
  mu_1_growType (void): mu__byte(22, 24, 2) {};
  mu_1_growType (int val): mu__byte(22, 24, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_capType::values[ int(val) - 25] );
    else return ( s << "Undefined" );
  };

  mu_1_capType (const char *name, int os): mu__byte(25, 27, 2, name, os) {};
  mu_1_capType (void): mu__byte(25, 27, 2) {};
  mu_1_capType (int val): mu__byte(25, 27, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_pruneType::values[ int(val) - 28] );
    else return ( s << "Undefined" );
  };

  mu_1_pruneType (const char *name, int os): mu__byte(28, 31, 3, name, os) {};
  mu_1_pruneType (void): mu__byte(28, 31, 3) {};
  mu_1_pruneType (int val): mu__byte(28, 31, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -28]; };
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
      cout << name << ":" << values[ value() -28] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_pruneType::values[] = {"BtoN","TtoN","TtoB","NtoN",NULL };

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
  mu_1_addrType mu_addr;
  mu_1_growType mu_para;
  mu_1_chAType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chAType ( void ) {};

  virtual ~mu_1_chAType(); 
friend int CompareWeight(mu_1_chAType& a, mu_1_chAType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chAType& a, mu_1_chAType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
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
    mu_para.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_addr.print_statistic();
    mu_para.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_addr.clear();
    mu_para.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_addr.undefine();
    mu_para.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_addr.reset();
    mu_para.reset();
 };
  void print() {
    mu_opcode.print();
    mu_addr.print();
    mu_para.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_para.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_para.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chAType& operator= (const mu_1_chAType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_addr.value(from.mu_addr.value());
    mu_para.value(from.mu_para.value());
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
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 16 ); else mu_para.set_self_2(NULL, NULL, 0);
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
  mu_1_addrType mu_addr;
  mu_1_capType mu_para;
  mu_1_chBType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chBType ( void ) {};

  virtual ~mu_1_chBType(); 
friend int CompareWeight(mu_1_chBType& a, mu_1_chBType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chBType& a, mu_1_chBType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
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
    mu_para.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_addr.print_statistic();
    mu_para.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_addr.clear();
    mu_para.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_addr.undefine();
    mu_para.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_addr.reset();
    mu_para.reset();
 };
  void print() {
    mu_opcode.print();
    mu_addr.print();
    mu_para.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_para.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_para.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chBType& operator= (const mu_1_chBType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_addr.value(from.mu_addr.value());
    mu_para.value(from.mu_para.value());
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
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 16 ); else mu_para.set_self_2(NULL, NULL, 0);
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
  mu_1_addrType mu_addr;
  mu_1_pruneType mu_para;
  mu_1_dataType mu_data;
  mu_1_chCType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chCType ( void ) {};

  virtual ~mu_1_chCType(); 
friend int CompareWeight(mu_1_chCType& a, mu_1_chCType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chCType& a, mu_1_chCType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
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
    mu_addr.MultisetSort();
    mu_para.MultisetSort();
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_addr.print_statistic();
    mu_para.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_addr.clear();
    mu_para.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_addr.undefine();
    mu_para.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_addr.reset();
    mu_para.reset();
    mu_data.reset();
 };
  void print() {
    mu_opcode.print();
    mu_addr.print();
    mu_para.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_para.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chCType& operator= (const mu_1_chCType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_addr.value(from.mu_addr.value());
    mu_para.value(from.mu_para.value());
    mu_data.value(from.mu_data.value());
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
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 16 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
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
  mu_1_addrType mu_addr;
  mu_1_capType mu_para;
  mu_1_dataType mu_data;
  mu_1_chDType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chDType ( void ) {};

  virtual ~mu_1_chDType(); 
friend int CompareWeight(mu_1_chDType& a, mu_1_chDType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_para, b.mu_para);
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
    w = Compare(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = Compare(a.mu_para, b.mu_para);
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
    mu_addr.MultisetSort();
    mu_para.MultisetSort();
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_addr.print_statistic();
    mu_para.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_addr.clear();
    mu_para.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_addr.undefine();
    mu_para.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_addr.reset();
    mu_para.reset();
    mu_data.reset();
 };
  void print() {
    mu_opcode.print();
    mu_addr.print();
    mu_para.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_para.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chDType& operator= (const mu_1_chDType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_addr.value(from.mu_addr.value());
    mu_para.value(from.mu_para.value());
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
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 16 ); else mu_para.set_self_2(NULL, NULL, 0);
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
      return ( s << mu_1_slave_pending_Type::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_slave_pending_Type (const char *name, int os): mu__byte(32, 35, 3, name, os) {};
  mu_1_slave_pending_Type (void): mu__byte(32, 35, 3) {};
  mu_1_slave_pending_Type (int val): mu__byte(32, 35, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
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
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_slave_pending_Type::values[] = {"S_None","pending_ProbeAck","pending_ProbeAckData","pending_GrantAck",NULL };

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
      return ( s << mu_1_master_pending_Type::values[ int(val) - 36] );
    else return ( s << "Undefined" );
  };

  mu_1_master_pending_Type (const char *name, int os): mu__byte(36, 39, 3, name, os) {};
  mu_1_master_pending_Type (void): mu__byte(36, 39, 3) {};
  mu_1_master_pending_Type (int val): mu__byte(36, 39, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -36]; };
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
      cout << name << ":" << values[ value() -36] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_master_pending_Type::values[] = {"M_None","pending_Grant","pending_GrantData","pending_ReleaseAck",NULL };

/*** end of enum declaration ***/
mu_1_master_pending_Type mu_1_master_pending_Type_undefined_var;

class mu_1_directoryType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_stateType mu_state;
  mu_1_addrType mu_addr;
  mu_1_directoryType ( const char *n, int os ) { set_self(n,os); };
  mu_1_directoryType ( void ) {};

  virtual ~mu_1_directoryType(); 
friend int CompareWeight(mu_1_directoryType& a, mu_1_directoryType& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_directoryType& a, mu_1_directoryType& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
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
    mu_state.MultisetSort();
    mu_addr.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_addr.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_addr.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_addr.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_addr.reset();
 };
  void print() {
    mu_state.print();
    mu_addr.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_addr.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_directoryType& operator= (const mu_1_directoryType& from) {
    mu_state.value(from.mu_state.value());
    mu_addr.value(from.mu_addr.value());
    return *this;
  };
};

  void mu_1_directoryType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_directoryType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_directoryType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
}

mu_1_directoryType::~mu_1_directoryType()
{
}

/*** end record declaration ***/
mu_1_directoryType mu_1_directoryType_undefined_var;

class mu_1_cacheType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_stateType mu_state;
  mu_1_markType mu_mark;
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
    w = CompareWeight(a.mu_mark, b.mu_mark);
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
    w = Compare(a.mu_mark, b.mu_mark);
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
    mu_mark.MultisetSort();
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_mark.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_mark.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_mark.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_mark.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_state.print();
    mu_mark.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_mark.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_mark.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_cacheType& operator= (const mu_1_cacheType& from) {
    mu_state.value(from.mu_state.value());
    mu_mark.value(from.mu_mark.value());
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
  if (name) mu_mark.set_self_2(name, ".mark", os + 8 ); else mu_mark.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 24 ); else mu_dirty.set_self_2(NULL, NULL, 0);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 32 + os);
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
  mu_1_directoryType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_directoryType& operator[] (int index) /* const */
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
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 16 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_chAType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_1_chBType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
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
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_1_chCType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_chDType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_chEType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

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
  mu_1__type_4 mu_slave_pending;
  mu_1_master_pending_Type mu_master_pending;
  mu_1__type_5 mu_chanA;
  mu_1__type_6 mu_chanB;
  mu_1__type_7 mu_chanC;
  mu_1__type_8 mu_chanD;
  mu_1__type_9 mu_chanE;
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
    mu_master_pending.value(from.mu_master_pending.value());
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
  if (name) mu_sons.set_self_2(name, ".sons", os + 64 ); else mu_sons.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 80 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 144 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 160 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_chanA.set_self_2(name, ".chanA", os + 168 ); else mu_chanA.set_self_2(NULL, NULL, 0);
  if (name) mu_chanB.set_self_2(name, ".chanB", os + 216 ); else mu_chanB.set_self_2(NULL, NULL, 0);
  if (name) mu_chanC.set_self_2(name, ".chanC", os + 264 ); else mu_chanC.set_self_2(NULL, NULL, 0);
  if (name) mu_chanD.set_self_2(name, ".chanD", os + 328 ); else mu_chanD.set_self_2(NULL, NULL, 0);
  if (name) mu_chanE.set_self_2(name, ".chanE", os + 392 ); else mu_chanE.set_self_2(NULL, NULL, 0);
}

mu_1_TreeNode::~mu_1_TreeNode()
{
}

/*** end record declaration ***/
mu_1_TreeNode mu_1_TreeNode_undefined_var;

class mu_1__type_10
{
 public:
  mu_1_TreeNode array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
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
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
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
  for(int i = 0; i < 7; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 424 + os);
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
  mu_1_validDataType array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_validDataType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 3 ) )
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
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
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
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
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
  mu_1_validDataType array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1_validDataType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 3 ) )
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
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
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
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_13& val) { return mu__byte::operator=((int) val); };
  mu_1__type_13 (const char *name, int os): mu__byte(1, 8, 4, name, os) {};
  mu_1__type_13 (void): mu__byte(1, 8, 4) {};
  mu_1__type_13 (int val): mu__byte(1, 8, 4, "Parameter or function result.", 0)
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
mu_1__type_13 mu_1__type_13_undefined_var;

const int mu_coreNum = 4;
const int mu_allNodeNum = 7;
const int mu_allBranchNum = 2;
const int mu_dataNum = 2;
const int mu_addrNum = 4;
const int mu_lineNum = 2;
const int mu_None = 1;
const int mu_Trunk = 2;
const int mu_Branch = 3;
const int mu_Tip = 4;
const int mu_A_None = 5;
const int mu_AcquirePerm = 6;
const int mu_AcquireBlock = 7;
const int mu_B_None = 8;
const int mu_ProbePerm = 9;
const int mu_ProbeBlock = 10;
const int mu_C_None = 11;
const int mu_Release = 12;
const int mu_ReleaseData = 13;
const int mu_ProbeAck = 14;
const int mu_ProbeAckData = 15;
const int mu_D_None = 16;
const int mu_Grant = 17;
const int mu_GrantData = 18;
const int mu_ReleaseAck = 19;
const int mu_E_None = 20;
const int mu_GrantAck = 21;
const int mu_NtoB = 22;
const int mu_NtoT = 23;
const int mu_BtoT = 24;
const int mu_toN = 25;
const int mu_toB = 26;
const int mu_toT = 27;
const int mu_BtoN = 28;
const int mu_TtoN = 29;
const int mu_TtoB = 30;
const int mu_NtoN = 31;
const int mu_S_None = 32;
const int mu_pending_ProbeAck = 33;
const int mu_pending_ProbeAckData = 34;
const int mu_pending_GrantAck = 35;
const int mu_M_None = 36;
const int mu_pending_Grant = 37;
const int mu_pending_GrantData = 38;
const int mu_pending_ReleaseAck = 39;
/*** Variable declaration ***/
mu_1__type_10 mu_Tree("Tree",0);

/*** Variable declaration ***/
mu_1__type_11 mu_memData("memData",2968);

/*** Variable declaration ***/
mu_1__type_12 mu_auxData("auxData",3000);





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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquireBlock, m:%s, c:%s, a:%s, b:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr14;
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_Tree[1].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr15)) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_Tree[1].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
    return mu__boolexpr14;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 32 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_Tree[1].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_Tree[1].mu_cache[mu_c].mu_state) == (mu_None)) ; 
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
    r = what_rule - 0;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_c].mu_data = mu_memData[mu_a];
mu_Tree[1].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[1].mu_cache[mu_c].mu_mark = mu_m;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquirePerm_None, m:%s, c:%s, a:%s, b:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_Tree[1].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_Tree[1].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
    return mu__boolexpr22;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 32;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 64 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
bool mu__boolexpr29;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_Tree[1].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_Tree[1].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr26) {
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
    r = what_rule - 32;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache[mu_c].mu_data = mu_memData[mu_a];
mu_Tree[1].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[1].mu_cache[mu_c].mu_mark = mu_m;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("L3_send_release_Tip, m:%s, c:%s, a:%s", mu_m.Name(), mu_c.Name(), mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr30;
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_Tree[1].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_Tree[1].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
bool mu__quant34; 
mu__quant34 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr35;
  if (!((mu_Tree[1].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Tree[1].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) ; 
}
if ( !(mu__boolexpr35) )
  { mu__quant34 = FALSE; break; }
};
};
  mu__boolexpr30 = (mu__quant34) ; 
}
    return mu__boolexpr30;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 64;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 80 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_Tree[1].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_Tree[1].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
bool mu__quant40; 
mu__quant40 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr41;
  if (!((mu_Tree[1].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_Tree[1].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) ; 
}
if ( !(mu__boolexpr41) )
  { mu__quant40 = FALSE; break; }
};
};
  mu__boolexpr36 = (mu__quant40) ; 
}
	      if (mu__boolexpr36) {
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
    r = what_rule - 64;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
mu_Tree[1].mu_cache[mu_c].mu_state = mu_None;
if ( mu_Tree[1].mu_cache[mu_c].mu_dirty )
{
mu_memData[mu_a] = mu_Tree[1].mu_cache[mu_c].mu_data;
mu_Tree[1].mu_cache[mu_c].mu_dirty = mu_false;
}
mu_Tree[1].mu_cache[mu_c].mu_data = 0;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Tip, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!((mu_i) > (1))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
bool mu__quant49; 
mu__quant49 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr50;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) ; 
}
if ( !(mu__boolexpr50) )
  { mu__quant49 = FALSE; break; }
};
};
  mu__boolexpr44 = (mu__quant49) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr42;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 80;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 128 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
  if (!((mu_i) > (1))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
bool mu__quant58; 
mu__quant58 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr59;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) ; 
}
if ( !(mu__boolexpr59) )
  { mu__quant58 = FALSE; break; }
};
};
  mu__boolexpr53 = (mu__quant58) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
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
    r = what_rule - 80;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_Release;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
if ( mu_Tree[mu_i].mu_cache[mu_c].mu_dirty )
{
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_false;
}
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = 0;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Branch, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_i) > (1))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
bool mu__quant67; 
mu__quant67 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr68;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) ; 
}
if ( !(mu__boolexpr68) )
  { mu__quant67 = FALSE; break; }
};
};
  mu__boolexpr62 = (mu__quant67) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr60;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 128;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 176 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
  if (!((mu_i) > (1))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
bool mu__quant76; 
mu__quant76 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr77;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode) == (mu_A_None)) ; 
}
if ( !(mu__boolexpr77) )
  { mu__quant76 = FALSE; break; }
};
};
  mu__boolexpr71 = (mu__quant76) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr69) {
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
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_Release;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = 0;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toB_Trunk, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!((mu_i) > (1))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr78;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 176;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 224 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
  if (!((mu_i) > (1))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr85) {
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
    r = what_rule - 176;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr92;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr92 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toN_Trunk, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
  if (!((mu_i) > (1))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr93;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 224;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 272 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
  if (!((mu_i) > (1))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr100) {
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
    r = what_rule - 224;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr107;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr107 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toB_Tip, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!((mu_i) > (1))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
bool mu__boolexpr116;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr116 = TRUE ;
  else {
  mu__boolexpr116 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr108 = (mu__boolexpr116) ; 
}
    return mu__boolexpr108;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 272;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 320 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
  if (!((mu_i) > (1))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
bool mu__boolexpr125;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr125 = TRUE ;
  else {
  mu__boolexpr125 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr117 = (mu__boolexpr125) ; 
}
	      if (mu__boolexpr117) {
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
    r = what_rule - 272;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Branch;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
if ( mu_Tree[mu_i].mu_cache[mu_c].mu_dirty )
{
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_false;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toN_Tip_None, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
bool mu__boolexpr134;
  if (!((mu_i) > (1))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
bool mu__quant135; 
mu__quant135 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None)) )
  { mu__quant135 = FALSE; break; }
};
};
  mu__boolexpr127 = (mu__quant135) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
bool mu__boolexpr136;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr136 = TRUE ;
  else {
  mu__boolexpr136 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr126 = (mu__boolexpr136) ; 
}
    return mu__boolexpr126;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 320;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 368 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
  if (!((mu_i) > (1))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
bool mu__quant146; 
mu__quant146 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None)) )
  { mu__quant146 = FALSE; break; }
};
};
  mu__boolexpr138 = (mu__quant146) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
bool mu__boolexpr147;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr147 = TRUE ;
  else {
  mu__boolexpr147 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr137 = (mu__boolexpr147) ; 
}
	      if (mu__boolexpr137) {
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
    r = what_rule - 320;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
if ( mu_Tree[mu_i].mu_cache[mu_c].mu_dirty )
{
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_false;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbePerm_Branch_Branch, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!((mu_i) > (1))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
bool mu__quant156; 
mu__quant156 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr157;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr157) )
  { mu__quant156 = TRUE; break; }
};
};
  mu__boolexpr149 = (mu__quant156) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
bool mu__boolexpr158;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr158 = TRUE ;
  else {
  mu__boolexpr158 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr148 = (mu__boolexpr158) ; 
}
    return mu__boolexpr148;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 368;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 416 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!((mu_i) > (1))) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
bool mu__quant167; 
mu__quant167 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr168;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr168) )
  { mu__quant167 = TRUE; break; }
};
};
  mu__boolexpr160 = (mu__quant167) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
bool mu__boolexpr169;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr169 = TRUE ;
  else {
  mu__boolexpr169 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr159 = (mu__boolexpr169) ; 
}
	      if (mu__boolexpr159) {
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
    r = what_rule - 368;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr170;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr170 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbePerm;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbePerm_Branch_None, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
  if (!((mu_i) > (1))) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
bool mu__quant179; 
mu__quant179 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None)) )
  { mu__quant179 = FALSE; break; }
};
};
  mu__boolexpr172 = (mu__quant179) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
bool mu__boolexpr180;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr180 = TRUE ;
  else {
  mu__boolexpr180 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr171 = (mu__boolexpr180) ; 
}
    return mu__boolexpr171;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 416;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 464 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_i) > (1))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
bool mu__quant189; 
mu__quant189 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None)) )
  { mu__quant189 = FALSE; break; }
};
};
  mu__boolexpr182 = (mu__quant189) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
bool mu__boolexpr190;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr190 = TRUE ;
  else {
  mu__boolexpr190 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr181 = (mu__boolexpr190) ; 
}
	      if (mu__boolexpr181) {
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
    r = what_rule - 416;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_None, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
  if (!((mu_i) > (1))) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
bool mu__boolexpr196;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr196 = TRUE ;
  else {
  mu__boolexpr196 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  mu__boolexpr194 = (mu__boolexpr196) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
bool mu__boolexpr197;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr197 = TRUE ;
  else {
  mu__boolexpr197 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr191 = (mu__boolexpr197) ; 
}
    return mu__boolexpr191;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 464;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 512 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!((mu_i) > (1))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
bool mu__boolexpr203;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr203 = TRUE ;
  else {
  mu__boolexpr203 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  mu__boolexpr201 = (mu__boolexpr203) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
bool mu__boolexpr204;
  if ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) mu__boolexpr204 = TRUE ;
  else {
  mu__boolexpr204 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr198 = (mu__boolexpr204) ; 
}
	      if (mu__boolexpr198) {
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
    r = what_rule - 464;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_NtoN;
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
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ReleaseAck, c:%s, m:%s, a:%s, i:%s", mu_c.Name(), mu_m.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr205;
bool mu__boolexpr206;
  if (!((mu_i) > (1))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr205;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 512;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 560 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (!((mu_i) > (1))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr207) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 4;
	}
	else
	  what_rule += 4;
    r = what_rule - 512;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantData_toT, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (!((mu_i) > (1))) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr209;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 560;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 608 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!((mu_i) > (1))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr215) {
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
    r = what_rule - 560;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantData_toB, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
  if (!((mu_i) > (1))) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr221;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 608;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 656 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!((mu_i) > (1))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr227) {
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
    r = what_rule - 608;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Grant2, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!((mu_i) > (1))) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr233;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 656;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 704 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!((mu_i) > (1))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
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
    r = what_rule - 656;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Grant1, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
  if (!((mu_i) > (1))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr247;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 704;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 752 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
  if (!((mu_i) > (1))) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr253) {
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
    r = what_rule - 704;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Branch_x_x, m:%s, c:%s, a:%s, b1:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
  if (!((mu_i) > (1))) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr259;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 752;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 848 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!((mu_i) > (1))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
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
  mu__boolexpr269 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
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
    r = what_rule - 752;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_Grant;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_None_x_x, m:%s, c:%s, a:%s, b1:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
  if (!((mu_i) > (1))) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
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
  mu__boolexpr276 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr275;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 848;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 944 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
  if (!((mu_i) > (1))) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
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
  mu__boolexpr283 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr282) {
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
    r = what_rule - 848;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_None_x_x, m:%s, c:%s, a:%s, b1:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr289;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
bool mu__boolexpr294;
  if (!((mu_i) > (1))) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr294)) mu__boolexpr293 = FALSE ;
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
  mu__boolexpr290 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr289;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 944;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1040 )
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
  mu__boolexpr300 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr295) {
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
    r = what_rule - 944;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_None_x_x, m:%s, c:%s, a:%s, b1:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
bool mu__boolexpr305;
  if (!((mu_i) > (1))) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr301;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1040;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1136 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!((mu_i) > (1))) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr306) {
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
    r = what_rule - 1040;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Branch_x_x, m:%s, c:%s, a:%s, b1:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
  if (!((mu_i) > (1))) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr311;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1136;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1232 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!((mu_i) > (1))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr318) {
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
    r = what_rule - 1136;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_Grant;
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
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantAck, c:%s, m:%s, a:%s, b:%s, i:%s", mu_c.Name(), mu_m.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr325;
  if (!((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck))) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr325;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1232;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1328 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr326;
  if (!((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck))) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr326) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 4;
	}
	else
	  what_rule += 4;
    r = what_rule - 1232;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode = mu_E_None;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_S_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ReleaseData, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr327;
bool mu__boolexpr328;
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr327;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1328;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1424 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr332) {
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
    r = what_rule - 1328;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_true;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Release_BtoN/NtoN/TtoN, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
bool mu__boolexpr343;
bool mu__boolexpr344;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr344 = TRUE ;
  else {
  mu__boolexpr344 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  if (mu__boolexpr344) mu__boolexpr343 = TRUE ;
  else {
  mu__boolexpr343 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  mu__boolexpr339 = (mu__boolexpr343) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr337;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1424;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1520 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr345;
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
bool mu__boolexpr351;
bool mu__boolexpr352;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr352 = TRUE ;
  else {
  mu__boolexpr352 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  if (mu__boolexpr352) mu__boolexpr351 = TRUE ;
  else {
  mu__boolexpr351 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  mu__boolexpr347 = (mu__boolexpr351) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr345) {
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
    r = what_rule - 1424;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
if ( (mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN) )
{
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
}
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAckData_TtoB, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr353;
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr353;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1520;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1616 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
bool mu__boolexpr364;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr359) {
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
    r = what_rule - 1520;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_true;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_S_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAckData_TtoN, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr365;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1616;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1712 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr371;
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr371) {
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
    r = what_rule - 1616;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_true;
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_S_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
bool mu__boolexpr383;
bool mu__boolexpr384;
bool mu__boolexpr385;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) mu__boolexpr385 = TRUE ;
  else {
  mu__boolexpr385 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
  if (mu__boolexpr385) mu__boolexpr384 = TRUE ;
  else {
  mu__boolexpr384 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (mu__boolexpr384) mu__boolexpr383 = TRUE ;
  else {
  mu__boolexpr383 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  mu__boolexpr377 = (mu__boolexpr383) ; 
}
    return mu__boolexpr377;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1712;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1808 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr386;
bool mu__boolexpr387;
bool mu__boolexpr388;
bool mu__boolexpr389;
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr388)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) mu__boolexpr394 = TRUE ;
  else {
  mu__boolexpr394 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
  if (mu__boolexpr394) mu__boolexpr393 = TRUE ;
  else {
  mu__boolexpr393 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
  if (mu__boolexpr393) mu__boolexpr392 = TRUE ;
  else {
  mu__boolexpr392 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
  mu__boolexpr386 = (mu__boolexpr392) ; 
}
	      if (mu__boolexpr386) {
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
    r = what_rule - 1712;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
if ( (mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB) )
{
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_Branch;
}
else
{
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_None;
}
bool mu__boolexpr395;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) mu__boolexpr395 = TRUE ;
  else {
  mu__boolexpr395 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
if ( mu__boolexpr395 )
{
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
}
mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode = mu_C_None;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_S_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Trunk, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
bool mu__boolexpr401;
bool mu__boolexpr402;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
bool mu__quant403; 
mu__quant403 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
  if (!((mu_k) != (mu_b))) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr404) )
  { mu__quant403 = TRUE; break; }
};
};
  mu__boolexpr396 = (mu__quant403) ; 
}
    return mu__boolexpr396;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1808;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 1904 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr407;
bool mu__boolexpr408;
bool mu__boolexpr409;
bool mu__boolexpr410;
bool mu__boolexpr411;
bool mu__boolexpr412;
bool mu__boolexpr413;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr413)) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
bool mu__quant414; 
mu__quant414 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
  if (!((mu_k) != (mu_b))) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr415) )
  { mu__quant414 = TRUE; break; }
};
};
  mu__boolexpr407 = (mu__quant414) ; 
}
	      if (mu__boolexpr407) {
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
    r = what_rule - 1808;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr418;
bool mu__boolexpr419;
bool mu__boolexpr420;
  if (!((mu_k) != (mu_b))) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr418 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Tip_x_Branch, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr421;
bool mu__boolexpr422;
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
bool mu__quant428; 
mu__quant428 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr429;
bool mu__boolexpr430;
bool mu__boolexpr431;
  if (!((mu_k) != (mu_b))) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr431)) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr429) )
  { mu__quant428 = TRUE; break; }
};
};
  mu__boolexpr421 = (mu__quant428) ; 
}
    return mu__boolexpr421;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1904;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2000 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr432;
bool mu__boolexpr433;
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
bool mu__boolexpr437;
bool mu__boolexpr438;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
bool mu__quant439; 
mu__quant439 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
  if (!((mu_k) != (mu_b))) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr440) )
  { mu__quant439 = TRUE; break; }
};
};
  mu__boolexpr432 = (mu__quant439) ; 
}
	      if (mu__boolexpr432) {
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
    r = what_rule - 1904;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
  if (!((mu_k) != (mu_b))) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr443 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbePerm;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Tip_None_None, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
bool mu__quant453; 
mu__quant453 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr454;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr454) )
  { mu__quant453 = FALSE; break; }
};
};
  mu__boolexpr446 = (mu__quant453) ; 
}
    return mu__boolexpr446;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2000;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2096 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
bool mu__quant462; 
mu__quant462 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr463;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None))) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr463) )
  { mu__quant462 = FALSE; break; }
};
};
  mu__boolexpr455 = (mu__quant462) ; 
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
    r = what_rule - 2000;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Trunk;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_Trunk, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr464;
bool mu__boolexpr465;
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
bool mu__boolexpr470;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
bool mu__quant471; 
mu__quant471 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr472;
bool mu__boolexpr473;
bool mu__boolexpr474;
  if (!((mu_k) != (mu_b))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr472) )
  { mu__quant471 = TRUE; break; }
};
};
  mu__boolexpr464 = (mu__quant471) ; 
}
    return mu__boolexpr464;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2096;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2192 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr475;
bool mu__boolexpr476;
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
bool mu__boolexpr481;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
bool mu__quant482; 
mu__quant482 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr483;
bool mu__boolexpr484;
bool mu__boolexpr485;
  if (!((mu_k) != (mu_b))) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr483) )
  { mu__quant482 = TRUE; break; }
};
};
  mu__boolexpr475 = (mu__quant482) ; 
}
	      if (mu__boolexpr475) {
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
    r = what_rule - 2096;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr486;
bool mu__boolexpr487;
bool mu__boolexpr488;
  if (!((mu_k) != (mu_b))) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr486 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr489;
bool mu__boolexpr490;
bool mu__boolexpr491;
bool mu__boolexpr492;
bool mu__boolexpr493;
bool mu__boolexpr494;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr492)) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
bool mu__boolexpr495;
bool mu__boolexpr496;
  if ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) mu__boolexpr496 = TRUE ;
  else {
  mu__boolexpr496 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  mu__boolexpr490 = (mu__boolexpr495) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_Tree[mu_i].mu_slave_pending[mu_b]) == (mu_S_None)) ; 
}
    return mu__boolexpr489;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2192;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2288 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr497;
bool mu__boolexpr498;
bool mu__boolexpr499;
bool mu__boolexpr500;
bool mu__boolexpr501;
bool mu__boolexpr502;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr502)) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr501)) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
bool mu__boolexpr503;
bool mu__boolexpr504;
  if ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) mu__boolexpr504 = TRUE ;
  else {
  mu__boolexpr504 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  mu__boolexpr498 = (mu__boolexpr503) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_Tree[mu_i].mu_slave_pending[mu_b]) == (mu_S_None)) ; 
}
	      if (mu__boolexpr497) {
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
    r = what_rule - 2192;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_Branch;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Trunk, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr505;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2288;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2384 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr510;
bool mu__boolexpr511;
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr511)) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr510) {
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
    r = what_rule - 2288;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr515;
bool mu__boolexpr516;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Tip))) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr515 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_x_Branch, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
bool mu__boolexpr520;
bool mu__boolexpr521;
bool mu__boolexpr522;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr520)) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
bool mu__quant523; 
mu__quant523 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
  if (!((mu_k) != (mu_b))) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr524) )
  { mu__quant523 = TRUE; break; }
};
};
  mu__boolexpr517 = (mu__quant523) ; 
}
    return mu__boolexpr517;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2384;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2480 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
bool mu__quant533; 
mu__quant533 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr534;
bool mu__boolexpr535;
bool mu__boolexpr536;
  if (!((mu_k) != (mu_b))) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr535)) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( (mu__boolexpr534) )
  { mu__quant533 = TRUE; break; }
};
};
  mu__boolexpr527 = (mu__quant533) ; 
}
	      if (mu__boolexpr527) {
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
    r = what_rule - 2384;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
  if (!((mu_k) != (mu_b))) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( mu__boolexpr537 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbePerm;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_chanB[mu_k].mu_addr = mu_a;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_Branch_None, m:%s, c:%s, a:%s, b:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr540;
bool mu__boolexpr541;
bool mu__boolexpr542;
bool mu__boolexpr543;
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
bool mu__boolexpr547;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
bool mu__quant548; 
mu__quant548 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr549;
bool mu__boolexpr550;
  if (!((mu_k) != (mu_b))) mu__boolexpr550 = TRUE ;
  else {
  mu__boolexpr550 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr549) )
  { mu__quant548 = FALSE; break; }
};
};
  mu__boolexpr542 = (mu__quant548) ; 
}
  if (!(mu__boolexpr542)) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr540;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2480;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 2576 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr551;
bool mu__boolexpr552;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
bool mu__quant559; 
mu__quant559 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr560;
bool mu__boolexpr561;
  if (!((mu_k) != (mu_b))) mu__boolexpr561 = TRUE ;
  else {
  mu__boolexpr561 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = ((mu_Tree[mu_i].mu_slave_pending[mu_k]) == (mu_S_None)) ; 
}
if ( !(mu__boolexpr560) )
  { mu__quant559 = FALSE; break; }
};
};
  mu__boolexpr553 = (mu__quant559) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr551) {
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
    r = what_rule - 2480;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
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
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_directory[mu_b][mu_c].mu_addr = mu_a;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Trunk;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
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
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("receive_ReleaseAck, c:%s, m:%s, a:%s, i:%s", mu_c.Name(), mu_m.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr562;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck))) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr562;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2576;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 2640 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr563;
  if (!((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ReleaseAck))) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr563) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 4;
	}
	else
	  what_rule += 4;
    r = what_rule - 2576;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_ProbeBlock_TtoB, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr564;
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
bool mu__boolexpr568;
bool mu__boolexpr569;
bool mu__boolexpr570;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
bool mu__boolexpr571;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr571 = TRUE ;
  else {
  mu__boolexpr571 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr566 = (mu__boolexpr571) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr564;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2640;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 2704 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr572;
bool mu__boolexpr573;
bool mu__boolexpr574;
bool mu__boolexpr575;
bool mu__boolexpr576;
bool mu__boolexpr577;
bool mu__boolexpr578;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr575)) mu__boolexpr574 = FALSE ;
  else {
bool mu__boolexpr579;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr579 = TRUE ;
  else {
  mu__boolexpr579 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr574 = (mu__boolexpr579) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr573)) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr572) {
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
    r = what_rule - 2640;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
if ( mu_Tree[mu_i].mu_cache[mu_c].mu_dirty )
{
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_false;
}
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Branch;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_ProbeBlock_TtoN, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr580;
bool mu__boolexpr581;
bool mu__boolexpr582;
bool mu__boolexpr583;
bool mu__boolexpr584;
bool mu__boolexpr585;
bool mu__boolexpr586;
bool mu__boolexpr587;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr587)) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr583)) mu__boolexpr582 = FALSE ;
  else {
bool mu__boolexpr588;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr588 = TRUE ;
  else {
  mu__boolexpr588 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr582 = (mu__boolexpr588) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr580;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2704;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 2768 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr589;
bool mu__boolexpr590;
bool mu__boolexpr591;
bool mu__boolexpr592;
bool mu__boolexpr593;
bool mu__boolexpr594;
bool mu__boolexpr595;
bool mu__boolexpr596;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr592)) mu__boolexpr591 = FALSE ;
  else {
bool mu__boolexpr597;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr597 = TRUE ;
  else {
  mu__boolexpr597 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr591 = (mu__boolexpr597) ; 
}
  if (!(mu__boolexpr591)) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr590)) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr589) {
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
    r = what_rule - 2704;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
if ( mu_Tree[mu_i].mu_cache[mu_c].mu_dirty )
{
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAckData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_false;
}
mu_Tree[mu_i].mu_cache[mu_c].mu_data = 0;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_ProbePerm_BtoN, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr598;
bool mu__boolexpr599;
bool mu__boolexpr600;
bool mu__boolexpr601;
bool mu__boolexpr602;
bool mu__boolexpr603;
bool mu__boolexpr604;
bool mu__boolexpr605;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr604)) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr602)) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
bool mu__boolexpr606;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr606 = TRUE ;
  else {
  mu__boolexpr606 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr600 = (mu__boolexpr606) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr598;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2768;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 2832 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr607;
bool mu__boolexpr608;
bool mu__boolexpr609;
bool mu__boolexpr610;
bool mu__boolexpr611;
bool mu__boolexpr612;
bool mu__boolexpr613;
bool mu__boolexpr614;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr614)) mu__boolexpr613 = FALSE ;
  else {
  mu__boolexpr613 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr613)) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr610)) mu__boolexpr609 = FALSE ;
  else {
bool mu__boolexpr615;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr615 = TRUE ;
  else {
  mu__boolexpr615 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr609 = (mu__boolexpr615) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr607) {
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
    r = what_rule - 2768;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = 0;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_NtoN, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
bool mu__boolexpr619;
bool mu__boolexpr620;
bool mu__boolexpr621;
bool mu__boolexpr622;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr622 = FALSE ;
  else {
  mu__boolexpr622 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr622)) mu__boolexpr621 = FALSE ;
  else {
bool mu__boolexpr623;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) mu__boolexpr623 = TRUE ;
  else {
  mu__boolexpr623 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr621 = (mu__boolexpr623) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = FALSE ;
  else {
bool mu__boolexpr624;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) mu__boolexpr624 = TRUE ;
  else {
  mu__boolexpr624 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr620 = (mu__boolexpr624) ; 
}
  if (!(mu__boolexpr620)) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
bool mu__boolexpr625;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr625 = TRUE ;
  else {
  mu__boolexpr625 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr617 = (mu__boolexpr625) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
    return mu__boolexpr616;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2832;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 2896 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr626;
bool mu__boolexpr627;
bool mu__boolexpr628;
bool mu__boolexpr629;
bool mu__boolexpr630;
bool mu__boolexpr631;
bool mu__boolexpr632;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr632)) mu__boolexpr631 = FALSE ;
  else {
bool mu__boolexpr633;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbePerm)) mu__boolexpr633 = TRUE ;
  else {
  mu__boolexpr633 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr631 = (mu__boolexpr633) ; 
}
  if (!(mu__boolexpr631)) mu__boolexpr630 = FALSE ;
  else {
bool mu__boolexpr634;
  if ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toN)) mu__boolexpr634 = TRUE ;
  else {
  mu__boolexpr634 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr630 = (mu__boolexpr634) ; 
}
  if (!(mu__boolexpr630)) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
bool mu__boolexpr635;
  if (!((mu_Tree[mu_i].mu_master_pending) != (mu_M_None))) mu__boolexpr635 = TRUE ;
  else {
  mu__boolexpr635 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr627 = (mu__boolexpr635) ; 
}
  if (!(mu__boolexpr627)) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr626) {
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
    r = what_rule - 2832;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ProbeAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_NtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanB[((mu_i) % (2)) + (1)].mu_opcode = mu_B_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_GrantData_toT, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr636;
bool mu__boolexpr637;
bool mu__boolexpr638;
bool mu__boolexpr639;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr637)) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr636;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2896;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 2960 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr640;
bool mu__boolexpr641;
bool mu__boolexpr642;
bool mu__boolexpr643;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr640) {
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
    r = what_rule - 2896;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_GrantData_toB, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr644;
bool mu__boolexpr645;
bool mu__boolexpr646;
bool mu__boolexpr647;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr647)) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr646)) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr645)) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr644;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2960;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3024 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr648;
bool mu__boolexpr649;
bool mu__boolexpr650;
bool mu__boolexpr651;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr650)) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr648) {
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
    r = what_rule - 2960;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_data;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Grant_toT, m:%s, c:%s, a:%s, i:%s", mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr652;
bool mu__boolexpr653;
bool mu__boolexpr654;
bool mu__boolexpr655;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr654)) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr653)) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr652;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3024;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3088 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr656;
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr656) {
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
    r = what_rule - 3024;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache[mu_c].mu_mark = mu_m;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanD[((mu_i) % (2)) + (1)].mu_opcode = mu_D_None;
mu_Tree[mu_i].mu_master_pending = mu_M_None;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_opcode = mu_GrantAck;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanE[((mu_i) % (2)) + (1)].mu_addr = mu_a;
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
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release_TtoN, d:%s, m:%s, c:%s, a:%s, i:%s", mu_d.Name(), mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr660;
bool mu__boolexpr661;
bool mu__boolexpr662;
bool mu__boolexpr663;
bool mu__boolexpr664;
  if (!((mu_m) == ((mu_a) / (mu_lineNum)))) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr664)) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr663)) mu__boolexpr662 = FALSE ;
  else {
  mu__boolexpr662 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr662)) mu__boolexpr661 = FALSE ;
  else {
  mu__boolexpr661 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr661)) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr660;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3088;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3216 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr665;
bool mu__boolexpr666;
bool mu__boolexpr667;
bool mu__boolexpr668;
bool mu__boolexpr669;
  if (!((mu_m) == ((mu_a) / (mu_lineNum)))) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr668)) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr666)) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr665) {
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
    r = what_rule - 3088;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_Release;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_TtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
if ( mu_Tree[mu_i].mu_cache[mu_c].mu_dirty )
{
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_ReleaseData;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_data = mu_Tree[mu_i].mu_cache[mu_c].mu_data;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_false;
}
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = 0;
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
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release_BtoN, d:%s, m:%s, c:%s, a:%s, i:%s", mu_d.Name(), mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr670;
bool mu__boolexpr671;
bool mu__boolexpr672;
bool mu__boolexpr673;
bool mu__boolexpr674;
  if (!((mu_m) == ((mu_a) / (mu_lineNum)))) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr674)) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr673)) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr672)) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr671)) mu__boolexpr670 = FALSE ;
  else {
  mu__boolexpr670 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
    return mu__boolexpr670;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3216;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3344 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr675;
bool mu__boolexpr676;
bool mu__boolexpr677;
bool mu__boolexpr678;
bool mu__boolexpr679;
  if (!((mu_m) == ((mu_a) / (mu_lineNum)))) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr679)) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr677)) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = ((mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode) == (mu_C_None)) ; 
}
	      if (mu__boolexpr675) {
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
    r = what_rule - 3216;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_opcode = mu_Release;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_para = mu_BtoN;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanC[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = 0;
mu_Tree[mu_i].mu_cache[mu_c].mu_state = mu_None;
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
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquireBlock_toT, d:%s, m:%s, c:%s, a:%s, i:%s", mu_d.Name(), mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr680;
bool mu__boolexpr681;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr681)) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr680;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3344;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3472 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr682;
bool mu__boolexpr683;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr683)) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr682) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 4;
	}
	else
	  what_rule += 4;
    r = what_rule - 3344;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquirePerm_toT, d:%s, m:%s, c:%s, a:%s, i:%s", mu_d.Name(), mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr684;
bool mu__boolexpr685;
bool mu__boolexpr686;
bool mu__boolexpr687;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr687)) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr686)) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr684;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3472;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3600 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr688;
bool mu__boolexpr689;
bool mu__boolexpr690;
bool mu__boolexpr691;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = ((mu_m) == ((mu_a) / (mu_lineNum))) ; 
}
  if (!(mu__boolexpr691)) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr690)) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr688) {
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
    r = what_rule - 3472;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquirePerm;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_BtoT;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_Grant;
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
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquireBlock_toB, d:%s, m:%s, c:%s, a:%s, i:%s", mu_d.Name(), mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr692;
bool mu__boolexpr693;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr693)) mu__boolexpr692 = FALSE ;
  else {
  mu__boolexpr692 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
    return mu__boolexpr692;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3600;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3728 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr694;
bool mu__boolexpr695;
  if (!((mu_c) == ((mu_a) % (mu_lineNum)))) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr695)) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = ((mu_Tree[mu_i].mu_master_pending) == (mu_M_None)) ; 
}
	      if (mu__boolexpr694) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 4;
	}
	else
	  what_rule += 4;
    r = what_rule - 3600;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_opcode = mu_AcquireBlock;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_para = mu_NtoB;
mu_Tree[(((mu_i) - (2)) / (mu_allBranchNum)) + (1)].mu_chanA[((mu_i) % (2)) + (1)].mu_addr = mu_a;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("Store, d:%s, m:%s, c:%s, a:%s, i:%s", mu_d.Name(), mu_m.Name(), mu_c.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
bool mu__boolexpr696;
bool mu__boolexpr697;
bool mu__boolexpr698;
  if (!((mu_m) == ((mu_a) / (mu_lineNum)))) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
    return mu__boolexpr696;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3728;
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 3856 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr699;
bool mu__boolexpr700;
bool mu__boolexpr701;
  if (!((mu_m) == ((mu_a) / (mu_lineNum)))) mu__boolexpr701 = FALSE ;
  else {
  mu__boolexpr701 = ((mu_c) == ((mu_a) % (mu_lineNum))) ; 
}
  if (!(mu__boolexpr701)) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = ((mu_Tree[mu_i].mu_cache[mu_c].mu_mark) == (mu_m)) ; 
}
	      if (mu__boolexpr699) {
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
    r = what_rule - 3728;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_validDataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_markType mu_m;
    mu_m.value((r % 2) + 0);
    r = r / 2;
    static mu_1_lineType mu_c;
    mu_c.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 4) + 0);
    r = r / 4;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache[mu_c].mu_data = mu_d;
mu_Tree[mu_i].mu_cache[mu_c].mu_dirty = mu_true;
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<32)
    { R0.NextRule(what_rule);
      if (what_rule<32) return; }
  if (what_rule>=32 && what_rule<64)
    { R1.NextRule(what_rule);
      if (what_rule<64) return; }
  if (what_rule>=64 && what_rule<80)
    { R2.NextRule(what_rule);
      if (what_rule<80) return; }
  if (what_rule>=80 && what_rule<128)
    { R3.NextRule(what_rule);
      if (what_rule<128) return; }
  if (what_rule>=128 && what_rule<176)
    { R4.NextRule(what_rule);
      if (what_rule<176) return; }
  if (what_rule>=176 && what_rule<224)
    { R5.NextRule(what_rule);
      if (what_rule<224) return; }
  if (what_rule>=224 && what_rule<272)
    { R6.NextRule(what_rule);
      if (what_rule<272) return; }
  if (what_rule>=272 && what_rule<320)
    { R7.NextRule(what_rule);
      if (what_rule<320) return; }
  if (what_rule>=320 && what_rule<368)
    { R8.NextRule(what_rule);
      if (what_rule<368) return; }
  if (what_rule>=368 && what_rule<416)
    { R9.NextRule(what_rule);
      if (what_rule<416) return; }
  if (what_rule>=416 && what_rule<464)
    { R10.NextRule(what_rule);
      if (what_rule<464) return; }
  if (what_rule>=464 && what_rule<512)
    { R11.NextRule(what_rule);
      if (what_rule<512) return; }
  if (what_rule>=512 && what_rule<560)
    { R12.NextRule(what_rule);
      if (what_rule<560) return; }
  if (what_rule>=560 && what_rule<608)
    { R13.NextRule(what_rule);
      if (what_rule<608) return; }
  if (what_rule>=608 && what_rule<656)
    { R14.NextRule(what_rule);
      if (what_rule<656) return; }
  if (what_rule>=656 && what_rule<704)
    { R15.NextRule(what_rule);
      if (what_rule<704) return; }
  if (what_rule>=704 && what_rule<752)
    { R16.NextRule(what_rule);
      if (what_rule<752) return; }
  if (what_rule>=752 && what_rule<848)
    { R17.NextRule(what_rule);
      if (what_rule<848) return; }
  if (what_rule>=848 && what_rule<944)
    { R18.NextRule(what_rule);
      if (what_rule<944) return; }
  if (what_rule>=944 && what_rule<1040)
    { R19.NextRule(what_rule);
      if (what_rule<1040) return; }
  if (what_rule>=1040 && what_rule<1136)
    { R20.NextRule(what_rule);
      if (what_rule<1136) return; }
  if (what_rule>=1136 && what_rule<1232)
    { R21.NextRule(what_rule);
      if (what_rule<1232) return; }
  if (what_rule>=1232 && what_rule<1328)
    { R22.NextRule(what_rule);
      if (what_rule<1328) return; }
  if (what_rule>=1328 && what_rule<1424)
    { R23.NextRule(what_rule);
      if (what_rule<1424) return; }
  if (what_rule>=1424 && what_rule<1520)
    { R24.NextRule(what_rule);
      if (what_rule<1520) return; }
  if (what_rule>=1520 && what_rule<1616)
    { R25.NextRule(what_rule);
      if (what_rule<1616) return; }
  if (what_rule>=1616 && what_rule<1712)
    { R26.NextRule(what_rule);
      if (what_rule<1712) return; }
  if (what_rule>=1712 && what_rule<1808)
    { R27.NextRule(what_rule);
      if (what_rule<1808) return; }
  if (what_rule>=1808 && what_rule<1904)
    { R28.NextRule(what_rule);
      if (what_rule<1904) return; }
  if (what_rule>=1904 && what_rule<2000)
    { R29.NextRule(what_rule);
      if (what_rule<2000) return; }
  if (what_rule>=2000 && what_rule<2096)
    { R30.NextRule(what_rule);
      if (what_rule<2096) return; }
  if (what_rule>=2096 && what_rule<2192)
    { R31.NextRule(what_rule);
      if (what_rule<2192) return; }
  if (what_rule>=2192 && what_rule<2288)
    { R32.NextRule(what_rule);
      if (what_rule<2288) return; }
  if (what_rule>=2288 && what_rule<2384)
    { R33.NextRule(what_rule);
      if (what_rule<2384) return; }
  if (what_rule>=2384 && what_rule<2480)
    { R34.NextRule(what_rule);
      if (what_rule<2480) return; }
  if (what_rule>=2480 && what_rule<2576)
    { R35.NextRule(what_rule);
      if (what_rule<2576) return; }
  if (what_rule>=2576 && what_rule<2640)
    { R36.NextRule(what_rule);
      if (what_rule<2640) return; }
  if (what_rule>=2640 && what_rule<2704)
    { R37.NextRule(what_rule);
      if (what_rule<2704) return; }
  if (what_rule>=2704 && what_rule<2768)
    { R38.NextRule(what_rule);
      if (what_rule<2768) return; }
  if (what_rule>=2768 && what_rule<2832)
    { R39.NextRule(what_rule);
      if (what_rule<2832) return; }
  if (what_rule>=2832 && what_rule<2896)
    { R40.NextRule(what_rule);
      if (what_rule<2896) return; }
  if (what_rule>=2896 && what_rule<2960)
    { R41.NextRule(what_rule);
      if (what_rule<2960) return; }
  if (what_rule>=2960 && what_rule<3024)
    { R42.NextRule(what_rule);
      if (what_rule<3024) return; }
  if (what_rule>=3024 && what_rule<3088)
    { R43.NextRule(what_rule);
      if (what_rule<3088) return; }
  if (what_rule>=3088 && what_rule<3216)
    { R44.NextRule(what_rule);
      if (what_rule<3216) return; }
  if (what_rule>=3216 && what_rule<3344)
    { R45.NextRule(what_rule);
      if (what_rule<3344) return; }
  if (what_rule>=3344 && what_rule<3472)
    { R46.NextRule(what_rule);
      if (what_rule<3472) return; }
  if (what_rule>=3472 && what_rule<3600)
    { R47.NextRule(what_rule);
      if (what_rule<3600) return; }
  if (what_rule>=3600 && what_rule<3728)
    { R48.NextRule(what_rule);
      if (what_rule<3728) return; }
  if (what_rule>=3728 && what_rule<3856)
    { R49.NextRule(what_rule);
      if (what_rule<3856) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=31) return R0.Condition(r-0);
  if (r>=32 && r<=63) return R1.Condition(r-32);
  if (r>=64 && r<=79) return R2.Condition(r-64);
  if (r>=80 && r<=127) return R3.Condition(r-80);
  if (r>=128 && r<=175) return R4.Condition(r-128);
  if (r>=176 && r<=223) return R5.Condition(r-176);
  if (r>=224 && r<=271) return R6.Condition(r-224);
  if (r>=272 && r<=319) return R7.Condition(r-272);
  if (r>=320 && r<=367) return R8.Condition(r-320);
  if (r>=368 && r<=415) return R9.Condition(r-368);
  if (r>=416 && r<=463) return R10.Condition(r-416);
  if (r>=464 && r<=511) return R11.Condition(r-464);
  if (r>=512 && r<=559) return R12.Condition(r-512);
  if (r>=560 && r<=607) return R13.Condition(r-560);
  if (r>=608 && r<=655) return R14.Condition(r-608);
  if (r>=656 && r<=703) return R15.Condition(r-656);
  if (r>=704 && r<=751) return R16.Condition(r-704);
  if (r>=752 && r<=847) return R17.Condition(r-752);
  if (r>=848 && r<=943) return R18.Condition(r-848);
  if (r>=944 && r<=1039) return R19.Condition(r-944);
  if (r>=1040 && r<=1135) return R20.Condition(r-1040);
  if (r>=1136 && r<=1231) return R21.Condition(r-1136);
  if (r>=1232 && r<=1327) return R22.Condition(r-1232);
  if (r>=1328 && r<=1423) return R23.Condition(r-1328);
  if (r>=1424 && r<=1519) return R24.Condition(r-1424);
  if (r>=1520 && r<=1615) return R25.Condition(r-1520);
  if (r>=1616 && r<=1711) return R26.Condition(r-1616);
  if (r>=1712 && r<=1807) return R27.Condition(r-1712);
  if (r>=1808 && r<=1903) return R28.Condition(r-1808);
  if (r>=1904 && r<=1999) return R29.Condition(r-1904);
  if (r>=2000 && r<=2095) return R30.Condition(r-2000);
  if (r>=2096 && r<=2191) return R31.Condition(r-2096);
  if (r>=2192 && r<=2287) return R32.Condition(r-2192);
  if (r>=2288 && r<=2383) return R33.Condition(r-2288);
  if (r>=2384 && r<=2479) return R34.Condition(r-2384);
  if (r>=2480 && r<=2575) return R35.Condition(r-2480);
  if (r>=2576 && r<=2639) return R36.Condition(r-2576);
  if (r>=2640 && r<=2703) return R37.Condition(r-2640);
  if (r>=2704 && r<=2767) return R38.Condition(r-2704);
  if (r>=2768 && r<=2831) return R39.Condition(r-2768);
  if (r>=2832 && r<=2895) return R40.Condition(r-2832);
  if (r>=2896 && r<=2959) return R41.Condition(r-2896);
  if (r>=2960 && r<=3023) return R42.Condition(r-2960);
  if (r>=3024 && r<=3087) return R43.Condition(r-3024);
  if (r>=3088 && r<=3215) return R44.Condition(r-3088);
  if (r>=3216 && r<=3343) return R45.Condition(r-3216);
  if (r>=3344 && r<=3471) return R46.Condition(r-3344);
  if (r>=3472 && r<=3599) return R47.Condition(r-3472);
  if (r>=3600 && r<=3727) return R48.Condition(r-3600);
  if (r>=3728 && r<=3855) return R49.Condition(r-3728);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=31) { R0.Code(r-0); return; } 
  if (r>=32 && r<=63) { R1.Code(r-32); return; } 
  if (r>=64 && r<=79) { R2.Code(r-64); return; } 
  if (r>=80 && r<=127) { R3.Code(r-80); return; } 
  if (r>=128 && r<=175) { R4.Code(r-128); return; } 
  if (r>=176 && r<=223) { R5.Code(r-176); return; } 
  if (r>=224 && r<=271) { R6.Code(r-224); return; } 
  if (r>=272 && r<=319) { R7.Code(r-272); return; } 
  if (r>=320 && r<=367) { R8.Code(r-320); return; } 
  if (r>=368 && r<=415) { R9.Code(r-368); return; } 
  if (r>=416 && r<=463) { R10.Code(r-416); return; } 
  if (r>=464 && r<=511) { R11.Code(r-464); return; } 
  if (r>=512 && r<=559) { R12.Code(r-512); return; } 
  if (r>=560 && r<=607) { R13.Code(r-560); return; } 
  if (r>=608 && r<=655) { R14.Code(r-608); return; } 
  if (r>=656 && r<=703) { R15.Code(r-656); return; } 
  if (r>=704 && r<=751) { R16.Code(r-704); return; } 
  if (r>=752 && r<=847) { R17.Code(r-752); return; } 
  if (r>=848 && r<=943) { R18.Code(r-848); return; } 
  if (r>=944 && r<=1039) { R19.Code(r-944); return; } 
  if (r>=1040 && r<=1135) { R20.Code(r-1040); return; } 
  if (r>=1136 && r<=1231) { R21.Code(r-1136); return; } 
  if (r>=1232 && r<=1327) { R22.Code(r-1232); return; } 
  if (r>=1328 && r<=1423) { R23.Code(r-1328); return; } 
  if (r>=1424 && r<=1519) { R24.Code(r-1424); return; } 
  if (r>=1520 && r<=1615) { R25.Code(r-1520); return; } 
  if (r>=1616 && r<=1711) { R26.Code(r-1616); return; } 
  if (r>=1712 && r<=1807) { R27.Code(r-1712); return; } 
  if (r>=1808 && r<=1903) { R28.Code(r-1808); return; } 
  if (r>=1904 && r<=1999) { R29.Code(r-1904); return; } 
  if (r>=2000 && r<=2095) { R30.Code(r-2000); return; } 
  if (r>=2096 && r<=2191) { R31.Code(r-2096); return; } 
  if (r>=2192 && r<=2287) { R32.Code(r-2192); return; } 
  if (r>=2288 && r<=2383) { R33.Code(r-2288); return; } 
  if (r>=2384 && r<=2479) { R34.Code(r-2384); return; } 
  if (r>=2480 && r<=2575) { R35.Code(r-2480); return; } 
  if (r>=2576 && r<=2639) { R36.Code(r-2576); return; } 
  if (r>=2640 && r<=2703) { R37.Code(r-2640); return; } 
  if (r>=2704 && r<=2767) { R38.Code(r-2704); return; } 
  if (r>=2768 && r<=2831) { R39.Code(r-2768); return; } 
  if (r>=2832 && r<=2895) { R40.Code(r-2832); return; } 
  if (r>=2896 && r<=2959) { R41.Code(r-2896); return; } 
  if (r>=2960 && r<=3023) { R42.Code(r-2960); return; } 
  if (r>=3024 && r<=3087) { R43.Code(r-3024); return; } 
  if (r>=3088 && r<=3215) { R44.Code(r-3088); return; } 
  if (r>=3216 && r<=3343) { R45.Code(r-3216); return; } 
  if (r>=3344 && r<=3471) { R46.Code(r-3344); return; } 
  if (r>=3472 && r<=3599) { R47.Code(r-3472); return; } 
  if (r>=3600 && r<=3727) { R48.Code(r-3600); return; } 
  if (r>=3728 && r<=3855) { R49.Code(r-3728); return; } 
}
int Priority(unsigned short r)
{
  if (r<=31) { return R0.Priority(); } 
  if (r>=32 && r<=63) { return R1.Priority(); } 
  if (r>=64 && r<=79) { return R2.Priority(); } 
  if (r>=80 && r<=127) { return R3.Priority(); } 
  if (r>=128 && r<=175) { return R4.Priority(); } 
  if (r>=176 && r<=223) { return R5.Priority(); } 
  if (r>=224 && r<=271) { return R6.Priority(); } 
  if (r>=272 && r<=319) { return R7.Priority(); } 
  if (r>=320 && r<=367) { return R8.Priority(); } 
  if (r>=368 && r<=415) { return R9.Priority(); } 
  if (r>=416 && r<=463) { return R10.Priority(); } 
  if (r>=464 && r<=511) { return R11.Priority(); } 
  if (r>=512 && r<=559) { return R12.Priority(); } 
  if (r>=560 && r<=607) { return R13.Priority(); } 
  if (r>=608 && r<=655) { return R14.Priority(); } 
  if (r>=656 && r<=703) { return R15.Priority(); } 
  if (r>=704 && r<=751) { return R16.Priority(); } 
  if (r>=752 && r<=847) { return R17.Priority(); } 
  if (r>=848 && r<=943) { return R18.Priority(); } 
  if (r>=944 && r<=1039) { return R19.Priority(); } 
  if (r>=1040 && r<=1135) { return R20.Priority(); } 
  if (r>=1136 && r<=1231) { return R21.Priority(); } 
  if (r>=1232 && r<=1327) { return R22.Priority(); } 
  if (r>=1328 && r<=1423) { return R23.Priority(); } 
  if (r>=1424 && r<=1519) { return R24.Priority(); } 
  if (r>=1520 && r<=1615) { return R25.Priority(); } 
  if (r>=1616 && r<=1711) { return R26.Priority(); } 
  if (r>=1712 && r<=1807) { return R27.Priority(); } 
  if (r>=1808 && r<=1903) { return R28.Priority(); } 
  if (r>=1904 && r<=1999) { return R29.Priority(); } 
  if (r>=2000 && r<=2095) { return R30.Priority(); } 
  if (r>=2096 && r<=2191) { return R31.Priority(); } 
  if (r>=2192 && r<=2287) { return R32.Priority(); } 
  if (r>=2288 && r<=2383) { return R33.Priority(); } 
  if (r>=2384 && r<=2479) { return R34.Priority(); } 
  if (r>=2480 && r<=2575) { return R35.Priority(); } 
  if (r>=2576 && r<=2639) { return R36.Priority(); } 
  if (r>=2640 && r<=2703) { return R37.Priority(); } 
  if (r>=2704 && r<=2767) { return R38.Priority(); } 
  if (r>=2768 && r<=2831) { return R39.Priority(); } 
  if (r>=2832 && r<=2895) { return R40.Priority(); } 
  if (r>=2896 && r<=2959) { return R41.Priority(); } 
  if (r>=2960 && r<=3023) { return R42.Priority(); } 
  if (r>=3024 && r<=3087) { return R43.Priority(); } 
  if (r>=3088 && r<=3215) { return R44.Priority(); } 
  if (r>=3216 && r<=3343) { return R45.Priority(); } 
  if (r>=3344 && r<=3471) { return R46.Priority(); } 
  if (r>=3472 && r<=3599) { return R47.Priority(); } 
  if (r>=3600 && r<=3727) { return R48.Priority(); } 
  if (r>=3728 && r<=3855) { return R49.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=31) return R0.Name(r-0);
  if (r>=32 && r<=63) return R1.Name(r-32);
  if (r>=64 && r<=79) return R2.Name(r-64);
  if (r>=80 && r<=127) return R3.Name(r-80);
  if (r>=128 && r<=175) return R4.Name(r-128);
  if (r>=176 && r<=223) return R5.Name(r-176);
  if (r>=224 && r<=271) return R6.Name(r-224);
  if (r>=272 && r<=319) return R7.Name(r-272);
  if (r>=320 && r<=367) return R8.Name(r-320);
  if (r>=368 && r<=415) return R9.Name(r-368);
  if (r>=416 && r<=463) return R10.Name(r-416);
  if (r>=464 && r<=511) return R11.Name(r-464);
  if (r>=512 && r<=559) return R12.Name(r-512);
  if (r>=560 && r<=607) return R13.Name(r-560);
  if (r>=608 && r<=655) return R14.Name(r-608);
  if (r>=656 && r<=703) return R15.Name(r-656);
  if (r>=704 && r<=751) return R16.Name(r-704);
  if (r>=752 && r<=847) return R17.Name(r-752);
  if (r>=848 && r<=943) return R18.Name(r-848);
  if (r>=944 && r<=1039) return R19.Name(r-944);
  if (r>=1040 && r<=1135) return R20.Name(r-1040);
  if (r>=1136 && r<=1231) return R21.Name(r-1136);
  if (r>=1232 && r<=1327) return R22.Name(r-1232);
  if (r>=1328 && r<=1423) return R23.Name(r-1328);
  if (r>=1424 && r<=1519) return R24.Name(r-1424);
  if (r>=1520 && r<=1615) return R25.Name(r-1520);
  if (r>=1616 && r<=1711) return R26.Name(r-1616);
  if (r>=1712 && r<=1807) return R27.Name(r-1712);
  if (r>=1808 && r<=1903) return R28.Name(r-1808);
  if (r>=1904 && r<=1999) return R29.Name(r-1904);
  if (r>=2000 && r<=2095) return R30.Name(r-2000);
  if (r>=2096 && r<=2191) return R31.Name(r-2096);
  if (r>=2192 && r<=2287) return R32.Name(r-2192);
  if (r>=2288 && r<=2383) return R33.Name(r-2288);
  if (r>=2384 && r<=2479) return R34.Name(r-2384);
  if (r>=2480 && r<=2575) return R35.Name(r-2480);
  if (r>=2576 && r<=2639) return R36.Name(r-2576);
  if (r>=2640 && r<=2703) return R37.Name(r-2640);
  if (r>=2704 && r<=2767) return R38.Name(r-2704);
  if (r>=2768 && r<=2831) return R39.Name(r-2768);
  if (r>=2832 && r<=2895) return R40.Name(r-2832);
  if (r>=2896 && r<=2959) return R41.Name(r-2896);
  if (r>=2960 && r<=3023) return R42.Name(r-2960);
  if (r>=3024 && r<=3087) return R43.Name(r-3024);
  if (r>=3088 && r<=3215) return R44.Name(r-3088);
  if (r>=3216 && r<=3343) return R45.Name(r-3216);
  if (r>=3344 && r<=3471) return R46.Name(r-3344);
  if (r>=3472 && r<=3599) return R47.Name(r-3472);
  if (r>=3600 && r<=3727) return R48.Name(r-3600);
  if (r>=3728 && r<=3855) return R49.Name(r-3728);
  return NULL;
}
};
const unsigned numrules = 3856;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 3856


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
    // RuleName: L3_receive_AcquireBlock 
    rule_info rule_tmp_1; 
    rule_tmp_1.guard = { "Tree[1].chanA[b].opcode", "Tree[1].chanA[b].addr", "Tree[1].cache[c].state",  }; 
    rule_tmp_1.action = { "Tree[1].cache[c].data", "Tree[1].cache[c].state", "Tree[1].cache[c].mark",  }; 
    rules.push_back(rule_tmp_1); 
    // RuleName: L3_receive_AcquirePerm_None 
    rule_info rule_tmp_2; 
    rule_tmp_2.guard = { "Tree[1].chanA[b].opcode", "Tree[1].chanA[b].addr", "Tree[1].cache[c].state",  }; 
    rule_tmp_2.action = { "Tree[1].cache[c].data", "Tree[1].cache[c].state", "Tree[1].cache[c].mark",  }; 
    rules.push_back(rule_tmp_2); 
    // RuleName: L3_send_release_Tip 
    rule_info rule_tmp_3; 
    rule_tmp_3.guard = { "Tree[1].cache[c].state", "Tree[1].cache[c].mark", "Tree[1].directory[k][c].state", "Tree[1].chanA[k].opcode",  }; 
    rule_tmp_3.action = { "Tree[1].cache[c].state", "Tree[1].cache[c].dirty", "Tree[1].cache[c].data", "Tree[1].cache[c].dirty", "Tree[1].cache[c].data",  }; 
    rules.push_back(rule_tmp_3); 
    // RuleName: Ln_send_Release_Tip 
    rule_info rule_tmp_4; 
    rule_tmp_4.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].chanA[k].opcode", "Tree[i].master_pending",  }; 
    rule_tmp_4.action = { "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].dirty", "Tree[i].master_pending", "Tree[i].cache[c].state", "Tree[i].cache[c].data",  }; 
    rules.push_back(rule_tmp_4); 
    // RuleName: Ln_send_Release_Branch 
    rule_info rule_tmp_5; 
    rule_tmp_5.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].chanA[k].opcode", "Tree[i].master_pending",  }; 
    rule_tmp_5.action = { "Tree[i].master_pending", "Tree[i].cache[c].state", "Tree[i].cache[c].data",  }; 
    rules.push_back(rule_tmp_5); 
    // RuleName: Ln_receive_ProbeBlock_toB_Trunk 
    rule_info rule_tmp_6; 
    rule_tmp_6.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_6.action = { "Tree[i].directory[k][c].state", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_6); 
    // RuleName: Ln_receive_ProbeBlock_toN_Trunk 
    rule_info rule_tmp_7; 
    rule_tmp_7.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_7.action = { "Tree[i].directory[k][c].state", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_7); 
    // RuleName: Ln_receive_ProbeBlock_toB_Tip 
    rule_info rule_tmp_8; 
    rule_tmp_8.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending", "Tree[i].master_pending",  }; 
    rule_tmp_8.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].dirty",  }; 
    rules.push_back(rule_tmp_8); 
    // RuleName: Ln_receive_ProbeBlock_toN_Tip_None 
    rule_info rule_tmp_9; 
    rule_tmp_9.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].master_pending", "Tree[i].master_pending",  }; 
    rule_tmp_9.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].dirty",  }; 
    rules.push_back(rule_tmp_9); 
    // RuleName: Ln_receive_ProbePerm_Branch_Branch 
    rule_info rule_tmp_10; 
    rule_tmp_10.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].slave_pending[k", "Tree[i].master_pending", "Tree[i].master_pending",  }; 
    rule_tmp_10.action = { "Tree[i].directory[k][c].state", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_10); 
    // RuleName: Ln_receive_ProbePerm_Branch_None 
    rule_info rule_tmp_11; 
    rule_tmp_11.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].master_pending", "Tree[i].master_pending",  }; 
    rule_tmp_11.action = { "Tree[i].cache[c].state",  }; 
    rules.push_back(rule_tmp_11); 
    // RuleName: Ln_receive_Probe_None 
    rule_info rule_tmp_12; 
    rule_tmp_12.guard = { "Tree[i].cache[c].state", "Tree[i].master_pending", "Tree[i].master_pending",  }; 
    rule_tmp_12.action = {  }; 
    rules.push_back(rule_tmp_12); 
    // RuleName: Ln_receive_ReleaseAck 
    rule_info rule_tmp_13; 
    rule_tmp_13.guard = {  }; 
    rule_tmp_13.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_13); 
    // RuleName: Ln_receive_GrantData_toT 
    rule_info rule_tmp_14; 
    rule_tmp_14.guard = { "Tree[i].cache[c].state",  }; 
    rule_tmp_14.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].cache[c].data", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_14); 
    // RuleName: Ln_receive_GrantData_toB 
    rule_info rule_tmp_15; 
    rule_tmp_15.guard = { "Tree[i].cache[c].state",  }; 
    rule_tmp_15.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].cache[c].data", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_15); 
    // RuleName: Ln_receive_Grant2 
    rule_info rule_tmp_16; 
    rule_tmp_16.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_16.action = { "Tree[i].cache[c].state", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_16); 
    // RuleName: Ln_receive_Grant1 
    rule_info rule_tmp_17; 
    rule_tmp_17.guard = { "Tree[i].cache[c].state",  }; 
    rule_tmp_17.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_17); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Branch_x_x 
    rule_info rule_tmp_18; 
    rule_tmp_18.guard = { "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].para", "Tree[i].chanA[b1].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rule_tmp_18.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_18); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_None_x_x 
    rule_info rule_tmp_19; 
    rule_tmp_19.guard = { "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].para", "Tree[i].chanA[b1].addr", "Tree[i].cache[c].state", "Tree[i].master_pending",  }; 
    rule_tmp_19.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_19); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_None_x_x 
    rule_info rule_tmp_20; 
    rule_tmp_20.guard = { "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].para", "Tree[i].chanA[b1].addr", "Tree[i].cache[c].state", "Tree[i].master_pending",  }; 
    rule_tmp_20.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_20); 
    // RuleName: Ln_receive_AcquirePerm_None_x_x 
    rule_info rule_tmp_21; 
    rule_tmp_21.guard = { "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].addr", "Tree[i].cache[c].state", "Tree[i].master_pending",  }; 
    rule_tmp_21.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_21); 
    // RuleName: Ln_receive_AcquirePerm_Branch_x_x 
    rule_info rule_tmp_22; 
    rule_tmp_22.guard = { "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rule_tmp_22.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_22); 
    // RuleName: Ln_receive_GrantAck 
    rule_info rule_tmp_23; 
    rule_tmp_23.guard = { "Tree[i].chanE[b].opcode", "Tree[i].chanE[b].addr",  }; 
    rule_tmp_23.action = { "Tree[i].chanE[b].opcode", "Tree[i].slave_pending[b",  }; 
    rules.push_back(rule_tmp_23); 
    // RuleName: Ln_receive_ReleaseData 
    rule_info rule_tmp_24; 
    rule_tmp_24.guard = { "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].addr", "Tree[i].directory[b][c].addr", "Tree[i].cache[c].mark",  }; 
    rule_tmp_24.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].data", "Tree[i].chanC[b].data", "Tree[i].cache[c].dirty", "Tree[i].directory[b][c].state", "Tree[i].chanD[b].opcode", "Tree[i].chanC[b].opcode",  }; 
    rules.push_back(rule_tmp_24); 
    // RuleName: Ln_receive_Release_BtoN/NtoN/TtoN 
    rule_info rule_tmp_25; 
    rule_tmp_25.guard = { "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].addr", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para", "Tree[i].directory[b][c].addr", "Tree[i].cache[c].mark",  }; 
    rule_tmp_25.action = { "Tree[i].chanC[b].para", "Tree[i].cache[c].state", "Tree[i].directory[b][c].state", "Tree[i].chanD[b].opcode", "Tree[i].chanC[b].opcode",  }; 
    rules.push_back(rule_tmp_25); 
    // RuleName: Ln_receive_ProbeAckData_TtoB 
    rule_info rule_tmp_26; 
    rule_tmp_26.guard = { "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].para", "Tree[i].chanC[b].addr", "Tree[i].directory[b][c].addr", "Tree[i].cache[c].mark",  }; 
    rule_tmp_26.action = { "Tree[i].directory[b][c].state", "Tree[i].cache[c].state", "Tree[i].cache[c].data", "Tree[i].chanC[b].data", "Tree[i].cache[c].dirty", "Tree[i].chanC[b].opcode", "Tree[i].slave_pending[b",  }; 
    rules.push_back(rule_tmp_26); 
    // RuleName: Ln_receive_ProbeAckData_TtoN 
    rule_info rule_tmp_27; 
    rule_tmp_27.guard = { "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].para", "Tree[i].chanC[b].addr", "Tree[i].directory[b][c].addr", "Tree[i].cache[c].mark",  }; 
    rule_tmp_27.action = { "Tree[i].directory[b][c].state", "Tree[i].cache[c].state", "Tree[i].cache[c].data", "Tree[i].chanC[b].data", "Tree[i].cache[c].dirty", "Tree[i].chanC[b].opcode", "Tree[i].slave_pending[b",  }; 
    rules.push_back(rule_tmp_27); 
    // RuleName: Ln_receive_ProbeAck 
    rule_info rule_tmp_28; 
    rule_tmp_28.guard = { "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].addr", "Tree[i].directory[b][c].addr", "Tree[i].cache[c].mark", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para",  }; 
    rule_tmp_28.action = { "Tree[i].chanC[b].para", "Tree[i].directory[b][c].state", "Tree[i].directory[b][c].state", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para", "Tree[i].cache[c].state", "Tree[i].chanC[b].opcode", "Tree[i].slave_pending[b",  }; 
    rules.push_back(rule_tmp_28); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Trunk 
    rule_info rule_tmp_29; 
    rule_tmp_29.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].chanA[b].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k",  }; 
    rule_tmp_29.action = { "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_29); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Tip_x_Branch 
    rule_info rule_tmp_30; 
    rule_tmp_30.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].chanA[b].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k",  }; 
    rule_tmp_30.action = { "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_30); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Tip_None_None 
    rule_info rule_tmp_31; 
    rule_tmp_31.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].chanA[b].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].slave_pending[k",  }; 
    rule_tmp_31.action = { "Tree[i].chanA[b].opcode", "Tree[i].chanD[b].opcode", "Tree[i].chanD[b].para", "Tree[i].chanD[b].addr", "Tree[i].chanD[b].data", "Tree[i].cache[c].data", "Tree[i].slave_pending[b", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[b][c].state", "Tree[i].directory[b][c].addr",  }; 
    rules.push_back(rule_tmp_31); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_Trunk 
    rule_info rule_tmp_32; 
    rule_tmp_32.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].chanA[b].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k",  }; 
    rule_tmp_32.action = { "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_32); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x 
    rule_info rule_tmp_33; 
    rule_tmp_33.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].addr", "Tree[i].chanA[b].para", "Tree[i].cache[c].state", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].slave_pending[b",  }; 
    rule_tmp_33.action = { "Tree[i].chanA[b].opcode", "Tree[i].chanD[b].opcode", "Tree[i].chanD[b].para", "Tree[i].chanD[b].addr", "Tree[i].chanD[b].data", "Tree[i].cache[c].data", "Tree[i].slave_pending[b", "Tree[i].directory[b][c].state", "Tree[i].directory[b][c].addr",  }; 
    rules.push_back(rule_tmp_33); 
    // RuleName: Ln_receive_AcquirePerm_Trunk 
    rule_info rule_tmp_34; 
    rule_tmp_34.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].addr", "Tree[i].cache[c].mark", "Tree[i].cache[c].state",  }; 
    rule_tmp_34.action = { "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].addr", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_34); 
    // RuleName: Ln_receive_AcquirePerm_Tip_x_Branch 
    rule_info rule_tmp_35; 
    rule_tmp_35.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k",  }; 
    rule_tmp_35.action = { "Tree[i].directory[k][c].state", "Tree[i].directory[k][c].addr", "Tree[i].slave_pending[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].chanB[k].addr", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_35); 
    // RuleName: Ln_receive_AcquirePerm_Tip_Branch_None 
    rule_info rule_tmp_36; 
    rule_tmp_36.guard = { "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].addr", "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].directory[k][c].state", "Tree[i].slave_pending[k", "Tree[i].directory[b][c].state", "Tree[i].directory[b][c].addr",  }; 
    rule_tmp_36.action = { "Tree[i].chanA[b].opcode", "Tree[i].chanD[b].opcode", "Tree[i].chanD[b].para", "Tree[i].chanD[b].addr", "Tree[i].directory[b][c].state", "Tree[i].directory[b][c].addr", "Tree[i].cache[c].state", "Tree[i].slave_pending[b",  }; 
    rules.push_back(rule_tmp_36); 
    // RuleName: receive_ReleaseAck 
    rule_info rule_tmp_37; 
    rule_tmp_37.guard = {  }; 
    rule_tmp_37.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_37); 
    // RuleName: respond_ProbeBlock_TtoB 
    rule_info rule_tmp_38; 
    rule_tmp_38.guard = { "Tree[i].master_pending", "Tree[i].master_pending", "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_38.action = { "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].dirty", "Tree[i].cache[c].state",  }; 
    rules.push_back(rule_tmp_38); 
    // RuleName: respond_ProbeBlock_TtoN 
    rule_info rule_tmp_39; 
    rule_tmp_39.guard = { "Tree[i].master_pending", "Tree[i].master_pending", "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_39.action = { "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].state",  }; 
    rules.push_back(rule_tmp_39); 
    // RuleName: respond_ProbePerm_BtoN 
    rule_info rule_tmp_40; 
    rule_tmp_40.guard = { "Tree[i].master_pending", "Tree[i].master_pending", "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_40.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].data",  }; 
    rules.push_back(rule_tmp_40); 
    // RuleName: respond_Probe_NtoN 
    rule_info rule_tmp_41; 
    rule_tmp_41.guard = { "Tree[i].master_pending", "Tree[i].master_pending", "Tree[i].cache[c].state",  }; 
    rule_tmp_41.action = { "Tree[i].cache[c].state",  }; 
    rules.push_back(rule_tmp_41); 
    // RuleName: respond_GrantData_toT 
    rule_info rule_tmp_42; 
    rule_tmp_42.guard = {  }; 
    rule_tmp_42.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].cache[c].data", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_42); 
    // RuleName: respond_GrantData_toB 
    rule_info rule_tmp_43; 
    rule_tmp_43.guard = {  }; 
    rule_tmp_43.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].cache[c].data", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_43); 
    // RuleName: respond_Grant_toT 
    rule_info rule_tmp_44; 
    rule_tmp_44.guard = {  }; 
    rule_tmp_44.action = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_44); 
    // RuleName: send_Release_TtoN 
    rule_info rule_tmp_45; 
    rule_tmp_45.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rule_tmp_45.action = { "Tree[i].cache[c].dirty", "Tree[i].cache[c].data", "Tree[i].cache[c].dirty", "Tree[i].master_pending", "Tree[i].cache[c].state", "Tree[i].cache[c].data",  }; 
    rules.push_back(rule_tmp_45); 
    // RuleName: send_Release_BtoN 
    rule_info rule_tmp_46; 
    rule_tmp_46.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rule_tmp_46.action = { "Tree[i].master_pending", "Tree[i].cache[c].data", "Tree[i].cache[c].state",  }; 
    rules.push_back(rule_tmp_46); 
    // RuleName: send_AcquireBlock_toT 
    rule_info rule_tmp_47; 
    rule_tmp_47.guard = { "Tree[i].cache[c].state", "Tree[i].master_pending",  }; 
    rule_tmp_47.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_47); 
    // RuleName: send_AcquirePerm_toT 
    rule_info rule_tmp_48; 
    rule_tmp_48.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark", "Tree[i].master_pending",  }; 
    rule_tmp_48.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_48); 
    // RuleName: send_AcquireBlock_toB 
    rule_info rule_tmp_49; 
    rule_tmp_49.guard = { "Tree[i].cache[c].state", "Tree[i].master_pending",  }; 
    rule_tmp_49.action = { "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_49); 
    // RuleName: Store 
    rule_info rule_tmp_50; 
    rule_tmp_50.guard = { "Tree[i].cache[c].state", "Tree[i].cache[c].mark",  }; 
    rule_tmp_50.action = { "Tree[i].cache[c].data", "Tree[i].cache[c].dirty",  }; 
    rules.push_back(rule_tmp_50); 

    // inv: None
    vector<std::string> carelist_tmp; 
    carelists.push_back(carelist_tmp); 
    // Note: Inv is not the excepted format. 
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
mu_1__type_13 mu_son("son",0);

mu_son = 2;
{
for(int mu_cur = 1; mu_cur <= 3; mu_cur++) {
{
for(int mu_c = 0; mu_c <= 1; mu_c++) {
mu_Tree[mu_cur].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[mu_cur].mu_cache[mu_c].mu_dirty = mu_false;
mu_Tree[mu_cur].mu_master_pending = mu_M_None;
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
for(int mu_c = 0; mu_c <= 1; mu_c++) {
mu_Tree[mu_cur].mu_slave_pending[mu_i] = mu_S_None;
mu_Tree[mu_cur].mu_directory[mu_i][mu_c].mu_state = mu_None;
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
for(int mu_c = 0; mu_c <= 1; mu_c++) {
mu_Tree[mu_cur].mu_cache[mu_c].mu_state = mu_None;
mu_Tree[mu_cur].mu_cache[mu_c].mu_dirty = mu_false;
mu_Tree[mu_cur].mu_master_pending = mu_M_None;
};
};
};
};
{
for(int mu_a = 0; mu_a <= 3; mu_a++) {
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
const rulerec invariants[] = {
{ NULL, NULL, NULL, FALSE }};
const unsigned short numinvariants = 0;

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
void mu_1_validDataType::Permute(PermSet& Perm, int i) {};
void mu_1_validDataType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_validDataType::Canonicalize(PermSet& Perm) {};
void mu_1_validDataType::SimpleLimit(PermSet& Perm) {};
void mu_1_validDataType::ArrayLimit(PermSet& Perm) {};
void mu_1_validDataType::Limit(PermSet& Perm) {};
void mu_1_validDataType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_lineType::Permute(PermSet& Perm, int i) {};
void mu_1_lineType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_lineType::Canonicalize(PermSet& Perm) {};
void mu_1_lineType::SimpleLimit(PermSet& Perm) {};
void mu_1_lineType::ArrayLimit(PermSet& Perm) {};
void mu_1_lineType::Limit(PermSet& Perm) {};
void mu_1_lineType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_markType::Permute(PermSet& Perm, int i) {};
void mu_1_markType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_markType::Canonicalize(PermSet& Perm) {};
void mu_1_markType::SimpleLimit(PermSet& Perm) {};
void mu_1_markType::ArrayLimit(PermSet& Perm) {};
void mu_1_markType::Limit(PermSet& Perm) {};
void mu_1_markType::MultisetLimit(PermSet& Perm)
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
void mu_1_addrType::Permute(PermSet& Perm, int i) {};
void mu_1_addrType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_addrType::Canonicalize(PermSet& Perm) {};
void mu_1_addrType::SimpleLimit(PermSet& Perm) {};
void mu_1_addrType::ArrayLimit(PermSet& Perm) {};
void mu_1_addrType::Limit(PermSet& Perm) {};
void mu_1_addrType::MultisetLimit(PermSet& Perm)
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
void mu_1_directoryType::Permute(PermSet& Perm, int i)
{
};
void mu_1_directoryType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_directoryType::Canonicalize(PermSet& Perm)
{
};
void mu_1_directoryType::SimpleLimit(PermSet& Perm){}
void mu_1_directoryType::ArrayLimit(PermSet& Perm){}
void mu_1_directoryType::Limit(PermSet& Perm)
{
};
void mu_1_directoryType::MultisetLimit(PermSet& Perm)
{
};
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
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<7; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<4; j++)
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
void mu_1__type_13::Permute(PermSet& Perm, int i) {};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_13::Canonicalize(PermSet& Perm) {};
void mu_1__type_13::SimpleLimit(PermSet& Perm) {};
void mu_1__type_13::ArrayLimit(PermSet& Perm) {};
void mu_1__type_13::Limit(PermSet& Perm) {};
void mu_1__type_13::MultisetLimit(PermSet& Perm)
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
