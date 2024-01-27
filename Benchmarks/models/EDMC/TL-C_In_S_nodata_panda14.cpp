/******************************
  Program "test.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Jun 12 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Jun 12 2023"
#define PROTOCOL_NAME "test"
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
    if (defined()){
      cout << name << ":" << values[ value() -1] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -5] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -7] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -9] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -13] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -16] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -17] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -20] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -23] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -27] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    if (defined()){
      cout << name << ":" << values[ value() -30] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
if ( !((mu_Tree[1].mu_directory[mu_k]) == (mu_None)) )
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
bool mu__boolexpr20;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr20 = FALSE ;
  else {
bool mu__quant21; 
mu__quant21 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant21 = FALSE; break; }
};
};
  mu__boolexpr20 = (mu__quant21) ; 
}
	      if (mu__boolexpr20) {
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
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_i) > (1))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
bool mu__quant26; 
mu__quant26 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant26 = FALSE; break; }
};
};
  mu__boolexpr24 = (mu__quant26) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr22;
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
bool mu__boolexpr27;
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if (!((mu_i) > (1))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
bool mu__quant31; 
mu__quant31 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant31 = FALSE; break; }
};
};
  mu__boolexpr29 = (mu__quant31) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr27) {
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
bool mu__boolexpr32;
bool mu__boolexpr33;
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_i) > (1))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
bool mu__quant36; 
mu__quant36 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant36 = FALSE; break; }
};
};
  mu__boolexpr34 = (mu__quant36) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr32;
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
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
  if (!((mu_i) > (1))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
bool mu__quant41; 
mu__quant41 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant41 = FALSE; break; }
};
};
  mu__boolexpr39 = (mu__quant41) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr37) {
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
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!((mu_i) > (1))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr42;
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
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
  if (!((mu_i) > (1))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr46) {
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
bool mu__boolexpr50;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr50 )
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
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
  if (!((mu_i) > (1))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr51;
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
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
  if (!((mu_i) > (1))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr55) {
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
bool mu__boolexpr59;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr59 )
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
bool mu__boolexpr60;
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
  mu__boolexpr62 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
bool mu__boolexpr65;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr65 = TRUE ;
  else {
  mu__boolexpr65 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr60 = (mu__boolexpr65) ; 
}
    return mu__boolexpr60;
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
	      if (mu__boolexpr66) {
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
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
  if (!((mu_i) > (1))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
bool mu__quant78; 
mu__quant78 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant78 = FALSE; break; }
};
};
  mu__boolexpr73 = (mu__quant78) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
bool mu__boolexpr79;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr79 = TRUE ;
  else {
  mu__boolexpr79 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr72 = (mu__boolexpr79) ; 
}
    return mu__boolexpr72;
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
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
bool mu__boolexpr85;
  if (!((mu_i) > (1))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
bool mu__quant86; 
mu__quant86 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant86 = FALSE; break; }
};
};
  mu__boolexpr81 = (mu__quant86) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
bool mu__boolexpr87;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr87 = TRUE ;
  else {
  mu__boolexpr87 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr80 = (mu__boolexpr87) ; 
}
	      if (mu__boolexpr80) {
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
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!((mu_i) > (1))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
bool mu__quant93; 
mu__quant93 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant93 = TRUE; break; }
};
};
  mu__boolexpr89 = (mu__quant93) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
bool mu__boolexpr94;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr94 = TRUE ;
  else {
  mu__boolexpr94 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr88 = (mu__boolexpr94) ; 
}
    return mu__boolexpr88;
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
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
  if (!((mu_i) > (1))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
bool mu__quant100; 
mu__quant100 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant100 = TRUE; break; }
};
};
  mu__boolexpr96 = (mu__quant100) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
bool mu__boolexpr101;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr101 = TRUE ;
  else {
  mu__boolexpr101 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr95 = (mu__boolexpr101) ; 
}
	      if (mu__boolexpr95) {
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
bool mu__boolexpr102;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr102 )
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
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
  if (!((mu_i) > (1))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
bool mu__quant108; 
mu__quant108 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant108 = FALSE; break; }
};
};
  mu__boolexpr104 = (mu__quant108) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
bool mu__boolexpr109;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr109 = TRUE ;
  else {
  mu__boolexpr109 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr103 = (mu__boolexpr109) ; 
}
    return mu__boolexpr103;
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
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
  if (!((mu_i) > (1))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
bool mu__quant115; 
mu__quant115 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant115 = FALSE; break; }
};
};
  mu__boolexpr111 = (mu__quant115) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
bool mu__boolexpr116;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr116 = TRUE ;
  else {
  mu__boolexpr116 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr110 = (mu__boolexpr116) ; 
}
	      if (mu__boolexpr110) {
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
bool mu__boolexpr121;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) mu__boolexpr121 = TRUE ;
  else {
  mu__boolexpr121 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  mu__boolexpr119 = (mu__boolexpr121) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
bool mu__boolexpr122;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr122 = TRUE ;
  else {
  mu__boolexpr122 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr117 = (mu__boolexpr122) ; 
}
    return mu__boolexpr117;
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
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!((mu_i) > (1))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr129;
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
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!((mu_i) > (1))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr131) {
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
bool mu__boolexpr133;
bool mu__boolexpr134;
bool mu__boolexpr135;
  if (!((mu_i) > (1))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr133;
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
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!((mu_i) > (1))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
	      if (mu__boolexpr136) {
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
  mu__boolexpr139 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
    return mu__boolexpr139;
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
  mu__boolexpr142 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
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
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!((mu_i) > (1))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr145;
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
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
  if (!((mu_i) > (1))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
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
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!((mu_i) > (1))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr151;
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
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
  if (!((mu_i) > (1))) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr156) {
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
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
  if (!((mu_i) > (1))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr161;
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
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
  if (!((mu_i) > (1))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr166) {
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
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!((mu_i) > (1))) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr171;
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
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
  if (!((mu_i) > (1))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr176) {
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
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
  if (!((mu_i) > (1))) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr181;
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
bool mu__boolexpr185;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_i) > (1))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
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
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
  if (!((mu_i) > (1))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr189;
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
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
  if (!((mu_i) > (1))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr193) {
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
bool mu__boolexpr197;
  if (!(!(mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode.isundefined()))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr197;
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
bool mu__boolexpr198;
  if (!(!(mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode.isundefined()))) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr198) {
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
bool mu__boolexpr199;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
    return mu__boolexpr199;
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
bool mu__boolexpr200;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
	      if (mu__boolexpr200) {
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
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
bool mu__boolexpr203;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr203 = TRUE ;
  else {
  mu__boolexpr203 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr201 = (mu__boolexpr203) ; 
}
    return mu__boolexpr201;
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
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
bool mu__boolexpr206;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr206 = TRUE ;
  else {
  mu__boolexpr206 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr204 = (mu__boolexpr206) ; 
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
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
    return mu__boolexpr207;
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
bool mu__boolexpr209;
bool mu__boolexpr210;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
	      if (mu__boolexpr209) {
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
bool mu__boolexpr211;
bool mu__boolexpr212;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
    return mu__boolexpr211;
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
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
	      if (mu__boolexpr213) {
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
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
bool mu__boolexpr217;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr217 = TRUE ;
  else {
  mu__boolexpr217 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr215 = (mu__boolexpr217) ; 
}
    return mu__boolexpr215;
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
bool mu__boolexpr218;
bool mu__boolexpr219;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
bool mu__boolexpr220;
  if ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) mu__boolexpr220 = TRUE ;
  else {
  mu__boolexpr220 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
  mu__boolexpr218 = (mu__boolexpr220) ; 
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
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
bool mu__quant225; 
mu__quant225 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr226;
bool mu__boolexpr227;
  if (!((mu_k) != (mu_b))) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr226) )
  { mu__quant225 = TRUE; break; }
};
};
  mu__boolexpr221 = (mu__quant225) ; 
}
    return mu__boolexpr221;
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
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
bool mu__quant232; 
mu__quant232 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr233;
bool mu__boolexpr234;
  if (!((mu_k) != (mu_b))) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr233) )
  { mu__quant232 = TRUE; break; }
};
};
  mu__boolexpr228 = (mu__quant232) ; 
}
	      if (mu__boolexpr228) {
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
bool mu__boolexpr235;
  if (!((mu_k) != (mu_b))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
if ( mu__boolexpr235 )
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
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
bool mu__quant240; 
mu__quant240 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr241;
bool mu__boolexpr242;
  if (!((mu_k) != (mu_b))) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr241) )
  { mu__quant240 = TRUE; break; }
};
};
  mu__boolexpr236 = (mu__quant240) ; 
}
    return mu__boolexpr236;
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
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
bool mu__quant247; 
mu__quant247 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr248;
bool mu__boolexpr249;
  if (!((mu_k) != (mu_b))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr248) )
  { mu__quant247 = TRUE; break; }
};
};
  mu__boolexpr243 = (mu__quant247) ; 
}
	      if (mu__boolexpr243) {
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
bool mu__boolexpr250;
bool mu__boolexpr251;
  if (!((mu_k) != (mu_b))) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr250 )
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
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
bool mu__quant256; 
mu__quant256 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr257;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr257) )
  { mu__quant256 = FALSE; break; }
};
};
  mu__boolexpr252 = (mu__quant256) ; 
}
    return mu__boolexpr252;
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
	      if (mu__boolexpr258) {
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
  mu__boolexpr266 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
bool mu__quant268; 
mu__quant268 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr269;
bool mu__boolexpr270;
  if (!((mu_k) != (mu_b))) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr269) )
  { mu__quant268 = TRUE; break; }
};
};
  mu__boolexpr264 = (mu__quant268) ; 
}
    return mu__boolexpr264;
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
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
bool mu__quant275; 
mu__quant275 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr276;
bool mu__boolexpr277;
  if (!((mu_k) != (mu_b))) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr276) )
  { mu__quant275 = TRUE; break; }
};
};
  mu__boolexpr271 = (mu__quant275) ; 
}
	      if (mu__boolexpr271) {
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
bool mu__boolexpr278;
  if (!((mu_k) != (mu_b))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
if ( mu__boolexpr278 )
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
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
bool mu__boolexpr283;
  if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) mu__boolexpr283 = TRUE ;
  else {
  mu__boolexpr283 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr280 = (mu__boolexpr283) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (mu_Tree[mu_i].mu_slave_pending[mu_b].isundefined()) ; 
}
    return mu__boolexpr279;
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
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
bool mu__boolexpr288;
  if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) mu__boolexpr288 = TRUE ;
  else {
  mu__boolexpr288 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr285 = (mu__boolexpr288) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_Tree[mu_i].mu_slave_pending[mu_b].isundefined()) ; 
}
	      if (mu__boolexpr284) {
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
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr289;
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
bool mu__boolexpr291;
bool mu__boolexpr292;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr291) {
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
bool mu__boolexpr293;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr293 )
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
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
bool mu__quant297; 
mu__quant297 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!((mu_k) != (mu_b))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr298) )
  { mu__quant297 = TRUE; break; }
};
};
  mu__boolexpr294 = (mu__quant297) ; 
}
    return mu__boolexpr294;
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
	      if (mu__boolexpr300) {
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
bool mu__boolexpr306;
bool mu__boolexpr307;
  if (!((mu_k) != (mu_b))) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr306 )
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
    return tsprintf("Ln_receive_AcquirePerm_Tip_None_None, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
bool mu__quant312; 
mu__quant312 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr313;
bool mu__boolexpr314;
  if (!((mu_k) != (mu_b))) mu__boolexpr314 = TRUE ;
  else {
  mu__boolexpr314 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr313) )
  { mu__quant312 = FALSE; break; }
};
};
  mu__boolexpr309 = (mu__quant312) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
    return mu__boolexpr308;
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
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
bool mu__quant319; 
mu__quant319 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr320;
bool mu__boolexpr321;
  if (!((mu_k) != (mu_b))) mu__boolexpr321 = TRUE ;
  else {
  mu__boolexpr321 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr320) )
  { mu__quant319 = FALSE; break; }
};
};
  mu__boolexpr316 = (mu__quant319) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
	      if (mu__boolexpr315) {
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_GrantData;
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
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
bool mu__quant326; 
mu__quant326 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr327;
bool mu__boolexpr328;
  if (!((mu_k) != (mu_b))) mu__boolexpr328 = TRUE ;
  else {
  mu__boolexpr328 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr327) )
  { mu__quant326 = FALSE; break; }
};
};
  mu__boolexpr323 = (mu__quant326) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Branch)) ; 
}
    return mu__boolexpr322;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 158;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 164 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
bool mu__boolexpr332;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
bool mu__quant333; 
mu__quant333 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr334;
bool mu__boolexpr335;
  if (!((mu_k) != (mu_b))) mu__boolexpr335 = TRUE ;
  else {
  mu__boolexpr335 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr334) )
  { mu__quant333 = FALSE; break; }
};
};
  mu__boolexpr330 = (mu__quant333) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Branch)) ; 
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
    return tsprintf("receive_ReleaseAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr336;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr336;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 164;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 168 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr337;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr337) {
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
    r = what_rule - 164;
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
    return tsprintf("respond_ProbeBlock_TtoB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
bool mu__boolexpr341;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
bool mu__boolexpr342;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr342 = TRUE ;
  else {
  mu__boolexpr342 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr339 = (mu__boolexpr342) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr338;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 168;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 172 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
bool mu__boolexpr347;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr347 = TRUE ;
  else {
  mu__boolexpr347 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr344 = (mu__boolexpr347) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr343) {
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
    r = what_rule - 168;
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
    return tsprintf("respond_ProbeBlock_TtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
bool mu__boolexpr353;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr353 = TRUE ;
  else {
  mu__boolexpr353 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr349 = (mu__boolexpr353) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr348;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 172;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 176 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
bool mu__boolexpr359;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr359 = TRUE ;
  else {
  mu__boolexpr359 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr355 = (mu__boolexpr359) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr354) {
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
    r = what_rule - 172;
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
    return tsprintf("respond_ProbePerm_BtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
bool mu__boolexpr364;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
bool mu__boolexpr365;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr365 = TRUE ;
  else {
  mu__boolexpr365 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr361 = (mu__boolexpr365) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr360;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 176;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 180 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
bool mu__boolexpr371;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr371 = TRUE ;
  else {
  mu__boolexpr371 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr367 = (mu__boolexpr371) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr366) {
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
    return tsprintf("respond_Probe_NtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
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
    return mu__boolexpr372;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 180;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 184 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
bool mu__boolexpr383;
bool mu__boolexpr384;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr384 = FALSE ;
  else {
bool mu__boolexpr385;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbePerm)) mu__boolexpr385 = TRUE ;
  else {
  mu__boolexpr385 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_ProbeBlock)) ; 
}
  mu__boolexpr384 = (mu__boolexpr385) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
bool mu__boolexpr386;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) mu__boolexpr386 = TRUE ;
  else {
  mu__boolexpr386 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr383 = (mu__boolexpr386) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
bool mu__boolexpr387;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr387 = TRUE ;
  else {
  mu__boolexpr387 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr381 = (mu__boolexpr387) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr380) {
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
    r = what_rule - 180;
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
    return tsprintf("respond_GrantData_toT, i:%s", mu_i.Name());
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
  mu__boolexpr389 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr388;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 184;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 188 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
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
    r = what_rule - 184;
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
    return tsprintf("respond_GrantData_toB, i:%s", mu_i.Name());
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
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
    return mu__boolexpr392;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 188;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 192 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr394;
bool mu__boolexpr395;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
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
    r = what_rule - 188;
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
    return tsprintf("respond_Grant_toT, i:%s", mu_i.Name());
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
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr396;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 192;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 196 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr398;
bool mu__boolexpr399;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
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
    r = what_rule - 192;
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
    return tsprintf("send_Release_TtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr400;
bool mu__boolexpr401;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr400;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 196;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 200 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr402;
bool mu__boolexpr403;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr403)) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr402) {
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
    r = what_rule - 196;
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
    return tsprintf("send_Release_BtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr404;
bool mu__boolexpr405;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr404;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 200;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 204 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr406;
bool mu__boolexpr407;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr406) {
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
    r = what_rule - 200;
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
    return tsprintf("send_AcquireBlock_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr408;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr408;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 204;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 208 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr409;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr409) {
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
    r = what_rule - 204;
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
    return tsprintf("send_AcquirePerm_toT, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr410;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr410;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 208;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 212 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr411;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr411) {
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
    r = what_rule - 208;
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
bool mu__boolexpr412;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr412;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 212;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 216 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr413;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr413) {
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
    r = what_rule - 212;
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
  RuleBase48 R48;
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
  if (what_rule>=158 && what_rule<164)
    { R35.NextRule(what_rule);
      if (what_rule<164) return; }
  if (what_rule>=164 && what_rule<168)
    { R36.NextRule(what_rule);
      if (what_rule<168) return; }
  if (what_rule>=168 && what_rule<172)
    { R37.NextRule(what_rule);
      if (what_rule<172) return; }
  if (what_rule>=172 && what_rule<176)
    { R38.NextRule(what_rule);
      if (what_rule<176) return; }
  if (what_rule>=176 && what_rule<180)
    { R39.NextRule(what_rule);
      if (what_rule<180) return; }
  if (what_rule>=180 && what_rule<184)
    { R40.NextRule(what_rule);
      if (what_rule<184) return; }
  if (what_rule>=184 && what_rule<188)
    { R41.NextRule(what_rule);
      if (what_rule<188) return; }
  if (what_rule>=188 && what_rule<192)
    { R42.NextRule(what_rule);
      if (what_rule<192) return; }
  if (what_rule>=192 && what_rule<196)
    { R43.NextRule(what_rule);
      if (what_rule<196) return; }
  if (what_rule>=196 && what_rule<200)
    { R44.NextRule(what_rule);
      if (what_rule<200) return; }
  if (what_rule>=200 && what_rule<204)
    { R45.NextRule(what_rule);
      if (what_rule<204) return; }
  if (what_rule>=204 && what_rule<208)
    { R46.NextRule(what_rule);
      if (what_rule<208) return; }
  if (what_rule>=208 && what_rule<212)
    { R47.NextRule(what_rule);
      if (what_rule<212) return; }
  if (what_rule>=212 && what_rule<216)
    { R48.NextRule(what_rule);
      if (what_rule<216) return; }
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
  if (r>=158 && r<=163) return R35.Condition(r-158);
  if (r>=164 && r<=167) return R36.Condition(r-164);
  if (r>=168 && r<=171) return R37.Condition(r-168);
  if (r>=172 && r<=175) return R38.Condition(r-172);
  if (r>=176 && r<=179) return R39.Condition(r-176);
  if (r>=180 && r<=183) return R40.Condition(r-180);
  if (r>=184 && r<=187) return R41.Condition(r-184);
  if (r>=188 && r<=191) return R42.Condition(r-188);
  if (r>=192 && r<=195) return R43.Condition(r-192);
  if (r>=196 && r<=199) return R44.Condition(r-196);
  if (r>=200 && r<=203) return R45.Condition(r-200);
  if (r>=204 && r<=207) return R46.Condition(r-204);
  if (r>=208 && r<=211) return R47.Condition(r-208);
  if (r>=212 && r<=215) return R48.Condition(r-212);
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
  if (r>=158 && r<=163) { R35.Code(r-158); return; } 
  if (r>=164 && r<=167) { R36.Code(r-164); return; } 
  if (r>=168 && r<=171) { R37.Code(r-168); return; } 
  if (r>=172 && r<=175) { R38.Code(r-172); return; } 
  if (r>=176 && r<=179) { R39.Code(r-176); return; } 
  if (r>=180 && r<=183) { R40.Code(r-180); return; } 
  if (r>=184 && r<=187) { R41.Code(r-184); return; } 
  if (r>=188 && r<=191) { R42.Code(r-188); return; } 
  if (r>=192 && r<=195) { R43.Code(r-192); return; } 
  if (r>=196 && r<=199) { R44.Code(r-196); return; } 
  if (r>=200 && r<=203) { R45.Code(r-200); return; } 
  if (r>=204 && r<=207) { R46.Code(r-204); return; } 
  if (r>=208 && r<=211) { R47.Code(r-208); return; } 
  if (r>=212 && r<=215) { R48.Code(r-212); return; } 
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
  if (r>=158 && r<=163) { return R35.Priority(); } 
  if (r>=164 && r<=167) { return R36.Priority(); } 
  if (r>=168 && r<=171) { return R37.Priority(); } 
  if (r>=172 && r<=175) { return R38.Priority(); } 
  if (r>=176 && r<=179) { return R39.Priority(); } 
  if (r>=180 && r<=183) { return R40.Priority(); } 
  if (r>=184 && r<=187) { return R41.Priority(); } 
  if (r>=188 && r<=191) { return R42.Priority(); } 
  if (r>=192 && r<=195) { return R43.Priority(); } 
  if (r>=196 && r<=199) { return R44.Priority(); } 
  if (r>=200 && r<=203) { return R45.Priority(); } 
  if (r>=204 && r<=207) { return R46.Priority(); } 
  if (r>=208 && r<=211) { return R47.Priority(); } 
  if (r>=212 && r<=215) { return R48.Priority(); } 
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
  if (r>=158 && r<=163) return R35.Name(r-158);
  if (r>=164 && r<=167) return R36.Name(r-164);
  if (r>=168 && r<=171) return R37.Name(r-168);
  if (r>=172 && r<=175) return R38.Name(r-172);
  if (r>=176 && r<=179) return R39.Name(r-176);
  if (r>=180 && r<=183) return R40.Name(r-180);
  if (r>=184 && r<=187) return R41.Name(r-184);
  if (r>=188 && r<=191) return R42.Name(r-188);
  if (r>=192 && r<=195) return R43.Name(r-192);
  if (r>=196 && r<=199) return R44.Name(r-196);
  if (r>=200 && r<=203) return R45.Name(r-200);
  if (r>=204 && r<=207) return R46.Name(r-204);
  if (r>=208 && r<=211) return R47.Name(r-208);
  if (r>=212 && r<=215) return R48.Name(r-212);
  return NULL;
}
};
const unsigned numrules = 216;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 216


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

void Goal_value() {  // makun: set goalstate
    if (goal_value_flag) return;
    goal_value_flag = true;

    // set goalstate value: 
    // Example: attr.value(v);

// set states
mu_Tree[1].mu_cache.mu_state.value(mu_Tip);
mu_Tree[2].mu_cache.mu_state.value(mu_Branch);
mu_Tree[4].mu_cache.mu_state.value(mu_Branch);
mu_Tree[5].mu_cache.mu_state.value(mu_Branch);
mu_Tree[3].mu_cache.mu_state.value(mu_Branch);
mu_Tree[6].mu_cache.mu_state.value(mu_Branch);
mu_Tree[7].mu_cache.mu_state.value(mu_Branch);

// set states

    // set carelist about invariant 
    carelist_l1.clear();  
    // Example: carelist.push_back("attr");
    carelist_l1.push_back("Tree[1].cache.state");

    carelist_l2.clear();  
    carelist_l2.push_back("Tree[2].cache.state");
    carelist_l2.push_back("Tree[3].cache.state");

    carelist_l3.clear(); 
    carelist_l3.push_back("Tree[4].cache.state");
    carelist_l3.push_back("Tree[5].cache.state");
    carelist_l3.push_back("Tree[6].cache.state");
    carelist_l3.push_back("Tree[7].cache.state");
}

void Goal_value1() {  // makun: set goalstate
    if (goal_value_flag1) return;
    goal_value_flag1 = true;
}

void FlowSetter() {  // makun: set a flow to improve carelist
    vector<int> flow1 = {20, 16, 8, 4, 22};
    flows.push_back(flow1);
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
int mu__invariant_414() // Invariant "test_reachable_state_38"
{
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
bool mu__boolexpr420;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr415);
};

bool mu__condition_421() // Condition for Rule "test_reachable_state_38"
{
  return mu__invariant_414( );
}

/**** end rule declaration ****/

