/******************************
  Program "./test/bug1.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Apr 10 2024"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Apr 10 2024"
#define PROTOCOL_NAME "./test/bug1"
#define BITS_IN_WORLD 1456
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

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

  mu_1_AType (const char *name, int os): mu__byte(5, 6, 2, name, os) {};
  mu_1_AType (void): mu__byte(5, 6, 2) {};
  mu_1_AType (int val): mu__byte(5, 6, 2, "Parameter or function result.", 0)
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

const char *mu_1_AType::values[] = {"AcquirePerm","AcquireBlock",NULL };

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
      return ( s << mu_1_BType::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_BType (const char *name, int os): mu__byte(7, 8, 2, name, os) {};
  mu_1_BType (void): mu__byte(7, 8, 2) {};
  mu_1_BType (int val): mu__byte(7, 8, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -7]; };
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
      cout << name << ":" << values[ value() -7] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_BType::values[] = {"ProbePerm","ProbeBlock",NULL };

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
      return ( s << mu_1_CType::values[ int(val) - 9] );
    else return ( s << "Undefined" );
  };

  mu_1_CType (const char *name, int os): mu__byte(9, 12, 3, name, os) {};
  mu_1_CType (void): mu__byte(9, 12, 3) {};
  mu_1_CType (int val): mu__byte(9, 12, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -9]; };
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
      cout << name << ":" << values[ value() -9] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_CType::values[] = {"Release","ReleaseData","ProbeAck","ProbeAckData",NULL };

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

  mu_1_DType (const char *name, int os): mu__byte(13, 15, 2, name, os) {};
  mu_1_DType (void): mu__byte(13, 15, 2) {};
  mu_1_DType (int val): mu__byte(13, 15, 2, "Parameter or function result.", 0)
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

const char *mu_1_DType::values[] = {"Grant","GrantData","ReleaseAck",NULL };

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
      return ( s << mu_1_EType::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_EType (const char *name, int os): mu__byte(16, 16, 1, name, os) {};
  mu_1_EType (void): mu__byte(16, 16, 1) {};
  mu_1_EType (int val): mu__byte(16, 16, 1, "Parameter or function result.", 0)
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

const char *mu_1_EType::values[] = {"GrantAck",NULL };

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
      return ( s << mu_1_growType::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_growType (const char *name, int os): mu__byte(17, 19, 2, name, os) {};
  mu_1_growType (void): mu__byte(17, 19, 2) {};
  mu_1_growType (int val): mu__byte(17, 19, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_capType::values[ int(val) - 20] );
    else return ( s << "Undefined" );
  };

  mu_1_capType (const char *name, int os): mu__byte(20, 22, 2, name, os) {};
  mu_1_capType (void): mu__byte(20, 22, 2) {};
  mu_1_capType (int val): mu__byte(20, 22, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_pruneType::values[ int(val) - 23] );
    else return ( s << "Undefined" );
  };

  mu_1_pruneType (const char *name, int os): mu__byte(23, 26, 3, name, os) {};
  mu_1_pruneType (void): mu__byte(23, 26, 3) {};
  mu_1_pruneType (int val): mu__byte(23, 26, 3, "Parameter or function result.", 0)
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
    if (defined())
      cout << name << ":" << values[ value() -23] << '\n';
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
  mu_1_growType mu_para;
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
  return 0;
}
friend int Compare(mu_1_chAType& a, mu_1_chAType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
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
    mu_para.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chAType& operator= (const mu_1_chAType& from) {
    mu_opcode.value(from.mu_opcode.value());
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
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
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
  return 0;
}
friend int Compare(mu_1_chBType& a, mu_1_chBType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
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
    mu_para.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chBType& operator= (const mu_1_chBType& from) {
    mu_opcode.value(from.mu_opcode.value());
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
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
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
  return 0;
}
friend int Compare(mu_1_chCType& a, mu_1_chCType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
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
    mu_para.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chCType& operator= (const mu_1_chCType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
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
  return 0;
}
friend int Compare(mu_1_chDType& a, mu_1_chDType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
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
    mu_para.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chDType& operator= (const mu_1_chDType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
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
  mu_1_chEType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chEType ( void ) {};

  virtual ~mu_1_chEType(); 
friend int CompareWeight(mu_1_chEType& a, mu_1_chEType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chEType& a, mu_1_chEType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
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
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
 };
  void undefine() {
    mu_opcode.undefine();
 };
  void reset() {
    mu_opcode.reset();
 };
  void print() {
    mu_opcode.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chEType& operator= (const mu_1_chEType& from) {
    mu_opcode.value(from.mu_opcode.value());
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
      return ( s << mu_1_slave_pending_Type::values[ int(val) - 27] );
    else return ( s << "Undefined" );
  };

  mu_1_slave_pending_Type (const char *name, int os): mu__byte(27, 29, 2, name, os) {};
  mu_1_slave_pending_Type (void): mu__byte(27, 29, 2) {};
  mu_1_slave_pending_Type (int val): mu__byte(27, 29, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -27]; };
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
      cout << name << ":" << values[ value() -27] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_slave_pending_Type::values[] = {"pending_ProbeAck","pending_ProbeAckData","pending_GrantAck",NULL };

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
      return ( s << mu_1_master_pending_Type::values[ int(val) - 30] );
    else return ( s << "Undefined" );
  };

  mu_1_master_pending_Type (const char *name, int os): mu__byte(30, 32, 2, name, os) {};
  mu_1_master_pending_Type (void): mu__byte(30, 32, 2) {};
  mu_1_master_pending_Type (int val): mu__byte(30, 32, 2, "Parameter or function result.", 0)
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

const char *mu_1_master_pending_Type::values[] = {"pending_Grant","pending_GrantData","pending_ReleaseAck",NULL };

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
  mu_1_cacheType ( const char *n, int os ) { set_self(n,os); };
  mu_1_cacheType ( void ) {};

  virtual ~mu_1_cacheType(); 
friend int CompareWeight(mu_1_cacheType& a, mu_1_cacheType& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_cacheType& a, mu_1_cacheType& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
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
  }
  void print_statistic()
  {
    mu_state.print_statistic();
  }
  void clear() {
    mu_state.clear();
 };
  void undefine() {
    mu_state.undefine();
 };
  void reset() {
    mu_state.reset();
 };
  void print() {
    mu_state.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_cacheType& operator= (const mu_1_cacheType& from) {
    mu_state.value(from.mu_state.value());
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
}

mu_1_cacheType::~mu_1_cacheType()
{
}

/*** end record declaration ***/
mu_1_cacheType mu_1_cacheType_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_nodeId array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
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
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
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
  mu_1_stateType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
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
  mu_1_slave_pending_Type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
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
  mu_1_chAType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
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
  mu_1_chBType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
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
  mu_1_chCType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
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
  mu_1_chDType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
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
  mu_1_chEType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1_TreeNode
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_cacheType mu_cache;
  mu_1__type_0 mu_sons;
  mu_1__type_1 mu_directory;
  mu_1__type_2 mu_slave_pending;
  mu_1_master_pending_Type mu_master_pending;
  mu_1__type_3 mu_chanA;
  mu_1__type_4 mu_chanB;
  mu_1__type_5 mu_chanC;
  mu_1__type_6 mu_chanD;
  mu_1__type_7 mu_chanE;
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
  if (name) mu_sons.set_self_2(name, ".sons", os + 8 ); else mu_sons.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 24 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 40 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 56 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_chanA.set_self_2(name, ".chanA", os + 64 ); else mu_chanA.set_self_2(NULL, NULL, 0);
  if (name) mu_chanB.set_self_2(name, ".chanB", os + 96 ); else mu_chanB.set_self_2(NULL, NULL, 0);
  if (name) mu_chanC.set_self_2(name, ".chanC", os + 128 ); else mu_chanC.set_self_2(NULL, NULL, 0);
  if (name) mu_chanD.set_self_2(name, ".chanD", os + 160 ); else mu_chanD.set_self_2(NULL, NULL, 0);
  if (name) mu_chanE.set_self_2(name, ".chanE", os + 192 ); else mu_chanE.set_self_2(NULL, NULL, 0);
}

mu_1_TreeNode::~mu_1_TreeNode()
{
}

/*** end record declaration ***/
mu_1_TreeNode mu_1_TreeNode_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_TreeNode array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
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
  for(int i = 0; i < 7; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 208 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1__type_9& val) { return mu__byte::operator=((int) val); };
  mu_1__type_9 (const char *name, int os): mu__byte(1, 8, 4, name, os) {};
  mu_1__type_9 (void): mu__byte(1, 8, 4) {};
  mu_1__type_9 (int val): mu__byte(1, 8, 4, "Parameter or function result.", 0)
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
mu_1__type_9 mu_1__type_9_undefined_var;