int mu__invariant_422() // Invariant "test_reachable_state_37"
{
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
bool mu__boolexpr428;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr423);
};

bool mu__condition_429() // Condition for Rule "test_reachable_state_37"
{
  return mu__invariant_422( );
}

/**** end rule declaration ****/

int mu__invariant_430() // Invariant "test_reachable_state_36"
{
bool mu__boolexpr431;
bool mu__boolexpr432;
bool mu__boolexpr433;
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr431);
};

bool mu__condition_437() // Condition for Rule "test_reachable_state_36"
{
  return mu__invariant_430( );
}

/**** end rule declaration ****/

int mu__invariant_438() // Invariant "test_reachable_state_35"
{
bool mu__boolexpr439;
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr440)) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr439);
};

bool mu__condition_445() // Condition for Rule "test_reachable_state_35"
{
  return mu__invariant_438( );
}

/**** end rule declaration ****/

int mu__invariant_446() // Invariant "test_reachable_state_34"
{
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr447);
};

bool mu__condition_453() // Condition for Rule "test_reachable_state_34"
{
  return mu__invariant_446( );
}

/**** end rule declaration ****/

int mu__invariant_454() // Invariant "test_reachable_state_33"
{
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
bool mu__boolexpr459;
bool mu__boolexpr460;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr455);
};

bool mu__condition_461() // Condition for Rule "test_reachable_state_33"
{
  return mu__invariant_454( );
}

/**** end rule declaration ****/

int mu__invariant_462() // Invariant "test_reachable_state_32"
{
bool mu__boolexpr463;
bool mu__boolexpr464;
bool mu__boolexpr465;
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr463);
};

bool mu__condition_469() // Condition for Rule "test_reachable_state_32"
{
  return mu__invariant_462( );
}

/**** end rule declaration ****/

int mu__invariant_470() // Invariant "test_reachable_state_31"
{
bool mu__boolexpr471;
bool mu__boolexpr472;
bool mu__boolexpr473;
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr471);
};

bool mu__condition_477() // Condition for Rule "test_reachable_state_31"
{
  return mu__invariant_470( );
}

/**** end rule declaration ****/

int mu__invariant_478() // Invariant "test_reachable_state_30"
{
bool mu__boolexpr479;
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
bool mu__boolexpr484;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr479);
};

bool mu__condition_485() // Condition for Rule "test_reachable_state_30"
{
  return mu__invariant_478( );
}

/**** end rule declaration ****/

int mu__invariant_486() // Invariant "test_reachable_state_29"
{
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
bool mu__boolexpr490;
bool mu__boolexpr491;
bool mu__boolexpr492;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr492)) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr487);
};