const int mu_coreNum = 4;
const int mu_allNodeNum = 7;
const int mu_allBranchNum = 2;
const int mu_None = 1;
const int mu_Trunk = 2;
const int mu_Branch = 3;
const int mu_Tip = 4;
const int mu_AcquirePerm = 5;
const int mu_AcquireBlock = 6;
const int mu_ProbePerm = 7;
const int mu_ProbeBlock = 8;
const int mu_Release = 9;
const int mu_ReleaseData = 10;
const int mu_ProbeAck = 11;
const int mu_ProbeAckData = 12;
const int mu_Grant = 13;
const int mu_GrantData = 14;
const int mu_ReleaseAck = 15;
const int mu_GrantAck = 16;
const int mu_NtoB = 17;
const int mu_NtoT = 18;
const int mu_BtoT = 19;
const int mu_toN = 20;
const int mu_toB = 21;
const int mu_toT = 22;
const int mu_BtoN = 23;
const int mu_TtoN = 24;
const int mu_TtoB = 25;
const int mu_NtoN = 26;
const int mu_pending_ProbeAck = 27;
const int mu_pending_ProbeAckData = 28;
const int mu_pending_GrantAck = 29;
const int mu_pending_Grant = 30;
const int mu_pending_GrantData = 31;
const int mu_pending_ReleaseAck = 32;
/*** Variable declaration ***/
mu_1__type_8 mu_Tree("Tree",0);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_Tree.clear();
}
void world_class::undefine()
{
  mu_Tree.undefine();
}
void world_class::reset()
{
  mu_Tree.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Tree.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Tree.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_Tree.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_Tree.to_state( newstate );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquireBlock, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr10;
bool mu__boolexpr11;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
    return mu__boolexpr10;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 2 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr12) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache.mu_state = mu_Tip;
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
    return tsprintf("L3_receive_AcquirePerm_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr14;
bool mu__boolexpr15;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr15)) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
    return mu__boolexpr14;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 4 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr16;
bool mu__boolexpr17;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
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
    r = what_rule - 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
mu_Tree[1].mu_cache.mu_state = mu_Tip;
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
    return tsprintf("L3_send_release_Tip");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr18;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr18 = FALSE ;
  else {
bool mu__quant19; 
mu__quant19 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr20;
  if (!((mu_Tree[1].mu_directory[mu_k]) == (mu_None))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_Tree[1].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr20) )
  { mu__quant19 = FALSE; break; }
};
};
  mu__boolexpr18 = (mu__quant19) ; 
}
    return mu__boolexpr18;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    while (what_rule < 5 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr21;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr21 = FALSE ;
  else {
bool mu__quant22; 
mu__quant22 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr23;
  if (!((mu_Tree[1].mu_directory[mu_k]) == (mu_None))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = (mu_Tree[1].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr23) )
  { mu__quant22 = FALSE; break; }
};
};
  mu__boolexpr21 = (mu__quant22) ; 
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
    r = what_rule - 4;
    }
  }

  void Code(unsigned r)
  {
mu_Tree[1].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Tip, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr24;
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_i) > (1))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
bool mu__quant28; 
mu__quant28 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr29;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr29) )
  { mu__quant28 = FALSE; break; }
};
};
  mu__boolexpr26 = (mu__quant28) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr24;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 8 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr30;
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!((mu_i) > (1))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
bool mu__quant34; 
mu__quant34 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr35;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr35) )
  { mu__quant34 = FALSE; break; }
};
};
  mu__boolexpr32 = (mu__quant34) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr30) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ReleaseData;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_send_Release_Branch, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
  if (!((mu_i) > (1))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
bool mu__quant40; 
mu__quant40 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr41;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr41) )
  { mu__quant40 = FALSE; break; }
};
};
  mu__boolexpr38 = (mu__quant40) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr36;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 11 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!((mu_i) > (1))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
bool mu__quant46; 
mu__quant46 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr47;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr47) )
  { mu__quant46 = FALSE; break; }
};
};
  mu__boolexpr44 = (mu__quant46) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr42) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_Release;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toB_Trunk, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
  if (!((mu_i) > (1))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr48;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 14 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
bool mu__boolexpr55;
  if (!((mu_i) > (1))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr52) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr56;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr56 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toN_Trunk, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
bool mu__boolexpr60;
  if (!((mu_i) > (1))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr57;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 14;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 17 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!((mu_i) > (1))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr61) {
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
    r = what_rule - 14;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr65;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr65 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toB_Tip, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
  if (!((mu_i) > (1))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
bool mu__boolexpr71;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr71 = TRUE ;
  else {
  mu__boolexpr71 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr66 = (mu__boolexpr71) ; 
}
    return mu__boolexpr66;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 20 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
  if (!((mu_i) > (1))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
bool mu__boolexpr77;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr77 = TRUE ;
  else {
  mu__boolexpr77 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr72 = (mu__boolexpr77) ; 
}
	      if (mu__boolexpr72) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoB;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeBlock_toN_Tip_None, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_i) > (1))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
bool mu__quant84; 
mu__quant84 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant84 = FALSE; break; }
};
};
  mu__boolexpr79 = (mu__quant84) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
bool mu__boolexpr85;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr85 = TRUE ;
  else {
  mu__boolexpr85 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr78 = (mu__boolexpr85) ; 
}
    return mu__boolexpr78;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 20;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 23 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr86;
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
  if (!((mu_i) > (1))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
bool mu__quant92; 
mu__quant92 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant92 = FALSE; break; }
};
};
  mu__boolexpr87 = (mu__quant92) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
bool mu__boolexpr93;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr93 = TRUE ;
  else {
  mu__boolexpr93 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr86 = (mu__boolexpr93) ; 
}
	      if (mu__boolexpr86) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbePerm_Branch_Branch, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!((mu_i) > (1))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
bool mu__quant99; 
mu__quant99 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant99 = TRUE; break; }
};
};
  mu__boolexpr95 = (mu__quant99) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
bool mu__boolexpr100;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr100 = TRUE ;
  else {
  mu__boolexpr100 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr94 = (mu__boolexpr100) ; 
}
    return mu__boolexpr94;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 23;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 26 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!((mu_i) > (1))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
bool mu__quant106; 
mu__quant106 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant106 = TRUE; break; }
};
};
  mu__boolexpr102 = (mu__quant106) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
bool mu__boolexpr107;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr107 = TRUE ;
  else {
  mu__boolexpr107 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr101 = (mu__boolexpr107) ; 
}
	      if (mu__boolexpr101) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr108;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr108 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbePerm;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbePerm_Branch_None, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
  if (!((mu_i) > (1))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
bool mu__quant114; 
mu__quant114 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant114 = FALSE; break; }
};
};
  mu__boolexpr110 = (mu__quant114) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
bool mu__boolexpr115;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr115 = TRUE ;
  else {
  mu__boolexpr115 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr109 = (mu__boolexpr115) ; 
}
    return mu__boolexpr109;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 26;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 29 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!((mu_i) > (1))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
bool mu__quant121; 
mu__quant121 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant121 = FALSE; break; }
};
};
  mu__boolexpr117 = (mu__quant121) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