bool mu__condition_493() // Condition for Rule "test_reachable_state_29"
{
  return mu__invariant_486( );
}

/**** end rule declaration ****/

int mu__invariant_494() // Invariant "test_reachable_state_28"
{
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
bool mu__boolexpr498;
bool mu__boolexpr499;
bool mu__boolexpr500;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr495);
};

bool mu__condition_501() // Condition for Rule "test_reachable_state_28"
{
  return mu__invariant_494( );
}

/**** end rule declaration ****/

int mu__invariant_502() // Invariant "test_reachable_state_27"
{
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr503);
};

bool mu__condition_509() // Condition for Rule "test_reachable_state_27"
{
  return mu__invariant_502( );
}

/**** end rule declaration ****/

int mu__invariant_510() // Invariant "test_reachable_state_26"
{
bool mu__boolexpr511;
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr511);
};

bool mu__condition_517() // Condition for Rule "test_reachable_state_26"
{
  return mu__invariant_510( );
}

/**** end rule declaration ****/

int mu__invariant_518() // Invariant "test_reachable_state_25"
{
bool mu__boolexpr519;
bool mu__boolexpr520;
bool mu__boolexpr521;
bool mu__boolexpr522;
bool mu__boolexpr523;
bool mu__boolexpr524;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr523)) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr520)) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr519);
};

bool mu__condition_525() // Condition for Rule "test_reachable_state_25"
{
  return mu__invariant_518( );
}

/**** end rule declaration ****/

int mu__invariant_526() // Invariant "test_reachable_state_24"
{
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr527);
};

bool mu__condition_533() // Condition for Rule "test_reachable_state_24"
{
  return mu__invariant_526( );
}

/**** end rule declaration ****/

int mu__invariant_534() // Invariant "test_reachable_state_23"
{
bool mu__boolexpr535;
bool mu__boolexpr536;
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
bool mu__boolexpr540;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr535);
};

bool mu__condition_541() // Condition for Rule "test_reachable_state_23"
{
  return mu__invariant_534( );
}

/**** end rule declaration ****/

int mu__invariant_542() // Invariant "test_reachable_state_22"
{
bool mu__boolexpr543;
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
bool mu__boolexpr547;
bool mu__boolexpr548;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr543);
};

bool mu__condition_549() // Condition for Rule "test_reachable_state_22"
{
  return mu__invariant_542( );
}

/**** end rule declaration ****/

int mu__invariant_550() // Invariant "test_reachable_state_21"
{
bool mu__boolexpr551;
bool mu__boolexpr552;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr551);
};

bool mu__condition_557() // Condition for Rule "test_reachable_state_21"
{
  return mu__invariant_550( );
}