bool mu__boolexpr122;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr122 = TRUE ;
  else {
  mu__boolexpr122 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr116 = (mu__boolexpr122) ; 
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
    r = what_rule - 26;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAck;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_None, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
  if (!((mu_i) > (1))) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
bool mu__boolexpr127;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr127 = TRUE ;
  else {
  mu__boolexpr127 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  mu__boolexpr125 = (mu__boolexpr127) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
bool mu__boolexpr128;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr128 = TRUE ;
  else {
  mu__boolexpr128 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr123 = (mu__boolexpr128) ; 
}
    return mu__boolexpr123;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 29;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 32 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!((mu_i) > (1))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
bool mu__boolexpr133;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr133 = TRUE ;
  else {
  mu__boolexpr133 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  mu__boolexpr131 = (mu__boolexpr133) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
bool mu__boolexpr134;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr134 = TRUE ;
  else {
  mu__boolexpr134 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr129 = (mu__boolexpr134) ; 
}
	      if (mu__boolexpr129) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAck;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_NtoN;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ReleaseAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!((mu_i) > (1))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr135;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 32;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 35 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!((mu_i) > (1))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
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
    r = what_rule - 32;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantData_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
  if (!((mu_i) > (1))) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr139;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 35;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 38 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
  if (!((mu_i) > (1))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
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
    r = what_rule - 35;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantData_toB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!((mu_i) > (1))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
    return mu__boolexpr145;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 38;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 41 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
  if (!((mu_i) > (1))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
	      if (mu__boolexpr148) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Grant, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!((mu_i) > (1))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr151;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 41;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 44 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
  if (!((mu_i) > (1))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
	      if (mu__boolexpr154) {
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Branch_x_x, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
  if (!((mu_i) > (1))) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr157;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 44;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 50 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!((mu_i) > (1))) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr162) {
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
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b2].mu_opcode = mu_AcquirePerm;
mu_Tree[mu_j].mu_chanA[mu_b2].mu_para = mu_BtoT;
mu_Tree[mu_i].mu_master_pending = mu_pending_Grant;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr167;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
  if (!((mu_i) > (1))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr167;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 50;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 56 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
  if (!((mu_i) > (1))) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr172) {
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
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b2].mu_opcode = mu_AcquireBlock;
mu_Tree[mu_j].mu_chanA[mu_b2].mu_para = mu_NtoT;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
  if (!((mu_i) > (1))) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr177;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 56;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 62 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
bool mu__boolexpr186;
  if (!((mu_i) > (1))) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr182) {
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
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b2].mu_opcode = mu_AcquireBlock;
mu_Tree[mu_j].mu_chanA[mu_b2].mu_para = mu_NtoB;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
  if (!((mu_i) > (1))) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr187;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 62;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 68 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!((mu_i) > (1))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr191) {
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
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b2].mu_opcode = mu_AcquireBlock;
mu_Tree[mu_j].mu_chanA[mu_b2].mu_para = mu_NtoT;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Branch_x_x, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
bool mu__boolexpr198;
  if (!((mu_i) > (1))) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr195;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 68;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 74 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!((mu_i) > (1))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr199) {
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
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b2].mu_opcode = mu_AcquirePerm;
mu_Tree[mu_j].mu_chanA[mu_b2].mu_para = mu_BtoT;
mu_Tree[mu_i].mu_master_pending = mu_pending_Grant;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_GrantAck, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr203;
  if (!(!(mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode.isundefined()))) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr203;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 74;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 80 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr204;
  if (!(!(mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode.isundefined()))) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr204) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanE[mu_b].undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ReleaseData, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr205;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
    return mu__boolexpr205;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 80;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 86 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr206;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
	      if (mu__boolexpr206) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Release_BtoN/NtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
bool mu__boolexpr209;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr209 = TRUE ;
  else {
  mu__boolexpr209 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr207 = (mu__boolexpr209) ; 
}
    return mu__boolexpr207;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 86;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 92 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr210;
bool mu__boolexpr211;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
bool mu__boolexpr212;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr212 = TRUE ;
  else {
  mu__boolexpr212 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr210 = (mu__boolexpr212) ; 
}
	      if (mu__boolexpr210) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAckData_TtoB, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
    return mu__boolexpr213;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 92;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 98 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
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
    r = what_rule - 92;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_directory[mu_b] = mu_Branch;
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAckData_TtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr217;
bool mu__boolexpr218;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
    return mu__boolexpr217;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 98;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 104 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
	      if (mu__boolexpr219) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_BtoN/NtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr221;
bool mu__boolexpr222;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
bool mu__boolexpr223;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr223 = TRUE ;
  else {
  mu__boolexpr223 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr221 = (mu__boolexpr223) ; 
}
    return mu__boolexpr221;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 104;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 110 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr224;
bool mu__boolexpr225;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
bool mu__boolexpr226;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr226 = TRUE ;
  else {
  mu__boolexpr226 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr224 = (mu__boolexpr226) ; 
}
	      if (mu__boolexpr224) {
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
    r = what_rule - 104;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Trunk, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
bool mu__quant231; 
mu__quant231 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr232;
bool mu__boolexpr233;
  if (!((mu_k) != (mu_b))) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr232) )
  { mu__quant231 = TRUE; break; }
};
};
  mu__boolexpr227 = (mu__quant231) ; 
}
    return mu__boolexpr227;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 110;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 116 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
bool mu__quant238; 
mu__quant238 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr239;
bool mu__boolexpr240;
  if (!((mu_k) != (mu_b))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr239) )
  { mu__quant238 = TRUE; break; }
};
};
  mu__boolexpr234 = (mu__quant238) ; 
}
	      if (mu__boolexpr234) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr241;
  if (!((mu_k) != (mu_b))) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
if ( mu__boolexpr241 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Tip_x_Branch, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
bool mu__quant246; 
mu__quant246 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr247;
bool mu__boolexpr248;
  if (!((mu_k) != (mu_b))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr247) )
  { mu__quant246 = TRUE; break; }
};
};
  mu__boolexpr242 = (mu__quant246) ; 
}
    return mu__boolexpr242;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 116;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 122 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
bool mu__quant253; 
mu__quant253 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr254;
bool mu__boolexpr255;
  if (!((mu_k) != (mu_b))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr254) )
  { mu__quant253 = TRUE; break; }
};
};
  mu__boolexpr249 = (mu__quant253) ; 
}
	      if (mu__boolexpr249) {
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
    r = what_rule - 116;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr256;
bool mu__boolexpr257;
  if (!((mu_k) != (mu_b))) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr256 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbePerm;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Tip_None_None, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
bool mu__quant262; 
mu__quant262 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr263;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr263) )
  { mu__quant262 = FALSE; break; }
};
};
  mu__boolexpr258 = (mu__quant262) ; 
}
    return mu__boolexpr258;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 122;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 128 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
bool mu__quant268; 
mu__quant268 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr269;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr269) )
  { mu__quant268 = FALSE; break; }
};
};
  mu__boolexpr264 = (mu__quant268) ; 
}
	      if (mu__boolexpr264) {
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
    r = what_rule - 122;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].undefine();
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_GrantData;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toT;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_Trunk;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Tip;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_Trunk, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
bool mu__quant274; 
mu__quant274 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr275;
bool mu__boolexpr276;
  if (!((mu_k) != (mu_b))) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr275) )
  { mu__quant274 = TRUE; break; }
};
};
  mu__boolexpr270 = (mu__quant274) ; 
}
    return mu__boolexpr270;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 128;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 134 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
bool mu__quant281; 
mu__quant281 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr282;
bool mu__boolexpr283;
  if (!((mu_k) != (mu_b))) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr282) )
  { mu__quant281 = TRUE; break; }
};
};
  mu__boolexpr277 = (mu__quant281) ; 
}
	      if (mu__boolexpr277) {
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr284;
  if (!((mu_k) != (mu_b))) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
if ( mu__boolexpr284 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_Branch/Tip, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
bool mu__boolexpr289;
  if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) mu__boolexpr289 = TRUE ;
  else {
  mu__boolexpr289 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr286 = (mu__boolexpr289) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_Tree[mu_i].mu_slave_pending[mu_b].isundefined()) ; 
}
    return mu__boolexpr285;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 134;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 140 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
bool mu__boolexpr294;
  if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) mu__boolexpr294 = TRUE ;
  else {
  mu__boolexpr294 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr291 = (mu__boolexpr294) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_Tree[mu_i].mu_slave_pending[mu_b].isundefined()) ; 
}
	      if (mu__boolexpr290) {
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
    r = what_rule - 134;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].undefine();
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_GrantData;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Branch;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Trunk, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr295;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 140;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 146 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr297;
bool mu__boolexpr298;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr297) {
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
    r = what_rule - 140;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr299;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr299 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbeBlock;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAck;
}
};
};
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_x_Branch, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
bool mu__quant303; 
mu__quant303 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr304;
bool mu__boolexpr305;
  if (!((mu_k) != (mu_b))) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr304) )
  { mu__quant303 = TRUE; break; }
};
};
  mu__boolexpr300 = (mu__quant303) ; 
}
    return mu__boolexpr300;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 146;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 152 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