/**** end rule declaration ****/

int mu__invariant_558() // Invariant "test_reachable_state_20"
{
bool mu__boolexpr559;
bool mu__boolexpr560;
bool mu__boolexpr561;
bool mu__boolexpr562;
bool mu__boolexpr563;
bool mu__boolexpr564;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr564)) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr562)) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr560)) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr559);
};

bool mu__condition_565() // Condition for Rule "test_reachable_state_20"
{
  return mu__invariant_558( );
}

/**** end rule declaration ****/

int mu__invariant_566() // Invariant "test_reachable_state_19"
{
bool mu__boolexpr567;
bool mu__boolexpr568;
bool mu__boolexpr569;
bool mu__boolexpr570;
bool mu__boolexpr571;
bool mu__boolexpr572;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr571)) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr567);
};

bool mu__condition_573() // Condition for Rule "test_reachable_state_19"
{
  return mu__invariant_566( );
}

/**** end rule declaration ****/

int mu__invariant_574() // Invariant "test_reachable_state_18"
{
bool mu__boolexpr575;
bool mu__boolexpr576;
bool mu__boolexpr577;
bool mu__boolexpr578;
bool mu__boolexpr579;
bool mu__boolexpr580;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr575);
};

bool mu__condition_581() // Condition for Rule "test_reachable_state_18"
{
  return mu__invariant_574( );
}

/**** end rule declaration ****/

int mu__invariant_582() // Invariant "test_reachable_state_17"
{
bool mu__boolexpr583;
bool mu__boolexpr584;
bool mu__boolexpr585;
bool mu__boolexpr586;
bool mu__boolexpr587;
bool mu__boolexpr588;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr587)) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr583);
};

bool mu__condition_589() // Condition for Rule "test_reachable_state_17"
{
  return mu__invariant_582( );
}

/**** end rule declaration ****/

int mu__invariant_590() // Invariant "test_reachable_state_16"
{
bool mu__boolexpr591;
bool mu__boolexpr592;
bool mu__boolexpr593;
bool mu__boolexpr594;
bool mu__boolexpr595;
bool mu__boolexpr596;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr592)) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr591);
};

bool mu__condition_597() // Condition for Rule "test_reachable_state_16"
{
  return mu__invariant_590( );
}

/**** end rule declaration ****/

int mu__invariant_598() // Invariant "test_reachable_state_15"
{
bool mu__boolexpr599;
bool mu__boolexpr600;
bool mu__boolexpr601;
bool mu__boolexpr602;
bool mu__boolexpr603;
bool mu__boolexpr604;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr604)) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr602)) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr599);
};

bool mu__condition_605() // Condition for Rule "test_reachable_state_15"
{
  return mu__invariant_598( );
}

/**** end rule declaration ****/

int mu__invariant_606() // Invariant "test_reachable_state_14"
{
bool mu__boolexpr607;
bool mu__boolexpr608;
bool mu__boolexpr609;
bool mu__boolexpr610;
bool mu__boolexpr611;
bool mu__boolexpr612;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr610)) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr607);
};

bool mu__condition_613() // Condition for Rule "test_reachable_state_14"
{
  return mu__invariant_606( );
}

/**** end rule declaration ****/

int mu__invariant_614() // Invariant "test_reachable_state_13"
{
bool mu__boolexpr615;
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
bool mu__boolexpr619;
bool mu__boolexpr620;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr620)) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr616)) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr615);
};

bool mu__condition_621() // Condition for Rule "test_reachable_state_13"
{
  return mu__invariant_614( );
}

/**** end rule declaration ****/

int mu__invariant_622() // Invariant "test_reachable_state_12"
{
bool mu__boolexpr623;
bool mu__boolexpr624;
bool mu__boolexpr625;
bool mu__boolexpr626;
bool mu__boolexpr627;
bool mu__boolexpr628;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr627)) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr626)) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr624)) mu__boolexpr623 = FALSE ;
  else {
  mu__boolexpr623 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr623);
};

bool mu__condition_629() // Condition for Rule "test_reachable_state_12"
{
  return mu__invariant_622( );
}

/**** end rule declaration ****/

int mu__invariant_630() // Invariant "test_reachable_state_11"
{
bool mu__boolexpr631;
bool mu__boolexpr632;
bool mu__boolexpr633;
bool mu__boolexpr634;
bool mu__boolexpr635;
bool mu__boolexpr636;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr636)) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr635)) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr634)) mu__boolexpr633 = FALSE ;
  else {
  mu__boolexpr633 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr633)) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr632)) mu__boolexpr631 = FALSE ;
  else {
  mu__boolexpr631 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr631);
};

bool mu__condition_637() // Condition for Rule "test_reachable_state_11"
{
  return mu__invariant_630( );
}

/**** end rule declaration ****/

int mu__invariant_638() // Invariant "test_reachable_state_10"
{
bool mu__boolexpr639;
bool mu__boolexpr640;
bool mu__boolexpr641;
bool mu__boolexpr642;
bool mu__boolexpr643;
bool mu__boolexpr644;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr640)) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr639);
};

bool mu__condition_645() // Condition for Rule "test_reachable_state_10"
{
  return mu__invariant_638( );
}

/**** end rule declaration ****/

int mu__invariant_646() // Invariant "test_reachable_state_9"
{
bool mu__boolexpr647;
bool mu__boolexpr648;
bool mu__boolexpr649;
bool mu__boolexpr650;
bool mu__boolexpr651;
bool mu__boolexpr652;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr652)) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr650)) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr648)) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr647);
};

bool mu__condition_653() // Condition for Rule "test_reachable_state_9"
{
  return mu__invariant_646( );
}

/**** end rule declaration ****/

int mu__invariant_654() // Invariant "test_reachable_state_8"
{
bool mu__boolexpr655;
bool mu__boolexpr656;
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
bool mu__boolexpr660;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr660)) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr656)) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr655);
};

bool mu__condition_661() // Condition for Rule "test_reachable_state_8"
{
  return mu__invariant_654( );
}

/**** end rule declaration ****/

int mu__invariant_662() // Invariant "test_reachable_state_7"
{
bool mu__boolexpr663;
bool mu__boolexpr664;
bool mu__boolexpr665;
bool mu__boolexpr666;
bool mu__boolexpr667;
bool mu__boolexpr668;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr668)) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr666)) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr664)) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr663);
};

bool mu__condition_669() // Condition for Rule "test_reachable_state_7"
{
  return mu__invariant_662( );
}

/**** end rule declaration ****/

int mu__invariant_670() // Invariant "test_reachable_state_6"
{
bool mu__boolexpr671;
bool mu__boolexpr672;
bool mu__boolexpr673;
bool mu__boolexpr674;
bool mu__boolexpr675;
bool mu__boolexpr676;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr675)) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr674)) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr673)) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr672)) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr671);
};

bool mu__condition_677() // Condition for Rule "test_reachable_state_6"
{
  return mu__invariant_670( );
}

/**** end rule declaration ****/

int mu__invariant_678() // Invariant "test_reachable_state_5"
{
bool mu__boolexpr679;
bool mu__boolexpr680;
bool mu__boolexpr681;
bool mu__boolexpr682;
bool mu__boolexpr683;
bool mu__boolexpr684;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr684)) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr683)) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr682)) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr681)) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr680)) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr679);
};

bool mu__condition_685() // Condition for Rule "test_reachable_state_5"
{
  return mu__invariant_678( );
}

/**** end rule declaration ****/

int mu__invariant_686() // Invariant "test_reachable_state_4"
{
bool mu__boolexpr687;
bool mu__boolexpr688;
bool mu__boolexpr689;
bool mu__boolexpr690;
bool mu__boolexpr691;
bool mu__boolexpr692;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr692 = FALSE ;
  else {
  mu__boolexpr692 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr692)) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr691)) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr690)) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr688)) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr687);
};

bool mu__condition_693() // Condition for Rule "test_reachable_state_4"
{
  return mu__invariant_686( );
}

/**** end rule declaration ****/

int mu__invariant_694() // Invariant "test_reachable_state_3"
{
bool mu__boolexpr695;
bool mu__boolexpr696;
bool mu__boolexpr697;
bool mu__boolexpr698;
bool mu__boolexpr699;
bool mu__boolexpr700;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr699)) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr695);
};