bool mu__quant309; 
mu__quant309 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr310;
bool mu__boolexpr311;
  if (!((mu_k) != (mu_b))) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr310) )
  { mu__quant309 = TRUE; break; }
};
};
  mu__boolexpr306 = (mu__quant309) ; 
}
	      if (mu__boolexpr306) {
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
    r = what_rule - 146;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr312;
bool mu__boolexpr313;
  if (!((mu_k) != (mu_b))) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr312 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_ProbePerm;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_Tip_Branch_None, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
bool mu__quant318; 
mu__quant318 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr319;
bool mu__boolexpr320;
  if (!((mu_k) != (mu_b))) mu__boolexpr320 = TRUE ;
  else {
  mu__boolexpr320 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr319) )
  { mu__quant318 = FALSE; break; }
};
};
  mu__boolexpr315 = (mu__quant318) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Branch)) ; 
}
    return mu__boolexpr314;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 152;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 158 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr321;
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
bool mu__quant325; 
mu__quant325 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!((mu_k) != (mu_b))) mu__boolexpr327 = TRUE ;
  else {
  mu__boolexpr327 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr326) )
  { mu__quant325 = FALSE; break; }
};
};
  mu__boolexpr322 = (mu__quant325) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Branch)) ; 
}
	      if (mu__boolexpr321) {
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
    r = what_rule - 152;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_chanA[mu_b].undefine();
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_Grant;
mu_Tree[mu_i].mu_chanD[mu_b].mu_para = mu_toT;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_state = mu_Trunk;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("receive_ReleaseAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr328;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr328;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 158;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 162 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr329;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr329) {
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
    r = what_rule - 158;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_ProbeBlock_TtoB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr330;
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
bool mu__boolexpr334;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr334 = TRUE ;
  else {
  mu__boolexpr334 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr331 = (mu__boolexpr334) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr330;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 162;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 166 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
bool mu__boolexpr339;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr339 = TRUE ;
  else {
  mu__boolexpr339 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr336 = (mu__boolexpr339) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr335) {
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
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoB;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_ProbeBlock_TtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
bool mu__boolexpr345;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr345 = TRUE ;
  else {
  mu__boolexpr345 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr341 = (mu__boolexpr345) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr340;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 166;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 170 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
bool mu__boolexpr351;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr351 = TRUE ;
  else {
  mu__boolexpr351 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr347 = (mu__boolexpr351) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr346) {
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
    r = what_rule - 166;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_ProbePerm_BtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
bool mu__boolexpr357;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr357 = TRUE ;
  else {
  mu__boolexpr357 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr353 = (mu__boolexpr357) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr352;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 170;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 174 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr358;
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
bool mu__boolexpr363;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr363 = TRUE ;
  else {
  mu__boolexpr363 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr359 = (mu__boolexpr363) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr358) {
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
    r = what_rule - 170;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAck;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_NtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr364;
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr368 = FALSE ;
  else {
bool mu__boolexpr369;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) mu__boolexpr369 = TRUE ;
  else {
  mu__boolexpr369 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr368 = (mu__boolexpr369) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
bool mu__boolexpr370;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) mu__boolexpr370 = TRUE ;
  else {
  mu__boolexpr370 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr367 = (mu__boolexpr370) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
bool mu__boolexpr371;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr371 = TRUE ;
  else {
  mu__boolexpr371 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr365 = (mu__boolexpr371) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
    return mu__boolexpr364;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 174;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 178 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr376 = FALSE ;
  else {
bool mu__boolexpr377;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) mu__boolexpr377 = TRUE ;
  else {
  mu__boolexpr377 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr376 = (mu__boolexpr377) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
bool mu__boolexpr378;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) mu__boolexpr378 = TRUE ;
  else {
  mu__boolexpr378 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr375 = (mu__boolexpr378) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
bool mu__boolexpr379;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr379 = TRUE ;
  else {
  mu__boolexpr379 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr373 = (mu__boolexpr379) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr372) {
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
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAck;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_NtoN;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_GrantData_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr380;
bool mu__boolexpr381;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr380;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 178;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 182 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr382;
bool mu__boolexpr383;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
	      if (mu__boolexpr382) {
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
    r = what_rule - 178;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_GrantData_toB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr384;
bool mu__boolexpr385;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
    return mu__boolexpr384;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 182;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 186 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr386;
bool mu__boolexpr387;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
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
    r = what_rule - 182;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Grant_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr388;
bool mu__boolexpr389;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr388;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 186;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 190 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
	      if (mu__boolexpr390) {
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
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release_TtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr392;
bool mu__boolexpr393;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr392;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 190;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 194 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr394;
bool mu__boolexpr395;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr394) {
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
    r = what_rule - 190;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ReleaseData;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_Release_BtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr396;
bool mu__boolexpr397;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr396;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 194;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 198 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr398;
bool mu__boolexpr399;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr398) {
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
    r = what_rule - 194;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_Release;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquireBlock_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr400;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr400;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 198;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 202 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr401;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr401) {
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
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b].mu_opcode = mu_AcquireBlock;
mu_Tree[mu_j].mu_chanA[mu_b].mu_para = mu_NtoT;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquirePerm_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr402;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr402;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 202;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 206 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr403;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
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
    r = what_rule - 202;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b].mu_opcode = mu_AcquirePerm;
mu_Tree[mu_j].mu_chanA[mu_b].mu_para = mu_BtoT;
mu_Tree[mu_i].mu_master_pending = mu_pending_Grant;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("send_AcquireBlock_toB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr404;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr404;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 206;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 210 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr405;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr405) {
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
    r = what_rule - 206;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
mu_Tree[mu_j].mu_chanA[mu_b].mu_opcode = mu_AcquireBlock;
mu_Tree[mu_j].mu_chanA[mu_b].mu_para = mu_NtoB;
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<2)
    { R0.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<4)
    { R1.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<5)
    { R2.NextRule(what_rule);
      if (what_rule<5) return; }
  if (what_rule>=5 && what_rule<8)
    { R3.NextRule(what_rule);
      if (what_rule<8) return; }
  if (what_rule>=8 && what_rule<11)
    { R4.NextRule(what_rule);
      if (what_rule<11) return; }
  if (what_rule>=11 && what_rule<14)
    { R5.NextRule(what_rule);
      if (what_rule<14) return; }
  if (what_rule>=14 && what_rule<17)
    { R6.NextRule(what_rule);
      if (what_rule<17) return; }
  if (what_rule>=17 && what_rule<20)
    { R7.NextRule(what_rule);
      if (what_rule<20) return; }
  if (what_rule>=20 && what_rule<23)
    { R8.NextRule(what_rule);
      if (what_rule<23) return; }
  if (what_rule>=23 && what_rule<26)
    { R9.NextRule(what_rule);
      if (what_rule<26) return; }
  if (what_rule>=26 && what_rule<29)
    { R10.NextRule(what_rule);
      if (what_rule<29) return; }
  if (what_rule>=29 && what_rule<32)
    { R11.NextRule(what_rule);
      if (what_rule<32) return; }
  if (what_rule>=32 && what_rule<35)
    { R12.NextRule(what_rule);
      if (what_rule<35) return; }
  if (what_rule>=35 && what_rule<38)
    { R13.NextRule(what_rule);
      if (what_rule<38) return; }
  if (what_rule>=38 && what_rule<41)
    { R14.NextRule(what_rule);
      if (what_rule<41) return; }
  if (what_rule>=41 && what_rule<44)
    { R15.NextRule(what_rule);
      if (what_rule<44) return; }
  if (what_rule>=44 && what_rule<50)
    { R16.NextRule(what_rule);
      if (what_rule<50) return; }
  if (what_rule>=50 && what_rule<56)
    { R17.NextRule(what_rule);
      if (what_rule<56) return; }
  if (what_rule>=56 && what_rule<62)
    { R18.NextRule(what_rule);
      if (what_rule<62) return; }
  if (what_rule>=62 && what_rule<68)
    { R19.NextRule(what_rule);
      if (what_rule<68) return; }
  if (what_rule>=68 && what_rule<74)
    { R20.NextRule(what_rule);
      if (what_rule<74) return; }
  if (what_rule>=74 && what_rule<80)
    { R21.NextRule(what_rule);
      if (what_rule<80) return; }
  if (what_rule>=80 && what_rule<86)
    { R22.NextRule(what_rule);
      if (what_rule<86) return; }
  if (what_rule>=86 && what_rule<92)
    { R23.NextRule(what_rule);
      if (what_rule<92) return; }
  if (what_rule>=92 && what_rule<98)
    { R24.NextRule(what_rule);
      if (what_rule<98) return; }
  if (what_rule>=98 && what_rule<104)
    { R25.NextRule(what_rule);
      if (what_rule<104) return; }
  if (what_rule>=104 && what_rule<110)
    { R26.NextRule(what_rule);
      if (what_rule<110) return; }
  if (what_rule>=110 && what_rule<116)
    { R27.NextRule(what_rule);
      if (what_rule<116) return; }
  if (what_rule>=116 && what_rule<122)
    { R28.NextRule(what_rule);
      if (what_rule<122) return; }
  if (what_rule>=122 && what_rule<128)
    { R29.NextRule(what_rule);
      if (what_rule<128) return; }
  if (what_rule>=128 && what_rule<134)
    { R30.NextRule(what_rule);
      if (what_rule<134) return; }
  if (what_rule>=134 && what_rule<140)
    { R31.NextRule(what_rule);
      if (what_rule<140) return; }
  if (what_rule>=140 && what_rule<146)
    { R32.NextRule(what_rule);
      if (what_rule<146) return; }
  if (what_rule>=146 && what_rule<152)
    { R33.NextRule(what_rule);
      if (what_rule<152) return; }
  if (what_rule>=152 && what_rule<158)
    { R34.NextRule(what_rule);
      if (what_rule<158) return; }
  if (what_rule>=158 && what_rule<162)
    { R35.NextRule(what_rule);
      if (what_rule<162) return; }
  if (what_rule>=162 && what_rule<166)
    { R36.NextRule(what_rule);
      if (what_rule<166) return; }
  if (what_rule>=166 && what_rule<170)
    { R37.NextRule(what_rule);
      if (what_rule<170) return; }
  if (what_rule>=170 && what_rule<174)
    { R38.NextRule(what_rule);
      if (what_rule<174) return; }
  if (what_rule>=174 && what_rule<178)
    { R39.NextRule(what_rule);
      if (what_rule<178) return; }
  if (what_rule>=178 && what_rule<182)
    { R40.NextRule(what_rule);
      if (what_rule<182) return; }
  if (what_rule>=182 && what_rule<186)
    { R41.NextRule(what_rule);
      if (what_rule<186) return; }
  if (what_rule>=186 && what_rule<190)
    { R42.NextRule(what_rule);
      if (what_rule<190) return; }
  if (what_rule>=190 && what_rule<194)
    { R43.NextRule(what_rule);
      if (what_rule<194) return; }
  if (what_rule>=194 && what_rule<198)
    { R44.NextRule(what_rule);
      if (what_rule<198) return; }
  if (what_rule>=198 && what_rule<202)
    { R45.NextRule(what_rule);
      if (what_rule<202) return; }
  if (what_rule>=202 && what_rule<206)
    { R46.NextRule(what_rule);
      if (what_rule<206) return; }
  if (what_rule>=206 && what_rule<210)
    { R47.NextRule(what_rule);
      if (what_rule<210) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=1) return R0.Condition(r-0);
  if (r>=2 && r<=3) return R1.Condition(r-2);
  if (r>=4 && r<=4) return R2.Condition(r-4);
  if (r>=5 && r<=7) return R3.Condition(r-5);
  if (r>=8 && r<=10) return R4.Condition(r-8);
  if (r>=11 && r<=13) return R5.Condition(r-11);
  if (r>=14 && r<=16) return R6.Condition(r-14);
  if (r>=17 && r<=19) return R7.Condition(r-17);
  if (r>=20 && r<=22) return R8.Condition(r-20);
  if (r>=23 && r<=25) return R9.Condition(r-23);
  if (r>=26 && r<=28) return R10.Condition(r-26);
  if (r>=29 && r<=31) return R11.Condition(r-29);
  if (r>=32 && r<=34) return R12.Condition(r-32);
  if (r>=35 && r<=37) return R13.Condition(r-35);
  if (r>=38 && r<=40) return R14.Condition(r-38);
  if (r>=41 && r<=43) return R15.Condition(r-41);
  if (r>=44 && r<=49) return R16.Condition(r-44);
  if (r>=50 && r<=55) return R17.Condition(r-50);
  if (r>=56 && r<=61) return R18.Condition(r-56);
  if (r>=62 && r<=67) return R19.Condition(r-62);
  if (r>=68 && r<=73) return R20.Condition(r-68);
  if (r>=74 && r<=79) return R21.Condition(r-74);
  if (r>=80 && r<=85) return R22.Condition(r-80);
  if (r>=86 && r<=91) return R23.Condition(r-86);
  if (r>=92 && r<=97) return R24.Condition(r-92);
  if (r>=98 && r<=103) return R25.Condition(r-98);
  if (r>=104 && r<=109) return R26.Condition(r-104);
  if (r>=110 && r<=115) return R27.Condition(r-110);
  if (r>=116 && r<=121) return R28.Condition(r-116);
  if (r>=122 && r<=127) return R29.Condition(r-122);
  if (r>=128 && r<=133) return R30.Condition(r-128);
  if (r>=134 && r<=139) return R31.Condition(r-134);
  if (r>=140 && r<=145) return R32.Condition(r-140);
  if (r>=146 && r<=151) return R33.Condition(r-146);
  if (r>=152 && r<=157) return R34.Condition(r-152);
  if (r>=158 && r<=161) return R35.Condition(r-158);
  if (r>=162 && r<=165) return R36.Condition(r-162);
  if (r>=166 && r<=169) return R37.Condition(r-166);
  if (r>=170 && r<=173) return R38.Condition(r-170);
  if (r>=174 && r<=177) return R39.Condition(r-174);
  if (r>=178 && r<=181) return R40.Condition(r-178);
  if (r>=182 && r<=185) return R41.Condition(r-182);
  if (r>=186 && r<=189) return R42.Condition(r-186);
  if (r>=190 && r<=193) return R43.Condition(r-190);
  if (r>=194 && r<=197) return R44.Condition(r-194);
  if (r>=198 && r<=201) return R45.Condition(r-198);
  if (r>=202 && r<=205) return R46.Condition(r-202);
  if (r>=206 && r<=209) return R47.Condition(r-206);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=1) { R0.Code(r-0); return; } 
  if (r>=2 && r<=3) { R1.Code(r-2); return; } 
  if (r>=4 && r<=4) { R2.Code(r-4); return; } 
  if (r>=5 && r<=7) { R3.Code(r-5); return; } 
  if (r>=8 && r<=10) { R4.Code(r-8); return; } 
  if (r>=11 && r<=13) { R5.Code(r-11); return; } 
  if (r>=14 && r<=16) { R6.Code(r-14); return; } 
  if (r>=17 && r<=19) { R7.Code(r-17); return; } 
  if (r>=20 && r<=22) { R8.Code(r-20); return; } 
  if (r>=23 && r<=25) { R9.Code(r-23); return; } 
  if (r>=26 && r<=28) { R10.Code(r-26); return; } 
  if (r>=29 && r<=31) { R11.Code(r-29); return; } 
  if (r>=32 && r<=34) { R12.Code(r-32); return; } 
  if (r>=35 && r<=37) { R13.Code(r-35); return; } 
  if (r>=38 && r<=40) { R14.Code(r-38); return; } 
  if (r>=41 && r<=43) { R15.Code(r-41); return; } 
  if (r>=44 && r<=49) { R16.Code(r-44); return; } 
  if (r>=50 && r<=55) { R17.Code(r-50); return; } 
  if (r>=56 && r<=61) { R18.Code(r-56); return; } 
  if (r>=62 && r<=67) { R19.Code(r-62); return; } 
  if (r>=68 && r<=73) { R20.Code(r-68); return; } 
  if (r>=74 && r<=79) { R21.Code(r-74); return; } 
  if (r>=80 && r<=85) { R22.Code(r-80); return; } 
  if (r>=86 && r<=91) { R23.Code(r-86); return; } 
  if (r>=92 && r<=97) { R24.Code(r-92); return; } 
  if (r>=98 && r<=103) { R25.Code(r-98); return; } 
  if (r>=104 && r<=109) { R26.Code(r-104); return; } 
  if (r>=110 && r<=115) { R27.Code(r-110); return; } 
  if (r>=116 && r<=121) { R28.Code(r-116); return; } 
  if (r>=122 && r<=127) { R29.Code(r-122); return; } 
  if (r>=128 && r<=133) { R30.Code(r-128); return; } 
  if (r>=134 && r<=139) { R31.Code(r-134); return; } 
  if (r>=140 && r<=145) { R32.Code(r-140); return; } 
  if (r>=146 && r<=151) { R33.Code(r-146); return; } 
  if (r>=152 && r<=157) { R34.Code(r-152); return; } 
  if (r>=158 && r<=161) { R35.Code(r-158); return; } 
  if (r>=162 && r<=165) { R36.Code(r-162); return; } 
  if (r>=166 && r<=169) { R37.Code(r-166); return; } 
  if (r>=170 && r<=173) { R38.Code(r-170); return; } 
  if (r>=174 && r<=177) { R39.Code(r-174); return; } 
  if (r>=178 && r<=181) { R40.Code(r-178); return; } 
  if (r>=182 && r<=185) { R41.Code(r-182); return; } 
  if (r>=186 && r<=189) { R42.Code(r-186); return; } 
  if (r>=190 && r<=193) { R43.Code(r-190); return; } 
  if (r>=194 && r<=197) { R44.Code(r-194); return; } 
  if (r>=198 && r<=201) { R45.Code(r-198); return; } 
  if (r>=202 && r<=205) { R46.Code(r-202); return; } 
  if (r>=206 && r<=209) { R47.Code(r-206); return; } 
}
int Priority(unsigned short r)
{
  if (r<=1) { return R0.Priority(); } 
  if (r>=2 && r<=3) { return R1.Priority(); } 
  if (r>=4 && r<=4) { return R2.Priority(); } 
  if (r>=5 && r<=7) { return R3.Priority(); } 
  if (r>=8 && r<=10) { return R4.Priority(); } 
  if (r>=11 && r<=13) { return R5.Priority(); } 
  if (r>=14 && r<=16) { return R6.Priority(); } 
  if (r>=17 && r<=19) { return R7.Priority(); } 
  if (r>=20 && r<=22) { return R8.Priority(); } 
  if (r>=23 && r<=25) { return R9.Priority(); } 
  if (r>=26 && r<=28) { return R10.Priority(); } 
  if (r>=29 && r<=31) { return R11.Priority(); } 
  if (r>=32 && r<=34) { return R12.Priority(); } 
  if (r>=35 && r<=37) { return R13.Priority(); } 
  if (r>=38 && r<=40) { return R14.Priority(); } 
  if (r>=41 && r<=43) { return R15.Priority(); } 
  if (r>=44 && r<=49) { return R16.Priority(); } 
  if (r>=50 && r<=55) { return R17.Priority(); } 
  if (r>=56 && r<=61) { return R18.Priority(); } 
  if (r>=62 && r<=67) { return R19.Priority(); } 
  if (r>=68 && r<=73) { return R20.Priority(); } 
  if (r>=74 && r<=79) { return R21.Priority(); } 
  if (r>=80 && r<=85) { return R22.Priority(); } 
  if (r>=86 && r<=91) { return R23.Priority(); } 
  if (r>=92 && r<=97) { return R24.Priority(); } 
  if (r>=98 && r<=103) { return R25.Priority(); } 
  if (r>=104 && r<=109) { return R26.Priority(); } 
  if (r>=110 && r<=115) { return R27.Priority(); } 
  if (r>=116 && r<=121) { return R28.Priority(); } 
  if (r>=122 && r<=127) { return R29.Priority(); } 
  if (r>=128 && r<=133) { return R30.Priority(); } 
  if (r>=134 && r<=139) { return R31.Priority(); } 
  if (r>=140 && r<=145) { return R32.Priority(); } 
  if (r>=146 && r<=151) { return R33.Priority(); } 
  if (r>=152 && r<=157) { return R34.Priority(); } 
  if (r>=158 && r<=161) { return R35.Priority(); } 
  if (r>=162 && r<=165) { return R36.Priority(); } 
  if (r>=166 && r<=169) { return R37.Priority(); } 
  if (r>=170 && r<=173) { return R38.Priority(); } 
  if (r>=174 && r<=177) { return R39.Priority(); } 
  if (r>=178 && r<=181) { return R40.Priority(); } 
  if (r>=182 && r<=185) { return R41.Priority(); } 
  if (r>=186 && r<=189) { return R42.Priority(); } 
  if (r>=190 && r<=193) { return R43.Priority(); } 
  if (r>=194 && r<=197) { return R44.Priority(); } 
  if (r>=198 && r<=201) { return R45.Priority(); } 
  if (r>=202 && r<=205) { return R46.Priority(); } 
  if (r>=206 && r<=209) { return R47.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=1) return R0.Name(r-0);
  if (r>=2 && r<=3) return R1.Name(r-2);
  if (r>=4 && r<=4) return R2.Name(r-4);
  if (r>=5 && r<=7) return R3.Name(r-5);
  if (r>=8 && r<=10) return R4.Name(r-8);
  if (r>=11 && r<=13) return R5.Name(r-11);
  if (r>=14 && r<=16) return R6.Name(r-14);
  if (r>=17 && r<=19) return R7.Name(r-17);
  if (r>=20 && r<=22) return R8.Name(r-20);
  if (r>=23 && r<=25) return R9.Name(r-23);
  if (r>=26 && r<=28) return R10.Name(r-26);
  if (r>=29 && r<=31) return R11.Name(r-29);
  if (r>=32 && r<=34) return R12.Name(r-32);
  if (r>=35 && r<=37) return R13.Name(r-35);
  if (r>=38 && r<=40) return R14.Name(r-38);
  if (r>=41 && r<=43) return R15.Name(r-41);
  if (r>=44 && r<=49) return R16.Name(r-44);
  if (r>=50 && r<=55) return R17.Name(r-50);
  if (r>=56 && r<=61) return R18.Name(r-56);
  if (r>=62 && r<=67) return R19.Name(r-62);
  if (r>=68 && r<=73) return R20.Name(r-68);
  if (r>=74 && r<=79) return R21.Name(r-74);
  if (r>=80 && r<=85) return R22.Name(r-80);
  if (r>=86 && r<=91) return R23.Name(r-86);
  if (r>=92 && r<=97) return R24.Name(r-92);
  if (r>=98 && r<=103) return R25.Name(r-98);
  if (r>=104 && r<=109) return R26.Name(r-104);
  if (r>=110 && r<=115) return R27.Name(r-110);
  if (r>=116 && r<=121) return R28.Name(r-116);
  if (r>=122 && r<=127) return R29.Name(r-122);
  if (r>=128 && r<=133) return R30.Name(r-128);
  if (r>=134 && r<=139) return R31.Name(r-134);
  if (r>=140 && r<=145) return R32.Name(r-140);
  if (r>=146 && r<=151) return R33.Name(r-146);
  if (r>=152 && r<=157) return R34.Name(r-152);
  if (r>=158 && r<=161) return R35.Name(r-158);
  if (r>=162 && r<=165) return R36.Name(r-162);
  if (r>=166 && r<=169) return R37.Name(r-166);
  if (r>=170 && r<=173) return R38.Name(r-170);
  if (r>=174 && r<=177) return R39.Name(r-174);
  if (r>=178 && r<=181) return R40.Name(r-178);
  if (r>=182 && r<=185) return R41.Name(r-182);
  if (r>=186 && r<=189) return R42.Name(r-186);
  if (r>=190 && r<=193) return R43.Name(r-190);
  if (r>=194 && r<=197) return R44.Name(r-194);
  if (r>=198 && r<=201) return R45.Name(r-198);
  if (r>=202 && r<=205) return R46.Name(r-202);
  if (r>=206 && r<=209) return R47.Name(r-206);
  return NULL;
}
};
const unsigned numrules = 210;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 210


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
    rule_tmp_1.guard = { "Tree[1].chanA[b].opcode.isundefined", "Tree[1].chanA[b].opcode", "Tree[1].cache.state",  }; 
    rule_tmp_1.action = { "Tree[1].cache.state",  }; 
    rules.push_back(rule_tmp_1); 
    // RuleName: L3_receive_AcquirePerm_None 
    rule_info rule_tmp_2; 
    rule_tmp_2.guard = { "Tree[1].chanA[b].opcode.isundefined", "Tree[1].chanA[b].opcode", "Tree[1].cache.state",  }; 
    rule_tmp_2.action = { "Tree[1].cache.state",  }; 
    rules.push_back(rule_tmp_2); 
    // RuleName: L3_send_release_Tip 
    rule_info rule_tmp_3; 
    rule_tmp_3.guard = { "Tree[1].cache.state", "Tree[1].directory[k", "Tree[1].chanA[k].opcode.isundefined",  }; 
    rule_tmp_3.action = { "Tree[1].cache.state",  }; 
    rules.push_back(rule_tmp_3); 
    // RuleName: Ln_send_Release_Tip 
    rule_info rule_tmp_4; 
    rule_tmp_4.guard = { "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].chanA[k].opcode.isundefined", "Tree[i].master_pending.isundefined", "Tree[j].chanC[b].opcode.isundefined",  }; 
    rule_tmp_4.action = { "Tree[j].chanC[b].para", "Tree[j].chanC[b].opcode", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_4); 
    // RuleName: Ln_send_Release_Branch 
    rule_info rule_tmp_5; 
    rule_tmp_5.guard = { "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].chanA[k].opcode.isundefined", "Tree[i].master_pending.isundefined", "Tree[j].chanC[b].opcode.isundefined",  }; 
    rule_tmp_5.action = { "Tree[j].chanC[b].opcode", "Tree[j].chanC[b].para", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_5); 
    // RuleName: Ln_receive_ProbeBlock_toB_Trunk 
    rule_info rule_tmp_6; 
    rule_tmp_6.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[i].cache.state",  }; 
    rule_tmp_6.action = { "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_6); 
    // RuleName: Ln_receive_ProbeBlock_toN_Trunk 
    rule_info rule_tmp_7; 
    rule_tmp_7.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[i].cache.state",  }; 
    rule_tmp_7.action = { "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_7); 
    // RuleName: Ln_receive_ProbeBlock_toB_Tip 
    rule_info rule_tmp_8; 
    rule_tmp_8.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[i].cache.state", "Tree[i].master_pending.isundefined", "Tree[i].master_pending",  }; 
    rule_tmp_8.action = { "Tree[i].cache.state", "Tree[j].chanC[b].para", "Tree[j].chanC[b].opcode",  }; 
    rules.push_back(rule_tmp_8); 
    // RuleName: Ln_receive_ProbeBlock_toN_Tip_None 
    rule_info rule_tmp_9; 
    rule_tmp_9.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].master_pending.isundefined", "Tree[i].master_pending",  }; 
    rule_tmp_9.action = { "Tree[i].cache.state", "Tree[j].chanC[b].para", "Tree[j].chanC[b].opcode", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_9); 
    // RuleName: Ln_receive_ProbePerm_Branch_Branch 
    rule_info rule_tmp_10; 
    rule_tmp_10.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].master_pending.isundefined", "Tree[i].master_pending",  }; 
    rule_tmp_10.action = { "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_10); 
    // RuleName: Ln_receive_ProbePerm_Branch_None 
    rule_info rule_tmp_11; 
    rule_tmp_11.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].master_pending.isundefined", "Tree[i].master_pending",  }; 
    rule_tmp_11.action = { "Tree[j].chanC[b].opcode", "Tree[j].chanC[b].para", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_11); 
    // RuleName: Ln_receive_Probe_None 
    rule_info rule_tmp_12; 
    rule_tmp_12.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].opcode", "Tree[i].cache.state", "Tree[i].master_pending.isundefined", "Tree[i].master_pending",  }; 
    rule_tmp_12.action = { "Tree[j].chanC[b].opcode", "Tree[j].chanC[b].para",  }; 
    rules.push_back(rule_tmp_12); 
    // RuleName: Ln_receive_ReleaseAck 
    rule_info rule_tmp_13; 
    rule_tmp_13.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode",  }; 
    rule_tmp_13.action = {  }; 
    rules.push_back(rule_tmp_13); 
    // RuleName: Ln_receive_GrantData_toT 
    rule_info rule_tmp_14; 
    rule_tmp_14.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode", "Tree[j].chanD[b].para",  }; 
    rule_tmp_14.action = { "Tree[i].cache.state", "Tree[j].chanE[b].opcode",  }; 
    rules.push_back(rule_tmp_14); 
    // RuleName: Ln_receive_GrantData_toB 
    rule_info rule_tmp_15; 
    rule_tmp_15.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode", "Tree[j].chanD[b].para",  }; 
    rule_tmp_15.action = { "Tree[i].cache.state", "Tree[j].chanE[b].opcode",  }; 
    rules.push_back(rule_tmp_15); 
    // RuleName: Ln_receive_Grant 
    rule_info rule_tmp_16; 
    rule_tmp_16.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode", "Tree[j].chanD[b].para",  }; 
    rule_tmp_16.action = { "Tree[i].cache.state", "Tree[j].chanE[b].opcode",  }; 
    rules.push_back(rule_tmp_16); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Branch_x_x 
    rule_info rule_tmp_17; 
    rule_tmp_17.guard = { "Tree[i].chanA[b1].opcode.isundefined", "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].para", "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_17.action = { "Tree[j].chanA[b2].opcode", "Tree[j].chanA[b2].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_17); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_None 
    rule_info rule_tmp_18; 
    rule_tmp_18.guard = { "Tree[i].chanA[b1].opcode.isundefined", "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].para", "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_18.action = { "Tree[j].chanA[b2].opcode", "Tree[j].chanA[b2].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_18); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_None 
    rule_info rule_tmp_19; 
    rule_tmp_19.guard = { "Tree[i].chanA[b1].opcode.isundefined", "Tree[i].chanA[b1].opcode", "Tree[i].chanA[b1].para", "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_19.action = { "Tree[j].chanA[b2].opcode", "Tree[j].chanA[b2].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_19); 
    // RuleName: Ln_receive_AcquirePerm_None 
    rule_info rule_tmp_20; 
    rule_tmp_20.guard = { "Tree[i].chanA[b1].opcode.isundefined", "Tree[i].chanA[b1].opcode", "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_20.action = { "Tree[j].chanA[b2].opcode", "Tree[j].chanA[b2].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_20); 
    // RuleName: Ln_receive_AcquirePerm_Branch_x_x 
    rule_info rule_tmp_21; 
    rule_tmp_21.guard = { "Tree[i].chanA[b1].opcode.isundefined", "Tree[i].chanA[b1].opcode", "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_21.action = { "Tree[j].chanA[b2].opcode", "Tree[j].chanA[b2].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_21); 
    // RuleName: Ln_receive_GrantAck 
    rule_info rule_tmp_22; 
    rule_tmp_22.guard = { "Tree[i].chanE[b].opcode.isundefined", "Tree[i].chanE[b].opcode",  }; 
    rule_tmp_22.action = {  }; 
    rules.push_back(rule_tmp_22); 
    // RuleName: Ln_receive_ReleaseData 
    rule_info rule_tmp_23; 
    rule_tmp_23.guard = { "Tree[i].chanC[b].opcode.isundefined", "Tree[i].chanC[b].opcode",  }; 
    rule_tmp_23.action = { "Tree[i].cache.state", "Tree[i].directory[b", "Tree[i].chanD[b].opcode",  }; 
    rules.push_back(rule_tmp_23); 
    // RuleName: Ln_receive_Release_BtoN/NtoN 
    rule_info rule_tmp_24; 
    rule_tmp_24.guard = { "Tree[i].chanC[b].opcode.isundefined", "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para",  }; 
    rule_tmp_24.action = { "Tree[i].directory[b", "Tree[i].chanD[b].opcode",  }; 
    rules.push_back(rule_tmp_24); 
    // RuleName: Ln_receive_ProbeAckData_TtoB 
    rule_info rule_tmp_25; 
    rule_tmp_25.guard = { "Tree[i].chanC[b].opcode.isundefined", "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].para",  }; 
    rule_tmp_25.action = { "Tree[i].directory[b", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_25); 
    // RuleName: Ln_receive_ProbeAckData_TtoN 
    rule_info rule_tmp_26; 
    rule_tmp_26.guard = { "Tree[i].chanC[b].opcode.isundefined", "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].para",  }; 
    rule_tmp_26.action = { "Tree[i].directory[b", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_26); 
    // RuleName: Ln_receive_ProbeAck_BtoN/NtoN 
    rule_info rule_tmp_27; 
    rule_tmp_27.guard = { "Tree[i].chanC[b].opcode.isundefined", "Tree[i].chanC[b].opcode", "Tree[i].chanC[b].para", "Tree[i].chanC[b].para",  }; 
    rule_tmp_27.action = { "Tree[i].directory[b",  }; 
    rules.push_back(rule_tmp_27); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Trunk 
    rule_info rule_tmp_28; 
    rule_tmp_28.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined",  }; 
    rule_tmp_28.action = { "Tree[i].directory[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_28); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Tip_x_Branch 
    rule_info rule_tmp_29; 
    rule_tmp_29.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined",  }; 
    rule_tmp_29.action = { "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_29); 
    // RuleName: Ln_receive_AcquireBlock_NtoT_Tip_None_None 
    rule_info rule_tmp_30; 
    rule_tmp_30.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined",  }; 
    rule_tmp_30.action = { "Tree[i].chanD[b].opcode", "Tree[i].chanD[b].para", "Tree[i].slave_pending[b", "Tree[i].cache.state", "Tree[i].directory[b",  }; 
    rules.push_back(rule_tmp_30); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_Trunk 
    rule_info rule_tmp_31; 
    rule_tmp_31.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined",  }; 
    rule_tmp_31.action = { "Tree[i].directory[k", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_31); 
    // RuleName: Ln_receive_AcquireBlock_NtoB_Branch/Tip 
    rule_info rule_tmp_32; 
    rule_tmp_32.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].chanA[b].para", "Tree[i].cache.state", "Tree[i].cache.state", "Tree[i].slave_pending[b].isundefined",  }; 
    rule_tmp_32.action = { "Tree[i].chanD[b].opcode", "Tree[i].chanD[b].para", "Tree[i].slave_pending[b", "Tree[i].directory[b",  }; 
    rules.push_back(rule_tmp_32); 
    // RuleName: Ln_receive_AcquirePerm_Trunk 
    rule_info rule_tmp_33; 
    rule_tmp_33.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].cache.state",  }; 
    rule_tmp_33.action = { "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_33); 
    // RuleName: Ln_receive_AcquirePerm_Tip_x_Branch 
    rule_info rule_tmp_34; 
    rule_tmp_34.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined",  }; 
    rule_tmp_34.action = { "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].chanB[k].opcode", "Tree[i].chanB[k].para", "Tree[i].slave_pending[k",  }; 
    rules.push_back(rule_tmp_34); 
    // RuleName: Ln_receive_AcquirePerm_Tip_Branch_None 
    rule_info rule_tmp_35; 
    rule_tmp_35.guard = { "Tree[i].chanA[b].opcode.isundefined", "Tree[i].chanA[b].opcode", "Tree[i].cache.state", "Tree[i].directory[k", "Tree[i].slave_pending[k].isundefined", "Tree[i].directory[b",  }; 
    rule_tmp_35.action = { "Tree[i].chanD[b].opcode", "Tree[i].chanD[b].para", "Tree[i].directory[b", "Tree[i].cache.state", "Tree[i].slave_pending[b",  }; 
    rules.push_back(rule_tmp_35); 
    // RuleName: receive_ReleaseAck 
    rule_info rule_tmp_36; 
    rule_tmp_36.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode",  }; 
    rule_tmp_36.action = {  }; 
    rules.push_back(rule_tmp_36); 
    // RuleName: respond_ProbeBlock_TtoB 
    rule_info rule_tmp_37; 
    rule_tmp_37.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanC[b].opcode.isundefined", "Tree[i].master_pending.isundefined", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rule_tmp_37.action = { "Tree[j].chanC[b].para", "Tree[j].chanC[b].opcode", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_37); 
    // RuleName: respond_ProbeBlock_TtoN 
    rule_info rule_tmp_38; 
    rule_tmp_38.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[j].chanC[b].opcode.isundefined", "Tree[i].master_pending.isundefined", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rule_tmp_38.action = { "Tree[j].chanC[b].para", "Tree[j].chanC[b].opcode", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_38); 
    // RuleName: respond_ProbePerm_BtoN 
    rule_info rule_tmp_39; 
    rule_tmp_39.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[j].chanC[b].opcode.isundefined", "Tree[i].master_pending.isundefined", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rule_tmp_39.action = { "Tree[j].chanC[b].opcode", "Tree[j].chanC[b].para", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_39); 
    // RuleName: respond_Probe_NtoN 
    rule_info rule_tmp_40; 
    rule_tmp_40.guard = { "Tree[j].chanB[b].opcode.isundefined", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].opcode", "Tree[j].chanB[b].para", "Tree[j].chanB[b].para", "Tree[j].chanC[b].opcode.isundefined", "Tree[i].master_pending.isundefined", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rule_tmp_40.action = { "Tree[j].chanC[b].opcode", "Tree[j].chanC[b].para", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_40); 
    // RuleName: respond_GrantData_toT 
    rule_info rule_tmp_41; 
    rule_tmp_41.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode", "Tree[j].chanD[b].para",  }; 
    rule_tmp_41.action = { "Tree[i].cache.state", "Tree[j].chanE[b].opcode",  }; 
    rules.push_back(rule_tmp_41); 
    // RuleName: respond_GrantData_toB 
    rule_info rule_tmp_42; 
    rule_tmp_42.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode", "Tree[j].chanD[b].para",  }; 
    rule_tmp_42.action = { "Tree[i].cache.state", "Tree[j].chanE[b].opcode",  }; 
    rules.push_back(rule_tmp_42); 
    // RuleName: respond_Grant_toT 
    rule_info rule_tmp_43; 
    rule_tmp_43.guard = { "Tree[j].chanD[b].opcode.isundefined", "Tree[j].chanD[b].opcode", "Tree[j].chanD[b].para",  }; 
    rule_tmp_43.action = { "Tree[i].cache.state", "Tree[j].chanE[b].opcode",  }; 
    rules.push_back(rule_tmp_43); 
    // RuleName: send_Release_TtoN 
    rule_info rule_tmp_44; 
    rule_tmp_44.guard = { "Tree[i].cache.state", "Tree[i].master_pending.isundefined", "Tree[j].chanC[b].opcode.isundefined",  }; 
    rule_tmp_44.action = { "Tree[j].chanC[b].para", "Tree[j].chanC[b].opcode", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_44); 
    // RuleName: send_Release_BtoN 
    rule_info rule_tmp_45; 
    rule_tmp_45.guard = { "Tree[i].cache.state", "Tree[i].master_pending.isundefined", "Tree[j].chanC[b].opcode.isundefined",  }; 
    rule_tmp_45.action = { "Tree[j].chanC[b].opcode", "Tree[j].chanC[b].para", "Tree[i].master_pending", "Tree[i].cache.state",  }; 
    rules.push_back(rule_tmp_45); 
    // RuleName: send_AcquireBlock_toT 
    rule_info rule_tmp_46; 
    rule_tmp_46.guard = { "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_46.action = { "Tree[j].chanA[b].opcode", "Tree[j].chanA[b].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_46); 
    // RuleName: send_AcquirePerm_toT 
    rule_info rule_tmp_47; 
    rule_tmp_47.guard = { "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_47.action = { "Tree[j].chanA[b].opcode", "Tree[j].chanA[b].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_47); 
    // RuleName: send_AcquireBlock_toB 
    rule_info rule_tmp_48; 
    rule_tmp_48.guard = { "Tree[i].cache.state", "Tree[i].master_pending.isundefined",  }; 
    rule_tmp_48.action = { "Tree[j].chanA[b].opcode", "Tree[j].chanA[b].para", "Tree[i].master_pending",  }; 
    rules.push_back(rule_tmp_48); 

    // inv: ((!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) | ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None))))
    vector<std::string> carelist_tmp; 
    carelists.push_back(carelist_tmp); 
//    funcMap["Tree[i].cache.state"] = []() -> int { return mu_Tree[mu_i].mu_cache.mu_state; };
    goalstateMap["Tree[i].cache.state"] = mu_None; 
    carelists[0].push_back("Tree[i].cache.state"); 
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
mu_1__type_9 mu_son("son",0);

mu_son = 2;
{
for(int mu_cur = 1; mu_cur <= 3; mu_cur++) {
mu_Tree[mu_cur].mu_cache.mu_state = mu_None;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
if (mu_son.isundefined())
  mu_Tree[mu_cur].mu_sons[mu_i].undefine();
else
  mu_Tree[mu_cur].mu_sons[mu_i] = mu_son;
mu_Tree[mu_cur].mu_chanA.undefine();
mu_Tree[mu_cur].mu_chanB.undefine();
mu_Tree[mu_cur].mu_chanC.undefine();
mu_Tree[mu_cur].mu_chanD.undefine();
mu_Tree[mu_cur].mu_chanE.undefine();
mu_Tree[mu_cur].mu_master_pending.undefine();
mu_Tree[mu_cur].mu_slave_pending[mu_i].undefine();
mu_Tree[mu_cur].mu_directory[mu_i] = mu_None;
mu_son = (mu_son) + (1);
};
};
};
};
{
for(int mu_cur = 4; mu_cur <= 7; mu_cur++) {
mu_Tree[mu_cur].mu_cache.mu_state = mu_None;
mu_Tree[mu_cur].mu_master_pending.undefine();
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
int mu__invariant_406() // Invariant "coherence_tree_3"
{
bool mu__quant407; 
mu__quant407 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
bool mu__boolexpr408;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr408 = TRUE ;
  else {
bool mu__quant409; 
mu__quant409 = TRUE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) )
  { mu__quant409 = FALSE; break; }
};
};
  mu__boolexpr408 = (mu__quant409) ; 
}
if ( !(mu__boolexpr408) )
  { mu__quant407 = FALSE; break; }
};
};
return mu__quant407;
};

bool mu__condition_410() // Condition for Rule "coherence_tree_3"
{
  return mu__invariant_406( );
}

/**** end rule declaration ****/

int mu__invariant_411() // Invariant "coherence_tree_2"
{
bool mu__quant412; 
mu__quant412 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
bool mu__quant413; 
mu__quant413 = TRUE;
{
for(int mu_b1 = 1; mu_b1 <= 2; mu_b1++) {
bool mu__quant414; 
mu__quant414 = TRUE;
{
for(int mu_b2 = 1; mu_b2 <= 2; mu_b2++) {
bool mu__boolexpr415;
bool mu__boolexpr416;
  if (!((mu_b1) != (mu_b2))) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_Tree[mu_i].mu_directory[mu_b1]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = TRUE ;
  else {
bool mu__boolexpr417;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) != (mu_Branch))) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_Tree[mu_i].mu_directory[mu_b2]) != (mu_Branch)) ; 
}
  mu__boolexpr415 = (mu__boolexpr417) ; 
}
if ( !(mu__boolexpr415) )
  { mu__quant414 = FALSE; break; }
};
};
if ( !(mu__quant414) )
  { mu__quant413 = FALSE; break; }
};
};
if ( !(mu__quant413) )
  { mu__quant412 = FALSE; break; }
};
};
return mu__quant412;
};

bool mu__condition_418() // Condition for Rule "coherence_tree_2"
{
  return mu__invariant_411( );
}

/**** end rule declaration ****/

int mu__invariant_419() // Invariant "coherence_tree_1"
{
bool mu__boolexpr420;
bool mu__quant421; 
mu__quant421 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
bool mu__boolexpr422;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr422 = TRUE ;
  else {
bool mu__quant423; 
mu__quant423 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Tip)) )
  { mu__quant423 = TRUE; break; }
};
};
  mu__boolexpr422 = (mu__quant423) ; 
}
if ( !(mu__boolexpr422) )
  { mu__quant421 = FALSE; break; }
};
};
  if (!(mu__quant421)) mu__boolexpr420 = FALSE ;
  else {
bool mu__quant424; 
mu__quant424 = TRUE;
{
for(int mu_i = 4; mu_i <= 7; mu_i++) {
if ( !((mu_Tree[mu_i].mu_cache.mu_state) != (mu_Trunk)) )
  { mu__quant424 = FALSE; break; }
};
};
  mu__boolexpr420 = (mu__quant424) ; 
}
return mu__boolexpr420;
};

bool mu__condition_425() // Condition for Rule "coherence_tree_1"
{
  return mu__invariant_419( );
}

/**** end rule declaration ****/