bool mu__condition_701() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_694( );
}

/**** end rule declaration ****/

int mu__invariant_702() // Invariant "test_reachable_state_2"
{
bool mu__boolexpr703;
bool mu__boolexpr704;
bool mu__boolexpr705;
bool mu__boolexpr706;
bool mu__boolexpr707;
bool mu__boolexpr708;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr704)) mu__boolexpr703 = FALSE ;
  else {
  mu__boolexpr703 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Tip)) ; 
}
return !(mu__boolexpr703);
};

bool mu__condition_709() // Condition for Rule "test_reachable_state_2"
{
  return mu__invariant_702( );
}

/**** end rule declaration ****/

int mu__invariant_710() // Invariant "test_reachable_state_1"
{
bool mu__boolexpr711;
bool mu__boolexpr712;
bool mu__boolexpr713;
bool mu__boolexpr714;
bool mu__boolexpr715;
bool mu__boolexpr716;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr714)) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr713)) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr712)) mu__boolexpr711 = FALSE ;
  else {
  mu__boolexpr711 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr711);
};

bool mu__condition_717() // Condition for Rule "test_reachable_state_1"
{
  return mu__invariant_710( );
}

/**** end rule declaration ****/

int mu__invariant_718() // Invariant "coherence_tree_3"
{
bool mu__quant719; 
mu__quant719 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
bool mu__boolexpr720;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr720 = TRUE ;
  else {
bool mu__quant721; 
mu__quant721 = TRUE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) )
  { mu__quant721 = FALSE; break; }
};
};
  mu__boolexpr720 = (mu__quant721) ; 
}
if ( !(mu__boolexpr720) )
  { mu__quant719 = FALSE; break; }
};
};
return mu__quant719;
};

bool mu__condition_722() // Condition for Rule "coherence_tree_3"
{
  return mu__invariant_718( );
}

/**** end rule declaration ****/

int mu__invariant_723() // Invariant "coherence_tree_2"
{
bool mu__quant724; 
mu__quant724 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
bool mu__quant725; 
mu__quant725 = TRUE;
{
for(int mu_b1 = 1; mu_b1 <= 2; mu_b1++) {
bool mu__quant726; 
mu__quant726 = TRUE;
{
for(int mu_b2 = 1; mu_b2 <= 2; mu_b2++) {
bool mu__boolexpr727;
bool mu__boolexpr728;
  if (!((mu_b1) != (mu_b2))) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = ((mu_Tree[mu_i].mu_directory[mu_b1]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = TRUE ;
  else {
bool mu__boolexpr729;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) != (mu_Branch))) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = ((mu_Tree[mu_i].mu_directory[mu_b2]) != (mu_Branch)) ; 
}
  mu__boolexpr727 = (mu__boolexpr729) ; 
}
if ( !(mu__boolexpr727) )
  { mu__quant726 = FALSE; break; }
};
};
if ( !(mu__quant726) )
  { mu__quant725 = FALSE; break; }
};
};
if ( !(mu__quant725) )
  { mu__quant724 = FALSE; break; }
};
};
return mu__quant724;
};

bool mu__condition_730() // Condition for Rule "coherence_tree_2"
{
  return mu__invariant_723( );
}

/**** end rule declaration ****/

int mu__invariant_731() // Invariant "coherence_tree_1"
{
bool mu__boolexpr732;
bool mu__quant733; 
mu__quant733 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
bool mu__boolexpr734;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr734 = TRUE ;
  else {
bool mu__quant735; 
mu__quant735 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Tip)) )
  { mu__quant735 = TRUE; break; }
};
};
  mu__boolexpr734 = (mu__quant735) ; 
}
if ( !(mu__boolexpr734) )
  { mu__quant733 = FALSE; break; }
};
};
  if (!(mu__quant733)) mu__boolexpr732 = FALSE ;
  else {
bool mu__quant736; 
mu__quant736 = TRUE;
{
for(int mu_i = 4; mu_i <= 7; mu_i++) {
if ( !((mu_Tree[mu_i].mu_cache.mu_state) != (mu_Trunk)) )
  { mu__quant736 = FALSE; break; }
};
};
  mu__boolexpr732 = (mu__quant736) ; 
}
return mu__boolexpr732;
};

bool mu__condition_737() // Condition for Rule "coherence_tree_1"
{
  return mu__invariant_731( );
}

/**** end rule declaration ****/

int mu__invariant_738() // Invariant "mutual_exclusion"
{
bool mu__quant739; 
mu__quant739 = TRUE;
{
for(int mu_i = 4; mu_i <= 7; mu_i++) {
for(int mu_j = 4; mu_j <= 7; mu_j++) {
bool mu__boolexpr740;
  if (!((mu_i) != (mu_j))) mu__boolexpr740 = TRUE ;
  else {
bool mu__boolexpr741;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = ((mu_Tree[mu_j].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr740 = (!(mu__boolexpr741)) ; 
}
if ( !(mu__boolexpr740) )
  { mu__quant739 = FALSE; break; }
};
};
};
return mu__quant739;
};

bool mu__condition_742() // Condition for Rule "mutual_exclusion"
{
  return mu__invariant_738( );
}

/**** end rule declaration ****/

// set invariants
const rulerec invariants[] = {
{"test_reachable_state_38", &mu__condition_421, NULL, },
};// set invariants
const unsigned short numinvariants = 1;

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