int mu__invariant_426() // Invariant "mutual_exclusion"
{
bool mu__quant427; 
mu__quant427 = TRUE;
{
for(int mu_i = 1; mu_i <= 7; mu_i++) {
for(int mu_j = 1; mu_j <= 7; mu_j++) {
bool mu__boolexpr428;
  if (!((mu_i) != (mu_j))) mu__boolexpr428 = TRUE ;
  else {
bool mu__boolexpr429;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_Tree[mu_j].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr428 = (!(mu__boolexpr429)) ; 
}
if ( !(mu__boolexpr428) )
  { mu__quant427 = FALSE; break; }
};
};
};
return mu__quant427;
};

bool mu__condition_430() // Condition for Rule "mutual_exclusion"
{
  return mu__invariant_426( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"mutual_exclusion", &mu__condition_430, NULL, },
{"coherence_tree_1", &mu__condition_425, NULL, },
{"coherence_tree_2", &mu__condition_418, NULL, },
{"coherence_tree_3", &mu__condition_410, NULL, },
};
const unsigned short numinvariants = 4;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Tree:NoScalarset
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
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<7; j++)
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
void mu_1__type_9::Permute(PermSet& Perm, int i) {};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_9::Canonicalize(PermSet& Perm) {};
void mu_1__type_9::SimpleLimit(PermSet& Perm) {};
void mu_1__type_9::ArrayLimit(PermSet& Perm) {};
void mu_1__type_9::Limit(PermSet& Perm) {};
void mu_1__type_9::MultisetLimit(PermSet& Perm)
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
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_Tree.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Tree.MultisetSort();
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
