/******************************
  Program "./models/TL-C_NonIn_S_data.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Oct  9 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Oct  9 2023"
#define PROTOCOL_NAME "./models/TL-C_NonIn_S_data"
#define BITS_IN_WORLD 1920
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
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_dataType& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_dataType& val)
    {
      if (val.defined())
	return ( s << mu_1_dataType::values[ int(val) - 1 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_dataType (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_dataType (void): mu__byte(1, 2, 2) {};
  mu_1_dataType (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_dataType& a, mu_1_dataType& b)
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
const char *mu_1_dataType::values[] =
  { "dataType_1","dataType_2",NULL };

/*** end scalarset declaration ***/
mu_1_dataType mu_1_dataType_undefined_var;

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
      return ( s << mu_1_stateType::values[ int(val) - 3] );
    else return ( s << "Undefined" );
  };

  mu_1_stateType (const char *name, int os): mu__byte(3, 6, 3, name, os) {};
  mu_1_stateType (void): mu__byte(3, 6, 3) {};
  mu_1_stateType (int val): mu__byte(3, 6, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -3]; };
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
      cout << name << ":" << values[ value() -3] << '\n';
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
      return ( s << mu_1_AType::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_AType (const char *name, int os): mu__byte(7, 8, 2, name, os) {};
  mu_1_AType (void): mu__byte(7, 8, 2) {};
  mu_1_AType (int val): mu__byte(7, 8, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_BType::values[ int(val) - 9] );
    else return ( s << "Undefined" );
  };

  mu_1_BType (const char *name, int os): mu__byte(9, 9, 1, name, os) {};
  mu_1_BType (void): mu__byte(9, 9, 1) {};
  mu_1_BType (int val): mu__byte(9, 9, 1, "Parameter or function result.", 0)
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

const char *mu_1_BType::values[] = {"Probe",NULL };

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

  mu_1_CType (const char *name, int os): mu__byte(10, 11, 2, name, os) {};
  mu_1_CType (void): mu__byte(10, 11, 2) {};
  mu_1_CType (int val): mu__byte(10, 11, 2, "Parameter or function result.", 0)
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

const char *mu_1_CType::values[] = {"ReleaseData","ProbeAckData",NULL };

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
      return ( s << mu_1_DType::values[ int(val) - 12] );
    else return ( s << "Undefined" );
  };

  mu_1_DType (const char *name, int os): mu__byte(12, 14, 2, name, os) {};
  mu_1_DType (void): mu__byte(12, 14, 2) {};
  mu_1_DType (int val): mu__byte(12, 14, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -12]; };
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
      cout << name << ":" << values[ value() -12] << '\n';
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
      return ( s << mu_1_EType::values[ int(val) - 15] );
    else return ( s << "Undefined" );
  };

  mu_1_EType (const char *name, int os): mu__byte(15, 15, 1, name, os) {};
  mu_1_EType (void): mu__byte(15, 15, 1) {};
  mu_1_EType (int val): mu__byte(15, 15, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -15]; };
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
      cout << name << ":" << values[ value() -15] << '\n';
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
      return ( s << mu_1_growType::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_growType (const char *name, int os): mu__byte(16, 18, 2, name, os) {};
  mu_1_growType (void): mu__byte(16, 18, 2) {};
  mu_1_growType (int val): mu__byte(16, 18, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_capType::values[ int(val) - 19] );
    else return ( s << "Undefined" );
  };

  mu_1_capType (const char *name, int os): mu__byte(19, 21, 2, name, os) {};
  mu_1_capType (void): mu__byte(19, 21, 2) {};
  mu_1_capType (int val): mu__byte(19, 21, 2, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -19] << '\n';
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
      return ( s << mu_1_pruneType::values[ int(val) - 22] );
    else return ( s << "Undefined" );
  };

  mu_1_pruneType (const char *name, int os): mu__byte(22, 26, 3, name, os) {};
  mu_1_pruneType (void): mu__byte(22, 26, 3) {};
  mu_1_pruneType (int val): mu__byte(22, 26, 3, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -22] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
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
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chCType& operator= (const mu_1_chCType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
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
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 24 ); else mu_dirty.set_self_2(NULL, NULL, 0);
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
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_para.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_para.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_para.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_para.reset();
    mu_data.reset();
 };
  void print() {
    mu_opcode.print();
    mu_para.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_para.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_para.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chDType& operator= (const mu_1_chDType& from) {
    mu_opcode.value(from.mu_opcode.value());
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
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  if (name) mu_sons.set_self_2(name, ".sons", os + 24 ); else mu_sons.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 40 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 56 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 72 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_chanA.set_self_2(name, ".chanA", os + 80 ); else mu_chanA.set_self_2(NULL, NULL, 0);
  if (name) mu_chanB.set_self_2(name, ".chanB", os + 112 ); else mu_chanB.set_self_2(NULL, NULL, 0);
  if (name) mu_chanC.set_self_2(name, ".chanC", os + 144 ); else mu_chanC.set_self_2(NULL, NULL, 0);
  if (name) mu_chanD.set_self_2(name, ".chanD", os + 208 ); else mu_chanD.set_self_2(NULL, NULL, 0);
  if (name) mu_chanE.set_self_2(name, ".chanE", os + 256 ); else mu_chanE.set_self_2(NULL, NULL, 0);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 272 + os);
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
const int mu_dataNum = 2;
const int mu_dataType_1 = 1;
const int mu_dataType_2 = 2;
const int mu_None = 3;
const int mu_Trunk = 4;
const int mu_Branch = 5;
const int mu_Tip = 6;
const int mu_AcquirePerm = 7;
const int mu_AcquireBlock = 8;
const int mu_Probe = 9;
const int mu_ReleaseData = 10;
const int mu_ProbeAckData = 11;
const int mu_Grant = 12;
const int mu_GrantData = 13;
const int mu_ReleaseAck = 14;
const int mu_GrantAck = 15;
const int mu_NtoB = 16;
const int mu_NtoT = 17;
const int mu_BtoT = 18;
const int mu_toN = 19;
const int mu_toB = 20;
const int mu_toT = 21;
const int mu_BtoN = 22;
const int mu_TtoN = 23;
const int mu_TtoB = 24;
const int mu_NtoN = 25;
const int mu_BtoB = 26;
const int mu_pending_ProbeAck = 27;
const int mu_pending_ProbeAckData = 28;
const int mu_pending_GrantAck = 29;
const int mu_pending_Grant = 30;
const int mu_pending_GrantData = 31;
const int mu_pending_ReleaseAck = 32;
/*** Variable declaration ***/
mu_1__type_8 mu_Tree("Tree",0);

/*** Variable declaration ***/
mu_1_dataType mu_memData("memData",1904);

/*** Variable declaration ***/
mu_1_dataType mu_auxData("auxData",1912);





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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquireBlock_NtoT_Branch_None_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_Tree[1].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr12)) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_Tree[1].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
bool mu__quant14; 
mu__quant14 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant14 = FALSE; break; }
};
};
  mu__boolexpr10 = (mu__quant14) ; 
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
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_Tree[1].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_Tree[1].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
bool mu__quant19; 
mu__quant19 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant19 = FALSE; break; }
};
};
  mu__boolexpr15 = (mu__quant19) ; 
}
	      if (mu__boolexpr15) {
		if ( ( TRUE  ) )
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
if (mu_memData.isundefined())
  mu_Tree[1].mu_cache.mu_data.undefine();
else
  mu_Tree[1].mu_cache.mu_data = mu_memData;
if (mu_memData.isundefined())
  mu_auxData.undefine();
else
  mu_auxData = mu_memData;
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
    return tsprintf("L3_receive_Acquire_None_None_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr20;
bool mu__boolexpr21;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
bool mu__quant22; 
mu__quant22 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant22 = FALSE; break; }
};
};
  mu__boolexpr20 = (mu__quant22) ; 
}
    return mu__boolexpr20;
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
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
bool mu__quant25; 
mu__quant25 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant25 = FALSE; break; }
};
};
  mu__boolexpr23 = (mu__quant25) ; 
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
if (mu_memData.isundefined())
  mu_Tree[1].mu_cache.mu_data.undefine();
else
  mu_Tree[1].mu_cache.mu_data = mu_memData;
if (mu_memData.isundefined())
  mu_auxData.undefine();
else
  mu_auxData = mu_memData;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquirePerm_None_Branch_x, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_Tree[1].mu_directory[mu_b]) == (mu_Branch)) ; 
}
    return mu__boolexpr26;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 6 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr29;
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_Tree[1].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_Tree[1].mu_directory[mu_b]) == (mu_Branch)) ; 
}
	      if (mu__boolexpr29) {
		if ( ( TRUE  ) )
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
if (mu_memData.isundefined())
  mu_Tree[1].mu_cache.mu_data.undefine();
else
  mu_Tree[1].mu_cache.mu_data = mu_memData;
if (mu_memData.isundefined())
  mu_auxData.undefine();
else
  mu_auxData = mu_memData;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_AcquirePerm_Branch_x_x, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_Tree[1].mu_cache.mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr32;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 8 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!(!(mu_Tree[1].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Tree[1].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_Tree[1].mu_cache.mu_state) == (mu_Branch)) ; 
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
    r = what_rule - 6;
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
if (mu_memData.isundefined())
  mu_Tree[1].mu_cache.mu_data.undefine();
else
  mu_Tree[1].mu_cache.mu_data = mu_memData;
if (mu_memData.isundefined())
  mu_auxData.undefine();
else
  mu_auxData = mu_memData;
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
    return tsprintf("L3_send_release");
  }
  bool Condition(unsigned r)
  {
    return (mu_Tree[1].mu_cache.mu_state) != (mu_None);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    while (what_rule < 9 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Tree[1].mu_cache.mu_state) != (mu_None)) {
		if ( ( TRUE  ) )
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
    }
  }

  void Code(unsigned r)
  {
mu_Tree[1].mu_cache.mu_state = mu_None;
mu_memData = mu_Tree[1].mu_cache.mu_data;
mu_Tree[1].mu_cache.mu_data.undefine();
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
    return tsprintf("Ln_send_Release_Trunk_Tip, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return (mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 12 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) {
		if ( ( TRUE  ) )
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
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    return tsprintf("Ln_send_Release_Branch_Branch, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr36;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr36 = FALSE ;
  else {
bool mu__quant37; 
mu__quant37 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant37 = TRUE; break; }
};
};
  mu__boolexpr36 = (mu__quant37) ; 
}
    return mu__boolexpr36;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 15 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr38;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr38 = FALSE ;
  else {
bool mu__quant39; 
mu__quant39 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
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
    r = what_rule - 12;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    return tsprintf("Ln_send_Release_Tip_Branch, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr40;
bool mu__boolexpr41;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!((mu_i) > (1))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
bool mu__quant45; 
mu__quant45 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
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
if ( !(mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) )
  { mu__quant46 = FALSE; break; }
};
};
  mu__boolexpr42 = (mu__quant46) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr40;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 15;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 18 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
  if (!((mu_i) > (1))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
bool mu__quant52; 
mu__quant52 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant52 = TRUE; break; }
};
};
  mu__boolexpr50 = (mu__quant52) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
bool mu__quant53; 
mu__quant53 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !(mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) )
  { mu__quant53 = FALSE; break; }
};
};
  mu__boolexpr49 = (mu__quant53) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr47) {
		if ( ( TRUE  ) )
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_TtoB;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ReleaseData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    return tsprintf("Ln_send_Release_Tip_None, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
  if (!((mu_i) > (1))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
bool mu__quant58; 
mu__quant58 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr59;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr59) )
  { mu__quant58 = FALSE; break; }
};
};
  mu__boolexpr56 = (mu__quant58) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr54;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 18;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 21 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
  if (!((mu_i) > (1))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
bool mu__quant64; 
mu__quant64 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr65;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr65) )
  { mu__quant64 = FALSE; break; }
};
};
  mu__boolexpr62 = (mu__quant64) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
	      if (mu__boolexpr60) {
		if ( ( TRUE  ) )
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
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
    return tsprintf("Ln_send_Release_Branch_None, i:%s", mu_i.Name());
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
  if (!((mu_i) > (1))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
bool mu__quant70; 
mu__quant70 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr71;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr71) )
  { mu__quant70 = FALSE; break; }
};
};
  mu__boolexpr68 = (mu__quant70) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr66;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 21;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 24 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
  if (!((mu_i) > (1))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
bool mu__quant76; 
mu__quant76 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr77;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_Tree[mu_i].mu_chanA[mu_k].mu_opcode.isundefined()) ; 
}
if ( !(mu__boolexpr77) )
  { mu__quant76 = FALSE; break; }
};
};
  mu__boolexpr74 = (mu__quant76) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
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
    r = what_rule - 21;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ReleaseData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    return tsprintf("Ln_receive_Probe_toB_Trunk, i:%s", mu_i.Name());
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
  if (!((mu_i) > (1))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr78;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 24;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 27 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
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
  mu__boolexpr84 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr82) {
		if ( ( TRUE  ) )
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
bool mu__boolexpr86;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr86 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Trunk, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!((mu_i) > (1))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
    return mu__boolexpr87;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 27;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 30 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
bool mu__boolexpr94;
  if (!((mu_i) > (1))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Trunk)) ; 
}
	      if (mu__boolexpr91) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 27;
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
bool mu__boolexpr95;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr95 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_Tip, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_i) > (1))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
bool mu__boolexpr101;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr101 = TRUE ;
  else {
  mu__boolexpr101 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr96 = (mu__boolexpr101) ; 
}
    return mu__boolexpr96;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 30;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 33 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
  if (!((mu_i) > (1))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
bool mu__boolexpr107;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr107 = TRUE ;
  else {
  mu__boolexpr107 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr102 = (mu__boolexpr107) ; 
}
	      if (mu__boolexpr102) {
		if ( ( TRUE  ) )
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
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
    return tsprintf("Ln_receive_Probe_toB_None_Branch, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!((mu_i) > (1))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
bool mu__quant113; 
mu__quant113 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr114;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr114) )
  { mu__quant113 = TRUE; break; }
};
};
  mu__boolexpr108 = (mu__quant113) ; 
}
    return mu__boolexpr108;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 36 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
  if (!((mu_i) > (1))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
bool mu__quant120; 
mu__quant120 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr121;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr121) )
  { mu__quant120 = TRUE; break; }
};
};
  mu__boolexpr115 = (mu__quant120) ; 
}
	      if (mu__boolexpr115) {
		if ( ( TRUE  ) )
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
bool mu__boolexpr122;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr122 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_Branch, i:%s", mu_i.Name());
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
bool mu__boolexpr127;
  if (!((mu_i) > (1))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
bool mu__boolexpr128;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr128 = TRUE ;
  else {
  mu__boolexpr128 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr123 = (mu__boolexpr128) ; 
}
    return mu__boolexpr123;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 39 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_i) > (1))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
bool mu__boolexpr134;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr134 = TRUE ;
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
    r = what_rule - 36;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoB;
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
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
    return tsprintf("Ln_receive_Probe_toN_Tip_None, i:%s", mu_i.Name());
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
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_i) > (1))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
bool mu__quant141; 
mu__quant141 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant141 = FALSE; break; }
};
};
  mu__boolexpr136 = (mu__quant141) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
bool mu__boolexpr142;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr142 = TRUE ;
  else {
  mu__boolexpr142 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr135 = (mu__boolexpr142) ; 
}
    return mu__boolexpr135;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 39;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
  if (!((mu_i) > (1))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
bool mu__quant149; 
mu__quant149 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant149 = FALSE; break; }
};
};
  mu__boolexpr144 = (mu__quant149) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
bool mu__boolexpr150;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr150 = TRUE ;
  else {
  mu__boolexpr150 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr143 = (mu__boolexpr150) ; 
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
    r = what_rule - 39;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Branch_Branch, i:%s", mu_i.Name());
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
bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
  if (!((mu_i) > (1))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
bool mu__quant157; 
mu__quant157 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant157 = TRUE; break; }
};
};
  mu__boolexpr152 = (mu__quant157) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
bool mu__boolexpr158;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr158 = TRUE ;
  else {
  mu__boolexpr158 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr151 = (mu__boolexpr158) ; 
}
    return mu__boolexpr151;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 45 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!((mu_i) > (1))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
bool mu__quant165; 
mu__quant165 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) )
  { mu__quant165 = TRUE; break; }
};
};
  mu__boolexpr160 = (mu__quant165) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
bool mu__boolexpr166;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr166 = TRUE ;
  else {
  mu__boolexpr166 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr159 = (mu__boolexpr166) ; 
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
    r = what_rule - 42;
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
bool mu__boolexpr167;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr167 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_Branch_None, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
  if (!((mu_i) > (1))) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
bool mu__quant174; 
mu__quant174 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant174 = FALSE; break; }
};
};
  mu__boolexpr169 = (mu__quant174) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
bool mu__boolexpr175;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr175 = TRUE ;
  else {
  mu__boolexpr175 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr168 = (mu__boolexpr175) ; 
}
    return mu__boolexpr168;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 45;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
  if (!((mu_i) > (1))) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
bool mu__quant182; 
mu__quant182 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant182 = FALSE; break; }
};
};
  mu__boolexpr177 = (mu__quant182) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
bool mu__boolexpr183;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr183 = TRUE ;
  else {
  mu__boolexpr183 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr176 = (mu__boolexpr183) ; 
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
    r = what_rule - 45;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toB_None_Branch/Tip, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr184;
bool mu__boolexpr185;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_i) > (1))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
bool mu__quant189; 
mu__quant189 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr190;
bool mu__boolexpr191;
  if ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) mu__boolexpr191 = TRUE ;
  else {
  mu__boolexpr191 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr190) )
  { mu__quant189 = TRUE; break; }
};
};
  mu__boolexpr184 = (mu__quant189) ; 
}
    return mu__boolexpr184;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 51 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
  if (!((mu_i) > (1))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
bool mu__quant197; 
mu__quant197 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr198;
bool mu__boolexpr199;
  if ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) mu__boolexpr199 = TRUE ;
  else {
  mu__boolexpr199 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr198) )
  { mu__quant197 = TRUE; break; }
};
};
  mu__boolexpr192 = (mu__quant197) ; 
}
	      if (mu__boolexpr192) {
		if ( ( TRUE  ) )
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
bool mu__boolexpr200;
bool mu__boolexpr201;
  if ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) mu__boolexpr201 = TRUE ;
  else {
  mu__boolexpr201 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr200 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_toN_None_Branch/Tip, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
  if (!((mu_i) > (1))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
bool mu__quant207; 
mu__quant207 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr208;
bool mu__boolexpr209;
  if ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) mu__boolexpr209 = TRUE ;
  else {
  mu__boolexpr209 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr208) )
  { mu__quant207 = TRUE; break; }
};
};
  mu__boolexpr202 = (mu__quant207) ; 
}
    return mu__boolexpr202;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 51;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 54 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (!((mu_i) > (1))) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
bool mu__quant215; 
mu__quant215 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr216;
bool mu__boolexpr217;
  if ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) mu__boolexpr217 = TRUE ;
  else {
  mu__boolexpr217 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr216) )
  { mu__quant215 = TRUE; break; }
};
};
  mu__boolexpr210 = (mu__quant215) ; 
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
    r = what_rule - 51;
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
bool mu__boolexpr218;
bool mu__boolexpr219;
  if ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) mu__boolexpr219 = TRUE ;
  else {
  mu__boolexpr219 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr218 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_Probe_None_None_None, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr220;
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
  if (!((mu_i) > (1))) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
bool mu__quant225; 
mu__quant225 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant225 = FALSE; break; }
};
};
  mu__boolexpr221 = (mu__quant225) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
bool mu__boolexpr226;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr226 = TRUE ;
  else {
  mu__boolexpr226 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr220 = (mu__boolexpr226) ; 
}
    return mu__boolexpr220;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 54;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 57 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
  if (!((mu_i) > (1))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
bool mu__quant232; 
mu__quant232 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant232 = FALSE; break; }
};
};
  mu__boolexpr228 = (mu__quant232) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
bool mu__boolexpr233;
  if (mu_Tree[mu_i].mu_master_pending.isundefined()) mu__boolexpr233 = TRUE ;
  else {
  mu__boolexpr233 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr227 = (mu__boolexpr233) ; 
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
    r = what_rule - 54;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_NtoN;
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
bool mu__boolexpr234;
bool mu__boolexpr235;
  if (!((mu_i) > (1))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr234;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 57;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 60 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr236;
bool mu__boolexpr237;
  if (!((mu_i) > (1))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr236) {
		if ( ( TRUE  ) )
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
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
  if (!((mu_i) > (1))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr238;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 63 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
  if (!((mu_i) > (1))) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
	      if (mu__boolexpr241) {
		if ( ( TRUE  ) )
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
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_j].mu_chanD[mu_b].mu_data;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!((mu_i) > (1))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
    return mu__boolexpr244;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 63;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 66 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
  if (!((mu_i) > (1))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
	      if (mu__boolexpr247) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 63;
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
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_j].mu_chanD[mu_b].mu_data;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
  if (!((mu_i) > (1))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr250;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 66;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 69 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
  if (!((mu_i) > (1))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
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
    r = what_rule - 66;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_Branch_None_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
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
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!((mu_i) > (1))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
bool mu__quant262; 
mu__quant262 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant262 = FALSE; break; }
};
};
  mu__boolexpr257 = (mu__quant262) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr256;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 69;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 75 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
  if (!((mu_i) > (1))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
bool mu__quant269; 
mu__quant269 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant269 = FALSE; break; }
};
};
  mu__boolexpr264 = (mu__quant269) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr263) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 69;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_None_None_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
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
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
bool mu__boolexpr275;
  if (!((mu_i) > (1))) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
bool mu__quant276; 
mu__quant276 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant276 = FALSE; break; }
};
};
  mu__boolexpr271 = (mu__quant276) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr270;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 75;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 81 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
  if (!((mu_i) > (1))) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
bool mu__quant283; 
mu__quant283 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant283 = FALSE; break; }
};
};
  mu__boolexpr278 = (mu__quant283) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
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
    r = what_rule - 75;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_None_None_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
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
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
  if (!((mu_i) > (1))) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
bool mu__quant290; 
mu__quant290 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant290 = FALSE; break; }
};
};
  mu__boolexpr285 = (mu__quant290) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr284;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 81;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 87 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!((mu_i) > (1))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr294)) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
bool mu__quant297; 
mu__quant297 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant297 = FALSE; break; }
};
};
  mu__boolexpr292 = (mu__quant297) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
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
    r = what_rule - 81;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_None_None_None, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
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
bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
  if (!((mu_i) > (1))) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
bool mu__quant303; 
mu__quant303 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant303 = FALSE; break; }
};
};
  mu__boolexpr299 = (mu__quant303) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr298;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 87;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 93 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
  if (!((mu_i) > (1))) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
bool mu__quant309; 
mu__quant309 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) )
  { mu__quant309 = FALSE; break; }
};
};
  mu__boolexpr305 = (mu__quant309) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr304) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 87;
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
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_None_Branch_x, b1:%s, i:%s", mu_b1.Name(), mu_i.Name());
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
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
  if (!((mu_i) > (1))) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = ((mu_Tree[mu_i].mu_directory[mu_b1]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr310;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 93;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 99 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
  if (!((mu_i) > (1))) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_Tree[mu_i].mu_directory[mu_b1]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
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
    r = what_rule - 93;
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
mu_Tree[mu_i].mu_master_pending = mu_pending_GrantData;
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
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
bool mu__boolexpr323;
  if (!((mu_i) > (1))) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr320;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 99;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 105 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b2 = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!((mu_i) > (1))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (!(mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_Tree[mu_i].mu_chanA[mu_b1].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr324) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 99;
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
bool mu__boolexpr328;
  if (!(!(mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode.isundefined()))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr328;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 105;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 111 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr329;
  if (!(!(mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode.isundefined()))) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_Tree[mu_i].mu_chanE[mu_b].mu_opcode) == (mu_GrantAck)) ; 
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
    r = what_rule - 105;
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
    return tsprintf("Ln_receive_Release_TtoB, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr330;
bool mu__boolexpr331;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
    return mu__boolexpr330;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 111;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 117 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr332;
bool mu__boolexpr333;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
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
    r = what_rule - 111;
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
mu_Tree[mu_i].mu_directory[mu_b] = mu_Branch;
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
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
    return tsprintf("Ln_receive_Release_TtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr334;
bool mu__boolexpr335;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
    return mu__boolexpr334;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 117;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 123 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr336;
bool mu__boolexpr337;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
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
    r = what_rule - 117;
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
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
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
    return tsprintf("Ln_receive_Release_BtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr338;
bool mu__boolexpr339;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
    return mu__boolexpr338;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 123;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 129 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr340;
bool mu__boolexpr341;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ReleaseData)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
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
    r = what_rule - 123;
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
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
if ( (mu_Tree[mu_i].mu_cache.mu_state) == (mu_None) )
{
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
}
mu_Tree[mu_i].mu_chanD[mu_b].mu_opcode = mu_ReleaseAck;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
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
bool mu__boolexpr342;
bool mu__boolexpr343;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
}
    return mu__boolexpr342;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 129;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 135 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr344;
bool mu__boolexpr345;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoB)) ; 
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
    r = what_rule - 129;
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
mu_Tree[mu_i].mu_directory[mu_b] = mu_Branch;
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
bool mu__boolexpr346;
bool mu__boolexpr347;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
}
    return mu__boolexpr346;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 135;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 141 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr348;
bool mu__boolexpr349;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_TtoN)) ; 
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
    r = what_rule - 135;
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
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_cache.mu_state = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_Tree[mu_i].mu_chanC[mu_b].mu_dirty;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_BtoB, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr350;
bool mu__boolexpr351;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoB)) ; 
}
    return mu__boolexpr350;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 141;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 147 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr352;
bool mu__boolexpr353;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoB)) ; 
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
    r = what_rule - 141;
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
if ( (mu_Tree[mu_i].mu_cache.mu_state) == (mu_None) )
{
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
}
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_BtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr354;
bool mu__boolexpr355;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
}
    return mu__boolexpr354;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 147;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 153 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr356;
bool mu__boolexpr357;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_BtoN)) ; 
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
    r = what_rule - 147;
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
if ( (mu_Tree[mu_i].mu_cache.mu_state) == (mu_None) )
{
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_i].mu_chanC[mu_b].mu_data;
}
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_ProbeAck_NtoN, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr358;
bool mu__boolexpr359;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
}
    return mu__boolexpr358;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 153;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 159 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr360;
bool mu__boolexpr361;
  if (!(!(mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode.isundefined()))) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_opcode) == (mu_ProbeAckData)) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_Tree[mu_i].mu_chanC[mu_b].mu_para) == (mu_NtoN)) ; 
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
    r = what_rule - 153;
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
mu_Tree[mu_i].mu_directory[mu_b] = mu_None;
mu_Tree[mu_i].mu_chanC[mu_b].undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b].undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoT_x_None_Tip, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr362;
bool mu__boolexpr363;
bool mu__boolexpr364;
bool mu__boolexpr365;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
bool mu__quant366; 
mu__quant366 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr367;
bool mu__boolexpr368;
  if (!((mu_k) != (mu_b))) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr367) )
  { mu__quant366 = TRUE; break; }
};
};
  mu__boolexpr362 = (mu__quant366) ; 
}
    return mu__boolexpr362;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 159;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 165 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
bool mu__quant373; 
mu__quant373 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr374;
bool mu__boolexpr375;
  if (!((mu_k) != (mu_b))) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr374) )
  { mu__quant373 = TRUE; break; }
};
};
  mu__boolexpr369 = (mu__quant373) ; 
}
	      if (mu__boolexpr369) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 159;
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
bool mu__boolexpr376;
  if (!((mu_k) != (mu_b))) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
if ( mu__boolexpr376 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
bool mu__boolexpr380;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
bool mu__quant381; 
mu__quant381 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr382;
bool mu__boolexpr383;
  if (!((mu_k) != (mu_b))) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr382) )
  { mu__quant381 = TRUE; break; }
};
};
  mu__boolexpr377 = (mu__quant381) ; 
}
    return mu__boolexpr377;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 165;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 171 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr384;
bool mu__boolexpr385;
bool mu__boolexpr386;
bool mu__boolexpr387;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
bool mu__quant388; 
mu__quant388 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr389;
bool mu__boolexpr390;
  if (!((mu_k) != (mu_b))) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr389) )
  { mu__quant388 = TRUE; break; }
};
};
  mu__boolexpr384 = (mu__quant388) ; 
}
	      if (mu__boolexpr384) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 165;
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
bool mu__boolexpr391;
bool mu__boolexpr392;
  if (!((mu_k) != (mu_b))) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr392)) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr391 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
bool mu__boolexpr393;
bool mu__boolexpr394;
bool mu__boolexpr395;
bool mu__boolexpr396;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
bool mu__quant397; 
mu__quant397 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr398;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr398) )
  { mu__quant397 = FALSE; break; }
};
};
  mu__boolexpr393 = (mu__quant397) ; 
}
    return mu__boolexpr393;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 171;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 177 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr399;
bool mu__boolexpr400;
bool mu__boolexpr401;
bool mu__boolexpr402;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
bool mu__quant403; 
mu__quant403 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr404;
  if (!((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None))) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr404) )
  { mu__quant403 = FALSE; break; }
};
};
  mu__boolexpr399 = (mu__quant403) ; 
}
	      if (mu__boolexpr399) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 171;
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_Trunk;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Tip;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_None_Branch, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
bool mu__boolexpr408;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
bool mu__quant409; 
mu__quant409 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr410;
bool mu__boolexpr411;
  if (!((mu_k) != (mu_b))) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr410) )
  { mu__quant409 = TRUE; break; }
};
};
  mu__boolexpr405 = (mu__quant409) ; 
}
    return mu__boolexpr405;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 177;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 183 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr412;
bool mu__boolexpr413;
bool mu__boolexpr414;
bool mu__boolexpr415;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr414)) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr413)) mu__boolexpr412 = FALSE ;
  else {
bool mu__quant416; 
mu__quant416 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr417;
bool mu__boolexpr418;
  if (!((mu_k) != (mu_b))) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr417) )
  { mu__quant416 = TRUE; break; }
};
};
  mu__boolexpr412 = (mu__quant416) ; 
}
	      if (mu__boolexpr412) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 177;
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
bool mu__boolexpr419;
bool mu__boolexpr420;
  if (!((mu_k) != (mu_b))) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr419 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_x_None_Tip, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr421;
bool mu__boolexpr422;
bool mu__boolexpr423;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
bool mu__quant424; 
mu__quant424 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr425;
bool mu__boolexpr426;
  if (!((mu_k) != (mu_b))) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr425) )
  { mu__quant424 = TRUE; break; }
};
};
  mu__boolexpr421 = (mu__quant424) ; 
}
    return mu__boolexpr421;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 183;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 189 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
bool mu__quant430; 
mu__quant430 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr431;
bool mu__boolexpr432;
  if (!((mu_k) != (mu_b))) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr431) )
  { mu__quant430 = TRUE; break; }
};
};
  mu__boolexpr427 = (mu__quant430) ; 
}
	      if (mu__boolexpr427) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 183;
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
bool mu__boolexpr433;
bool mu__boolexpr434;
  if (!((mu_k) != (mu_b))) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr433 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toB;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr435;
bool mu__boolexpr436;
bool mu__boolexpr437;
bool mu__boolexpr438;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
bool mu__boolexpr439;
  if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) mu__boolexpr439 = TRUE ;
  else {
  mu__boolexpr439 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr436 = (mu__boolexpr439) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_Tree[mu_i].mu_slave_pending[mu_b].isundefined()) ; 
}
    return mu__boolexpr435;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 189;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 195 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquireBlock)) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
bool mu__boolexpr444;
  if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) mu__boolexpr444 = TRUE ;
  else {
  mu__boolexpr444 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  mu__boolexpr441 = (mu__boolexpr444) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (mu_Tree[mu_i].mu_slave_pending[mu_b].isundefined()) ; 
}
	      if (mu__boolexpr440) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 189;
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Branch;
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Ln_receive_AcquirePerm_x_None_Tip, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr445;
bool mu__boolexpr446;
bool mu__boolexpr447;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
bool mu__quant448; 
mu__quant448 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr449;
bool mu__boolexpr450;
  if (!((mu_k) != (mu_b))) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr449) )
  { mu__quant448 = TRUE; break; }
};
};
  mu__boolexpr445 = (mu__quant448) ; 
}
    return mu__boolexpr445;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 195;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 201 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
bool mu__quant454; 
mu__quant454 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr455;
bool mu__boolexpr456;
  if (!((mu_k) != (mu_b))) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr455) )
  { mu__quant454 = TRUE; break; }
};
};
  mu__boolexpr451 = (mu__quant454) ; 
}
	      if (mu__boolexpr451) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 195;
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
bool mu__boolexpr457;
bool mu__boolexpr458;
  if (!((mu_k) != (mu_b))) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr457 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
bool mu__quant462; 
mu__quant462 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr463;
bool mu__boolexpr464;
  if (!((mu_k) != (mu_b))) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr463) )
  { mu__quant462 = TRUE; break; }
};
};
  mu__boolexpr459 = (mu__quant462) ; 
}
    return mu__boolexpr459;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 201;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 207 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr465;
bool mu__boolexpr466;
bool mu__boolexpr467;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
bool mu__quant468; 
mu__quant468 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr469;
bool mu__boolexpr470;
  if (!((mu_k) != (mu_b))) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( (mu__boolexpr469) )
  { mu__quant468 = TRUE; break; }
};
};
  mu__boolexpr465 = (mu__quant468) ; 
}
	      if (mu__boolexpr465) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 201;
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
bool mu__boolexpr471;
bool mu__boolexpr472;
  if (!((mu_k) != (mu_b))) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( mu__boolexpr471 )
{
mu_Tree[mu_i].mu_chanB[mu_k].mu_opcode = mu_Probe;
mu_Tree[mu_i].mu_chanB[mu_k].mu_para = mu_toN;
mu_Tree[mu_i].mu_slave_pending[mu_k] = mu_pending_ProbeAckData;
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
bool mu__boolexpr473;
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
bool mu__quant477; 
mu__quant477 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr478;
bool mu__boolexpr479;
  if (!((mu_k) != (mu_b))) mu__boolexpr479 = TRUE ;
  else {
  mu__boolexpr479 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr478) )
  { mu__quant477 = FALSE; break; }
};
};
  mu__boolexpr474 = (mu__quant477) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
    return mu__boolexpr473;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 207;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 213 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
bool mu__quant484; 
mu__quant484 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr485;
bool mu__boolexpr486;
  if (!((mu_k) != (mu_b))) mu__boolexpr486 = TRUE ;
  else {
  mu__boolexpr486 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr485) )
  { mu__quant484 = FALSE; break; }
};
};
  mu__boolexpr481 = (mu__quant484) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_None)) ; 
}
	      if (mu__boolexpr480) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 207;
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_state = mu_Trunk;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
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
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
bool mu__boolexpr490;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
bool mu__quant491; 
mu__quant491 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr492;
bool mu__boolexpr493;
  if (!((mu_k) != (mu_b))) mu__boolexpr493 = TRUE ;
  else {
  mu__boolexpr493 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr492) )
  { mu__quant491 = FALSE; break; }
};
};
  mu__boolexpr488 = (mu__quant491) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Branch)) ; 
}
    return mu__boolexpr487;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 213;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 219 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
  if (!(!(mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode.isundefined()))) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_Tree[mu_i].mu_chanA[mu_b].mu_opcode) == (mu_AcquirePerm)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
bool mu__quant498; 
mu__quant498 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr499;
bool mu__boolexpr500;
  if (!((mu_k) != (mu_b))) mu__boolexpr500 = TRUE ;
  else {
  mu__boolexpr500 = ((mu_Tree[mu_i].mu_directory[mu_k]) == (mu_None)) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = (mu_Tree[mu_i].mu_slave_pending[mu_k].isundefined()) ; 
}
if ( !(mu__boolexpr499) )
  { mu__quant498 = FALSE; break; }
};
};
  mu__boolexpr495 = (mu__quant498) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_Tree[mu_i].mu_directory[mu_b]) == (mu_Branch)) ; 
}
	      if (mu__boolexpr494) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 213;
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
mu_Tree[mu_i].mu_chanD[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_i].mu_directory[mu_b] = mu_Tip;
mu_Tree[mu_i].mu_cache.mu_state = mu_Trunk;
mu_Tree[mu_i].mu_slave_pending[mu_b] = mu_pending_GrantAck;
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
bool mu__boolexpr501;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr501;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 219;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 223 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr502;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr502) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 219;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_TtoB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
bool mu__boolexpr507;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr507 = TRUE ;
  else {
  mu__boolexpr507 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr504 = (mu__boolexpr507) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr503;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 223;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 227 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
bool mu__boolexpr511;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr511)) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
bool mu__boolexpr512;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr512 = TRUE ;
  else {
  mu__boolexpr512 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr509 = (mu__boolexpr512) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr508) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 223;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_false;
mu_Tree[mu_i].mu_cache.mu_state = mu_Branch;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_TtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr513;
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
bool mu__boolexpr517;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
bool mu__boolexpr518;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr518 = TRUE ;
  else {
  mu__boolexpr518 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr514 = (mu__boolexpr518) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
    return mu__boolexpr513;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 227;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 231 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr519;
bool mu__boolexpr520;
bool mu__boolexpr521;
bool mu__boolexpr522;
bool mu__boolexpr523;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr523)) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
bool mu__boolexpr524;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr524 = TRUE ;
  else {
  mu__boolexpr524 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr520 = (mu__boolexpr524) ; 
}
  if (!(mu__boolexpr520)) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) ; 
}
	      if (mu__boolexpr519) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 227;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_Tree[mu_i].mu_cache.mu_dirty;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_false;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_BtoB, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr525;
bool mu__boolexpr526;
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
bool mu__boolexpr530;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr530 = TRUE ;
  else {
  mu__boolexpr530 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr526 = (mu__boolexpr530) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr525;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 231;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 235 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr531;
bool mu__boolexpr532;
bool mu__boolexpr533;
bool mu__boolexpr534;
bool mu__boolexpr535;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr535)) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr534)) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr533)) mu__boolexpr532 = FALSE ;
  else {
bool mu__boolexpr536;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr536 = TRUE ;
  else {
  mu__boolexpr536 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr532 = (mu__boolexpr536) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr531) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 231;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoB;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
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
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("respond_Probe_BtoN, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
bool mu__boolexpr540;
bool mu__boolexpr541;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
bool mu__boolexpr542;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr542 = TRUE ;
  else {
  mu__boolexpr542 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr538 = (mu__boolexpr542) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
    return mu__boolexpr537;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 235;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 239 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr543;
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
bool mu__boolexpr547;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
bool mu__boolexpr548;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr548 = TRUE ;
  else {
  mu__boolexpr548 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr544 = (mu__boolexpr548) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch)) ; 
}
	      if (mu__boolexpr543) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 235;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
bool mu__boolexpr549;
bool mu__boolexpr550;
bool mu__boolexpr551;
bool mu__boolexpr552;
bool mu__boolexpr553;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr553 = FALSE ;
  else {
bool mu__boolexpr554;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) mu__boolexpr554 = TRUE ;
  else {
  mu__boolexpr554 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  mu__boolexpr553 = (mu__boolexpr554) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
bool mu__boolexpr555;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) mu__boolexpr555 = TRUE ;
  else {
  mu__boolexpr555 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr552 = (mu__boolexpr555) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr551)) mu__boolexpr550 = FALSE ;
  else {
bool mu__boolexpr556;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr556 = TRUE ;
  else {
  mu__boolexpr556 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr550 = (mu__boolexpr556) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
    return mu__boolexpr549;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 239;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 243 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr557;
bool mu__boolexpr558;
bool mu__boolexpr559;
bool mu__boolexpr560;
bool mu__boolexpr561;
  if (!(!(mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode.isundefined()))) mu__boolexpr561 = FALSE ;
  else {
bool mu__boolexpr562;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) mu__boolexpr562 = TRUE ;
  else {
  mu__boolexpr562 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_opcode) == (mu_Probe)) ; 
}
  mu__boolexpr561 = (mu__boolexpr562) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
bool mu__boolexpr563;
  if ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toN)) mu__boolexpr563 = TRUE ;
  else {
  mu__boolexpr563 = ((mu_Tree[mu_j].mu_chanB[mu_b].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr560 = (mu__boolexpr563) ; 
}
  if (!(mu__boolexpr560)) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
bool mu__boolexpr564;
  if (!(!(mu_Tree[mu_i].mu_master_pending.isundefined()))) mu__boolexpr564 = TRUE ;
  else {
  mu__boolexpr564 = ((mu_Tree[mu_i].mu_master_pending) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr558 = (mu__boolexpr564) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None)) ; 
}
	      if (mu__boolexpr557) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 239;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ProbeAckData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_NtoN;
mu_Tree[mu_j].mu_chanB[mu_b].undefine();
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
bool mu__boolexpr565;
bool mu__boolexpr566;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr565;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 243;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 247 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr567;
bool mu__boolexpr568;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
	      if (mu__boolexpr567) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 243;
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
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_j].mu_chanD[mu_b].mu_data;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
bool mu__boolexpr569;
bool mu__boolexpr570;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
}
    return mu__boolexpr569;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 247;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 251 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr571;
bool mu__boolexpr572;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toB)) ; 
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
    r = what_rule - 247;
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
mu_Tree[mu_i].mu_cache.mu_data = mu_Tree[mu_j].mu_chanD[mu_b].mu_data;
mu_Tree[mu_j].mu_chanD[mu_b].undefine();
mu_Tree[mu_i].mu_master_pending.undefine();
mu_Tree[mu_j].mu_chanE[mu_b].mu_opcode = mu_GrantAck;
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
bool mu__boolexpr573;
bool mu__boolexpr574;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
}
    return mu__boolexpr573;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 251;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 255 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr575;
bool mu__boolexpr576;
  if (!(!(mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode.isundefined()))) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_Tree[mu_j].mu_chanD[mu_b].mu_para) == (mu_toT)) ; 
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
    r = what_rule - 251;
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
bool mu__boolexpr577;
bool mu__boolexpr578;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr577;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 255;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 259 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr579;
bool mu__boolexpr580;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
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
    r = what_rule - 255;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
bool mu__boolexpr581;
bool mu__boolexpr582;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
}
    return mu__boolexpr581;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 259;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 263 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr583;
bool mu__boolexpr584;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = (mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode.isundefined()) ; 
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
    r = what_rule - 259;
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
mu_Tree[mu_j].mu_chanC[mu_b].mu_opcode = mu_ReleaseData;
mu_Tree[mu_j].mu_chanC[mu_b].mu_para = mu_BtoN;
mu_Tree[mu_j].mu_chanC[mu_b].mu_data = mu_Tree[mu_i].mu_cache.mu_data;
mu_Tree[mu_j].mu_chanC[mu_b].mu_dirty = mu_false;
mu_Tree[mu_i].mu_master_pending = mu_pending_ReleaseAck;
mu_Tree[mu_i].mu_cache.mu_state = mu_None;
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
bool mu__boolexpr585;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr585;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 263;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 267 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr586;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr586) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 263;
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
bool mu__boolexpr587;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr587;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 267;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 271 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr588;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
	      if (mu__boolexpr588) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 267;
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
bool mu__boolexpr589;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
}
    return mu__boolexpr589;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 271;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 275 )
      {
	if ( ( TRUE  ) ) {
  const int mu_j = (((mu_i) - (2)) / (mu_allBranchNum)) + (1);
  const int mu_b = ((mu_i) - ((mu_allBranchNum) * ((mu_j) - (1)))) - (1);
bool mu__boolexpr590;
  if (!((mu_Tree[mu_i].mu_cache.mu_state) == (mu_None))) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = (mu_Tree[mu_i].mu_master_pending.isundefined()) ; 
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
    r = what_rule - 271;
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
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("Store, d:%s, i:%s", mu_d.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return (mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 275;
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 283 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Tree[mu_i].mu_cache.mu_state) == (mu_Tip)) {
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
    r = what_rule - 275;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l1Id mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache.mu_data = mu_d;
mu_Tree[mu_i].mu_cache.mu_dirty = mu_true;
mu_auxData = mu_d;
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
  if (what_rule<2)
    { R0.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<4)
    { R1.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<6)
    { R2.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<8)
    { R3.NextRule(what_rule);
      if (what_rule<8) return; }
  if (what_rule>=8 && what_rule<9)
    { R4.NextRule(what_rule);
      if (what_rule<9) return; }
  if (what_rule>=9 && what_rule<12)
    { R5.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<15)
    { R6.NextRule(what_rule);
      if (what_rule<15) return; }
  if (what_rule>=15 && what_rule<18)
    { R7.NextRule(what_rule);
      if (what_rule<18) return; }
  if (what_rule>=18 && what_rule<21)
    { R8.NextRule(what_rule);
      if (what_rule<21) return; }
  if (what_rule>=21 && what_rule<24)
    { R9.NextRule(what_rule);
      if (what_rule<24) return; }
  if (what_rule>=24 && what_rule<27)
    { R10.NextRule(what_rule);
      if (what_rule<27) return; }
  if (what_rule>=27 && what_rule<30)
    { R11.NextRule(what_rule);
      if (what_rule<30) return; }
  if (what_rule>=30 && what_rule<33)
    { R12.NextRule(what_rule);
      if (what_rule<33) return; }
  if (what_rule>=33 && what_rule<36)
    { R13.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<39)
    { R14.NextRule(what_rule);
      if (what_rule<39) return; }
  if (what_rule>=39 && what_rule<42)
    { R15.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<45)
    { R16.NextRule(what_rule);
      if (what_rule<45) return; }
  if (what_rule>=45 && what_rule<48)
    { R17.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<51)
    { R18.NextRule(what_rule);
      if (what_rule<51) return; }
  if (what_rule>=51 && what_rule<54)
    { R19.NextRule(what_rule);
      if (what_rule<54) return; }
  if (what_rule>=54 && what_rule<57)
    { R20.NextRule(what_rule);
      if (what_rule<57) return; }
  if (what_rule>=57 && what_rule<60)
    { R21.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<63)
    { R22.NextRule(what_rule);
      if (what_rule<63) return; }
  if (what_rule>=63 && what_rule<66)
    { R23.NextRule(what_rule);
      if (what_rule<66) return; }
  if (what_rule>=66 && what_rule<69)
    { R24.NextRule(what_rule);
      if (what_rule<69) return; }
  if (what_rule>=69 && what_rule<75)
    { R25.NextRule(what_rule);
      if (what_rule<75) return; }
  if (what_rule>=75 && what_rule<81)
    { R26.NextRule(what_rule);
      if (what_rule<81) return; }
  if (what_rule>=81 && what_rule<87)
    { R27.NextRule(what_rule);
      if (what_rule<87) return; }
  if (what_rule>=87 && what_rule<93)
    { R28.NextRule(what_rule);
      if (what_rule<93) return; }
  if (what_rule>=93 && what_rule<99)
    { R29.NextRule(what_rule);
      if (what_rule<99) return; }
  if (what_rule>=99 && what_rule<105)
    { R30.NextRule(what_rule);
      if (what_rule<105) return; }
  if (what_rule>=105 && what_rule<111)
    { R31.NextRule(what_rule);
      if (what_rule<111) return; }
  if (what_rule>=111 && what_rule<117)
    { R32.NextRule(what_rule);
      if (what_rule<117) return; }
  if (what_rule>=117 && what_rule<123)
    { R33.NextRule(what_rule);
      if (what_rule<123) return; }
  if (what_rule>=123 && what_rule<129)
    { R34.NextRule(what_rule);
      if (what_rule<129) return; }
  if (what_rule>=129 && what_rule<135)
    { R35.NextRule(what_rule);
      if (what_rule<135) return; }
  if (what_rule>=135 && what_rule<141)
    { R36.NextRule(what_rule);
      if (what_rule<141) return; }
  if (what_rule>=141 && what_rule<147)
    { R37.NextRule(what_rule);
      if (what_rule<147) return; }
  if (what_rule>=147 && what_rule<153)
    { R38.NextRule(what_rule);
      if (what_rule<153) return; }
  if (what_rule>=153 && what_rule<159)
    { R39.NextRule(what_rule);
      if (what_rule<159) return; }
  if (what_rule>=159 && what_rule<165)
    { R40.NextRule(what_rule);
      if (what_rule<165) return; }
  if (what_rule>=165 && what_rule<171)
    { R41.NextRule(what_rule);
      if (what_rule<171) return; }
  if (what_rule>=171 && what_rule<177)
    { R42.NextRule(what_rule);
      if (what_rule<177) return; }
  if (what_rule>=177 && what_rule<183)
    { R43.NextRule(what_rule);
      if (what_rule<183) return; }
  if (what_rule>=183 && what_rule<189)
    { R44.NextRule(what_rule);
      if (what_rule<189) return; }
  if (what_rule>=189 && what_rule<195)
    { R45.NextRule(what_rule);
      if (what_rule<195) return; }
  if (what_rule>=195 && what_rule<201)
    { R46.NextRule(what_rule);
      if (what_rule<201) return; }
  if (what_rule>=201 && what_rule<207)
    { R47.NextRule(what_rule);
      if (what_rule<207) return; }
  if (what_rule>=207 && what_rule<213)
    { R48.NextRule(what_rule);
      if (what_rule<213) return; }
  if (what_rule>=213 && what_rule<219)
    { R49.NextRule(what_rule);
      if (what_rule<219) return; }
  if (what_rule>=219 && what_rule<223)
    { R50.NextRule(what_rule);
      if (what_rule<223) return; }
  if (what_rule>=223 && what_rule<227)
    { R51.NextRule(what_rule);
      if (what_rule<227) return; }
  if (what_rule>=227 && what_rule<231)
    { R52.NextRule(what_rule);
      if (what_rule<231) return; }
  if (what_rule>=231 && what_rule<235)
    { R53.NextRule(what_rule);
      if (what_rule<235) return; }
  if (what_rule>=235 && what_rule<239)
    { R54.NextRule(what_rule);
      if (what_rule<239) return; }
  if (what_rule>=239 && what_rule<243)
    { R55.NextRule(what_rule);
      if (what_rule<243) return; }
  if (what_rule>=243 && what_rule<247)
    { R56.NextRule(what_rule);
      if (what_rule<247) return; }
  if (what_rule>=247 && what_rule<251)
    { R57.NextRule(what_rule);
      if (what_rule<251) return; }
  if (what_rule>=251 && what_rule<255)
    { R58.NextRule(what_rule);
      if (what_rule<255) return; }
  if (what_rule>=255 && what_rule<259)
    { R59.NextRule(what_rule);
      if (what_rule<259) return; }
  if (what_rule>=259 && what_rule<263)
    { R60.NextRule(what_rule);
      if (what_rule<263) return; }
  if (what_rule>=263 && what_rule<267)
    { R61.NextRule(what_rule);
      if (what_rule<267) return; }
  if (what_rule>=267 && what_rule<271)
    { R62.NextRule(what_rule);
      if (what_rule<271) return; }
  if (what_rule>=271 && what_rule<275)
    { R63.NextRule(what_rule);
      if (what_rule<275) return; }
  if (what_rule>=275 && what_rule<283)
    { R64.NextRule(what_rule);
      if (what_rule<283) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=1) return R0.Condition(r-0);
  if (r>=2 && r<=3) return R1.Condition(r-2);
  if (r>=4 && r<=5) return R2.Condition(r-4);
  if (r>=6 && r<=7) return R3.Condition(r-6);
  if (r>=8 && r<=8) return R4.Condition(r-8);
  if (r>=9 && r<=11) return R5.Condition(r-9);
  if (r>=12 && r<=14) return R6.Condition(r-12);
  if (r>=15 && r<=17) return R7.Condition(r-15);
  if (r>=18 && r<=20) return R8.Condition(r-18);
  if (r>=21 && r<=23) return R9.Condition(r-21);
  if (r>=24 && r<=26) return R10.Condition(r-24);
  if (r>=27 && r<=29) return R11.Condition(r-27);
  if (r>=30 && r<=32) return R12.Condition(r-30);
  if (r>=33 && r<=35) return R13.Condition(r-33);
  if (r>=36 && r<=38) return R14.Condition(r-36);
  if (r>=39 && r<=41) return R15.Condition(r-39);
  if (r>=42 && r<=44) return R16.Condition(r-42);
  if (r>=45 && r<=47) return R17.Condition(r-45);
  if (r>=48 && r<=50) return R18.Condition(r-48);
  if (r>=51 && r<=53) return R19.Condition(r-51);
  if (r>=54 && r<=56) return R20.Condition(r-54);
  if (r>=57 && r<=59) return R21.Condition(r-57);
  if (r>=60 && r<=62) return R22.Condition(r-60);
  if (r>=63 && r<=65) return R23.Condition(r-63);
  if (r>=66 && r<=68) return R24.Condition(r-66);
  if (r>=69 && r<=74) return R25.Condition(r-69);
  if (r>=75 && r<=80) return R26.Condition(r-75);
  if (r>=81 && r<=86) return R27.Condition(r-81);
  if (r>=87 && r<=92) return R28.Condition(r-87);
  if (r>=93 && r<=98) return R29.Condition(r-93);
  if (r>=99 && r<=104) return R30.Condition(r-99);
  if (r>=105 && r<=110) return R31.Condition(r-105);
  if (r>=111 && r<=116) return R32.Condition(r-111);
  if (r>=117 && r<=122) return R33.Condition(r-117);
  if (r>=123 && r<=128) return R34.Condition(r-123);
  if (r>=129 && r<=134) return R35.Condition(r-129);
  if (r>=135 && r<=140) return R36.Condition(r-135);
  if (r>=141 && r<=146) return R37.Condition(r-141);
  if (r>=147 && r<=152) return R38.Condition(r-147);
  if (r>=153 && r<=158) return R39.Condition(r-153);
  if (r>=159 && r<=164) return R40.Condition(r-159);
  if (r>=165 && r<=170) return R41.Condition(r-165);
  if (r>=171 && r<=176) return R42.Condition(r-171);
  if (r>=177 && r<=182) return R43.Condition(r-177);
  if (r>=183 && r<=188) return R44.Condition(r-183);
  if (r>=189 && r<=194) return R45.Condition(r-189);
  if (r>=195 && r<=200) return R46.Condition(r-195);
  if (r>=201 && r<=206) return R47.Condition(r-201);
  if (r>=207 && r<=212) return R48.Condition(r-207);
  if (r>=213 && r<=218) return R49.Condition(r-213);
  if (r>=219 && r<=222) return R50.Condition(r-219);
  if (r>=223 && r<=226) return R51.Condition(r-223);
  if (r>=227 && r<=230) return R52.Condition(r-227);
  if (r>=231 && r<=234) return R53.Condition(r-231);
  if (r>=235 && r<=238) return R54.Condition(r-235);
  if (r>=239 && r<=242) return R55.Condition(r-239);
  if (r>=243 && r<=246) return R56.Condition(r-243);
  if (r>=247 && r<=250) return R57.Condition(r-247);
  if (r>=251 && r<=254) return R58.Condition(r-251);
  if (r>=255 && r<=258) return R59.Condition(r-255);
  if (r>=259 && r<=262) return R60.Condition(r-259);
  if (r>=263 && r<=266) return R61.Condition(r-263);
  if (r>=267 && r<=270) return R62.Condition(r-267);
  if (r>=271 && r<=274) return R63.Condition(r-271);
  if (r>=275 && r<=282) return R64.Condition(r-275);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=1) { R0.Code(r-0); return; } 
  if (r>=2 && r<=3) { R1.Code(r-2); return; } 
  if (r>=4 && r<=5) { R2.Code(r-4); return; } 
  if (r>=6 && r<=7) { R3.Code(r-6); return; } 
  if (r>=8 && r<=8) { R4.Code(r-8); return; } 
  if (r>=9 && r<=11) { R5.Code(r-9); return; } 
  if (r>=12 && r<=14) { R6.Code(r-12); return; } 
  if (r>=15 && r<=17) { R7.Code(r-15); return; } 
  if (r>=18 && r<=20) { R8.Code(r-18); return; } 
  if (r>=21 && r<=23) { R9.Code(r-21); return; } 
  if (r>=24 && r<=26) { R10.Code(r-24); return; } 
  if (r>=27 && r<=29) { R11.Code(r-27); return; } 
  if (r>=30 && r<=32) { R12.Code(r-30); return; } 
  if (r>=33 && r<=35) { R13.Code(r-33); return; } 
  if (r>=36 && r<=38) { R14.Code(r-36); return; } 
  if (r>=39 && r<=41) { R15.Code(r-39); return; } 
  if (r>=42 && r<=44) { R16.Code(r-42); return; } 
  if (r>=45 && r<=47) { R17.Code(r-45); return; } 
  if (r>=48 && r<=50) { R18.Code(r-48); return; } 
  if (r>=51 && r<=53) { R19.Code(r-51); return; } 
  if (r>=54 && r<=56) { R20.Code(r-54); return; } 
  if (r>=57 && r<=59) { R21.Code(r-57); return; } 
  if (r>=60 && r<=62) { R22.Code(r-60); return; } 
  if (r>=63 && r<=65) { R23.Code(r-63); return; } 
  if (r>=66 && r<=68) { R24.Code(r-66); return; } 
  if (r>=69 && r<=74) { R25.Code(r-69); return; } 
  if (r>=75 && r<=80) { R26.Code(r-75); return; } 
  if (r>=81 && r<=86) { R27.Code(r-81); return; } 
  if (r>=87 && r<=92) { R28.Code(r-87); return; } 
  if (r>=93 && r<=98) { R29.Code(r-93); return; } 
  if (r>=99 && r<=104) { R30.Code(r-99); return; } 
  if (r>=105 && r<=110) { R31.Code(r-105); return; } 
  if (r>=111 && r<=116) { R32.Code(r-111); return; } 
  if (r>=117 && r<=122) { R33.Code(r-117); return; } 
  if (r>=123 && r<=128) { R34.Code(r-123); return; } 
  if (r>=129 && r<=134) { R35.Code(r-129); return; } 
  if (r>=135 && r<=140) { R36.Code(r-135); return; } 
  if (r>=141 && r<=146) { R37.Code(r-141); return; } 
  if (r>=147 && r<=152) { R38.Code(r-147); return; } 
  if (r>=153 && r<=158) { R39.Code(r-153); return; } 
  if (r>=159 && r<=164) { R40.Code(r-159); return; } 
  if (r>=165 && r<=170) { R41.Code(r-165); return; } 
  if (r>=171 && r<=176) { R42.Code(r-171); return; } 
  if (r>=177 && r<=182) { R43.Code(r-177); return; } 
  if (r>=183 && r<=188) { R44.Code(r-183); return; } 
  if (r>=189 && r<=194) { R45.Code(r-189); return; } 
  if (r>=195 && r<=200) { R46.Code(r-195); return; } 
  if (r>=201 && r<=206) { R47.Code(r-201); return; } 
  if (r>=207 && r<=212) { R48.Code(r-207); return; } 
  if (r>=213 && r<=218) { R49.Code(r-213); return; } 
  if (r>=219 && r<=222) { R50.Code(r-219); return; } 
  if (r>=223 && r<=226) { R51.Code(r-223); return; } 
  if (r>=227 && r<=230) { R52.Code(r-227); return; } 
  if (r>=231 && r<=234) { R53.Code(r-231); return; } 
  if (r>=235 && r<=238) { R54.Code(r-235); return; } 
  if (r>=239 && r<=242) { R55.Code(r-239); return; } 
  if (r>=243 && r<=246) { R56.Code(r-243); return; } 
  if (r>=247 && r<=250) { R57.Code(r-247); return; } 
  if (r>=251 && r<=254) { R58.Code(r-251); return; } 
  if (r>=255 && r<=258) { R59.Code(r-255); return; } 
  if (r>=259 && r<=262) { R60.Code(r-259); return; } 
  if (r>=263 && r<=266) { R61.Code(r-263); return; } 
  if (r>=267 && r<=270) { R62.Code(r-267); return; } 
  if (r>=271 && r<=274) { R63.Code(r-271); return; } 
  if (r>=275 && r<=282) { R64.Code(r-275); return; } 
}
int Priority(unsigned short r)
{
  if (r<=1) { return R0.Priority(); } 
  if (r>=2 && r<=3) { return R1.Priority(); } 
  if (r>=4 && r<=5) { return R2.Priority(); } 
  if (r>=6 && r<=7) { return R3.Priority(); } 
  if (r>=8 && r<=8) { return R4.Priority(); } 
  if (r>=9 && r<=11) { return R5.Priority(); } 
  if (r>=12 && r<=14) { return R6.Priority(); } 
  if (r>=15 && r<=17) { return R7.Priority(); } 
  if (r>=18 && r<=20) { return R8.Priority(); } 
  if (r>=21 && r<=23) { return R9.Priority(); } 
  if (r>=24 && r<=26) { return R10.Priority(); } 
  if (r>=27 && r<=29) { return R11.Priority(); } 
  if (r>=30 && r<=32) { return R12.Priority(); } 
  if (r>=33 && r<=35) { return R13.Priority(); } 
  if (r>=36 && r<=38) { return R14.Priority(); } 
  if (r>=39 && r<=41) { return R15.Priority(); } 
  if (r>=42 && r<=44) { return R16.Priority(); } 
  if (r>=45 && r<=47) { return R17.Priority(); } 
  if (r>=48 && r<=50) { return R18.Priority(); } 
  if (r>=51 && r<=53) { return R19.Priority(); } 
  if (r>=54 && r<=56) { return R20.Priority(); } 
  if (r>=57 && r<=59) { return R21.Priority(); } 
  if (r>=60 && r<=62) { return R22.Priority(); } 
  if (r>=63 && r<=65) { return R23.Priority(); } 
  if (r>=66 && r<=68) { return R24.Priority(); } 
  if (r>=69 && r<=74) { return R25.Priority(); } 
  if (r>=75 && r<=80) { return R26.Priority(); } 
  if (r>=81 && r<=86) { return R27.Priority(); } 
  if (r>=87 && r<=92) { return R28.Priority(); } 
  if (r>=93 && r<=98) { return R29.Priority(); } 
  if (r>=99 && r<=104) { return R30.Priority(); } 
  if (r>=105 && r<=110) { return R31.Priority(); } 
  if (r>=111 && r<=116) { return R32.Priority(); } 
  if (r>=117 && r<=122) { return R33.Priority(); } 
  if (r>=123 && r<=128) { return R34.Priority(); } 
  if (r>=129 && r<=134) { return R35.Priority(); } 
  if (r>=135 && r<=140) { return R36.Priority(); } 
  if (r>=141 && r<=146) { return R37.Priority(); } 
  if (r>=147 && r<=152) { return R38.Priority(); } 
  if (r>=153 && r<=158) { return R39.Priority(); } 
  if (r>=159 && r<=164) { return R40.Priority(); } 
  if (r>=165 && r<=170) { return R41.Priority(); } 
  if (r>=171 && r<=176) { return R42.Priority(); } 
  if (r>=177 && r<=182) { return R43.Priority(); } 
  if (r>=183 && r<=188) { return R44.Priority(); } 
  if (r>=189 && r<=194) { return R45.Priority(); } 
  if (r>=195 && r<=200) { return R46.Priority(); } 
  if (r>=201 && r<=206) { return R47.Priority(); } 
  if (r>=207 && r<=212) { return R48.Priority(); } 
  if (r>=213 && r<=218) { return R49.Priority(); } 
  if (r>=219 && r<=222) { return R50.Priority(); } 
  if (r>=223 && r<=226) { return R51.Priority(); } 
  if (r>=227 && r<=230) { return R52.Priority(); } 
  if (r>=231 && r<=234) { return R53.Priority(); } 
  if (r>=235 && r<=238) { return R54.Priority(); } 
  if (r>=239 && r<=242) { return R55.Priority(); } 
  if (r>=243 && r<=246) { return R56.Priority(); } 
  if (r>=247 && r<=250) { return R57.Priority(); } 
  if (r>=251 && r<=254) { return R58.Priority(); } 
  if (r>=255 && r<=258) { return R59.Priority(); } 
  if (r>=259 && r<=262) { return R60.Priority(); } 
  if (r>=263 && r<=266) { return R61.Priority(); } 
  if (r>=267 && r<=270) { return R62.Priority(); } 
  if (r>=271 && r<=274) { return R63.Priority(); } 
  if (r>=275 && r<=282) { return R64.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=1) return R0.Name(r-0);
  if (r>=2 && r<=3) return R1.Name(r-2);
  if (r>=4 && r<=5) return R2.Name(r-4);
  if (r>=6 && r<=7) return R3.Name(r-6);
  if (r>=8 && r<=8) return R4.Name(r-8);
  if (r>=9 && r<=11) return R5.Name(r-9);
  if (r>=12 && r<=14) return R6.Name(r-12);
  if (r>=15 && r<=17) return R7.Name(r-15);
  if (r>=18 && r<=20) return R8.Name(r-18);
  if (r>=21 && r<=23) return R9.Name(r-21);
  if (r>=24 && r<=26) return R10.Name(r-24);
  if (r>=27 && r<=29) return R11.Name(r-27);
  if (r>=30 && r<=32) return R12.Name(r-30);
  if (r>=33 && r<=35) return R13.Name(r-33);
  if (r>=36 && r<=38) return R14.Name(r-36);
  if (r>=39 && r<=41) return R15.Name(r-39);
  if (r>=42 && r<=44) return R16.Name(r-42);
  if (r>=45 && r<=47) return R17.Name(r-45);
  if (r>=48 && r<=50) return R18.Name(r-48);
  if (r>=51 && r<=53) return R19.Name(r-51);
  if (r>=54 && r<=56) return R20.Name(r-54);
  if (r>=57 && r<=59) return R21.Name(r-57);
  if (r>=60 && r<=62) return R22.Name(r-60);
  if (r>=63 && r<=65) return R23.Name(r-63);
  if (r>=66 && r<=68) return R24.Name(r-66);
  if (r>=69 && r<=74) return R25.Name(r-69);
  if (r>=75 && r<=80) return R26.Name(r-75);
  if (r>=81 && r<=86) return R27.Name(r-81);
  if (r>=87 && r<=92) return R28.Name(r-87);
  if (r>=93 && r<=98) return R29.Name(r-93);
  if (r>=99 && r<=104) return R30.Name(r-99);
  if (r>=105 && r<=110) return R31.Name(r-105);
  if (r>=111 && r<=116) return R32.Name(r-111);
  if (r>=117 && r<=122) return R33.Name(r-117);
  if (r>=123 && r<=128) return R34.Name(r-123);
  if (r>=129 && r<=134) return R35.Name(r-129);
  if (r>=135 && r<=140) return R36.Name(r-135);
  if (r>=141 && r<=146) return R37.Name(r-141);
  if (r>=147 && r<=152) return R38.Name(r-147);
  if (r>=153 && r<=158) return R39.Name(r-153);
  if (r>=159 && r<=164) return R40.Name(r-159);
  if (r>=165 && r<=170) return R41.Name(r-165);
  if (r>=171 && r<=176) return R42.Name(r-171);
  if (r>=177 && r<=182) return R43.Name(r-177);
  if (r>=183 && r<=188) return R44.Name(r-183);
  if (r>=189 && r<=194) return R45.Name(r-189);
  if (r>=195 && r<=200) return R46.Name(r-195);
  if (r>=201 && r<=206) return R47.Name(r-201);
  if (r>=207 && r<=212) return R48.Name(r-207);
  if (r>=213 && r<=218) return R49.Name(r-213);
  if (r>=219 && r<=222) return R50.Name(r-219);
  if (r>=223 && r<=226) return R51.Name(r-223);
  if (r>=227 && r<=230) return R52.Name(r-227);
  if (r>=231 && r<=234) return R53.Name(r-231);
  if (r>=235 && r<=238) return R54.Name(r-235);
  if (r>=239 && r<=242) return R55.Name(r-239);
  if (r>=243 && r<=246) return R56.Name(r-243);
  if (r>=247 && r<=250) return R57.Name(r-247);
  if (r>=251 && r<=254) return R58.Name(r-251);
  if (r>=255 && r<=258) return R59.Name(r-255);
  if (r>=259 && r<=262) return R60.Name(r-259);
  if (r>=263 && r<=266) return R61.Name(r-263);
  if (r>=267 && r<=270) return R62.Name(r-267);
  if (r>=271 && r<=274) return R63.Name(r-271);
  if (r>=275 && r<=282) return R64.Name(r-275);
  return NULL;
}
};
const unsigned numrules = 283;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 283


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
mu_Tree[mu_cur].mu_cache.mu_dirty = mu_false;
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
mu_Tree[mu_cur].mu_cache.mu_dirty = mu_false;
mu_Tree[mu_cur].mu_master_pending.undefine();
};
};
{
for(int mu_d = 1; mu_d <= 2; mu_d++) {
mu_memData = mu_d;
mu_auxData = mu_d;
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

    // set states
mu_Tree[1].mu_cache.mu_state.value(mu_None);
mu_Tree[2].mu_cache.mu_state.value(mu_None);
mu_Tree[4].mu_cache.mu_state.value(mu_None);
mu_Tree[5].mu_cache.mu_state.value(mu_None);
mu_Tree[3].mu_cache.mu_state.value(mu_None);
mu_Tree[6].mu_cache.mu_state.value(mu_Branch);
mu_Tree[7].mu_cache.mu_state.value(mu_Branch);
// set states

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
int mu__invariant_591() // Invariant "test_reachable_state_224"
{
bool mu__boolexpr592;
bool mu__boolexpr593;
bool mu__boolexpr594;
bool mu__boolexpr595;
bool mu__boolexpr596;
bool mu__boolexpr597;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr597)) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr592);
};

bool mu__condition_598() // Condition for Rule "test_reachable_state_224"
{
  return mu__invariant_591( );
}

/**** end rule declaration ****/

int mu__invariant_599() // Invariant "test_reachable_state_223"
{
bool mu__boolexpr600;
bool mu__boolexpr601;
bool mu__boolexpr602;
bool mu__boolexpr603;
bool mu__boolexpr604;
bool mu__boolexpr605;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr604)) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr602)) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr600);
};

bool mu__condition_606() // Condition for Rule "test_reachable_state_223"
{
  return mu__invariant_599( );
}

/**** end rule declaration ****/

int mu__invariant_607() // Invariant "test_reachable_state_222"
{
bool mu__boolexpr608;
bool mu__boolexpr609;
bool mu__boolexpr610;
bool mu__boolexpr611;
bool mu__boolexpr612;
bool mu__boolexpr613;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr613 = FALSE ;
  else {
  mu__boolexpr613 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr613)) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr610)) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr608);
};

bool mu__condition_614() // Condition for Rule "test_reachable_state_222"
{
  return mu__invariant_607( );
}

/**** end rule declaration ****/

int mu__invariant_615() // Invariant "test_reachable_state_221"
{
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
bool mu__boolexpr619;
bool mu__boolexpr620;
bool mu__boolexpr621;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr620)) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr616);
};

bool mu__condition_622() // Condition for Rule "test_reachable_state_221"
{
  return mu__invariant_615( );
}

/**** end rule declaration ****/

int mu__invariant_623() // Invariant "test_reachable_state_220"
{
bool mu__boolexpr624;
bool mu__boolexpr625;
bool mu__boolexpr626;
bool mu__boolexpr627;
bool mu__boolexpr628;
bool mu__boolexpr629;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr627)) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr626)) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr624);
};

bool mu__condition_630() // Condition for Rule "test_reachable_state_220"
{
  return mu__invariant_623( );
}

/**** end rule declaration ****/

int mu__invariant_631() // Invariant "test_reachable_state_219"
{
bool mu__boolexpr632;
bool mu__boolexpr633;
bool mu__boolexpr634;
bool mu__boolexpr635;
bool mu__boolexpr636;
bool mu__boolexpr637;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr637)) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr636)) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr635)) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr634)) mu__boolexpr633 = FALSE ;
  else {
  mu__boolexpr633 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr633)) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr632);
};

bool mu__condition_638() // Condition for Rule "test_reachable_state_219"
{
  return mu__invariant_631( );
}

/**** end rule declaration ****/

int mu__invariant_639() // Invariant "test_reachable_state_218"
{
bool mu__boolexpr640;
bool mu__boolexpr641;
bool mu__boolexpr642;
bool mu__boolexpr643;
bool mu__boolexpr644;
bool mu__boolexpr645;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr645)) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr640);
};

bool mu__condition_646() // Condition for Rule "test_reachable_state_218"
{
  return mu__invariant_639( );
}

/**** end rule declaration ****/

int mu__invariant_647() // Invariant "test_reachable_state_217"
{
bool mu__boolexpr648;
bool mu__boolexpr649;
bool mu__boolexpr650;
bool mu__boolexpr651;
bool mu__boolexpr652;
bool mu__boolexpr653;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr653)) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr652)) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr650)) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr648);
};

bool mu__condition_654() // Condition for Rule "test_reachable_state_217"
{
  return mu__invariant_647( );
}

/**** end rule declaration ****/

int mu__invariant_655() // Invariant "test_reachable_state_216"
{
bool mu__boolexpr656;
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
bool mu__boolexpr660;
bool mu__boolexpr661;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr661 = FALSE ;
  else {
  mu__boolexpr661 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr661)) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr660)) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr656);
};

bool mu__condition_662() // Condition for Rule "test_reachable_state_216"
{
  return mu__invariant_655( );
}

/**** end rule declaration ****/

int mu__invariant_663() // Invariant "test_reachable_state_215"
{
bool mu__boolexpr664;
bool mu__boolexpr665;
bool mu__boolexpr666;
bool mu__boolexpr667;
bool mu__boolexpr668;
bool mu__boolexpr669;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr668)) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr666)) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr664);
};

bool mu__condition_670() // Condition for Rule "test_reachable_state_215"
{
  return mu__invariant_663( );
}

/**** end rule declaration ****/

int mu__invariant_671() // Invariant "test_reachable_state_214"
{
bool mu__boolexpr672;
bool mu__boolexpr673;
bool mu__boolexpr674;
bool mu__boolexpr675;
bool mu__boolexpr676;
bool mu__boolexpr677;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr677)) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr675)) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr674)) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr673)) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr672);
};

bool mu__condition_678() // Condition for Rule "test_reachable_state_214"
{
  return mu__invariant_671( );
}

/**** end rule declaration ****/

int mu__invariant_679() // Invariant "test_reachable_state_213"
{
bool mu__boolexpr680;
bool mu__boolexpr681;
bool mu__boolexpr682;
bool mu__boolexpr683;
bool mu__boolexpr684;
bool mu__boolexpr685;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr684)) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr683)) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr682)) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr681)) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr680);
};

bool mu__condition_686() // Condition for Rule "test_reachable_state_213"
{
  return mu__invariant_679( );
}

/**** end rule declaration ****/

int mu__invariant_687() // Invariant "test_reachable_state_212"
{
bool mu__boolexpr688;
bool mu__boolexpr689;
bool mu__boolexpr690;
bool mu__boolexpr691;
bool mu__boolexpr692;
bool mu__boolexpr693;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr693)) mu__boolexpr692 = FALSE ;
  else {
  mu__boolexpr692 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr692)) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr691)) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr690)) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr688);
};

bool mu__condition_694() // Condition for Rule "test_reachable_state_212"
{
  return mu__invariant_687( );
}

/**** end rule declaration ****/

int mu__invariant_695() // Invariant "test_reachable_state_211"
{
bool mu__boolexpr696;
bool mu__boolexpr697;
bool mu__boolexpr698;
bool mu__boolexpr699;
bool mu__boolexpr700;
bool mu__boolexpr701;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr701 = FALSE ;
  else {
  mu__boolexpr701 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr701)) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr699)) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr696);
};

bool mu__condition_702() // Condition for Rule "test_reachable_state_211"
{
  return mu__invariant_695( );
}

/**** end rule declaration ****/

int mu__invariant_703() // Invariant "test_reachable_state_210"
{
bool mu__boolexpr704;
bool mu__boolexpr705;
bool mu__boolexpr706;
bool mu__boolexpr707;
bool mu__boolexpr708;
bool mu__boolexpr709;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr704);
};

bool mu__condition_710() // Condition for Rule "test_reachable_state_210"
{
  return mu__invariant_703( );
}

/**** end rule declaration ****/

int mu__invariant_711() // Invariant "test_reachable_state_209"
{
bool mu__boolexpr712;
bool mu__boolexpr713;
bool mu__boolexpr714;
bool mu__boolexpr715;
bool mu__boolexpr716;
bool mu__boolexpr717;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr714)) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr713)) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr712);
};

bool mu__condition_718() // Condition for Rule "test_reachable_state_209"
{
  return mu__invariant_711( );
}

/**** end rule declaration ****/

int mu__invariant_719() // Invariant "test_reachable_state_208"
{
bool mu__boolexpr720;
bool mu__boolexpr721;
bool mu__boolexpr722;
bool mu__boolexpr723;
bool mu__boolexpr724;
bool mu__boolexpr725;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr725)) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr724)) mu__boolexpr723 = FALSE ;
  else {
  mu__boolexpr723 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr723)) mu__boolexpr722 = FALSE ;
  else {
  mu__boolexpr722 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr722)) mu__boolexpr721 = FALSE ;
  else {
  mu__boolexpr721 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr721)) mu__boolexpr720 = FALSE ;
  else {
  mu__boolexpr720 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr720);
};

bool mu__condition_726() // Condition for Rule "test_reachable_state_208"
{
  return mu__invariant_719( );
}

/**** end rule declaration ****/

int mu__invariant_727() // Invariant "test_reachable_state_207"
{
bool mu__boolexpr728;
bool mu__boolexpr729;
bool mu__boolexpr730;
bool mu__boolexpr731;
bool mu__boolexpr732;
bool mu__boolexpr733;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr733 = FALSE ;
  else {
  mu__boolexpr733 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr733)) mu__boolexpr732 = FALSE ;
  else {
  mu__boolexpr732 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr732)) mu__boolexpr731 = FALSE ;
  else {
  mu__boolexpr731 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr731)) mu__boolexpr730 = FALSE ;
  else {
  mu__boolexpr730 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr730)) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr729)) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr728);
};

bool mu__condition_734() // Condition for Rule "test_reachable_state_207"
{
  return mu__invariant_727( );
}

/**** end rule declaration ****/

int mu__invariant_735() // Invariant "test_reachable_state_206"
{
bool mu__boolexpr736;
bool mu__boolexpr737;
bool mu__boolexpr738;
bool mu__boolexpr739;
bool mu__boolexpr740;
bool mu__boolexpr741;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr741)) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr740)) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr739)) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr737)) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr736);
};

bool mu__condition_742() // Condition for Rule "test_reachable_state_206"
{
  return mu__invariant_735( );
}

/**** end rule declaration ****/

int mu__invariant_743() // Invariant "test_reachable_state_205"
{
bool mu__boolexpr744;
bool mu__boolexpr745;
bool mu__boolexpr746;
bool mu__boolexpr747;
bool mu__boolexpr748;
bool mu__boolexpr749;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr749)) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr748)) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr745)) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr744);
};

bool mu__condition_750() // Condition for Rule "test_reachable_state_205"
{
  return mu__invariant_743( );
}

/**** end rule declaration ****/

int mu__invariant_751() // Invariant "test_reachable_state_204"
{
bool mu__boolexpr752;
bool mu__boolexpr753;
bool mu__boolexpr754;
bool mu__boolexpr755;
bool mu__boolexpr756;
bool mu__boolexpr757;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr757)) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr755)) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr754)) mu__boolexpr753 = FALSE ;
  else {
  mu__boolexpr753 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr753)) mu__boolexpr752 = FALSE ;
  else {
  mu__boolexpr752 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr752);
};

bool mu__condition_758() // Condition for Rule "test_reachable_state_204"
{
  return mu__invariant_751( );
}

/**** end rule declaration ****/

int mu__invariant_759() // Invariant "test_reachable_state_203"
{
bool mu__boolexpr760;
bool mu__boolexpr761;
bool mu__boolexpr762;
bool mu__boolexpr763;
bool mu__boolexpr764;
bool mu__boolexpr765;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr764)) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr763)) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr762)) mu__boolexpr761 = FALSE ;
  else {
  mu__boolexpr761 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr761)) mu__boolexpr760 = FALSE ;
  else {
  mu__boolexpr760 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr760);
};

bool mu__condition_766() // Condition for Rule "test_reachable_state_203"
{
  return mu__invariant_759( );
}

/**** end rule declaration ****/

int mu__invariant_767() // Invariant "test_reachable_state_202"
{
bool mu__boolexpr768;
bool mu__boolexpr769;
bool mu__boolexpr770;
bool mu__boolexpr771;
bool mu__boolexpr772;
bool mu__boolexpr773;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr773 = FALSE ;
  else {
  mu__boolexpr773 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr773)) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr772)) mu__boolexpr771 = FALSE ;
  else {
  mu__boolexpr771 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr771)) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr770)) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr768);
};

bool mu__condition_774() // Condition for Rule "test_reachable_state_202"
{
  return mu__invariant_767( );
}

/**** end rule declaration ****/

int mu__invariant_775() // Invariant "test_reachable_state_201"
{
bool mu__boolexpr776;
bool mu__boolexpr777;
bool mu__boolexpr778;
bool mu__boolexpr779;
bool mu__boolexpr780;
bool mu__boolexpr781;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr781 = FALSE ;
  else {
  mu__boolexpr781 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr781)) mu__boolexpr780 = FALSE ;
  else {
  mu__boolexpr780 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr780)) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr777)) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr776);
};

bool mu__condition_782() // Condition for Rule "test_reachable_state_201"
{
  return mu__invariant_775( );
}

/**** end rule declaration ****/

int mu__invariant_783() // Invariant "test_reachable_state_200"
{
bool mu__boolexpr784;
bool mu__boolexpr785;
bool mu__boolexpr786;
bool mu__boolexpr787;
bool mu__boolexpr788;
bool mu__boolexpr789;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr789)) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr787)) mu__boolexpr786 = FALSE ;
  else {
  mu__boolexpr786 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr786)) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr785)) mu__boolexpr784 = FALSE ;
  else {
  mu__boolexpr784 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr784);
};

bool mu__condition_790() // Condition for Rule "test_reachable_state_200"
{
  return mu__invariant_783( );
}

/**** end rule declaration ****/

int mu__invariant_791() // Invariant "test_reachable_state_199"
{
bool mu__boolexpr792;
bool mu__boolexpr793;
bool mu__boolexpr794;
bool mu__boolexpr795;
bool mu__boolexpr796;
bool mu__boolexpr797;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr796)) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr794)) mu__boolexpr793 = FALSE ;
  else {
  mu__boolexpr793 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr793)) mu__boolexpr792 = FALSE ;
  else {
  mu__boolexpr792 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr792);
};

bool mu__condition_798() // Condition for Rule "test_reachable_state_199"
{
  return mu__invariant_791( );
}

/**** end rule declaration ****/

int mu__invariant_799() // Invariant "test_reachable_state_198"
{
bool mu__boolexpr800;
bool mu__boolexpr801;
bool mu__boolexpr802;
bool mu__boolexpr803;
bool mu__boolexpr804;
bool mu__boolexpr805;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr804)) mu__boolexpr803 = FALSE ;
  else {
  mu__boolexpr803 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr803)) mu__boolexpr802 = FALSE ;
  else {
  mu__boolexpr802 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr802)) mu__boolexpr801 = FALSE ;
  else {
  mu__boolexpr801 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr801)) mu__boolexpr800 = FALSE ;
  else {
  mu__boolexpr800 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr800);
};

bool mu__condition_806() // Condition for Rule "test_reachable_state_198"
{
  return mu__invariant_799( );
}

/**** end rule declaration ****/

int mu__invariant_807() // Invariant "test_reachable_state_197"
{
bool mu__boolexpr808;
bool mu__boolexpr809;
bool mu__boolexpr810;
bool mu__boolexpr811;
bool mu__boolexpr812;
bool mu__boolexpr813;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr813 = FALSE ;
  else {
  mu__boolexpr813 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr813)) mu__boolexpr812 = FALSE ;
  else {
  mu__boolexpr812 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr812)) mu__boolexpr811 = FALSE ;
  else {
  mu__boolexpr811 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr811)) mu__boolexpr810 = FALSE ;
  else {
  mu__boolexpr810 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr810)) mu__boolexpr809 = FALSE ;
  else {
  mu__boolexpr809 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr809)) mu__boolexpr808 = FALSE ;
  else {
  mu__boolexpr808 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr808);
};

bool mu__condition_814() // Condition for Rule "test_reachable_state_197"
{
  return mu__invariant_807( );
}

/**** end rule declaration ****/

int mu__invariant_815() // Invariant "test_reachable_state_196"
{
bool mu__boolexpr816;
bool mu__boolexpr817;
bool mu__boolexpr818;
bool mu__boolexpr819;
bool mu__boolexpr820;
bool mu__boolexpr821;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr821 = FALSE ;
  else {
  mu__boolexpr821 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr821)) mu__boolexpr820 = FALSE ;
  else {
  mu__boolexpr820 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr820)) mu__boolexpr819 = FALSE ;
  else {
  mu__boolexpr819 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr819)) mu__boolexpr818 = FALSE ;
  else {
  mu__boolexpr818 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr818)) mu__boolexpr817 = FALSE ;
  else {
  mu__boolexpr817 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr817)) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr816);
};

bool mu__condition_822() // Condition for Rule "test_reachable_state_196"
{
  return mu__invariant_815( );
}

/**** end rule declaration ****/

int mu__invariant_823() // Invariant "test_reachable_state_195"
{
bool mu__boolexpr824;
bool mu__boolexpr825;
bool mu__boolexpr826;
bool mu__boolexpr827;
bool mu__boolexpr828;
bool mu__boolexpr829;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr829 = FALSE ;
  else {
  mu__boolexpr829 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr829)) mu__boolexpr828 = FALSE ;
  else {
  mu__boolexpr828 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr828)) mu__boolexpr827 = FALSE ;
  else {
  mu__boolexpr827 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr827)) mu__boolexpr826 = FALSE ;
  else {
  mu__boolexpr826 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr826)) mu__boolexpr825 = FALSE ;
  else {
  mu__boolexpr825 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr825)) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr824);
};

bool mu__condition_830() // Condition for Rule "test_reachable_state_195"
{
  return mu__invariant_823( );
}

/**** end rule declaration ****/

int mu__invariant_831() // Invariant "test_reachable_state_194"
{
bool mu__boolexpr832;
bool mu__boolexpr833;
bool mu__boolexpr834;
bool mu__boolexpr835;
bool mu__boolexpr836;
bool mu__boolexpr837;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr837 = FALSE ;
  else {
  mu__boolexpr837 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr837)) mu__boolexpr836 = FALSE ;
  else {
  mu__boolexpr836 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr836)) mu__boolexpr835 = FALSE ;
  else {
  mu__boolexpr835 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr835)) mu__boolexpr834 = FALSE ;
  else {
  mu__boolexpr834 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr834)) mu__boolexpr833 = FALSE ;
  else {
  mu__boolexpr833 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr833)) mu__boolexpr832 = FALSE ;
  else {
  mu__boolexpr832 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr832);
};

bool mu__condition_838() // Condition for Rule "test_reachable_state_194"
{
  return mu__invariant_831( );
}

/**** end rule declaration ****/

int mu__invariant_839() // Invariant "test_reachable_state_193"
{
bool mu__boolexpr840;
bool mu__boolexpr841;
bool mu__boolexpr842;
bool mu__boolexpr843;
bool mu__boolexpr844;
bool mu__boolexpr845;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr845 = FALSE ;
  else {
  mu__boolexpr845 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr845)) mu__boolexpr844 = FALSE ;
  else {
  mu__boolexpr844 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr844)) mu__boolexpr843 = FALSE ;
  else {
  mu__boolexpr843 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr843)) mu__boolexpr842 = FALSE ;
  else {
  mu__boolexpr842 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr842)) mu__boolexpr841 = FALSE ;
  else {
  mu__boolexpr841 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr841)) mu__boolexpr840 = FALSE ;
  else {
  mu__boolexpr840 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr840);
};

bool mu__condition_846() // Condition for Rule "test_reachable_state_193"
{
  return mu__invariant_839( );
}

/**** end rule declaration ****/

int mu__invariant_847() // Invariant "test_reachable_state_192"
{
bool mu__boolexpr848;
bool mu__boolexpr849;
bool mu__boolexpr850;
bool mu__boolexpr851;
bool mu__boolexpr852;
bool mu__boolexpr853;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr853 = FALSE ;
  else {
  mu__boolexpr853 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr853)) mu__boolexpr852 = FALSE ;
  else {
  mu__boolexpr852 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr852)) mu__boolexpr851 = FALSE ;
  else {
  mu__boolexpr851 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr851)) mu__boolexpr850 = FALSE ;
  else {
  mu__boolexpr850 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr850)) mu__boolexpr849 = FALSE ;
  else {
  mu__boolexpr849 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr849)) mu__boolexpr848 = FALSE ;
  else {
  mu__boolexpr848 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr848);
};

bool mu__condition_854() // Condition for Rule "test_reachable_state_192"
{
  return mu__invariant_847( );
}

/**** end rule declaration ****/

int mu__invariant_855() // Invariant "test_reachable_state_191"
{
bool mu__boolexpr856;
bool mu__boolexpr857;
bool mu__boolexpr858;
bool mu__boolexpr859;
bool mu__boolexpr860;
bool mu__boolexpr861;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr861 = FALSE ;
  else {
  mu__boolexpr861 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr861)) mu__boolexpr860 = FALSE ;
  else {
  mu__boolexpr860 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr860)) mu__boolexpr859 = FALSE ;
  else {
  mu__boolexpr859 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr859)) mu__boolexpr858 = FALSE ;
  else {
  mu__boolexpr858 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr858)) mu__boolexpr857 = FALSE ;
  else {
  mu__boolexpr857 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr857)) mu__boolexpr856 = FALSE ;
  else {
  mu__boolexpr856 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr856);
};

bool mu__condition_862() // Condition for Rule "test_reachable_state_191"
{
  return mu__invariant_855( );
}

/**** end rule declaration ****/

int mu__invariant_863() // Invariant "test_reachable_state_190"
{
bool mu__boolexpr864;
bool mu__boolexpr865;
bool mu__boolexpr866;
bool mu__boolexpr867;
bool mu__boolexpr868;
bool mu__boolexpr869;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr869 = FALSE ;
  else {
  mu__boolexpr869 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr869)) mu__boolexpr868 = FALSE ;
  else {
  mu__boolexpr868 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr868)) mu__boolexpr867 = FALSE ;
  else {
  mu__boolexpr867 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr867)) mu__boolexpr866 = FALSE ;
  else {
  mu__boolexpr866 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr866)) mu__boolexpr865 = FALSE ;
  else {
  mu__boolexpr865 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr865)) mu__boolexpr864 = FALSE ;
  else {
  mu__boolexpr864 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr864);
};

bool mu__condition_870() // Condition for Rule "test_reachable_state_190"
{
  return mu__invariant_863( );
}

/**** end rule declaration ****/

int mu__invariant_871() // Invariant "test_reachable_state_189"
{
bool mu__boolexpr872;
bool mu__boolexpr873;
bool mu__boolexpr874;
bool mu__boolexpr875;
bool mu__boolexpr876;
bool mu__boolexpr877;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr877 = FALSE ;
  else {
  mu__boolexpr877 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr877)) mu__boolexpr876 = FALSE ;
  else {
  mu__boolexpr876 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr876)) mu__boolexpr875 = FALSE ;
  else {
  mu__boolexpr875 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr875)) mu__boolexpr874 = FALSE ;
  else {
  mu__boolexpr874 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr874)) mu__boolexpr873 = FALSE ;
  else {
  mu__boolexpr873 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr873)) mu__boolexpr872 = FALSE ;
  else {
  mu__boolexpr872 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr872);
};

bool mu__condition_878() // Condition for Rule "test_reachable_state_189"
{
  return mu__invariant_871( );
}

/**** end rule declaration ****/

int mu__invariant_879() // Invariant "test_reachable_state_188"
{
bool mu__boolexpr880;
bool mu__boolexpr881;
bool mu__boolexpr882;
bool mu__boolexpr883;
bool mu__boolexpr884;
bool mu__boolexpr885;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr885 = FALSE ;
  else {
  mu__boolexpr885 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr885)) mu__boolexpr884 = FALSE ;
  else {
  mu__boolexpr884 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr884)) mu__boolexpr883 = FALSE ;
  else {
  mu__boolexpr883 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr883)) mu__boolexpr882 = FALSE ;
  else {
  mu__boolexpr882 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr882)) mu__boolexpr881 = FALSE ;
  else {
  mu__boolexpr881 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr881)) mu__boolexpr880 = FALSE ;
  else {
  mu__boolexpr880 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr880);
};

bool mu__condition_886() // Condition for Rule "test_reachable_state_188"
{
  return mu__invariant_879( );
}

/**** end rule declaration ****/

int mu__invariant_887() // Invariant "test_reachable_state_187"
{
bool mu__boolexpr888;
bool mu__boolexpr889;
bool mu__boolexpr890;
bool mu__boolexpr891;
bool mu__boolexpr892;
bool mu__boolexpr893;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr893 = FALSE ;
  else {
  mu__boolexpr893 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr893)) mu__boolexpr892 = FALSE ;
  else {
  mu__boolexpr892 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr892)) mu__boolexpr891 = FALSE ;
  else {
  mu__boolexpr891 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr891)) mu__boolexpr890 = FALSE ;
  else {
  mu__boolexpr890 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr890)) mu__boolexpr889 = FALSE ;
  else {
  mu__boolexpr889 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr889)) mu__boolexpr888 = FALSE ;
  else {
  mu__boolexpr888 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr888);
};

bool mu__condition_894() // Condition for Rule "test_reachable_state_187"
{
  return mu__invariant_887( );
}

/**** end rule declaration ****/

int mu__invariant_895() // Invariant "test_reachable_state_186"
{
bool mu__boolexpr896;
bool mu__boolexpr897;
bool mu__boolexpr898;
bool mu__boolexpr899;
bool mu__boolexpr900;
bool mu__boolexpr901;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr901 = FALSE ;
  else {
  mu__boolexpr901 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr901)) mu__boolexpr900 = FALSE ;
  else {
  mu__boolexpr900 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr900)) mu__boolexpr899 = FALSE ;
  else {
  mu__boolexpr899 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr899)) mu__boolexpr898 = FALSE ;
  else {
  mu__boolexpr898 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr898)) mu__boolexpr897 = FALSE ;
  else {
  mu__boolexpr897 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr897)) mu__boolexpr896 = FALSE ;
  else {
  mu__boolexpr896 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr896);
};

bool mu__condition_902() // Condition for Rule "test_reachable_state_186"
{
  return mu__invariant_895( );
}

/**** end rule declaration ****/

int mu__invariant_903() // Invariant "test_reachable_state_185"
{
bool mu__boolexpr904;
bool mu__boolexpr905;
bool mu__boolexpr906;
bool mu__boolexpr907;
bool mu__boolexpr908;
bool mu__boolexpr909;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr909 = FALSE ;
  else {
  mu__boolexpr909 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr909)) mu__boolexpr908 = FALSE ;
  else {
  mu__boolexpr908 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr908)) mu__boolexpr907 = FALSE ;
  else {
  mu__boolexpr907 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr907)) mu__boolexpr906 = FALSE ;
  else {
  mu__boolexpr906 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr906)) mu__boolexpr905 = FALSE ;
  else {
  mu__boolexpr905 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr905)) mu__boolexpr904 = FALSE ;
  else {
  mu__boolexpr904 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr904);
};

bool mu__condition_910() // Condition for Rule "test_reachable_state_185"
{
  return mu__invariant_903( );
}

/**** end rule declaration ****/

int mu__invariant_911() // Invariant "test_reachable_state_184"
{
bool mu__boolexpr912;
bool mu__boolexpr913;
bool mu__boolexpr914;
bool mu__boolexpr915;
bool mu__boolexpr916;
bool mu__boolexpr917;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr917 = FALSE ;
  else {
  mu__boolexpr917 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr917)) mu__boolexpr916 = FALSE ;
  else {
  mu__boolexpr916 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr916)) mu__boolexpr915 = FALSE ;
  else {
  mu__boolexpr915 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr915)) mu__boolexpr914 = FALSE ;
  else {
  mu__boolexpr914 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr914)) mu__boolexpr913 = FALSE ;
  else {
  mu__boolexpr913 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr913)) mu__boolexpr912 = FALSE ;
  else {
  mu__boolexpr912 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr912);
};

bool mu__condition_918() // Condition for Rule "test_reachable_state_184"
{
  return mu__invariant_911( );
}

/**** end rule declaration ****/

int mu__invariant_919() // Invariant "test_reachable_state_183"
{
bool mu__boolexpr920;
bool mu__boolexpr921;
bool mu__boolexpr922;
bool mu__boolexpr923;
bool mu__boolexpr924;
bool mu__boolexpr925;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr925 = FALSE ;
  else {
  mu__boolexpr925 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr925)) mu__boolexpr924 = FALSE ;
  else {
  mu__boolexpr924 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr924)) mu__boolexpr923 = FALSE ;
  else {
  mu__boolexpr923 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr923)) mu__boolexpr922 = FALSE ;
  else {
  mu__boolexpr922 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr922)) mu__boolexpr921 = FALSE ;
  else {
  mu__boolexpr921 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr921)) mu__boolexpr920 = FALSE ;
  else {
  mu__boolexpr920 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr920);
};

bool mu__condition_926() // Condition for Rule "test_reachable_state_183"
{
  return mu__invariant_919( );
}

/**** end rule declaration ****/

int mu__invariant_927() // Invariant "test_reachable_state_182"
{
bool mu__boolexpr928;
bool mu__boolexpr929;
bool mu__boolexpr930;
bool mu__boolexpr931;
bool mu__boolexpr932;
bool mu__boolexpr933;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr933 = FALSE ;
  else {
  mu__boolexpr933 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr933)) mu__boolexpr932 = FALSE ;
  else {
  mu__boolexpr932 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr932)) mu__boolexpr931 = FALSE ;
  else {
  mu__boolexpr931 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr931)) mu__boolexpr930 = FALSE ;
  else {
  mu__boolexpr930 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr930)) mu__boolexpr929 = FALSE ;
  else {
  mu__boolexpr929 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr929)) mu__boolexpr928 = FALSE ;
  else {
  mu__boolexpr928 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr928);
};

bool mu__condition_934() // Condition for Rule "test_reachable_state_182"
{
  return mu__invariant_927( );
}

/**** end rule declaration ****/

int mu__invariant_935() // Invariant "test_reachable_state_181"
{
bool mu__boolexpr936;
bool mu__boolexpr937;
bool mu__boolexpr938;
bool mu__boolexpr939;
bool mu__boolexpr940;
bool mu__boolexpr941;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr941 = FALSE ;
  else {
  mu__boolexpr941 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr941)) mu__boolexpr940 = FALSE ;
  else {
  mu__boolexpr940 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr940)) mu__boolexpr939 = FALSE ;
  else {
  mu__boolexpr939 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr939)) mu__boolexpr938 = FALSE ;
  else {
  mu__boolexpr938 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr938)) mu__boolexpr937 = FALSE ;
  else {
  mu__boolexpr937 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr937)) mu__boolexpr936 = FALSE ;
  else {
  mu__boolexpr936 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr936);
};

bool mu__condition_942() // Condition for Rule "test_reachable_state_181"
{
  return mu__invariant_935( );
}

/**** end rule declaration ****/

int mu__invariant_943() // Invariant "test_reachable_state_180"
{
bool mu__boolexpr944;
bool mu__boolexpr945;
bool mu__boolexpr946;
bool mu__boolexpr947;
bool mu__boolexpr948;
bool mu__boolexpr949;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr949 = FALSE ;
  else {
  mu__boolexpr949 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr949)) mu__boolexpr948 = FALSE ;
  else {
  mu__boolexpr948 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr948)) mu__boolexpr947 = FALSE ;
  else {
  mu__boolexpr947 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr947)) mu__boolexpr946 = FALSE ;
  else {
  mu__boolexpr946 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr946)) mu__boolexpr945 = FALSE ;
  else {
  mu__boolexpr945 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr945)) mu__boolexpr944 = FALSE ;
  else {
  mu__boolexpr944 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr944);
};

bool mu__condition_950() // Condition for Rule "test_reachable_state_180"
{
  return mu__invariant_943( );
}

/**** end rule declaration ****/

int mu__invariant_951() // Invariant "test_reachable_state_179"
{
bool mu__boolexpr952;
bool mu__boolexpr953;
bool mu__boolexpr954;
bool mu__boolexpr955;
bool mu__boolexpr956;
bool mu__boolexpr957;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr957 = FALSE ;
  else {
  mu__boolexpr957 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr957)) mu__boolexpr956 = FALSE ;
  else {
  mu__boolexpr956 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr956)) mu__boolexpr955 = FALSE ;
  else {
  mu__boolexpr955 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr955)) mu__boolexpr954 = FALSE ;
  else {
  mu__boolexpr954 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr954)) mu__boolexpr953 = FALSE ;
  else {
  mu__boolexpr953 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr953)) mu__boolexpr952 = FALSE ;
  else {
  mu__boolexpr952 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr952);
};

bool mu__condition_958() // Condition for Rule "test_reachable_state_179"
{
  return mu__invariant_951( );
}

/**** end rule declaration ****/

int mu__invariant_959() // Invariant "test_reachable_state_178"
{
bool mu__boolexpr960;
bool mu__boolexpr961;
bool mu__boolexpr962;
bool mu__boolexpr963;
bool mu__boolexpr964;
bool mu__boolexpr965;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr965 = FALSE ;
  else {
  mu__boolexpr965 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr965)) mu__boolexpr964 = FALSE ;
  else {
  mu__boolexpr964 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr964)) mu__boolexpr963 = FALSE ;
  else {
  mu__boolexpr963 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr963)) mu__boolexpr962 = FALSE ;
  else {
  mu__boolexpr962 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr962)) mu__boolexpr961 = FALSE ;
  else {
  mu__boolexpr961 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr961)) mu__boolexpr960 = FALSE ;
  else {
  mu__boolexpr960 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr960);
};

bool mu__condition_966() // Condition for Rule "test_reachable_state_178"
{
  return mu__invariant_959( );
}

/**** end rule declaration ****/

int mu__invariant_967() // Invariant "test_reachable_state_177"
{
bool mu__boolexpr968;
bool mu__boolexpr969;
bool mu__boolexpr970;
bool mu__boolexpr971;
bool mu__boolexpr972;
bool mu__boolexpr973;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr973 = FALSE ;
  else {
  mu__boolexpr973 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr973)) mu__boolexpr972 = FALSE ;
  else {
  mu__boolexpr972 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr972)) mu__boolexpr971 = FALSE ;
  else {
  mu__boolexpr971 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr971)) mu__boolexpr970 = FALSE ;
  else {
  mu__boolexpr970 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr970)) mu__boolexpr969 = FALSE ;
  else {
  mu__boolexpr969 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr969)) mu__boolexpr968 = FALSE ;
  else {
  mu__boolexpr968 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr968);
};

bool mu__condition_974() // Condition for Rule "test_reachable_state_177"
{
  return mu__invariant_967( );
}

/**** end rule declaration ****/

int mu__invariant_975() // Invariant "test_reachable_state_176"
{
bool mu__boolexpr976;
bool mu__boolexpr977;
bool mu__boolexpr978;
bool mu__boolexpr979;
bool mu__boolexpr980;
bool mu__boolexpr981;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr981 = FALSE ;
  else {
  mu__boolexpr981 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr981)) mu__boolexpr980 = FALSE ;
  else {
  mu__boolexpr980 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr980)) mu__boolexpr979 = FALSE ;
  else {
  mu__boolexpr979 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr979)) mu__boolexpr978 = FALSE ;
  else {
  mu__boolexpr978 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr978)) mu__boolexpr977 = FALSE ;
  else {
  mu__boolexpr977 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr977)) mu__boolexpr976 = FALSE ;
  else {
  mu__boolexpr976 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr976);
};

bool mu__condition_982() // Condition for Rule "test_reachable_state_176"
{
  return mu__invariant_975( );
}

/**** end rule declaration ****/

int mu__invariant_983() // Invariant "test_reachable_state_175"
{
bool mu__boolexpr984;
bool mu__boolexpr985;
bool mu__boolexpr986;
bool mu__boolexpr987;
bool mu__boolexpr988;
bool mu__boolexpr989;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr989 = FALSE ;
  else {
  mu__boolexpr989 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr989)) mu__boolexpr988 = FALSE ;
  else {
  mu__boolexpr988 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr988)) mu__boolexpr987 = FALSE ;
  else {
  mu__boolexpr987 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr987)) mu__boolexpr986 = FALSE ;
  else {
  mu__boolexpr986 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr986)) mu__boolexpr985 = FALSE ;
  else {
  mu__boolexpr985 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr985)) mu__boolexpr984 = FALSE ;
  else {
  mu__boolexpr984 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr984);
};

bool mu__condition_990() // Condition for Rule "test_reachable_state_175"
{
  return mu__invariant_983( );
}

/**** end rule declaration ****/

int mu__invariant_991() // Invariant "test_reachable_state_174"
{
bool mu__boolexpr992;
bool mu__boolexpr993;
bool mu__boolexpr994;
bool mu__boolexpr995;
bool mu__boolexpr996;
bool mu__boolexpr997;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr997 = FALSE ;
  else {
  mu__boolexpr997 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr997)) mu__boolexpr996 = FALSE ;
  else {
  mu__boolexpr996 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr996)) mu__boolexpr995 = FALSE ;
  else {
  mu__boolexpr995 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr995)) mu__boolexpr994 = FALSE ;
  else {
  mu__boolexpr994 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr994)) mu__boolexpr993 = FALSE ;
  else {
  mu__boolexpr993 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr993)) mu__boolexpr992 = FALSE ;
  else {
  mu__boolexpr992 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr992);
};

bool mu__condition_998() // Condition for Rule "test_reachable_state_174"
{
  return mu__invariant_991( );
}

/**** end rule declaration ****/

int mu__invariant_999() // Invariant "test_reachable_state_173"
{
bool mu__boolexpr1000;
bool mu__boolexpr1001;
bool mu__boolexpr1002;
bool mu__boolexpr1003;
bool mu__boolexpr1004;
bool mu__boolexpr1005;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1005 = FALSE ;
  else {
  mu__boolexpr1005 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1005)) mu__boolexpr1004 = FALSE ;
  else {
  mu__boolexpr1004 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1004)) mu__boolexpr1003 = FALSE ;
  else {
  mu__boolexpr1003 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1003)) mu__boolexpr1002 = FALSE ;
  else {
  mu__boolexpr1002 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1002)) mu__boolexpr1001 = FALSE ;
  else {
  mu__boolexpr1001 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1001)) mu__boolexpr1000 = FALSE ;
  else {
  mu__boolexpr1000 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1000);
};

bool mu__condition_1006() // Condition for Rule "test_reachable_state_173"
{
  return mu__invariant_999( );
}

/**** end rule declaration ****/

int mu__invariant_1007() // Invariant "test_reachable_state_172"
{
bool mu__boolexpr1008;
bool mu__boolexpr1009;
bool mu__boolexpr1010;
bool mu__boolexpr1011;
bool mu__boolexpr1012;
bool mu__boolexpr1013;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1013 = FALSE ;
  else {
  mu__boolexpr1013 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1013)) mu__boolexpr1012 = FALSE ;
  else {
  mu__boolexpr1012 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1012)) mu__boolexpr1011 = FALSE ;
  else {
  mu__boolexpr1011 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1011)) mu__boolexpr1010 = FALSE ;
  else {
  mu__boolexpr1010 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1010)) mu__boolexpr1009 = FALSE ;
  else {
  mu__boolexpr1009 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1009)) mu__boolexpr1008 = FALSE ;
  else {
  mu__boolexpr1008 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1008);
};

bool mu__condition_1014() // Condition for Rule "test_reachable_state_172"
{
  return mu__invariant_1007( );
}

/**** end rule declaration ****/

int mu__invariant_1015() // Invariant "test_reachable_state_171"
{
bool mu__boolexpr1016;
bool mu__boolexpr1017;
bool mu__boolexpr1018;
bool mu__boolexpr1019;
bool mu__boolexpr1020;
bool mu__boolexpr1021;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1021 = FALSE ;
  else {
  mu__boolexpr1021 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1021)) mu__boolexpr1020 = FALSE ;
  else {
  mu__boolexpr1020 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1020)) mu__boolexpr1019 = FALSE ;
  else {
  mu__boolexpr1019 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1019)) mu__boolexpr1018 = FALSE ;
  else {
  mu__boolexpr1018 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1018)) mu__boolexpr1017 = FALSE ;
  else {
  mu__boolexpr1017 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1017)) mu__boolexpr1016 = FALSE ;
  else {
  mu__boolexpr1016 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1016);
};

bool mu__condition_1022() // Condition for Rule "test_reachable_state_171"
{
  return mu__invariant_1015( );
}

/**** end rule declaration ****/

int mu__invariant_1023() // Invariant "test_reachable_state_170"
{
bool mu__boolexpr1024;
bool mu__boolexpr1025;
bool mu__boolexpr1026;
bool mu__boolexpr1027;
bool mu__boolexpr1028;
bool mu__boolexpr1029;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1029 = FALSE ;
  else {
  mu__boolexpr1029 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1029)) mu__boolexpr1028 = FALSE ;
  else {
  mu__boolexpr1028 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1028)) mu__boolexpr1027 = FALSE ;
  else {
  mu__boolexpr1027 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1027)) mu__boolexpr1026 = FALSE ;
  else {
  mu__boolexpr1026 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1026)) mu__boolexpr1025 = FALSE ;
  else {
  mu__boolexpr1025 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1025)) mu__boolexpr1024 = FALSE ;
  else {
  mu__boolexpr1024 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1024);
};

bool mu__condition_1030() // Condition for Rule "test_reachable_state_170"
{
  return mu__invariant_1023( );
}

/**** end rule declaration ****/

int mu__invariant_1031() // Invariant "test_reachable_state_169"
{
bool mu__boolexpr1032;
bool mu__boolexpr1033;
bool mu__boolexpr1034;
bool mu__boolexpr1035;
bool mu__boolexpr1036;
bool mu__boolexpr1037;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1037 = FALSE ;
  else {
  mu__boolexpr1037 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1037)) mu__boolexpr1036 = FALSE ;
  else {
  mu__boolexpr1036 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1036)) mu__boolexpr1035 = FALSE ;
  else {
  mu__boolexpr1035 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1035)) mu__boolexpr1034 = FALSE ;
  else {
  mu__boolexpr1034 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1034)) mu__boolexpr1033 = FALSE ;
  else {
  mu__boolexpr1033 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1033)) mu__boolexpr1032 = FALSE ;
  else {
  mu__boolexpr1032 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1032);
};

bool mu__condition_1038() // Condition for Rule "test_reachable_state_169"
{
  return mu__invariant_1031( );
}

/**** end rule declaration ****/

int mu__invariant_1039() // Invariant "test_reachable_state_168"
{
bool mu__boolexpr1040;
bool mu__boolexpr1041;
bool mu__boolexpr1042;
bool mu__boolexpr1043;
bool mu__boolexpr1044;
bool mu__boolexpr1045;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1045 = FALSE ;
  else {
  mu__boolexpr1045 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1045)) mu__boolexpr1044 = FALSE ;
  else {
  mu__boolexpr1044 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1044)) mu__boolexpr1043 = FALSE ;
  else {
  mu__boolexpr1043 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1043)) mu__boolexpr1042 = FALSE ;
  else {
  mu__boolexpr1042 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1042)) mu__boolexpr1041 = FALSE ;
  else {
  mu__boolexpr1041 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1041)) mu__boolexpr1040 = FALSE ;
  else {
  mu__boolexpr1040 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1040);
};

bool mu__condition_1046() // Condition for Rule "test_reachable_state_168"
{
  return mu__invariant_1039( );
}

/**** end rule declaration ****/

int mu__invariant_1047() // Invariant "test_reachable_state_167"
{
bool mu__boolexpr1048;
bool mu__boolexpr1049;
bool mu__boolexpr1050;
bool mu__boolexpr1051;
bool mu__boolexpr1052;
bool mu__boolexpr1053;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1053 = FALSE ;
  else {
  mu__boolexpr1053 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1053)) mu__boolexpr1052 = FALSE ;
  else {
  mu__boolexpr1052 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1052)) mu__boolexpr1051 = FALSE ;
  else {
  mu__boolexpr1051 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1051)) mu__boolexpr1050 = FALSE ;
  else {
  mu__boolexpr1050 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1050)) mu__boolexpr1049 = FALSE ;
  else {
  mu__boolexpr1049 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1049)) mu__boolexpr1048 = FALSE ;
  else {
  mu__boolexpr1048 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1048);
};

bool mu__condition_1054() // Condition for Rule "test_reachable_state_167"
{
  return mu__invariant_1047( );
}

/**** end rule declaration ****/

int mu__invariant_1055() // Invariant "test_reachable_state_166"
{
bool mu__boolexpr1056;
bool mu__boolexpr1057;
bool mu__boolexpr1058;
bool mu__boolexpr1059;
bool mu__boolexpr1060;
bool mu__boolexpr1061;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1061 = FALSE ;
  else {
  mu__boolexpr1061 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1061)) mu__boolexpr1060 = FALSE ;
  else {
  mu__boolexpr1060 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1060)) mu__boolexpr1059 = FALSE ;
  else {
  mu__boolexpr1059 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1059)) mu__boolexpr1058 = FALSE ;
  else {
  mu__boolexpr1058 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1058)) mu__boolexpr1057 = FALSE ;
  else {
  mu__boolexpr1057 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1057)) mu__boolexpr1056 = FALSE ;
  else {
  mu__boolexpr1056 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1056);
};

bool mu__condition_1062() // Condition for Rule "test_reachable_state_166"
{
  return mu__invariant_1055( );
}

/**** end rule declaration ****/

int mu__invariant_1063() // Invariant "test_reachable_state_165"
{
bool mu__boolexpr1064;
bool mu__boolexpr1065;
bool mu__boolexpr1066;
bool mu__boolexpr1067;
bool mu__boolexpr1068;
bool mu__boolexpr1069;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1069 = FALSE ;
  else {
  mu__boolexpr1069 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1069)) mu__boolexpr1068 = FALSE ;
  else {
  mu__boolexpr1068 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1068)) mu__boolexpr1067 = FALSE ;
  else {
  mu__boolexpr1067 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1067)) mu__boolexpr1066 = FALSE ;
  else {
  mu__boolexpr1066 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1066)) mu__boolexpr1065 = FALSE ;
  else {
  mu__boolexpr1065 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1065)) mu__boolexpr1064 = FALSE ;
  else {
  mu__boolexpr1064 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1064);
};

bool mu__condition_1070() // Condition for Rule "test_reachable_state_165"
{
  return mu__invariant_1063( );
}

/**** end rule declaration ****/

int mu__invariant_1071() // Invariant "test_reachable_state_164"
{
bool mu__boolexpr1072;
bool mu__boolexpr1073;
bool mu__boolexpr1074;
bool mu__boolexpr1075;
bool mu__boolexpr1076;
bool mu__boolexpr1077;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1077 = FALSE ;
  else {
  mu__boolexpr1077 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1077)) mu__boolexpr1076 = FALSE ;
  else {
  mu__boolexpr1076 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1076)) mu__boolexpr1075 = FALSE ;
  else {
  mu__boolexpr1075 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1075)) mu__boolexpr1074 = FALSE ;
  else {
  mu__boolexpr1074 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1074)) mu__boolexpr1073 = FALSE ;
  else {
  mu__boolexpr1073 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1073)) mu__boolexpr1072 = FALSE ;
  else {
  mu__boolexpr1072 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1072);
};

bool mu__condition_1078() // Condition for Rule "test_reachable_state_164"
{
  return mu__invariant_1071( );
}

/**** end rule declaration ****/

int mu__invariant_1079() // Invariant "test_reachable_state_163"
{
bool mu__boolexpr1080;
bool mu__boolexpr1081;
bool mu__boolexpr1082;
bool mu__boolexpr1083;
bool mu__boolexpr1084;
bool mu__boolexpr1085;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1085 = FALSE ;
  else {
  mu__boolexpr1085 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1085)) mu__boolexpr1084 = FALSE ;
  else {
  mu__boolexpr1084 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1084)) mu__boolexpr1083 = FALSE ;
  else {
  mu__boolexpr1083 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1083)) mu__boolexpr1082 = FALSE ;
  else {
  mu__boolexpr1082 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1082)) mu__boolexpr1081 = FALSE ;
  else {
  mu__boolexpr1081 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1081)) mu__boolexpr1080 = FALSE ;
  else {
  mu__boolexpr1080 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1080);
};

bool mu__condition_1086() // Condition for Rule "test_reachable_state_163"
{
  return mu__invariant_1079( );
}

/**** end rule declaration ****/

int mu__invariant_1087() // Invariant "test_reachable_state_162"
{
bool mu__boolexpr1088;
bool mu__boolexpr1089;
bool mu__boolexpr1090;
bool mu__boolexpr1091;
bool mu__boolexpr1092;
bool mu__boolexpr1093;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1093 = FALSE ;
  else {
  mu__boolexpr1093 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1093)) mu__boolexpr1092 = FALSE ;
  else {
  mu__boolexpr1092 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1092)) mu__boolexpr1091 = FALSE ;
  else {
  mu__boolexpr1091 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1091)) mu__boolexpr1090 = FALSE ;
  else {
  mu__boolexpr1090 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1090)) mu__boolexpr1089 = FALSE ;
  else {
  mu__boolexpr1089 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1089)) mu__boolexpr1088 = FALSE ;
  else {
  mu__boolexpr1088 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1088);
};

bool mu__condition_1094() // Condition for Rule "test_reachable_state_162"
{
  return mu__invariant_1087( );
}

/**** end rule declaration ****/

int mu__invariant_1095() // Invariant "test_reachable_state_161"
{
bool mu__boolexpr1096;
bool mu__boolexpr1097;
bool mu__boolexpr1098;
bool mu__boolexpr1099;
bool mu__boolexpr1100;
bool mu__boolexpr1101;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Tip))) mu__boolexpr1101 = FALSE ;
  else {
  mu__boolexpr1101 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1101)) mu__boolexpr1100 = FALSE ;
  else {
  mu__boolexpr1100 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1100)) mu__boolexpr1099 = FALSE ;
  else {
  mu__boolexpr1099 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1099)) mu__boolexpr1098 = FALSE ;
  else {
  mu__boolexpr1098 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1098)) mu__boolexpr1097 = FALSE ;
  else {
  mu__boolexpr1097 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1097)) mu__boolexpr1096 = FALSE ;
  else {
  mu__boolexpr1096 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1096);
};

bool mu__condition_1102() // Condition for Rule "test_reachable_state_161"
{
  return mu__invariant_1095( );
}

/**** end rule declaration ****/

int mu__invariant_1103() // Invariant "test_reachable_state_160"
{
bool mu__boolexpr1104;
bool mu__boolexpr1105;
bool mu__boolexpr1106;
bool mu__boolexpr1107;
bool mu__boolexpr1108;
bool mu__boolexpr1109;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1109 = FALSE ;
  else {
  mu__boolexpr1109 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1109)) mu__boolexpr1108 = FALSE ;
  else {
  mu__boolexpr1108 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1108)) mu__boolexpr1107 = FALSE ;
  else {
  mu__boolexpr1107 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1107)) mu__boolexpr1106 = FALSE ;
  else {
  mu__boolexpr1106 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1106)) mu__boolexpr1105 = FALSE ;
  else {
  mu__boolexpr1105 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1105)) mu__boolexpr1104 = FALSE ;
  else {
  mu__boolexpr1104 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1104);
};

bool mu__condition_1110() // Condition for Rule "test_reachable_state_160"
{
  return mu__invariant_1103( );
}

/**** end rule declaration ****/

int mu__invariant_1111() // Invariant "test_reachable_state_159"
{
bool mu__boolexpr1112;
bool mu__boolexpr1113;
bool mu__boolexpr1114;
bool mu__boolexpr1115;
bool mu__boolexpr1116;
bool mu__boolexpr1117;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1117 = FALSE ;
  else {
  mu__boolexpr1117 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1117)) mu__boolexpr1116 = FALSE ;
  else {
  mu__boolexpr1116 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1116)) mu__boolexpr1115 = FALSE ;
  else {
  mu__boolexpr1115 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1115)) mu__boolexpr1114 = FALSE ;
  else {
  mu__boolexpr1114 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1114)) mu__boolexpr1113 = FALSE ;
  else {
  mu__boolexpr1113 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1113)) mu__boolexpr1112 = FALSE ;
  else {
  mu__boolexpr1112 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1112);
};

bool mu__condition_1118() // Condition for Rule "test_reachable_state_159"
{
  return mu__invariant_1111( );
}

/**** end rule declaration ****/

int mu__invariant_1119() // Invariant "test_reachable_state_158"
{
bool mu__boolexpr1120;
bool mu__boolexpr1121;
bool mu__boolexpr1122;
bool mu__boolexpr1123;
bool mu__boolexpr1124;
bool mu__boolexpr1125;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1125 = FALSE ;
  else {
  mu__boolexpr1125 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1125)) mu__boolexpr1124 = FALSE ;
  else {
  mu__boolexpr1124 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1124)) mu__boolexpr1123 = FALSE ;
  else {
  mu__boolexpr1123 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1123)) mu__boolexpr1122 = FALSE ;
  else {
  mu__boolexpr1122 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1122)) mu__boolexpr1121 = FALSE ;
  else {
  mu__boolexpr1121 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1121)) mu__boolexpr1120 = FALSE ;
  else {
  mu__boolexpr1120 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1120);
};

bool mu__condition_1126() // Condition for Rule "test_reachable_state_158"
{
  return mu__invariant_1119( );
}

/**** end rule declaration ****/

int mu__invariant_1127() // Invariant "test_reachable_state_157"
{
bool mu__boolexpr1128;
bool mu__boolexpr1129;
bool mu__boolexpr1130;
bool mu__boolexpr1131;
bool mu__boolexpr1132;
bool mu__boolexpr1133;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1133 = FALSE ;
  else {
  mu__boolexpr1133 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1133)) mu__boolexpr1132 = FALSE ;
  else {
  mu__boolexpr1132 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1132)) mu__boolexpr1131 = FALSE ;
  else {
  mu__boolexpr1131 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1131)) mu__boolexpr1130 = FALSE ;
  else {
  mu__boolexpr1130 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1130)) mu__boolexpr1129 = FALSE ;
  else {
  mu__boolexpr1129 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1129)) mu__boolexpr1128 = FALSE ;
  else {
  mu__boolexpr1128 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1128);
};

bool mu__condition_1134() // Condition for Rule "test_reachable_state_157"
{
  return mu__invariant_1127( );
}

/**** end rule declaration ****/

int mu__invariant_1135() // Invariant "test_reachable_state_156"
{
bool mu__boolexpr1136;
bool mu__boolexpr1137;
bool mu__boolexpr1138;
bool mu__boolexpr1139;
bool mu__boolexpr1140;
bool mu__boolexpr1141;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1141 = FALSE ;
  else {
  mu__boolexpr1141 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1141)) mu__boolexpr1140 = FALSE ;
  else {
  mu__boolexpr1140 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1140)) mu__boolexpr1139 = FALSE ;
  else {
  mu__boolexpr1139 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1139)) mu__boolexpr1138 = FALSE ;
  else {
  mu__boolexpr1138 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1138)) mu__boolexpr1137 = FALSE ;
  else {
  mu__boolexpr1137 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1137)) mu__boolexpr1136 = FALSE ;
  else {
  mu__boolexpr1136 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1136);
};

bool mu__condition_1142() // Condition for Rule "test_reachable_state_156"
{
  return mu__invariant_1135( );
}

/**** end rule declaration ****/

int mu__invariant_1143() // Invariant "test_reachable_state_155"
{
bool mu__boolexpr1144;
bool mu__boolexpr1145;
bool mu__boolexpr1146;
bool mu__boolexpr1147;
bool mu__boolexpr1148;
bool mu__boolexpr1149;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1149 = FALSE ;
  else {
  mu__boolexpr1149 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1149)) mu__boolexpr1148 = FALSE ;
  else {
  mu__boolexpr1148 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1148)) mu__boolexpr1147 = FALSE ;
  else {
  mu__boolexpr1147 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1147)) mu__boolexpr1146 = FALSE ;
  else {
  mu__boolexpr1146 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1146)) mu__boolexpr1145 = FALSE ;
  else {
  mu__boolexpr1145 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1145)) mu__boolexpr1144 = FALSE ;
  else {
  mu__boolexpr1144 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1144);
};

bool mu__condition_1150() // Condition for Rule "test_reachable_state_155"
{
  return mu__invariant_1143( );
}

/**** end rule declaration ****/

int mu__invariant_1151() // Invariant "test_reachable_state_154"
{
bool mu__boolexpr1152;
bool mu__boolexpr1153;
bool mu__boolexpr1154;
bool mu__boolexpr1155;
bool mu__boolexpr1156;
bool mu__boolexpr1157;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1157 = FALSE ;
  else {
  mu__boolexpr1157 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1157)) mu__boolexpr1156 = FALSE ;
  else {
  mu__boolexpr1156 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1156)) mu__boolexpr1155 = FALSE ;
  else {
  mu__boolexpr1155 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1155)) mu__boolexpr1154 = FALSE ;
  else {
  mu__boolexpr1154 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1154)) mu__boolexpr1153 = FALSE ;
  else {
  mu__boolexpr1153 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1153)) mu__boolexpr1152 = FALSE ;
  else {
  mu__boolexpr1152 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1152);
};

bool mu__condition_1158() // Condition for Rule "test_reachable_state_154"
{
  return mu__invariant_1151( );
}

/**** end rule declaration ****/

int mu__invariant_1159() // Invariant "test_reachable_state_153"
{
bool mu__boolexpr1160;
bool mu__boolexpr1161;
bool mu__boolexpr1162;
bool mu__boolexpr1163;
bool mu__boolexpr1164;
bool mu__boolexpr1165;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1165 = FALSE ;
  else {
  mu__boolexpr1165 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1165)) mu__boolexpr1164 = FALSE ;
  else {
  mu__boolexpr1164 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1164)) mu__boolexpr1163 = FALSE ;
  else {
  mu__boolexpr1163 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1163)) mu__boolexpr1162 = FALSE ;
  else {
  mu__boolexpr1162 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1162)) mu__boolexpr1161 = FALSE ;
  else {
  mu__boolexpr1161 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1161)) mu__boolexpr1160 = FALSE ;
  else {
  mu__boolexpr1160 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1160);
};

bool mu__condition_1166() // Condition for Rule "test_reachable_state_153"
{
  return mu__invariant_1159( );
}

/**** end rule declaration ****/

int mu__invariant_1167() // Invariant "test_reachable_state_152"
{
bool mu__boolexpr1168;
bool mu__boolexpr1169;
bool mu__boolexpr1170;
bool mu__boolexpr1171;
bool mu__boolexpr1172;
bool mu__boolexpr1173;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1173 = FALSE ;
  else {
  mu__boolexpr1173 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1173)) mu__boolexpr1172 = FALSE ;
  else {
  mu__boolexpr1172 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1172)) mu__boolexpr1171 = FALSE ;
  else {
  mu__boolexpr1171 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1171)) mu__boolexpr1170 = FALSE ;
  else {
  mu__boolexpr1170 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1170)) mu__boolexpr1169 = FALSE ;
  else {
  mu__boolexpr1169 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1169)) mu__boolexpr1168 = FALSE ;
  else {
  mu__boolexpr1168 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1168);
};

bool mu__condition_1174() // Condition for Rule "test_reachable_state_152"
{
  return mu__invariant_1167( );
}

/**** end rule declaration ****/

int mu__invariant_1175() // Invariant "test_reachable_state_151"
{
bool mu__boolexpr1176;
bool mu__boolexpr1177;
bool mu__boolexpr1178;
bool mu__boolexpr1179;
bool mu__boolexpr1180;
bool mu__boolexpr1181;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1181 = FALSE ;
  else {
  mu__boolexpr1181 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1181)) mu__boolexpr1180 = FALSE ;
  else {
  mu__boolexpr1180 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1180)) mu__boolexpr1179 = FALSE ;
  else {
  mu__boolexpr1179 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1179)) mu__boolexpr1178 = FALSE ;
  else {
  mu__boolexpr1178 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1178)) mu__boolexpr1177 = FALSE ;
  else {
  mu__boolexpr1177 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1177)) mu__boolexpr1176 = FALSE ;
  else {
  mu__boolexpr1176 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1176);
};

bool mu__condition_1182() // Condition for Rule "test_reachable_state_151"
{
  return mu__invariant_1175( );
}

/**** end rule declaration ****/

int mu__invariant_1183() // Invariant "test_reachable_state_150"
{
bool mu__boolexpr1184;
bool mu__boolexpr1185;
bool mu__boolexpr1186;
bool mu__boolexpr1187;
bool mu__boolexpr1188;
bool mu__boolexpr1189;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1189 = FALSE ;
  else {
  mu__boolexpr1189 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1189)) mu__boolexpr1188 = FALSE ;
  else {
  mu__boolexpr1188 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1188)) mu__boolexpr1187 = FALSE ;
  else {
  mu__boolexpr1187 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1187)) mu__boolexpr1186 = FALSE ;
  else {
  mu__boolexpr1186 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1186)) mu__boolexpr1185 = FALSE ;
  else {
  mu__boolexpr1185 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1185)) mu__boolexpr1184 = FALSE ;
  else {
  mu__boolexpr1184 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1184);
};

bool mu__condition_1190() // Condition for Rule "test_reachable_state_150"
{
  return mu__invariant_1183( );
}

/**** end rule declaration ****/

int mu__invariant_1191() // Invariant "test_reachable_state_149"
{
bool mu__boolexpr1192;
bool mu__boolexpr1193;
bool mu__boolexpr1194;
bool mu__boolexpr1195;
bool mu__boolexpr1196;
bool mu__boolexpr1197;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1197 = FALSE ;
  else {
  mu__boolexpr1197 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1197)) mu__boolexpr1196 = FALSE ;
  else {
  mu__boolexpr1196 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1196)) mu__boolexpr1195 = FALSE ;
  else {
  mu__boolexpr1195 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1195)) mu__boolexpr1194 = FALSE ;
  else {
  mu__boolexpr1194 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1194)) mu__boolexpr1193 = FALSE ;
  else {
  mu__boolexpr1193 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1193)) mu__boolexpr1192 = FALSE ;
  else {
  mu__boolexpr1192 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Tip)) ; 
}
return !(mu__boolexpr1192);
};

bool mu__condition_1198() // Condition for Rule "test_reachable_state_149"
{
  return mu__invariant_1191( );
}

/**** end rule declaration ****/

int mu__invariant_1199() // Invariant "test_reachable_state_148"
{
bool mu__boolexpr1200;
bool mu__boolexpr1201;
bool mu__boolexpr1202;
bool mu__boolexpr1203;
bool mu__boolexpr1204;
bool mu__boolexpr1205;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1205 = FALSE ;
  else {
  mu__boolexpr1205 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1205)) mu__boolexpr1204 = FALSE ;
  else {
  mu__boolexpr1204 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1204)) mu__boolexpr1203 = FALSE ;
  else {
  mu__boolexpr1203 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1203)) mu__boolexpr1202 = FALSE ;
  else {
  mu__boolexpr1202 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1202)) mu__boolexpr1201 = FALSE ;
  else {
  mu__boolexpr1201 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1201)) mu__boolexpr1200 = FALSE ;
  else {
  mu__boolexpr1200 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1200);
};

bool mu__condition_1206() // Condition for Rule "test_reachable_state_148"
{
  return mu__invariant_1199( );
}

/**** end rule declaration ****/

int mu__invariant_1207() // Invariant "test_reachable_state_147"
{
bool mu__boolexpr1208;
bool mu__boolexpr1209;
bool mu__boolexpr1210;
bool mu__boolexpr1211;
bool mu__boolexpr1212;
bool mu__boolexpr1213;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1213 = FALSE ;
  else {
  mu__boolexpr1213 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1213)) mu__boolexpr1212 = FALSE ;
  else {
  mu__boolexpr1212 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1212)) mu__boolexpr1211 = FALSE ;
  else {
  mu__boolexpr1211 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1211)) mu__boolexpr1210 = FALSE ;
  else {
  mu__boolexpr1210 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1210)) mu__boolexpr1209 = FALSE ;
  else {
  mu__boolexpr1209 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1209)) mu__boolexpr1208 = FALSE ;
  else {
  mu__boolexpr1208 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1208);
};

bool mu__condition_1214() // Condition for Rule "test_reachable_state_147"
{
  return mu__invariant_1207( );
}

/**** end rule declaration ****/

int mu__invariant_1215() // Invariant "test_reachable_state_146"
{
bool mu__boolexpr1216;
bool mu__boolexpr1217;
bool mu__boolexpr1218;
bool mu__boolexpr1219;
bool mu__boolexpr1220;
bool mu__boolexpr1221;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1221 = FALSE ;
  else {
  mu__boolexpr1221 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1221)) mu__boolexpr1220 = FALSE ;
  else {
  mu__boolexpr1220 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1220)) mu__boolexpr1219 = FALSE ;
  else {
  mu__boolexpr1219 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1219)) mu__boolexpr1218 = FALSE ;
  else {
  mu__boolexpr1218 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1218)) mu__boolexpr1217 = FALSE ;
  else {
  mu__boolexpr1217 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1217)) mu__boolexpr1216 = FALSE ;
  else {
  mu__boolexpr1216 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1216);
};

bool mu__condition_1222() // Condition for Rule "test_reachable_state_146"
{
  return mu__invariant_1215( );
}

/**** end rule declaration ****/

int mu__invariant_1223() // Invariant "test_reachable_state_145"
{
bool mu__boolexpr1224;
bool mu__boolexpr1225;
bool mu__boolexpr1226;
bool mu__boolexpr1227;
bool mu__boolexpr1228;
bool mu__boolexpr1229;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Trunk))) mu__boolexpr1229 = FALSE ;
  else {
  mu__boolexpr1229 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1229)) mu__boolexpr1228 = FALSE ;
  else {
  mu__boolexpr1228 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1228)) mu__boolexpr1227 = FALSE ;
  else {
  mu__boolexpr1227 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1227)) mu__boolexpr1226 = FALSE ;
  else {
  mu__boolexpr1226 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1226)) mu__boolexpr1225 = FALSE ;
  else {
  mu__boolexpr1225 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1225)) mu__boolexpr1224 = FALSE ;
  else {
  mu__boolexpr1224 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Tip)) ; 
}
return !(mu__boolexpr1224);
};

bool mu__condition_1230() // Condition for Rule "test_reachable_state_145"
{
  return mu__invariant_1223( );
}

/**** end rule declaration ****/

int mu__invariant_1231() // Invariant "test_reachable_state_144"
{
bool mu__boolexpr1232;
bool mu__boolexpr1233;
bool mu__boolexpr1234;
bool mu__boolexpr1235;
bool mu__boolexpr1236;
bool mu__boolexpr1237;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1237 = FALSE ;
  else {
  mu__boolexpr1237 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1237)) mu__boolexpr1236 = FALSE ;
  else {
  mu__boolexpr1236 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1236)) mu__boolexpr1235 = FALSE ;
  else {
  mu__boolexpr1235 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1235)) mu__boolexpr1234 = FALSE ;
  else {
  mu__boolexpr1234 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1234)) mu__boolexpr1233 = FALSE ;
  else {
  mu__boolexpr1233 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1233)) mu__boolexpr1232 = FALSE ;
  else {
  mu__boolexpr1232 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1232);
};

bool mu__condition_1238() // Condition for Rule "test_reachable_state_144"
{
  return mu__invariant_1231( );
}

/**** end rule declaration ****/

int mu__invariant_1239() // Invariant "test_reachable_state_143"
{
bool mu__boolexpr1240;
bool mu__boolexpr1241;
bool mu__boolexpr1242;
bool mu__boolexpr1243;
bool mu__boolexpr1244;
bool mu__boolexpr1245;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1245 = FALSE ;
  else {
  mu__boolexpr1245 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1245)) mu__boolexpr1244 = FALSE ;
  else {
  mu__boolexpr1244 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1244)) mu__boolexpr1243 = FALSE ;
  else {
  mu__boolexpr1243 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1243)) mu__boolexpr1242 = FALSE ;
  else {
  mu__boolexpr1242 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1242)) mu__boolexpr1241 = FALSE ;
  else {
  mu__boolexpr1241 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1241)) mu__boolexpr1240 = FALSE ;
  else {
  mu__boolexpr1240 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1240);
};

bool mu__condition_1246() // Condition for Rule "test_reachable_state_143"
{
  return mu__invariant_1239( );
}

/**** end rule declaration ****/

int mu__invariant_1247() // Invariant "test_reachable_state_142"
{
bool mu__boolexpr1248;
bool mu__boolexpr1249;
bool mu__boolexpr1250;
bool mu__boolexpr1251;
bool mu__boolexpr1252;
bool mu__boolexpr1253;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1253 = FALSE ;
  else {
  mu__boolexpr1253 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1253)) mu__boolexpr1252 = FALSE ;
  else {
  mu__boolexpr1252 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1252)) mu__boolexpr1251 = FALSE ;
  else {
  mu__boolexpr1251 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1251)) mu__boolexpr1250 = FALSE ;
  else {
  mu__boolexpr1250 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1250)) mu__boolexpr1249 = FALSE ;
  else {
  mu__boolexpr1249 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1249)) mu__boolexpr1248 = FALSE ;
  else {
  mu__boolexpr1248 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1248);
};

bool mu__condition_1254() // Condition for Rule "test_reachable_state_142"
{
  return mu__invariant_1247( );
}

/**** end rule declaration ****/

int mu__invariant_1255() // Invariant "test_reachable_state_141"
{
bool mu__boolexpr1256;
bool mu__boolexpr1257;
bool mu__boolexpr1258;
bool mu__boolexpr1259;
bool mu__boolexpr1260;
bool mu__boolexpr1261;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1261 = FALSE ;
  else {
  mu__boolexpr1261 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1261)) mu__boolexpr1260 = FALSE ;
  else {
  mu__boolexpr1260 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1260)) mu__boolexpr1259 = FALSE ;
  else {
  mu__boolexpr1259 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1259)) mu__boolexpr1258 = FALSE ;
  else {
  mu__boolexpr1258 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1258)) mu__boolexpr1257 = FALSE ;
  else {
  mu__boolexpr1257 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1257)) mu__boolexpr1256 = FALSE ;
  else {
  mu__boolexpr1256 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1256);
};

bool mu__condition_1262() // Condition for Rule "test_reachable_state_141"
{
  return mu__invariant_1255( );
}

/**** end rule declaration ****/

int mu__invariant_1263() // Invariant "test_reachable_state_140"
{
bool mu__boolexpr1264;
bool mu__boolexpr1265;
bool mu__boolexpr1266;
bool mu__boolexpr1267;
bool mu__boolexpr1268;
bool mu__boolexpr1269;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1269 = FALSE ;
  else {
  mu__boolexpr1269 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1269)) mu__boolexpr1268 = FALSE ;
  else {
  mu__boolexpr1268 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1268)) mu__boolexpr1267 = FALSE ;
  else {
  mu__boolexpr1267 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1267)) mu__boolexpr1266 = FALSE ;
  else {
  mu__boolexpr1266 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1266)) mu__boolexpr1265 = FALSE ;
  else {
  mu__boolexpr1265 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1265)) mu__boolexpr1264 = FALSE ;
  else {
  mu__boolexpr1264 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1264);
};

bool mu__condition_1270() // Condition for Rule "test_reachable_state_140"
{
  return mu__invariant_1263( );
}

/**** end rule declaration ****/

int mu__invariant_1271() // Invariant "test_reachable_state_139"
{
bool mu__boolexpr1272;
bool mu__boolexpr1273;
bool mu__boolexpr1274;
bool mu__boolexpr1275;
bool mu__boolexpr1276;
bool mu__boolexpr1277;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1277 = FALSE ;
  else {
  mu__boolexpr1277 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1277)) mu__boolexpr1276 = FALSE ;
  else {
  mu__boolexpr1276 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1276)) mu__boolexpr1275 = FALSE ;
  else {
  mu__boolexpr1275 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1275)) mu__boolexpr1274 = FALSE ;
  else {
  mu__boolexpr1274 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1274)) mu__boolexpr1273 = FALSE ;
  else {
  mu__boolexpr1273 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1273)) mu__boolexpr1272 = FALSE ;
  else {
  mu__boolexpr1272 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1272);
};

bool mu__condition_1278() // Condition for Rule "test_reachable_state_139"
{
  return mu__invariant_1271( );
}

/**** end rule declaration ****/

int mu__invariant_1279() // Invariant "test_reachable_state_138"
{
bool mu__boolexpr1280;
bool mu__boolexpr1281;
bool mu__boolexpr1282;
bool mu__boolexpr1283;
bool mu__boolexpr1284;
bool mu__boolexpr1285;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1285 = FALSE ;
  else {
  mu__boolexpr1285 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1285)) mu__boolexpr1284 = FALSE ;
  else {
  mu__boolexpr1284 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1284)) mu__boolexpr1283 = FALSE ;
  else {
  mu__boolexpr1283 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1283)) mu__boolexpr1282 = FALSE ;
  else {
  mu__boolexpr1282 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1282)) mu__boolexpr1281 = FALSE ;
  else {
  mu__boolexpr1281 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1281)) mu__boolexpr1280 = FALSE ;
  else {
  mu__boolexpr1280 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1280);
};

bool mu__condition_1286() // Condition for Rule "test_reachable_state_138"
{
  return mu__invariant_1279( );
}

/**** end rule declaration ****/

int mu__invariant_1287() // Invariant "test_reachable_state_137"
{
bool mu__boolexpr1288;
bool mu__boolexpr1289;
bool mu__boolexpr1290;
bool mu__boolexpr1291;
bool mu__boolexpr1292;
bool mu__boolexpr1293;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1293 = FALSE ;
  else {
  mu__boolexpr1293 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1293)) mu__boolexpr1292 = FALSE ;
  else {
  mu__boolexpr1292 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1292)) mu__boolexpr1291 = FALSE ;
  else {
  mu__boolexpr1291 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1291)) mu__boolexpr1290 = FALSE ;
  else {
  mu__boolexpr1290 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1290)) mu__boolexpr1289 = FALSE ;
  else {
  mu__boolexpr1289 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1289)) mu__boolexpr1288 = FALSE ;
  else {
  mu__boolexpr1288 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1288);
};

bool mu__condition_1294() // Condition for Rule "test_reachable_state_137"
{
  return mu__invariant_1287( );
}

/**** end rule declaration ****/

int mu__invariant_1295() // Invariant "test_reachable_state_136"
{
bool mu__boolexpr1296;
bool mu__boolexpr1297;
bool mu__boolexpr1298;
bool mu__boolexpr1299;
bool mu__boolexpr1300;
bool mu__boolexpr1301;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1301 = FALSE ;
  else {
  mu__boolexpr1301 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1301)) mu__boolexpr1300 = FALSE ;
  else {
  mu__boolexpr1300 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1300)) mu__boolexpr1299 = FALSE ;
  else {
  mu__boolexpr1299 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1299)) mu__boolexpr1298 = FALSE ;
  else {
  mu__boolexpr1298 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1298)) mu__boolexpr1297 = FALSE ;
  else {
  mu__boolexpr1297 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1297)) mu__boolexpr1296 = FALSE ;
  else {
  mu__boolexpr1296 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1296);
};

bool mu__condition_1302() // Condition for Rule "test_reachable_state_136"
{
  return mu__invariant_1295( );
}

/**** end rule declaration ****/

int mu__invariant_1303() // Invariant "test_reachable_state_135"
{
bool mu__boolexpr1304;
bool mu__boolexpr1305;
bool mu__boolexpr1306;
bool mu__boolexpr1307;
bool mu__boolexpr1308;
bool mu__boolexpr1309;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1309 = FALSE ;
  else {
  mu__boolexpr1309 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1309)) mu__boolexpr1308 = FALSE ;
  else {
  mu__boolexpr1308 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1308)) mu__boolexpr1307 = FALSE ;
  else {
  mu__boolexpr1307 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1307)) mu__boolexpr1306 = FALSE ;
  else {
  mu__boolexpr1306 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1306)) mu__boolexpr1305 = FALSE ;
  else {
  mu__boolexpr1305 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1305)) mu__boolexpr1304 = FALSE ;
  else {
  mu__boolexpr1304 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1304);
};

bool mu__condition_1310() // Condition for Rule "test_reachable_state_135"
{
  return mu__invariant_1303( );
}

/**** end rule declaration ****/

int mu__invariant_1311() // Invariant "test_reachable_state_134"
{
bool mu__boolexpr1312;
bool mu__boolexpr1313;
bool mu__boolexpr1314;
bool mu__boolexpr1315;
bool mu__boolexpr1316;
bool mu__boolexpr1317;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1317 = FALSE ;
  else {
  mu__boolexpr1317 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1317)) mu__boolexpr1316 = FALSE ;
  else {
  mu__boolexpr1316 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1316)) mu__boolexpr1315 = FALSE ;
  else {
  mu__boolexpr1315 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1315)) mu__boolexpr1314 = FALSE ;
  else {
  mu__boolexpr1314 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1314)) mu__boolexpr1313 = FALSE ;
  else {
  mu__boolexpr1313 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1313)) mu__boolexpr1312 = FALSE ;
  else {
  mu__boolexpr1312 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1312);
};

bool mu__condition_1318() // Condition for Rule "test_reachable_state_134"
{
  return mu__invariant_1311( );
}

/**** end rule declaration ****/

int mu__invariant_1319() // Invariant "test_reachable_state_133"
{
bool mu__boolexpr1320;
bool mu__boolexpr1321;
bool mu__boolexpr1322;
bool mu__boolexpr1323;
bool mu__boolexpr1324;
bool mu__boolexpr1325;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1325 = FALSE ;
  else {
  mu__boolexpr1325 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1325)) mu__boolexpr1324 = FALSE ;
  else {
  mu__boolexpr1324 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1324)) mu__boolexpr1323 = FALSE ;
  else {
  mu__boolexpr1323 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1323)) mu__boolexpr1322 = FALSE ;
  else {
  mu__boolexpr1322 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1322)) mu__boolexpr1321 = FALSE ;
  else {
  mu__boolexpr1321 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1321)) mu__boolexpr1320 = FALSE ;
  else {
  mu__boolexpr1320 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1320);
};

bool mu__condition_1326() // Condition for Rule "test_reachable_state_133"
{
  return mu__invariant_1319( );
}

/**** end rule declaration ****/

int mu__invariant_1327() // Invariant "test_reachable_state_132"
{
bool mu__boolexpr1328;
bool mu__boolexpr1329;
bool mu__boolexpr1330;
bool mu__boolexpr1331;
bool mu__boolexpr1332;
bool mu__boolexpr1333;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1333 = FALSE ;
  else {
  mu__boolexpr1333 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1333)) mu__boolexpr1332 = FALSE ;
  else {
  mu__boolexpr1332 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1332)) mu__boolexpr1331 = FALSE ;
  else {
  mu__boolexpr1331 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1331)) mu__boolexpr1330 = FALSE ;
  else {
  mu__boolexpr1330 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1330)) mu__boolexpr1329 = FALSE ;
  else {
  mu__boolexpr1329 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1329)) mu__boolexpr1328 = FALSE ;
  else {
  mu__boolexpr1328 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1328);
};

bool mu__condition_1334() // Condition for Rule "test_reachable_state_132"
{
  return mu__invariant_1327( );
}

/**** end rule declaration ****/

int mu__invariant_1335() // Invariant "test_reachable_state_131"
{
bool mu__boolexpr1336;
bool mu__boolexpr1337;
bool mu__boolexpr1338;
bool mu__boolexpr1339;
bool mu__boolexpr1340;
bool mu__boolexpr1341;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1341 = FALSE ;
  else {
  mu__boolexpr1341 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1341)) mu__boolexpr1340 = FALSE ;
  else {
  mu__boolexpr1340 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1340)) mu__boolexpr1339 = FALSE ;
  else {
  mu__boolexpr1339 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1339)) mu__boolexpr1338 = FALSE ;
  else {
  mu__boolexpr1338 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1338)) mu__boolexpr1337 = FALSE ;
  else {
  mu__boolexpr1337 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1337)) mu__boolexpr1336 = FALSE ;
  else {
  mu__boolexpr1336 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1336);
};

bool mu__condition_1342() // Condition for Rule "test_reachable_state_131"
{
  return mu__invariant_1335( );
}

/**** end rule declaration ****/

int mu__invariant_1343() // Invariant "test_reachable_state_130"
{
bool mu__boolexpr1344;
bool mu__boolexpr1345;
bool mu__boolexpr1346;
bool mu__boolexpr1347;
bool mu__boolexpr1348;
bool mu__boolexpr1349;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1349 = FALSE ;
  else {
  mu__boolexpr1349 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1349)) mu__boolexpr1348 = FALSE ;
  else {
  mu__boolexpr1348 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1348)) mu__boolexpr1347 = FALSE ;
  else {
  mu__boolexpr1347 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1347)) mu__boolexpr1346 = FALSE ;
  else {
  mu__boolexpr1346 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1346)) mu__boolexpr1345 = FALSE ;
  else {
  mu__boolexpr1345 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1345)) mu__boolexpr1344 = FALSE ;
  else {
  mu__boolexpr1344 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1344);
};

bool mu__condition_1350() // Condition for Rule "test_reachable_state_130"
{
  return mu__invariant_1343( );
}

/**** end rule declaration ****/

int mu__invariant_1351() // Invariant "test_reachable_state_129"
{
bool mu__boolexpr1352;
bool mu__boolexpr1353;
bool mu__boolexpr1354;
bool mu__boolexpr1355;
bool mu__boolexpr1356;
bool mu__boolexpr1357;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1357 = FALSE ;
  else {
  mu__boolexpr1357 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1357)) mu__boolexpr1356 = FALSE ;
  else {
  mu__boolexpr1356 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1356)) mu__boolexpr1355 = FALSE ;
  else {
  mu__boolexpr1355 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1355)) mu__boolexpr1354 = FALSE ;
  else {
  mu__boolexpr1354 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1354)) mu__boolexpr1353 = FALSE ;
  else {
  mu__boolexpr1353 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1353)) mu__boolexpr1352 = FALSE ;
  else {
  mu__boolexpr1352 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1352);
};

bool mu__condition_1358() // Condition for Rule "test_reachable_state_129"
{
  return mu__invariant_1351( );
}

/**** end rule declaration ****/

int mu__invariant_1359() // Invariant "test_reachable_state_128"
{
bool mu__boolexpr1360;
bool mu__boolexpr1361;
bool mu__boolexpr1362;
bool mu__boolexpr1363;
bool mu__boolexpr1364;
bool mu__boolexpr1365;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1365 = FALSE ;
  else {
  mu__boolexpr1365 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1365)) mu__boolexpr1364 = FALSE ;
  else {
  mu__boolexpr1364 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1364)) mu__boolexpr1363 = FALSE ;
  else {
  mu__boolexpr1363 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1363)) mu__boolexpr1362 = FALSE ;
  else {
  mu__boolexpr1362 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1362)) mu__boolexpr1361 = FALSE ;
  else {
  mu__boolexpr1361 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1361)) mu__boolexpr1360 = FALSE ;
  else {
  mu__boolexpr1360 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1360);
};

bool mu__condition_1366() // Condition for Rule "test_reachable_state_128"
{
  return mu__invariant_1359( );
}

/**** end rule declaration ****/

int mu__invariant_1367() // Invariant "test_reachable_state_127"
{
bool mu__boolexpr1368;
bool mu__boolexpr1369;
bool mu__boolexpr1370;
bool mu__boolexpr1371;
bool mu__boolexpr1372;
bool mu__boolexpr1373;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1373 = FALSE ;
  else {
  mu__boolexpr1373 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1373)) mu__boolexpr1372 = FALSE ;
  else {
  mu__boolexpr1372 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1372)) mu__boolexpr1371 = FALSE ;
  else {
  mu__boolexpr1371 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1371)) mu__boolexpr1370 = FALSE ;
  else {
  mu__boolexpr1370 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1370)) mu__boolexpr1369 = FALSE ;
  else {
  mu__boolexpr1369 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1369)) mu__boolexpr1368 = FALSE ;
  else {
  mu__boolexpr1368 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1368);
};

bool mu__condition_1374() // Condition for Rule "test_reachable_state_127"
{
  return mu__invariant_1367( );
}

/**** end rule declaration ****/

int mu__invariant_1375() // Invariant "test_reachable_state_126"
{
bool mu__boolexpr1376;
bool mu__boolexpr1377;
bool mu__boolexpr1378;
bool mu__boolexpr1379;
bool mu__boolexpr1380;
bool mu__boolexpr1381;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1381 = FALSE ;
  else {
  mu__boolexpr1381 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1381)) mu__boolexpr1380 = FALSE ;
  else {
  mu__boolexpr1380 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1380)) mu__boolexpr1379 = FALSE ;
  else {
  mu__boolexpr1379 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1379)) mu__boolexpr1378 = FALSE ;
  else {
  mu__boolexpr1378 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1378)) mu__boolexpr1377 = FALSE ;
  else {
  mu__boolexpr1377 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1377)) mu__boolexpr1376 = FALSE ;
  else {
  mu__boolexpr1376 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1376);
};

bool mu__condition_1382() // Condition for Rule "test_reachable_state_126"
{
  return mu__invariant_1375( );
}

/**** end rule declaration ****/

int mu__invariant_1383() // Invariant "test_reachable_state_125"
{
bool mu__boolexpr1384;
bool mu__boolexpr1385;
bool mu__boolexpr1386;
bool mu__boolexpr1387;
bool mu__boolexpr1388;
bool mu__boolexpr1389;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1389 = FALSE ;
  else {
  mu__boolexpr1389 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1389)) mu__boolexpr1388 = FALSE ;
  else {
  mu__boolexpr1388 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1388)) mu__boolexpr1387 = FALSE ;
  else {
  mu__boolexpr1387 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1387)) mu__boolexpr1386 = FALSE ;
  else {
  mu__boolexpr1386 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1386)) mu__boolexpr1385 = FALSE ;
  else {
  mu__boolexpr1385 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1385)) mu__boolexpr1384 = FALSE ;
  else {
  mu__boolexpr1384 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1384);
};

bool mu__condition_1390() // Condition for Rule "test_reachable_state_125"
{
  return mu__invariant_1383( );
}

/**** end rule declaration ****/

int mu__invariant_1391() // Invariant "test_reachable_state_124"
{
bool mu__boolexpr1392;
bool mu__boolexpr1393;
bool mu__boolexpr1394;
bool mu__boolexpr1395;
bool mu__boolexpr1396;
bool mu__boolexpr1397;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1397 = FALSE ;
  else {
  mu__boolexpr1397 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1397)) mu__boolexpr1396 = FALSE ;
  else {
  mu__boolexpr1396 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1396)) mu__boolexpr1395 = FALSE ;
  else {
  mu__boolexpr1395 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1395)) mu__boolexpr1394 = FALSE ;
  else {
  mu__boolexpr1394 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1394)) mu__boolexpr1393 = FALSE ;
  else {
  mu__boolexpr1393 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1393)) mu__boolexpr1392 = FALSE ;
  else {
  mu__boolexpr1392 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1392);
};

bool mu__condition_1398() // Condition for Rule "test_reachable_state_124"
{
  return mu__invariant_1391( );
}

/**** end rule declaration ****/

int mu__invariant_1399() // Invariant "test_reachable_state_123"
{
bool mu__boolexpr1400;
bool mu__boolexpr1401;
bool mu__boolexpr1402;
bool mu__boolexpr1403;
bool mu__boolexpr1404;
bool mu__boolexpr1405;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1405 = FALSE ;
  else {
  mu__boolexpr1405 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1405)) mu__boolexpr1404 = FALSE ;
  else {
  mu__boolexpr1404 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1404)) mu__boolexpr1403 = FALSE ;
  else {
  mu__boolexpr1403 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1403)) mu__boolexpr1402 = FALSE ;
  else {
  mu__boolexpr1402 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1402)) mu__boolexpr1401 = FALSE ;
  else {
  mu__boolexpr1401 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1401)) mu__boolexpr1400 = FALSE ;
  else {
  mu__boolexpr1400 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1400);
};

bool mu__condition_1406() // Condition for Rule "test_reachable_state_123"
{
  return mu__invariant_1399( );
}

/**** end rule declaration ****/

int mu__invariant_1407() // Invariant "test_reachable_state_122"
{
bool mu__boolexpr1408;
bool mu__boolexpr1409;
bool mu__boolexpr1410;
bool mu__boolexpr1411;
bool mu__boolexpr1412;
bool mu__boolexpr1413;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1413 = FALSE ;
  else {
  mu__boolexpr1413 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1413)) mu__boolexpr1412 = FALSE ;
  else {
  mu__boolexpr1412 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1412)) mu__boolexpr1411 = FALSE ;
  else {
  mu__boolexpr1411 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1411)) mu__boolexpr1410 = FALSE ;
  else {
  mu__boolexpr1410 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1410)) mu__boolexpr1409 = FALSE ;
  else {
  mu__boolexpr1409 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1409)) mu__boolexpr1408 = FALSE ;
  else {
  mu__boolexpr1408 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1408);
};

bool mu__condition_1414() // Condition for Rule "test_reachable_state_122"
{
  return mu__invariant_1407( );
}

/**** end rule declaration ****/

int mu__invariant_1415() // Invariant "test_reachable_state_121"
{
bool mu__boolexpr1416;
bool mu__boolexpr1417;
bool mu__boolexpr1418;
bool mu__boolexpr1419;
bool mu__boolexpr1420;
bool mu__boolexpr1421;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1421 = FALSE ;
  else {
  mu__boolexpr1421 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1421)) mu__boolexpr1420 = FALSE ;
  else {
  mu__boolexpr1420 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1420)) mu__boolexpr1419 = FALSE ;
  else {
  mu__boolexpr1419 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1419)) mu__boolexpr1418 = FALSE ;
  else {
  mu__boolexpr1418 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1418)) mu__boolexpr1417 = FALSE ;
  else {
  mu__boolexpr1417 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1417)) mu__boolexpr1416 = FALSE ;
  else {
  mu__boolexpr1416 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1416);
};

bool mu__condition_1422() // Condition for Rule "test_reachable_state_121"
{
  return mu__invariant_1415( );
}

/**** end rule declaration ****/

int mu__invariant_1423() // Invariant "test_reachable_state_120"
{
bool mu__boolexpr1424;
bool mu__boolexpr1425;
bool mu__boolexpr1426;
bool mu__boolexpr1427;
bool mu__boolexpr1428;
bool mu__boolexpr1429;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1429 = FALSE ;
  else {
  mu__boolexpr1429 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1429)) mu__boolexpr1428 = FALSE ;
  else {
  mu__boolexpr1428 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1428)) mu__boolexpr1427 = FALSE ;
  else {
  mu__boolexpr1427 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1427)) mu__boolexpr1426 = FALSE ;
  else {
  mu__boolexpr1426 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1426)) mu__boolexpr1425 = FALSE ;
  else {
  mu__boolexpr1425 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1425)) mu__boolexpr1424 = FALSE ;
  else {
  mu__boolexpr1424 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1424);
};

bool mu__condition_1430() // Condition for Rule "test_reachable_state_120"
{
  return mu__invariant_1423( );
}

/**** end rule declaration ****/

int mu__invariant_1431() // Invariant "test_reachable_state_119"
{
bool mu__boolexpr1432;
bool mu__boolexpr1433;
bool mu__boolexpr1434;
bool mu__boolexpr1435;
bool mu__boolexpr1436;
bool mu__boolexpr1437;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1437 = FALSE ;
  else {
  mu__boolexpr1437 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1437)) mu__boolexpr1436 = FALSE ;
  else {
  mu__boolexpr1436 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1436)) mu__boolexpr1435 = FALSE ;
  else {
  mu__boolexpr1435 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1435)) mu__boolexpr1434 = FALSE ;
  else {
  mu__boolexpr1434 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1434)) mu__boolexpr1433 = FALSE ;
  else {
  mu__boolexpr1433 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1433)) mu__boolexpr1432 = FALSE ;
  else {
  mu__boolexpr1432 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1432);
};

bool mu__condition_1438() // Condition for Rule "test_reachable_state_119"
{
  return mu__invariant_1431( );
}

/**** end rule declaration ****/

int mu__invariant_1439() // Invariant "test_reachable_state_118"
{
bool mu__boolexpr1440;
bool mu__boolexpr1441;
bool mu__boolexpr1442;
bool mu__boolexpr1443;
bool mu__boolexpr1444;
bool mu__boolexpr1445;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1445 = FALSE ;
  else {
  mu__boolexpr1445 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1445)) mu__boolexpr1444 = FALSE ;
  else {
  mu__boolexpr1444 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1444)) mu__boolexpr1443 = FALSE ;
  else {
  mu__boolexpr1443 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1443)) mu__boolexpr1442 = FALSE ;
  else {
  mu__boolexpr1442 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1442)) mu__boolexpr1441 = FALSE ;
  else {
  mu__boolexpr1441 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1441)) mu__boolexpr1440 = FALSE ;
  else {
  mu__boolexpr1440 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1440);
};

bool mu__condition_1446() // Condition for Rule "test_reachable_state_118"
{
  return mu__invariant_1439( );
}

/**** end rule declaration ****/

int mu__invariant_1447() // Invariant "test_reachable_state_117"
{
bool mu__boolexpr1448;
bool mu__boolexpr1449;
bool mu__boolexpr1450;
bool mu__boolexpr1451;
bool mu__boolexpr1452;
bool mu__boolexpr1453;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1453 = FALSE ;
  else {
  mu__boolexpr1453 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1453)) mu__boolexpr1452 = FALSE ;
  else {
  mu__boolexpr1452 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1452)) mu__boolexpr1451 = FALSE ;
  else {
  mu__boolexpr1451 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1451)) mu__boolexpr1450 = FALSE ;
  else {
  mu__boolexpr1450 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1450)) mu__boolexpr1449 = FALSE ;
  else {
  mu__boolexpr1449 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1449)) mu__boolexpr1448 = FALSE ;
  else {
  mu__boolexpr1448 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1448);
};

bool mu__condition_1454() // Condition for Rule "test_reachable_state_117"
{
  return mu__invariant_1447( );
}

/**** end rule declaration ****/

int mu__invariant_1455() // Invariant "test_reachable_state_116"
{
bool mu__boolexpr1456;
bool mu__boolexpr1457;
bool mu__boolexpr1458;
bool mu__boolexpr1459;
bool mu__boolexpr1460;
bool mu__boolexpr1461;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1461 = FALSE ;
  else {
  mu__boolexpr1461 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1461)) mu__boolexpr1460 = FALSE ;
  else {
  mu__boolexpr1460 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1460)) mu__boolexpr1459 = FALSE ;
  else {
  mu__boolexpr1459 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1459)) mu__boolexpr1458 = FALSE ;
  else {
  mu__boolexpr1458 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1458)) mu__boolexpr1457 = FALSE ;
  else {
  mu__boolexpr1457 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1457)) mu__boolexpr1456 = FALSE ;
  else {
  mu__boolexpr1456 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1456);
};

bool mu__condition_1462() // Condition for Rule "test_reachable_state_116"
{
  return mu__invariant_1455( );
}

/**** end rule declaration ****/

int mu__invariant_1463() // Invariant "test_reachable_state_115"
{
bool mu__boolexpr1464;
bool mu__boolexpr1465;
bool mu__boolexpr1466;
bool mu__boolexpr1467;
bool mu__boolexpr1468;
bool mu__boolexpr1469;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1469 = FALSE ;
  else {
  mu__boolexpr1469 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1469)) mu__boolexpr1468 = FALSE ;
  else {
  mu__boolexpr1468 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1468)) mu__boolexpr1467 = FALSE ;
  else {
  mu__boolexpr1467 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1467)) mu__boolexpr1466 = FALSE ;
  else {
  mu__boolexpr1466 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1466)) mu__boolexpr1465 = FALSE ;
  else {
  mu__boolexpr1465 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1465)) mu__boolexpr1464 = FALSE ;
  else {
  mu__boolexpr1464 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1464);
};

bool mu__condition_1470() // Condition for Rule "test_reachable_state_115"
{
  return mu__invariant_1463( );
}

/**** end rule declaration ****/

int mu__invariant_1471() // Invariant "test_reachable_state_114"
{
bool mu__boolexpr1472;
bool mu__boolexpr1473;
bool mu__boolexpr1474;
bool mu__boolexpr1475;
bool mu__boolexpr1476;
bool mu__boolexpr1477;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1477 = FALSE ;
  else {
  mu__boolexpr1477 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1477)) mu__boolexpr1476 = FALSE ;
  else {
  mu__boolexpr1476 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1476)) mu__boolexpr1475 = FALSE ;
  else {
  mu__boolexpr1475 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1475)) mu__boolexpr1474 = FALSE ;
  else {
  mu__boolexpr1474 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1474)) mu__boolexpr1473 = FALSE ;
  else {
  mu__boolexpr1473 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1473)) mu__boolexpr1472 = FALSE ;
  else {
  mu__boolexpr1472 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1472);
};

bool mu__condition_1478() // Condition for Rule "test_reachable_state_114"
{
  return mu__invariant_1471( );
}

/**** end rule declaration ****/

int mu__invariant_1479() // Invariant "test_reachable_state_113"
{
bool mu__boolexpr1480;
bool mu__boolexpr1481;
bool mu__boolexpr1482;
bool mu__boolexpr1483;
bool mu__boolexpr1484;
bool mu__boolexpr1485;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1485 = FALSE ;
  else {
  mu__boolexpr1485 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1485)) mu__boolexpr1484 = FALSE ;
  else {
  mu__boolexpr1484 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1484)) mu__boolexpr1483 = FALSE ;
  else {
  mu__boolexpr1483 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1483)) mu__boolexpr1482 = FALSE ;
  else {
  mu__boolexpr1482 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1482)) mu__boolexpr1481 = FALSE ;
  else {
  mu__boolexpr1481 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1481)) mu__boolexpr1480 = FALSE ;
  else {
  mu__boolexpr1480 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1480);
};

bool mu__condition_1486() // Condition for Rule "test_reachable_state_113"
{
  return mu__invariant_1479( );
}

/**** end rule declaration ****/

int mu__invariant_1487() // Invariant "test_reachable_state_112"
{
bool mu__boolexpr1488;
bool mu__boolexpr1489;
bool mu__boolexpr1490;
bool mu__boolexpr1491;
bool mu__boolexpr1492;
bool mu__boolexpr1493;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1493 = FALSE ;
  else {
  mu__boolexpr1493 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1493)) mu__boolexpr1492 = FALSE ;
  else {
  mu__boolexpr1492 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1492)) mu__boolexpr1491 = FALSE ;
  else {
  mu__boolexpr1491 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1491)) mu__boolexpr1490 = FALSE ;
  else {
  mu__boolexpr1490 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1490)) mu__boolexpr1489 = FALSE ;
  else {
  mu__boolexpr1489 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1489)) mu__boolexpr1488 = FALSE ;
  else {
  mu__boolexpr1488 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1488);
};

bool mu__condition_1494() // Condition for Rule "test_reachable_state_112"
{
  return mu__invariant_1487( );
}

/**** end rule declaration ****/

int mu__invariant_1495() // Invariant "test_reachable_state_111"
{
bool mu__boolexpr1496;
bool mu__boolexpr1497;
bool mu__boolexpr1498;
bool mu__boolexpr1499;
bool mu__boolexpr1500;
bool mu__boolexpr1501;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1501 = FALSE ;
  else {
  mu__boolexpr1501 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1501)) mu__boolexpr1500 = FALSE ;
  else {
  mu__boolexpr1500 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1500)) mu__boolexpr1499 = FALSE ;
  else {
  mu__boolexpr1499 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1499)) mu__boolexpr1498 = FALSE ;
  else {
  mu__boolexpr1498 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1498)) mu__boolexpr1497 = FALSE ;
  else {
  mu__boolexpr1497 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1497)) mu__boolexpr1496 = FALSE ;
  else {
  mu__boolexpr1496 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1496);
};

bool mu__condition_1502() // Condition for Rule "test_reachable_state_111"
{
  return mu__invariant_1495( );
}

/**** end rule declaration ****/

int mu__invariant_1503() // Invariant "test_reachable_state_110"
{
bool mu__boolexpr1504;
bool mu__boolexpr1505;
bool mu__boolexpr1506;
bool mu__boolexpr1507;
bool mu__boolexpr1508;
bool mu__boolexpr1509;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1509 = FALSE ;
  else {
  mu__boolexpr1509 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1509)) mu__boolexpr1508 = FALSE ;
  else {
  mu__boolexpr1508 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1508)) mu__boolexpr1507 = FALSE ;
  else {
  mu__boolexpr1507 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1507)) mu__boolexpr1506 = FALSE ;
  else {
  mu__boolexpr1506 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1506)) mu__boolexpr1505 = FALSE ;
  else {
  mu__boolexpr1505 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1505)) mu__boolexpr1504 = FALSE ;
  else {
  mu__boolexpr1504 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1504);
};

bool mu__condition_1510() // Condition for Rule "test_reachable_state_110"
{
  return mu__invariant_1503( );
}

/**** end rule declaration ****/

int mu__invariant_1511() // Invariant "test_reachable_state_109"
{
bool mu__boolexpr1512;
bool mu__boolexpr1513;
bool mu__boolexpr1514;
bool mu__boolexpr1515;
bool mu__boolexpr1516;
bool mu__boolexpr1517;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1517 = FALSE ;
  else {
  mu__boolexpr1517 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1517)) mu__boolexpr1516 = FALSE ;
  else {
  mu__boolexpr1516 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1516)) mu__boolexpr1515 = FALSE ;
  else {
  mu__boolexpr1515 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1515)) mu__boolexpr1514 = FALSE ;
  else {
  mu__boolexpr1514 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1514)) mu__boolexpr1513 = FALSE ;
  else {
  mu__boolexpr1513 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1513)) mu__boolexpr1512 = FALSE ;
  else {
  mu__boolexpr1512 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1512);
};

bool mu__condition_1518() // Condition for Rule "test_reachable_state_109"
{
  return mu__invariant_1511( );
}

/**** end rule declaration ****/

int mu__invariant_1519() // Invariant "test_reachable_state_108"
{
bool mu__boolexpr1520;
bool mu__boolexpr1521;
bool mu__boolexpr1522;
bool mu__boolexpr1523;
bool mu__boolexpr1524;
bool mu__boolexpr1525;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1525 = FALSE ;
  else {
  mu__boolexpr1525 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1525)) mu__boolexpr1524 = FALSE ;
  else {
  mu__boolexpr1524 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1524)) mu__boolexpr1523 = FALSE ;
  else {
  mu__boolexpr1523 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1523)) mu__boolexpr1522 = FALSE ;
  else {
  mu__boolexpr1522 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1522)) mu__boolexpr1521 = FALSE ;
  else {
  mu__boolexpr1521 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1521)) mu__boolexpr1520 = FALSE ;
  else {
  mu__boolexpr1520 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1520);
};

bool mu__condition_1526() // Condition for Rule "test_reachable_state_108"
{
  return mu__invariant_1519( );
}

/**** end rule declaration ****/

int mu__invariant_1527() // Invariant "test_reachable_state_107"
{
bool mu__boolexpr1528;
bool mu__boolexpr1529;
bool mu__boolexpr1530;
bool mu__boolexpr1531;
bool mu__boolexpr1532;
bool mu__boolexpr1533;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1533 = FALSE ;
  else {
  mu__boolexpr1533 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1533)) mu__boolexpr1532 = FALSE ;
  else {
  mu__boolexpr1532 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1532)) mu__boolexpr1531 = FALSE ;
  else {
  mu__boolexpr1531 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1531)) mu__boolexpr1530 = FALSE ;
  else {
  mu__boolexpr1530 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1530)) mu__boolexpr1529 = FALSE ;
  else {
  mu__boolexpr1529 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1529)) mu__boolexpr1528 = FALSE ;
  else {
  mu__boolexpr1528 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1528);
};

bool mu__condition_1534() // Condition for Rule "test_reachable_state_107"
{
  return mu__invariant_1527( );
}

/**** end rule declaration ****/

int mu__invariant_1535() // Invariant "test_reachable_state_106"
{
bool mu__boolexpr1536;
bool mu__boolexpr1537;
bool mu__boolexpr1538;
bool mu__boolexpr1539;
bool mu__boolexpr1540;
bool mu__boolexpr1541;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1541 = FALSE ;
  else {
  mu__boolexpr1541 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1541)) mu__boolexpr1540 = FALSE ;
  else {
  mu__boolexpr1540 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1540)) mu__boolexpr1539 = FALSE ;
  else {
  mu__boolexpr1539 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1539)) mu__boolexpr1538 = FALSE ;
  else {
  mu__boolexpr1538 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1538)) mu__boolexpr1537 = FALSE ;
  else {
  mu__boolexpr1537 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1537)) mu__boolexpr1536 = FALSE ;
  else {
  mu__boolexpr1536 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1536);
};

bool mu__condition_1542() // Condition for Rule "test_reachable_state_106"
{
  return mu__invariant_1535( );
}

/**** end rule declaration ****/

int mu__invariant_1543() // Invariant "test_reachable_state_105"
{
bool mu__boolexpr1544;
bool mu__boolexpr1545;
bool mu__boolexpr1546;
bool mu__boolexpr1547;
bool mu__boolexpr1548;
bool mu__boolexpr1549;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1549 = FALSE ;
  else {
  mu__boolexpr1549 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1549)) mu__boolexpr1548 = FALSE ;
  else {
  mu__boolexpr1548 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1548)) mu__boolexpr1547 = FALSE ;
  else {
  mu__boolexpr1547 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1547)) mu__boolexpr1546 = FALSE ;
  else {
  mu__boolexpr1546 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1546)) mu__boolexpr1545 = FALSE ;
  else {
  mu__boolexpr1545 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1545)) mu__boolexpr1544 = FALSE ;
  else {
  mu__boolexpr1544 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1544);
};

bool mu__condition_1550() // Condition for Rule "test_reachable_state_105"
{
  return mu__invariant_1543( );
}

/**** end rule declaration ****/

int mu__invariant_1551() // Invariant "test_reachable_state_104"
{
bool mu__boolexpr1552;
bool mu__boolexpr1553;
bool mu__boolexpr1554;
bool mu__boolexpr1555;
bool mu__boolexpr1556;
bool mu__boolexpr1557;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1557 = FALSE ;
  else {
  mu__boolexpr1557 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1557)) mu__boolexpr1556 = FALSE ;
  else {
  mu__boolexpr1556 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1556)) mu__boolexpr1555 = FALSE ;
  else {
  mu__boolexpr1555 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1555)) mu__boolexpr1554 = FALSE ;
  else {
  mu__boolexpr1554 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1554)) mu__boolexpr1553 = FALSE ;
  else {
  mu__boolexpr1553 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1553)) mu__boolexpr1552 = FALSE ;
  else {
  mu__boolexpr1552 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1552);
};

bool mu__condition_1558() // Condition for Rule "test_reachable_state_104"
{
  return mu__invariant_1551( );
}

/**** end rule declaration ****/

int mu__invariant_1559() // Invariant "test_reachable_state_103"
{
bool mu__boolexpr1560;
bool mu__boolexpr1561;
bool mu__boolexpr1562;
bool mu__boolexpr1563;
bool mu__boolexpr1564;
bool mu__boolexpr1565;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1565 = FALSE ;
  else {
  mu__boolexpr1565 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1565)) mu__boolexpr1564 = FALSE ;
  else {
  mu__boolexpr1564 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1564)) mu__boolexpr1563 = FALSE ;
  else {
  mu__boolexpr1563 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1563)) mu__boolexpr1562 = FALSE ;
  else {
  mu__boolexpr1562 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1562)) mu__boolexpr1561 = FALSE ;
  else {
  mu__boolexpr1561 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1561)) mu__boolexpr1560 = FALSE ;
  else {
  mu__boolexpr1560 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1560);
};

bool mu__condition_1566() // Condition for Rule "test_reachable_state_103"
{
  return mu__invariant_1559( );
}

/**** end rule declaration ****/

int mu__invariant_1567() // Invariant "test_reachable_state_102"
{
bool mu__boolexpr1568;
bool mu__boolexpr1569;
bool mu__boolexpr1570;
bool mu__boolexpr1571;
bool mu__boolexpr1572;
bool mu__boolexpr1573;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1573 = FALSE ;
  else {
  mu__boolexpr1573 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1573)) mu__boolexpr1572 = FALSE ;
  else {
  mu__boolexpr1572 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1572)) mu__boolexpr1571 = FALSE ;
  else {
  mu__boolexpr1571 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1571)) mu__boolexpr1570 = FALSE ;
  else {
  mu__boolexpr1570 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1570)) mu__boolexpr1569 = FALSE ;
  else {
  mu__boolexpr1569 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1569)) mu__boolexpr1568 = FALSE ;
  else {
  mu__boolexpr1568 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1568);
};

bool mu__condition_1574() // Condition for Rule "test_reachable_state_102"
{
  return mu__invariant_1567( );
}

/**** end rule declaration ****/

int mu__invariant_1575() // Invariant "test_reachable_state_101"
{
bool mu__boolexpr1576;
bool mu__boolexpr1577;
bool mu__boolexpr1578;
bool mu__boolexpr1579;
bool mu__boolexpr1580;
bool mu__boolexpr1581;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1581 = FALSE ;
  else {
  mu__boolexpr1581 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1581)) mu__boolexpr1580 = FALSE ;
  else {
  mu__boolexpr1580 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1580)) mu__boolexpr1579 = FALSE ;
  else {
  mu__boolexpr1579 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1579)) mu__boolexpr1578 = FALSE ;
  else {
  mu__boolexpr1578 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1578)) mu__boolexpr1577 = FALSE ;
  else {
  mu__boolexpr1577 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1577)) mu__boolexpr1576 = FALSE ;
  else {
  mu__boolexpr1576 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1576);
};

bool mu__condition_1582() // Condition for Rule "test_reachable_state_101"
{
  return mu__invariant_1575( );
}

/**** end rule declaration ****/

int mu__invariant_1583() // Invariant "test_reachable_state_100"
{
bool mu__boolexpr1584;
bool mu__boolexpr1585;
bool mu__boolexpr1586;
bool mu__boolexpr1587;
bool mu__boolexpr1588;
bool mu__boolexpr1589;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1589 = FALSE ;
  else {
  mu__boolexpr1589 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1589)) mu__boolexpr1588 = FALSE ;
  else {
  mu__boolexpr1588 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1588)) mu__boolexpr1587 = FALSE ;
  else {
  mu__boolexpr1587 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1587)) mu__boolexpr1586 = FALSE ;
  else {
  mu__boolexpr1586 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1586)) mu__boolexpr1585 = FALSE ;
  else {
  mu__boolexpr1585 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1585)) mu__boolexpr1584 = FALSE ;
  else {
  mu__boolexpr1584 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1584);
};

bool mu__condition_1590() // Condition for Rule "test_reachable_state_100"
{
  return mu__invariant_1583( );
}

/**** end rule declaration ****/

int mu__invariant_1591() // Invariant "test_reachable_state_99"
{
bool mu__boolexpr1592;
bool mu__boolexpr1593;
bool mu__boolexpr1594;
bool mu__boolexpr1595;
bool mu__boolexpr1596;
bool mu__boolexpr1597;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1597 = FALSE ;
  else {
  mu__boolexpr1597 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1597)) mu__boolexpr1596 = FALSE ;
  else {
  mu__boolexpr1596 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1596)) mu__boolexpr1595 = FALSE ;
  else {
  mu__boolexpr1595 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1595)) mu__boolexpr1594 = FALSE ;
  else {
  mu__boolexpr1594 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1594)) mu__boolexpr1593 = FALSE ;
  else {
  mu__boolexpr1593 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1593)) mu__boolexpr1592 = FALSE ;
  else {
  mu__boolexpr1592 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1592);
};

bool mu__condition_1598() // Condition for Rule "test_reachable_state_99"
{
  return mu__invariant_1591( );
}

/**** end rule declaration ****/

int mu__invariant_1599() // Invariant "test_reachable_state_98"
{
bool mu__boolexpr1600;
bool mu__boolexpr1601;
bool mu__boolexpr1602;
bool mu__boolexpr1603;
bool mu__boolexpr1604;
bool mu__boolexpr1605;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1605 = FALSE ;
  else {
  mu__boolexpr1605 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1605)) mu__boolexpr1604 = FALSE ;
  else {
  mu__boolexpr1604 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1604)) mu__boolexpr1603 = FALSE ;
  else {
  mu__boolexpr1603 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1603)) mu__boolexpr1602 = FALSE ;
  else {
  mu__boolexpr1602 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1602)) mu__boolexpr1601 = FALSE ;
  else {
  mu__boolexpr1601 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1601)) mu__boolexpr1600 = FALSE ;
  else {
  mu__boolexpr1600 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1600);
};

bool mu__condition_1606() // Condition for Rule "test_reachable_state_98"
{
  return mu__invariant_1599( );
}

/**** end rule declaration ****/

int mu__invariant_1607() // Invariant "test_reachable_state_97"
{
bool mu__boolexpr1608;
bool mu__boolexpr1609;
bool mu__boolexpr1610;
bool mu__boolexpr1611;
bool mu__boolexpr1612;
bool mu__boolexpr1613;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1613 = FALSE ;
  else {
  mu__boolexpr1613 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1613)) mu__boolexpr1612 = FALSE ;
  else {
  mu__boolexpr1612 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1612)) mu__boolexpr1611 = FALSE ;
  else {
  mu__boolexpr1611 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1611)) mu__boolexpr1610 = FALSE ;
  else {
  mu__boolexpr1610 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1610)) mu__boolexpr1609 = FALSE ;
  else {
  mu__boolexpr1609 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1609)) mu__boolexpr1608 = FALSE ;
  else {
  mu__boolexpr1608 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1608);
};

bool mu__condition_1614() // Condition for Rule "test_reachable_state_97"
{
  return mu__invariant_1607( );
}

/**** end rule declaration ****/

int mu__invariant_1615() // Invariant "test_reachable_state_96"
{
bool mu__boolexpr1616;
bool mu__boolexpr1617;
bool mu__boolexpr1618;
bool mu__boolexpr1619;
bool mu__boolexpr1620;
bool mu__boolexpr1621;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1621 = FALSE ;
  else {
  mu__boolexpr1621 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1621)) mu__boolexpr1620 = FALSE ;
  else {
  mu__boolexpr1620 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1620)) mu__boolexpr1619 = FALSE ;
  else {
  mu__boolexpr1619 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1619)) mu__boolexpr1618 = FALSE ;
  else {
  mu__boolexpr1618 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1618)) mu__boolexpr1617 = FALSE ;
  else {
  mu__boolexpr1617 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1617)) mu__boolexpr1616 = FALSE ;
  else {
  mu__boolexpr1616 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1616);
};

bool mu__condition_1622() // Condition for Rule "test_reachable_state_96"
{
  return mu__invariant_1615( );
}

/**** end rule declaration ****/

int mu__invariant_1623() // Invariant "test_reachable_state_95"
{
bool mu__boolexpr1624;
bool mu__boolexpr1625;
bool mu__boolexpr1626;
bool mu__boolexpr1627;
bool mu__boolexpr1628;
bool mu__boolexpr1629;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1629 = FALSE ;
  else {
  mu__boolexpr1629 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1629)) mu__boolexpr1628 = FALSE ;
  else {
  mu__boolexpr1628 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1628)) mu__boolexpr1627 = FALSE ;
  else {
  mu__boolexpr1627 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1627)) mu__boolexpr1626 = FALSE ;
  else {
  mu__boolexpr1626 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1626)) mu__boolexpr1625 = FALSE ;
  else {
  mu__boolexpr1625 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1625)) mu__boolexpr1624 = FALSE ;
  else {
  mu__boolexpr1624 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1624);
};

bool mu__condition_1630() // Condition for Rule "test_reachable_state_95"
{
  return mu__invariant_1623( );
}

/**** end rule declaration ****/

int mu__invariant_1631() // Invariant "test_reachable_state_94"
{
bool mu__boolexpr1632;
bool mu__boolexpr1633;
bool mu__boolexpr1634;
bool mu__boolexpr1635;
bool mu__boolexpr1636;
bool mu__boolexpr1637;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1637 = FALSE ;
  else {
  mu__boolexpr1637 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1637)) mu__boolexpr1636 = FALSE ;
  else {
  mu__boolexpr1636 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1636)) mu__boolexpr1635 = FALSE ;
  else {
  mu__boolexpr1635 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1635)) mu__boolexpr1634 = FALSE ;
  else {
  mu__boolexpr1634 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1634)) mu__boolexpr1633 = FALSE ;
  else {
  mu__boolexpr1633 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1633)) mu__boolexpr1632 = FALSE ;
  else {
  mu__boolexpr1632 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1632);
};

bool mu__condition_1638() // Condition for Rule "test_reachable_state_94"
{
  return mu__invariant_1631( );
}

/**** end rule declaration ****/

int mu__invariant_1639() // Invariant "test_reachable_state_93"
{
bool mu__boolexpr1640;
bool mu__boolexpr1641;
bool mu__boolexpr1642;
bool mu__boolexpr1643;
bool mu__boolexpr1644;
bool mu__boolexpr1645;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1645 = FALSE ;
  else {
  mu__boolexpr1645 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1645)) mu__boolexpr1644 = FALSE ;
  else {
  mu__boolexpr1644 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1644)) mu__boolexpr1643 = FALSE ;
  else {
  mu__boolexpr1643 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1643)) mu__boolexpr1642 = FALSE ;
  else {
  mu__boolexpr1642 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1642)) mu__boolexpr1641 = FALSE ;
  else {
  mu__boolexpr1641 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1641)) mu__boolexpr1640 = FALSE ;
  else {
  mu__boolexpr1640 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1640);
};

bool mu__condition_1646() // Condition for Rule "test_reachable_state_93"
{
  return mu__invariant_1639( );
}

/**** end rule declaration ****/

int mu__invariant_1647() // Invariant "test_reachable_state_92"
{
bool mu__boolexpr1648;
bool mu__boolexpr1649;
bool mu__boolexpr1650;
bool mu__boolexpr1651;
bool mu__boolexpr1652;
bool mu__boolexpr1653;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1653 = FALSE ;
  else {
  mu__boolexpr1653 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1653)) mu__boolexpr1652 = FALSE ;
  else {
  mu__boolexpr1652 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1652)) mu__boolexpr1651 = FALSE ;
  else {
  mu__boolexpr1651 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1651)) mu__boolexpr1650 = FALSE ;
  else {
  mu__boolexpr1650 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1650)) mu__boolexpr1649 = FALSE ;
  else {
  mu__boolexpr1649 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1649)) mu__boolexpr1648 = FALSE ;
  else {
  mu__boolexpr1648 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1648);
};

bool mu__condition_1654() // Condition for Rule "test_reachable_state_92"
{
  return mu__invariant_1647( );
}

/**** end rule declaration ****/

int mu__invariant_1655() // Invariant "test_reachable_state_91"
{
bool mu__boolexpr1656;
bool mu__boolexpr1657;
bool mu__boolexpr1658;
bool mu__boolexpr1659;
bool mu__boolexpr1660;
bool mu__boolexpr1661;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1661 = FALSE ;
  else {
  mu__boolexpr1661 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1661)) mu__boolexpr1660 = FALSE ;
  else {
  mu__boolexpr1660 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1660)) mu__boolexpr1659 = FALSE ;
  else {
  mu__boolexpr1659 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1659)) mu__boolexpr1658 = FALSE ;
  else {
  mu__boolexpr1658 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1658)) mu__boolexpr1657 = FALSE ;
  else {
  mu__boolexpr1657 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1657)) mu__boolexpr1656 = FALSE ;
  else {
  mu__boolexpr1656 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1656);
};

bool mu__condition_1662() // Condition for Rule "test_reachable_state_91"
{
  return mu__invariant_1655( );
}

/**** end rule declaration ****/

int mu__invariant_1663() // Invariant "test_reachable_state_90"
{
bool mu__boolexpr1664;
bool mu__boolexpr1665;
bool mu__boolexpr1666;
bool mu__boolexpr1667;
bool mu__boolexpr1668;
bool mu__boolexpr1669;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1669 = FALSE ;
  else {
  mu__boolexpr1669 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1669)) mu__boolexpr1668 = FALSE ;
  else {
  mu__boolexpr1668 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1668)) mu__boolexpr1667 = FALSE ;
  else {
  mu__boolexpr1667 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1667)) mu__boolexpr1666 = FALSE ;
  else {
  mu__boolexpr1666 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1666)) mu__boolexpr1665 = FALSE ;
  else {
  mu__boolexpr1665 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1665)) mu__boolexpr1664 = FALSE ;
  else {
  mu__boolexpr1664 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1664);
};

bool mu__condition_1670() // Condition for Rule "test_reachable_state_90"
{
  return mu__invariant_1663( );
}

/**** end rule declaration ****/

int mu__invariant_1671() // Invariant "test_reachable_state_89"
{
bool mu__boolexpr1672;
bool mu__boolexpr1673;
bool mu__boolexpr1674;
bool mu__boolexpr1675;
bool mu__boolexpr1676;
bool mu__boolexpr1677;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1677 = FALSE ;
  else {
  mu__boolexpr1677 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1677)) mu__boolexpr1676 = FALSE ;
  else {
  mu__boolexpr1676 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1676)) mu__boolexpr1675 = FALSE ;
  else {
  mu__boolexpr1675 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1675)) mu__boolexpr1674 = FALSE ;
  else {
  mu__boolexpr1674 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1674)) mu__boolexpr1673 = FALSE ;
  else {
  mu__boolexpr1673 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1673)) mu__boolexpr1672 = FALSE ;
  else {
  mu__boolexpr1672 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1672);
};

bool mu__condition_1678() // Condition for Rule "test_reachable_state_89"
{
  return mu__invariant_1671( );
}

/**** end rule declaration ****/

int mu__invariant_1679() // Invariant "test_reachable_state_88"
{
bool mu__boolexpr1680;
bool mu__boolexpr1681;
bool mu__boolexpr1682;
bool mu__boolexpr1683;
bool mu__boolexpr1684;
bool mu__boolexpr1685;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1685 = FALSE ;
  else {
  mu__boolexpr1685 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1685)) mu__boolexpr1684 = FALSE ;
  else {
  mu__boolexpr1684 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1684)) mu__boolexpr1683 = FALSE ;
  else {
  mu__boolexpr1683 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1683)) mu__boolexpr1682 = FALSE ;
  else {
  mu__boolexpr1682 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1682)) mu__boolexpr1681 = FALSE ;
  else {
  mu__boolexpr1681 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1681)) mu__boolexpr1680 = FALSE ;
  else {
  mu__boolexpr1680 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1680);
};

bool mu__condition_1686() // Condition for Rule "test_reachable_state_88"
{
  return mu__invariant_1679( );
}

/**** end rule declaration ****/

int mu__invariant_1687() // Invariant "test_reachable_state_87"
{
bool mu__boolexpr1688;
bool mu__boolexpr1689;
bool mu__boolexpr1690;
bool mu__boolexpr1691;
bool mu__boolexpr1692;
bool mu__boolexpr1693;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1693 = FALSE ;
  else {
  mu__boolexpr1693 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1693)) mu__boolexpr1692 = FALSE ;
  else {
  mu__boolexpr1692 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1692)) mu__boolexpr1691 = FALSE ;
  else {
  mu__boolexpr1691 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1691)) mu__boolexpr1690 = FALSE ;
  else {
  mu__boolexpr1690 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1690)) mu__boolexpr1689 = FALSE ;
  else {
  mu__boolexpr1689 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1689)) mu__boolexpr1688 = FALSE ;
  else {
  mu__boolexpr1688 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1688);
};

bool mu__condition_1694() // Condition for Rule "test_reachable_state_87"
{
  return mu__invariant_1687( );
}

/**** end rule declaration ****/

int mu__invariant_1695() // Invariant "test_reachable_state_86"
{
bool mu__boolexpr1696;
bool mu__boolexpr1697;
bool mu__boolexpr1698;
bool mu__boolexpr1699;
bool mu__boolexpr1700;
bool mu__boolexpr1701;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1701 = FALSE ;
  else {
  mu__boolexpr1701 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1701)) mu__boolexpr1700 = FALSE ;
  else {
  mu__boolexpr1700 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1700)) mu__boolexpr1699 = FALSE ;
  else {
  mu__boolexpr1699 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1699)) mu__boolexpr1698 = FALSE ;
  else {
  mu__boolexpr1698 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1698)) mu__boolexpr1697 = FALSE ;
  else {
  mu__boolexpr1697 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1697)) mu__boolexpr1696 = FALSE ;
  else {
  mu__boolexpr1696 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1696);
};

bool mu__condition_1702() // Condition for Rule "test_reachable_state_86"
{
  return mu__invariant_1695( );
}

/**** end rule declaration ****/

int mu__invariant_1703() // Invariant "test_reachable_state_85"
{
bool mu__boolexpr1704;
bool mu__boolexpr1705;
bool mu__boolexpr1706;
bool mu__boolexpr1707;
bool mu__boolexpr1708;
bool mu__boolexpr1709;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1709 = FALSE ;
  else {
  mu__boolexpr1709 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1709)) mu__boolexpr1708 = FALSE ;
  else {
  mu__boolexpr1708 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1708)) mu__boolexpr1707 = FALSE ;
  else {
  mu__boolexpr1707 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1707)) mu__boolexpr1706 = FALSE ;
  else {
  mu__boolexpr1706 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1706)) mu__boolexpr1705 = FALSE ;
  else {
  mu__boolexpr1705 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1705)) mu__boolexpr1704 = FALSE ;
  else {
  mu__boolexpr1704 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1704);
};

bool mu__condition_1710() // Condition for Rule "test_reachable_state_85"
{
  return mu__invariant_1703( );
}

/**** end rule declaration ****/

int mu__invariant_1711() // Invariant "test_reachable_state_84"
{
bool mu__boolexpr1712;
bool mu__boolexpr1713;
bool mu__boolexpr1714;
bool mu__boolexpr1715;
bool mu__boolexpr1716;
bool mu__boolexpr1717;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1717 = FALSE ;
  else {
  mu__boolexpr1717 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1717)) mu__boolexpr1716 = FALSE ;
  else {
  mu__boolexpr1716 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1716)) mu__boolexpr1715 = FALSE ;
  else {
  mu__boolexpr1715 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1715)) mu__boolexpr1714 = FALSE ;
  else {
  mu__boolexpr1714 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1714)) mu__boolexpr1713 = FALSE ;
  else {
  mu__boolexpr1713 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1713)) mu__boolexpr1712 = FALSE ;
  else {
  mu__boolexpr1712 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1712);
};

bool mu__condition_1718() // Condition for Rule "test_reachable_state_84"
{
  return mu__invariant_1711( );
}

/**** end rule declaration ****/

int mu__invariant_1719() // Invariant "test_reachable_state_83"
{
bool mu__boolexpr1720;
bool mu__boolexpr1721;
bool mu__boolexpr1722;
bool mu__boolexpr1723;
bool mu__boolexpr1724;
bool mu__boolexpr1725;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1725 = FALSE ;
  else {
  mu__boolexpr1725 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1725)) mu__boolexpr1724 = FALSE ;
  else {
  mu__boolexpr1724 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1724)) mu__boolexpr1723 = FALSE ;
  else {
  mu__boolexpr1723 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1723)) mu__boolexpr1722 = FALSE ;
  else {
  mu__boolexpr1722 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1722)) mu__boolexpr1721 = FALSE ;
  else {
  mu__boolexpr1721 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1721)) mu__boolexpr1720 = FALSE ;
  else {
  mu__boolexpr1720 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1720);
};

bool mu__condition_1726() // Condition for Rule "test_reachable_state_83"
{
  return mu__invariant_1719( );
}

/**** end rule declaration ****/

int mu__invariant_1727() // Invariant "test_reachable_state_82"
{
bool mu__boolexpr1728;
bool mu__boolexpr1729;
bool mu__boolexpr1730;
bool mu__boolexpr1731;
bool mu__boolexpr1732;
bool mu__boolexpr1733;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1733 = FALSE ;
  else {
  mu__boolexpr1733 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1733)) mu__boolexpr1732 = FALSE ;
  else {
  mu__boolexpr1732 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1732)) mu__boolexpr1731 = FALSE ;
  else {
  mu__boolexpr1731 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1731)) mu__boolexpr1730 = FALSE ;
  else {
  mu__boolexpr1730 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1730)) mu__boolexpr1729 = FALSE ;
  else {
  mu__boolexpr1729 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1729)) mu__boolexpr1728 = FALSE ;
  else {
  mu__boolexpr1728 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1728);
};

bool mu__condition_1734() // Condition for Rule "test_reachable_state_82"
{
  return mu__invariant_1727( );
}

/**** end rule declaration ****/

int mu__invariant_1735() // Invariant "test_reachable_state_81"
{
bool mu__boolexpr1736;
bool mu__boolexpr1737;
bool mu__boolexpr1738;
bool mu__boolexpr1739;
bool mu__boolexpr1740;
bool mu__boolexpr1741;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_Branch))) mu__boolexpr1741 = FALSE ;
  else {
  mu__boolexpr1741 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1741)) mu__boolexpr1740 = FALSE ;
  else {
  mu__boolexpr1740 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1740)) mu__boolexpr1739 = FALSE ;
  else {
  mu__boolexpr1739 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1739)) mu__boolexpr1738 = FALSE ;
  else {
  mu__boolexpr1738 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1738)) mu__boolexpr1737 = FALSE ;
  else {
  mu__boolexpr1737 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1737)) mu__boolexpr1736 = FALSE ;
  else {
  mu__boolexpr1736 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1736);
};

bool mu__condition_1742() // Condition for Rule "test_reachable_state_81"
{
  return mu__invariant_1735( );
}

/**** end rule declaration ****/

int mu__invariant_1743() // Invariant "test_reachable_state_80"
{
bool mu__boolexpr1744;
bool mu__boolexpr1745;
bool mu__boolexpr1746;
bool mu__boolexpr1747;
bool mu__boolexpr1748;
bool mu__boolexpr1749;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1749 = FALSE ;
  else {
  mu__boolexpr1749 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1749)) mu__boolexpr1748 = FALSE ;
  else {
  mu__boolexpr1748 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1748)) mu__boolexpr1747 = FALSE ;
  else {
  mu__boolexpr1747 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1747)) mu__boolexpr1746 = FALSE ;
  else {
  mu__boolexpr1746 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1746)) mu__boolexpr1745 = FALSE ;
  else {
  mu__boolexpr1745 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1745)) mu__boolexpr1744 = FALSE ;
  else {
  mu__boolexpr1744 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1744);
};

bool mu__condition_1750() // Condition for Rule "test_reachable_state_80"
{
  return mu__invariant_1743( );
}

/**** end rule declaration ****/

int mu__invariant_1751() // Invariant "test_reachable_state_79"
{
bool mu__boolexpr1752;
bool mu__boolexpr1753;
bool mu__boolexpr1754;
bool mu__boolexpr1755;
bool mu__boolexpr1756;
bool mu__boolexpr1757;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1757 = FALSE ;
  else {
  mu__boolexpr1757 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1757)) mu__boolexpr1756 = FALSE ;
  else {
  mu__boolexpr1756 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1756)) mu__boolexpr1755 = FALSE ;
  else {
  mu__boolexpr1755 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1755)) mu__boolexpr1754 = FALSE ;
  else {
  mu__boolexpr1754 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1754)) mu__boolexpr1753 = FALSE ;
  else {
  mu__boolexpr1753 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1753)) mu__boolexpr1752 = FALSE ;
  else {
  mu__boolexpr1752 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1752);
};

bool mu__condition_1758() // Condition for Rule "test_reachable_state_79"
{
  return mu__invariant_1751( );
}

/**** end rule declaration ****/

int mu__invariant_1759() // Invariant "test_reachable_state_78"
{
bool mu__boolexpr1760;
bool mu__boolexpr1761;
bool mu__boolexpr1762;
bool mu__boolexpr1763;
bool mu__boolexpr1764;
bool mu__boolexpr1765;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1765 = FALSE ;
  else {
  mu__boolexpr1765 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1765)) mu__boolexpr1764 = FALSE ;
  else {
  mu__boolexpr1764 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1764)) mu__boolexpr1763 = FALSE ;
  else {
  mu__boolexpr1763 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1763)) mu__boolexpr1762 = FALSE ;
  else {
  mu__boolexpr1762 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1762)) mu__boolexpr1761 = FALSE ;
  else {
  mu__boolexpr1761 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1761)) mu__boolexpr1760 = FALSE ;
  else {
  mu__boolexpr1760 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1760);
};

bool mu__condition_1766() // Condition for Rule "test_reachable_state_78"
{
  return mu__invariant_1759( );
}

/**** end rule declaration ****/

int mu__invariant_1767() // Invariant "test_reachable_state_77"
{
bool mu__boolexpr1768;
bool mu__boolexpr1769;
bool mu__boolexpr1770;
bool mu__boolexpr1771;
bool mu__boolexpr1772;
bool mu__boolexpr1773;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1773 = FALSE ;
  else {
  mu__boolexpr1773 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1773)) mu__boolexpr1772 = FALSE ;
  else {
  mu__boolexpr1772 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1772)) mu__boolexpr1771 = FALSE ;
  else {
  mu__boolexpr1771 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1771)) mu__boolexpr1770 = FALSE ;
  else {
  mu__boolexpr1770 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1770)) mu__boolexpr1769 = FALSE ;
  else {
  mu__boolexpr1769 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1769)) mu__boolexpr1768 = FALSE ;
  else {
  mu__boolexpr1768 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1768);
};

bool mu__condition_1774() // Condition for Rule "test_reachable_state_77"
{
  return mu__invariant_1767( );
}

/**** end rule declaration ****/

int mu__invariant_1775() // Invariant "test_reachable_state_76"
{
bool mu__boolexpr1776;
bool mu__boolexpr1777;
bool mu__boolexpr1778;
bool mu__boolexpr1779;
bool mu__boolexpr1780;
bool mu__boolexpr1781;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1781 = FALSE ;
  else {
  mu__boolexpr1781 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1781)) mu__boolexpr1780 = FALSE ;
  else {
  mu__boolexpr1780 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1780)) mu__boolexpr1779 = FALSE ;
  else {
  mu__boolexpr1779 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1779)) mu__boolexpr1778 = FALSE ;
  else {
  mu__boolexpr1778 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1778)) mu__boolexpr1777 = FALSE ;
  else {
  mu__boolexpr1777 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1777)) mu__boolexpr1776 = FALSE ;
  else {
  mu__boolexpr1776 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1776);
};

bool mu__condition_1782() // Condition for Rule "test_reachable_state_76"
{
  return mu__invariant_1775( );
}

/**** end rule declaration ****/

int mu__invariant_1783() // Invariant "test_reachable_state_75"
{
bool mu__boolexpr1784;
bool mu__boolexpr1785;
bool mu__boolexpr1786;
bool mu__boolexpr1787;
bool mu__boolexpr1788;
bool mu__boolexpr1789;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1789 = FALSE ;
  else {
  mu__boolexpr1789 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1789)) mu__boolexpr1788 = FALSE ;
  else {
  mu__boolexpr1788 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1788)) mu__boolexpr1787 = FALSE ;
  else {
  mu__boolexpr1787 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1787)) mu__boolexpr1786 = FALSE ;
  else {
  mu__boolexpr1786 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1786)) mu__boolexpr1785 = FALSE ;
  else {
  mu__boolexpr1785 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1785)) mu__boolexpr1784 = FALSE ;
  else {
  mu__boolexpr1784 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1784);
};

bool mu__condition_1790() // Condition for Rule "test_reachable_state_75"
{
  return mu__invariant_1783( );
}

/**** end rule declaration ****/

int mu__invariant_1791() // Invariant "test_reachable_state_74"
{
bool mu__boolexpr1792;
bool mu__boolexpr1793;
bool mu__boolexpr1794;
bool mu__boolexpr1795;
bool mu__boolexpr1796;
bool mu__boolexpr1797;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1797 = FALSE ;
  else {
  mu__boolexpr1797 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1797)) mu__boolexpr1796 = FALSE ;
  else {
  mu__boolexpr1796 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1796)) mu__boolexpr1795 = FALSE ;
  else {
  mu__boolexpr1795 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1795)) mu__boolexpr1794 = FALSE ;
  else {
  mu__boolexpr1794 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1794)) mu__boolexpr1793 = FALSE ;
  else {
  mu__boolexpr1793 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1793)) mu__boolexpr1792 = FALSE ;
  else {
  mu__boolexpr1792 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1792);
};

bool mu__condition_1798() // Condition for Rule "test_reachable_state_74"
{
  return mu__invariant_1791( );
}

/**** end rule declaration ****/

int mu__invariant_1799() // Invariant "test_reachable_state_73"
{
bool mu__boolexpr1800;
bool mu__boolexpr1801;
bool mu__boolexpr1802;
bool mu__boolexpr1803;
bool mu__boolexpr1804;
bool mu__boolexpr1805;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1805 = FALSE ;
  else {
  mu__boolexpr1805 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1805)) mu__boolexpr1804 = FALSE ;
  else {
  mu__boolexpr1804 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1804)) mu__boolexpr1803 = FALSE ;
  else {
  mu__boolexpr1803 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1803)) mu__boolexpr1802 = FALSE ;
  else {
  mu__boolexpr1802 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1802)) mu__boolexpr1801 = FALSE ;
  else {
  mu__boolexpr1801 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1801)) mu__boolexpr1800 = FALSE ;
  else {
  mu__boolexpr1800 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1800);
};

bool mu__condition_1806() // Condition for Rule "test_reachable_state_73"
{
  return mu__invariant_1799( );
}

/**** end rule declaration ****/

int mu__invariant_1807() // Invariant "test_reachable_state_72"
{
bool mu__boolexpr1808;
bool mu__boolexpr1809;
bool mu__boolexpr1810;
bool mu__boolexpr1811;
bool mu__boolexpr1812;
bool mu__boolexpr1813;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1813 = FALSE ;
  else {
  mu__boolexpr1813 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1813)) mu__boolexpr1812 = FALSE ;
  else {
  mu__boolexpr1812 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1812)) mu__boolexpr1811 = FALSE ;
  else {
  mu__boolexpr1811 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1811)) mu__boolexpr1810 = FALSE ;
  else {
  mu__boolexpr1810 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1810)) mu__boolexpr1809 = FALSE ;
  else {
  mu__boolexpr1809 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1809)) mu__boolexpr1808 = FALSE ;
  else {
  mu__boolexpr1808 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1808);
};

bool mu__condition_1814() // Condition for Rule "test_reachable_state_72"
{
  return mu__invariant_1807( );
}

/**** end rule declaration ****/

int mu__invariant_1815() // Invariant "test_reachable_state_71"
{
bool mu__boolexpr1816;
bool mu__boolexpr1817;
bool mu__boolexpr1818;
bool mu__boolexpr1819;
bool mu__boolexpr1820;
bool mu__boolexpr1821;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1821 = FALSE ;
  else {
  mu__boolexpr1821 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1821)) mu__boolexpr1820 = FALSE ;
  else {
  mu__boolexpr1820 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1820)) mu__boolexpr1819 = FALSE ;
  else {
  mu__boolexpr1819 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1819)) mu__boolexpr1818 = FALSE ;
  else {
  mu__boolexpr1818 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1818)) mu__boolexpr1817 = FALSE ;
  else {
  mu__boolexpr1817 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1817)) mu__boolexpr1816 = FALSE ;
  else {
  mu__boolexpr1816 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1816);
};

bool mu__condition_1822() // Condition for Rule "test_reachable_state_71"
{
  return mu__invariant_1815( );
}

/**** end rule declaration ****/

int mu__invariant_1823() // Invariant "test_reachable_state_70"
{
bool mu__boolexpr1824;
bool mu__boolexpr1825;
bool mu__boolexpr1826;
bool mu__boolexpr1827;
bool mu__boolexpr1828;
bool mu__boolexpr1829;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1829 = FALSE ;
  else {
  mu__boolexpr1829 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1829)) mu__boolexpr1828 = FALSE ;
  else {
  mu__boolexpr1828 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1828)) mu__boolexpr1827 = FALSE ;
  else {
  mu__boolexpr1827 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1827)) mu__boolexpr1826 = FALSE ;
  else {
  mu__boolexpr1826 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1826)) mu__boolexpr1825 = FALSE ;
  else {
  mu__boolexpr1825 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1825)) mu__boolexpr1824 = FALSE ;
  else {
  mu__boolexpr1824 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1824);
};

bool mu__condition_1830() // Condition for Rule "test_reachable_state_70"
{
  return mu__invariant_1823( );
}

/**** end rule declaration ****/

int mu__invariant_1831() // Invariant "test_reachable_state_69"
{
bool mu__boolexpr1832;
bool mu__boolexpr1833;
bool mu__boolexpr1834;
bool mu__boolexpr1835;
bool mu__boolexpr1836;
bool mu__boolexpr1837;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1837 = FALSE ;
  else {
  mu__boolexpr1837 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1837)) mu__boolexpr1836 = FALSE ;
  else {
  mu__boolexpr1836 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1836)) mu__boolexpr1835 = FALSE ;
  else {
  mu__boolexpr1835 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1835)) mu__boolexpr1834 = FALSE ;
  else {
  mu__boolexpr1834 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1834)) mu__boolexpr1833 = FALSE ;
  else {
  mu__boolexpr1833 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1833)) mu__boolexpr1832 = FALSE ;
  else {
  mu__boolexpr1832 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1832);
};

bool mu__condition_1838() // Condition for Rule "test_reachable_state_69"
{
  return mu__invariant_1831( );
}

/**** end rule declaration ****/

int mu__invariant_1839() // Invariant "test_reachable_state_68"
{
bool mu__boolexpr1840;
bool mu__boolexpr1841;
bool mu__boolexpr1842;
bool mu__boolexpr1843;
bool mu__boolexpr1844;
bool mu__boolexpr1845;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1845 = FALSE ;
  else {
  mu__boolexpr1845 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1845)) mu__boolexpr1844 = FALSE ;
  else {
  mu__boolexpr1844 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1844)) mu__boolexpr1843 = FALSE ;
  else {
  mu__boolexpr1843 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1843)) mu__boolexpr1842 = FALSE ;
  else {
  mu__boolexpr1842 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1842)) mu__boolexpr1841 = FALSE ;
  else {
  mu__boolexpr1841 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1841)) mu__boolexpr1840 = FALSE ;
  else {
  mu__boolexpr1840 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1840);
};

bool mu__condition_1846() // Condition for Rule "test_reachable_state_68"
{
  return mu__invariant_1839( );
}

/**** end rule declaration ****/

int mu__invariant_1847() // Invariant "test_reachable_state_67"
{
bool mu__boolexpr1848;
bool mu__boolexpr1849;
bool mu__boolexpr1850;
bool mu__boolexpr1851;
bool mu__boolexpr1852;
bool mu__boolexpr1853;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1853 = FALSE ;
  else {
  mu__boolexpr1853 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1853)) mu__boolexpr1852 = FALSE ;
  else {
  mu__boolexpr1852 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1852)) mu__boolexpr1851 = FALSE ;
  else {
  mu__boolexpr1851 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1851)) mu__boolexpr1850 = FALSE ;
  else {
  mu__boolexpr1850 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1850)) mu__boolexpr1849 = FALSE ;
  else {
  mu__boolexpr1849 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1849)) mu__boolexpr1848 = FALSE ;
  else {
  mu__boolexpr1848 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1848);
};

bool mu__condition_1854() // Condition for Rule "test_reachable_state_67"
{
  return mu__invariant_1847( );
}

/**** end rule declaration ****/

int mu__invariant_1855() // Invariant "test_reachable_state_66"
{
bool mu__boolexpr1856;
bool mu__boolexpr1857;
bool mu__boolexpr1858;
bool mu__boolexpr1859;
bool mu__boolexpr1860;
bool mu__boolexpr1861;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1861 = FALSE ;
  else {
  mu__boolexpr1861 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1861)) mu__boolexpr1860 = FALSE ;
  else {
  mu__boolexpr1860 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1860)) mu__boolexpr1859 = FALSE ;
  else {
  mu__boolexpr1859 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1859)) mu__boolexpr1858 = FALSE ;
  else {
  mu__boolexpr1858 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1858)) mu__boolexpr1857 = FALSE ;
  else {
  mu__boolexpr1857 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1857)) mu__boolexpr1856 = FALSE ;
  else {
  mu__boolexpr1856 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1856);
};

bool mu__condition_1862() // Condition for Rule "test_reachable_state_66"
{
  return mu__invariant_1855( );
}

/**** end rule declaration ****/

int mu__invariant_1863() // Invariant "test_reachable_state_65"
{
bool mu__boolexpr1864;
bool mu__boolexpr1865;
bool mu__boolexpr1866;
bool mu__boolexpr1867;
bool mu__boolexpr1868;
bool mu__boolexpr1869;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1869 = FALSE ;
  else {
  mu__boolexpr1869 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1869)) mu__boolexpr1868 = FALSE ;
  else {
  mu__boolexpr1868 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1868)) mu__boolexpr1867 = FALSE ;
  else {
  mu__boolexpr1867 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1867)) mu__boolexpr1866 = FALSE ;
  else {
  mu__boolexpr1866 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1866)) mu__boolexpr1865 = FALSE ;
  else {
  mu__boolexpr1865 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1865)) mu__boolexpr1864 = FALSE ;
  else {
  mu__boolexpr1864 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1864);
};

bool mu__condition_1870() // Condition for Rule "test_reachable_state_65"
{
  return mu__invariant_1863( );
}

/**** end rule declaration ****/

int mu__invariant_1871() // Invariant "test_reachable_state_64"
{
bool mu__boolexpr1872;
bool mu__boolexpr1873;
bool mu__boolexpr1874;
bool mu__boolexpr1875;
bool mu__boolexpr1876;
bool mu__boolexpr1877;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1877 = FALSE ;
  else {
  mu__boolexpr1877 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1877)) mu__boolexpr1876 = FALSE ;
  else {
  mu__boolexpr1876 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1876)) mu__boolexpr1875 = FALSE ;
  else {
  mu__boolexpr1875 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1875)) mu__boolexpr1874 = FALSE ;
  else {
  mu__boolexpr1874 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1874)) mu__boolexpr1873 = FALSE ;
  else {
  mu__boolexpr1873 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1873)) mu__boolexpr1872 = FALSE ;
  else {
  mu__boolexpr1872 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1872);
};

bool mu__condition_1878() // Condition for Rule "test_reachable_state_64"
{
  return mu__invariant_1871( );
}

/**** end rule declaration ****/

int mu__invariant_1879() // Invariant "test_reachable_state_63"
{
bool mu__boolexpr1880;
bool mu__boolexpr1881;
bool mu__boolexpr1882;
bool mu__boolexpr1883;
bool mu__boolexpr1884;
bool mu__boolexpr1885;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1885 = FALSE ;
  else {
  mu__boolexpr1885 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1885)) mu__boolexpr1884 = FALSE ;
  else {
  mu__boolexpr1884 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1884)) mu__boolexpr1883 = FALSE ;
  else {
  mu__boolexpr1883 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1883)) mu__boolexpr1882 = FALSE ;
  else {
  mu__boolexpr1882 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1882)) mu__boolexpr1881 = FALSE ;
  else {
  mu__boolexpr1881 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1881)) mu__boolexpr1880 = FALSE ;
  else {
  mu__boolexpr1880 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1880);
};

bool mu__condition_1886() // Condition for Rule "test_reachable_state_63"
{
  return mu__invariant_1879( );
}

/**** end rule declaration ****/

int mu__invariant_1887() // Invariant "test_reachable_state_62"
{
bool mu__boolexpr1888;
bool mu__boolexpr1889;
bool mu__boolexpr1890;
bool mu__boolexpr1891;
bool mu__boolexpr1892;
bool mu__boolexpr1893;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1893 = FALSE ;
  else {
  mu__boolexpr1893 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1893)) mu__boolexpr1892 = FALSE ;
  else {
  mu__boolexpr1892 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1892)) mu__boolexpr1891 = FALSE ;
  else {
  mu__boolexpr1891 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1891)) mu__boolexpr1890 = FALSE ;
  else {
  mu__boolexpr1890 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1890)) mu__boolexpr1889 = FALSE ;
  else {
  mu__boolexpr1889 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1889)) mu__boolexpr1888 = FALSE ;
  else {
  mu__boolexpr1888 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1888);
};

bool mu__condition_1894() // Condition for Rule "test_reachable_state_62"
{
  return mu__invariant_1887( );
}

/**** end rule declaration ****/

int mu__invariant_1895() // Invariant "test_reachable_state_61"
{
bool mu__boolexpr1896;
bool mu__boolexpr1897;
bool mu__boolexpr1898;
bool mu__boolexpr1899;
bool mu__boolexpr1900;
bool mu__boolexpr1901;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1901 = FALSE ;
  else {
  mu__boolexpr1901 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1901)) mu__boolexpr1900 = FALSE ;
  else {
  mu__boolexpr1900 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1900)) mu__boolexpr1899 = FALSE ;
  else {
  mu__boolexpr1899 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1899)) mu__boolexpr1898 = FALSE ;
  else {
  mu__boolexpr1898 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1898)) mu__boolexpr1897 = FALSE ;
  else {
  mu__boolexpr1897 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1897)) mu__boolexpr1896 = FALSE ;
  else {
  mu__boolexpr1896 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1896);
};

bool mu__condition_1902() // Condition for Rule "test_reachable_state_61"
{
  return mu__invariant_1895( );
}

/**** end rule declaration ****/

int mu__invariant_1903() // Invariant "test_reachable_state_60"
{
bool mu__boolexpr1904;
bool mu__boolexpr1905;
bool mu__boolexpr1906;
bool mu__boolexpr1907;
bool mu__boolexpr1908;
bool mu__boolexpr1909;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1909 = FALSE ;
  else {
  mu__boolexpr1909 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1909)) mu__boolexpr1908 = FALSE ;
  else {
  mu__boolexpr1908 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1908)) mu__boolexpr1907 = FALSE ;
  else {
  mu__boolexpr1907 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1907)) mu__boolexpr1906 = FALSE ;
  else {
  mu__boolexpr1906 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1906)) mu__boolexpr1905 = FALSE ;
  else {
  mu__boolexpr1905 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1905)) mu__boolexpr1904 = FALSE ;
  else {
  mu__boolexpr1904 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1904);
};

bool mu__condition_1910() // Condition for Rule "test_reachable_state_60"
{
  return mu__invariant_1903( );
}

/**** end rule declaration ****/

int mu__invariant_1911() // Invariant "test_reachable_state_59"
{
bool mu__boolexpr1912;
bool mu__boolexpr1913;
bool mu__boolexpr1914;
bool mu__boolexpr1915;
bool mu__boolexpr1916;
bool mu__boolexpr1917;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1917 = FALSE ;
  else {
  mu__boolexpr1917 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1917)) mu__boolexpr1916 = FALSE ;
  else {
  mu__boolexpr1916 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1916)) mu__boolexpr1915 = FALSE ;
  else {
  mu__boolexpr1915 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1915)) mu__boolexpr1914 = FALSE ;
  else {
  mu__boolexpr1914 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1914)) mu__boolexpr1913 = FALSE ;
  else {
  mu__boolexpr1913 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1913)) mu__boolexpr1912 = FALSE ;
  else {
  mu__boolexpr1912 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1912);
};

bool mu__condition_1918() // Condition for Rule "test_reachable_state_59"
{
  return mu__invariant_1911( );
}

/**** end rule declaration ****/

int mu__invariant_1919() // Invariant "test_reachable_state_58"
{
bool mu__boolexpr1920;
bool mu__boolexpr1921;
bool mu__boolexpr1922;
bool mu__boolexpr1923;
bool mu__boolexpr1924;
bool mu__boolexpr1925;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1925 = FALSE ;
  else {
  mu__boolexpr1925 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1925)) mu__boolexpr1924 = FALSE ;
  else {
  mu__boolexpr1924 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1924)) mu__boolexpr1923 = FALSE ;
  else {
  mu__boolexpr1923 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1923)) mu__boolexpr1922 = FALSE ;
  else {
  mu__boolexpr1922 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1922)) mu__boolexpr1921 = FALSE ;
  else {
  mu__boolexpr1921 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1921)) mu__boolexpr1920 = FALSE ;
  else {
  mu__boolexpr1920 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1920);
};

bool mu__condition_1926() // Condition for Rule "test_reachable_state_58"
{
  return mu__invariant_1919( );
}

/**** end rule declaration ****/

int mu__invariant_1927() // Invariant "test_reachable_state_57"
{
bool mu__boolexpr1928;
bool mu__boolexpr1929;
bool mu__boolexpr1930;
bool mu__boolexpr1931;
bool mu__boolexpr1932;
bool mu__boolexpr1933;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1933 = FALSE ;
  else {
  mu__boolexpr1933 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1933)) mu__boolexpr1932 = FALSE ;
  else {
  mu__boolexpr1932 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1932)) mu__boolexpr1931 = FALSE ;
  else {
  mu__boolexpr1931 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1931)) mu__boolexpr1930 = FALSE ;
  else {
  mu__boolexpr1930 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1930)) mu__boolexpr1929 = FALSE ;
  else {
  mu__boolexpr1929 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1929)) mu__boolexpr1928 = FALSE ;
  else {
  mu__boolexpr1928 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1928);
};

bool mu__condition_1934() // Condition for Rule "test_reachable_state_57"
{
  return mu__invariant_1927( );
}

/**** end rule declaration ****/

int mu__invariant_1935() // Invariant "test_reachable_state_56"
{
bool mu__boolexpr1936;
bool mu__boolexpr1937;
bool mu__boolexpr1938;
bool mu__boolexpr1939;
bool mu__boolexpr1940;
bool mu__boolexpr1941;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1941 = FALSE ;
  else {
  mu__boolexpr1941 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1941)) mu__boolexpr1940 = FALSE ;
  else {
  mu__boolexpr1940 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1940)) mu__boolexpr1939 = FALSE ;
  else {
  mu__boolexpr1939 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1939)) mu__boolexpr1938 = FALSE ;
  else {
  mu__boolexpr1938 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1938)) mu__boolexpr1937 = FALSE ;
  else {
  mu__boolexpr1937 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1937)) mu__boolexpr1936 = FALSE ;
  else {
  mu__boolexpr1936 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1936);
};

bool mu__condition_1942() // Condition for Rule "test_reachable_state_56"
{
  return mu__invariant_1935( );
}

/**** end rule declaration ****/

int mu__invariant_1943() // Invariant "test_reachable_state_55"
{
bool mu__boolexpr1944;
bool mu__boolexpr1945;
bool mu__boolexpr1946;
bool mu__boolexpr1947;
bool mu__boolexpr1948;
bool mu__boolexpr1949;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1949 = FALSE ;
  else {
  mu__boolexpr1949 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1949)) mu__boolexpr1948 = FALSE ;
  else {
  mu__boolexpr1948 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1948)) mu__boolexpr1947 = FALSE ;
  else {
  mu__boolexpr1947 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1947)) mu__boolexpr1946 = FALSE ;
  else {
  mu__boolexpr1946 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1946)) mu__boolexpr1945 = FALSE ;
  else {
  mu__boolexpr1945 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1945)) mu__boolexpr1944 = FALSE ;
  else {
  mu__boolexpr1944 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1944);
};

bool mu__condition_1950() // Condition for Rule "test_reachable_state_55"
{
  return mu__invariant_1943( );
}

/**** end rule declaration ****/

int mu__invariant_1951() // Invariant "test_reachable_state_54"
{
bool mu__boolexpr1952;
bool mu__boolexpr1953;
bool mu__boolexpr1954;
bool mu__boolexpr1955;
bool mu__boolexpr1956;
bool mu__boolexpr1957;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1957 = FALSE ;
  else {
  mu__boolexpr1957 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1957)) mu__boolexpr1956 = FALSE ;
  else {
  mu__boolexpr1956 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1956)) mu__boolexpr1955 = FALSE ;
  else {
  mu__boolexpr1955 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1955)) mu__boolexpr1954 = FALSE ;
  else {
  mu__boolexpr1954 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1954)) mu__boolexpr1953 = FALSE ;
  else {
  mu__boolexpr1953 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1953)) mu__boolexpr1952 = FALSE ;
  else {
  mu__boolexpr1952 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1952);
};

bool mu__condition_1958() // Condition for Rule "test_reachable_state_54"
{
  return mu__invariant_1951( );
}

/**** end rule declaration ****/

int mu__invariant_1959() // Invariant "test_reachable_state_53"
{
bool mu__boolexpr1960;
bool mu__boolexpr1961;
bool mu__boolexpr1962;
bool mu__boolexpr1963;
bool mu__boolexpr1964;
bool mu__boolexpr1965;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1965 = FALSE ;
  else {
  mu__boolexpr1965 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1965)) mu__boolexpr1964 = FALSE ;
  else {
  mu__boolexpr1964 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1964)) mu__boolexpr1963 = FALSE ;
  else {
  mu__boolexpr1963 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1963)) mu__boolexpr1962 = FALSE ;
  else {
  mu__boolexpr1962 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1962)) mu__boolexpr1961 = FALSE ;
  else {
  mu__boolexpr1961 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1961)) mu__boolexpr1960 = FALSE ;
  else {
  mu__boolexpr1960 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1960);
};

bool mu__condition_1966() // Condition for Rule "test_reachable_state_53"
{
  return mu__invariant_1959( );
}

/**** end rule declaration ****/

int mu__invariant_1967() // Invariant "test_reachable_state_52"
{
bool mu__boolexpr1968;
bool mu__boolexpr1969;
bool mu__boolexpr1970;
bool mu__boolexpr1971;
bool mu__boolexpr1972;
bool mu__boolexpr1973;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1973 = FALSE ;
  else {
  mu__boolexpr1973 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1973)) mu__boolexpr1972 = FALSE ;
  else {
  mu__boolexpr1972 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1972)) mu__boolexpr1971 = FALSE ;
  else {
  mu__boolexpr1971 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1971)) mu__boolexpr1970 = FALSE ;
  else {
  mu__boolexpr1970 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1970)) mu__boolexpr1969 = FALSE ;
  else {
  mu__boolexpr1969 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1969)) mu__boolexpr1968 = FALSE ;
  else {
  mu__boolexpr1968 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1968);
};

bool mu__condition_1974() // Condition for Rule "test_reachable_state_52"
{
  return mu__invariant_1967( );
}

/**** end rule declaration ****/

int mu__invariant_1975() // Invariant "test_reachable_state_51"
{
bool mu__boolexpr1976;
bool mu__boolexpr1977;
bool mu__boolexpr1978;
bool mu__boolexpr1979;
bool mu__boolexpr1980;
bool mu__boolexpr1981;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1981 = FALSE ;
  else {
  mu__boolexpr1981 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1981)) mu__boolexpr1980 = FALSE ;
  else {
  mu__boolexpr1980 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1980)) mu__boolexpr1979 = FALSE ;
  else {
  mu__boolexpr1979 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1979)) mu__boolexpr1978 = FALSE ;
  else {
  mu__boolexpr1978 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1978)) mu__boolexpr1977 = FALSE ;
  else {
  mu__boolexpr1977 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1977)) mu__boolexpr1976 = FALSE ;
  else {
  mu__boolexpr1976 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1976);
};

bool mu__condition_1982() // Condition for Rule "test_reachable_state_51"
{
  return mu__invariant_1975( );
}

/**** end rule declaration ****/

int mu__invariant_1983() // Invariant "test_reachable_state_50"
{
bool mu__boolexpr1984;
bool mu__boolexpr1985;
bool mu__boolexpr1986;
bool mu__boolexpr1987;
bool mu__boolexpr1988;
bool mu__boolexpr1989;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1989 = FALSE ;
  else {
  mu__boolexpr1989 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1989)) mu__boolexpr1988 = FALSE ;
  else {
  mu__boolexpr1988 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1988)) mu__boolexpr1987 = FALSE ;
  else {
  mu__boolexpr1987 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1987)) mu__boolexpr1986 = FALSE ;
  else {
  mu__boolexpr1986 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1986)) mu__boolexpr1985 = FALSE ;
  else {
  mu__boolexpr1985 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1985)) mu__boolexpr1984 = FALSE ;
  else {
  mu__boolexpr1984 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr1984);
};

bool mu__condition_1990() // Condition for Rule "test_reachable_state_50"
{
  return mu__invariant_1983( );
}

/**** end rule declaration ****/

int mu__invariant_1991() // Invariant "test_reachable_state_49"
{
bool mu__boolexpr1992;
bool mu__boolexpr1993;
bool mu__boolexpr1994;
bool mu__boolexpr1995;
bool mu__boolexpr1996;
bool mu__boolexpr1997;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr1997 = FALSE ;
  else {
  mu__boolexpr1997 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1997)) mu__boolexpr1996 = FALSE ;
  else {
  mu__boolexpr1996 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1996)) mu__boolexpr1995 = FALSE ;
  else {
  mu__boolexpr1995 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1995)) mu__boolexpr1994 = FALSE ;
  else {
  mu__boolexpr1994 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr1994)) mu__boolexpr1993 = FALSE ;
  else {
  mu__boolexpr1993 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1993)) mu__boolexpr1992 = FALSE ;
  else {
  mu__boolexpr1992 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr1992);
};

bool mu__condition_1998() // Condition for Rule "test_reachable_state_49"
{
  return mu__invariant_1991( );
}

/**** end rule declaration ****/

int mu__invariant_1999() // Invariant "test_reachable_state_48"
{
bool mu__boolexpr2000;
bool mu__boolexpr2001;
bool mu__boolexpr2002;
bool mu__boolexpr2003;
bool mu__boolexpr2004;
bool mu__boolexpr2005;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2005 = FALSE ;
  else {
  mu__boolexpr2005 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2005)) mu__boolexpr2004 = FALSE ;
  else {
  mu__boolexpr2004 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2004)) mu__boolexpr2003 = FALSE ;
  else {
  mu__boolexpr2003 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2003)) mu__boolexpr2002 = FALSE ;
  else {
  mu__boolexpr2002 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2002)) mu__boolexpr2001 = FALSE ;
  else {
  mu__boolexpr2001 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2001)) mu__boolexpr2000 = FALSE ;
  else {
  mu__boolexpr2000 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2000);
};

bool mu__condition_2006() // Condition for Rule "test_reachable_state_48"
{
  return mu__invariant_1999( );
}

/**** end rule declaration ****/

int mu__invariant_2007() // Invariant "test_reachable_state_47"
{
bool mu__boolexpr2008;
bool mu__boolexpr2009;
bool mu__boolexpr2010;
bool mu__boolexpr2011;
bool mu__boolexpr2012;
bool mu__boolexpr2013;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2013 = FALSE ;
  else {
  mu__boolexpr2013 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2013)) mu__boolexpr2012 = FALSE ;
  else {
  mu__boolexpr2012 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2012)) mu__boolexpr2011 = FALSE ;
  else {
  mu__boolexpr2011 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2011)) mu__boolexpr2010 = FALSE ;
  else {
  mu__boolexpr2010 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2010)) mu__boolexpr2009 = FALSE ;
  else {
  mu__boolexpr2009 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2009)) mu__boolexpr2008 = FALSE ;
  else {
  mu__boolexpr2008 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2008);
};

bool mu__condition_2014() // Condition for Rule "test_reachable_state_47"
{
  return mu__invariant_2007( );
}

/**** end rule declaration ****/

int mu__invariant_2015() // Invariant "test_reachable_state_46"
{
bool mu__boolexpr2016;
bool mu__boolexpr2017;
bool mu__boolexpr2018;
bool mu__boolexpr2019;
bool mu__boolexpr2020;
bool mu__boolexpr2021;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2021 = FALSE ;
  else {
  mu__boolexpr2021 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2021)) mu__boolexpr2020 = FALSE ;
  else {
  mu__boolexpr2020 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2020)) mu__boolexpr2019 = FALSE ;
  else {
  mu__boolexpr2019 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2019)) mu__boolexpr2018 = FALSE ;
  else {
  mu__boolexpr2018 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2018)) mu__boolexpr2017 = FALSE ;
  else {
  mu__boolexpr2017 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2017)) mu__boolexpr2016 = FALSE ;
  else {
  mu__boolexpr2016 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2016);
};

bool mu__condition_2022() // Condition for Rule "test_reachable_state_46"
{
  return mu__invariant_2015( );
}

/**** end rule declaration ****/

int mu__invariant_2023() // Invariant "test_reachable_state_45"
{
bool mu__boolexpr2024;
bool mu__boolexpr2025;
bool mu__boolexpr2026;
bool mu__boolexpr2027;
bool mu__boolexpr2028;
bool mu__boolexpr2029;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2029 = FALSE ;
  else {
  mu__boolexpr2029 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2029)) mu__boolexpr2028 = FALSE ;
  else {
  mu__boolexpr2028 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2028)) mu__boolexpr2027 = FALSE ;
  else {
  mu__boolexpr2027 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2027)) mu__boolexpr2026 = FALSE ;
  else {
  mu__boolexpr2026 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2026)) mu__boolexpr2025 = FALSE ;
  else {
  mu__boolexpr2025 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2025)) mu__boolexpr2024 = FALSE ;
  else {
  mu__boolexpr2024 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2024);
};

bool mu__condition_2030() // Condition for Rule "test_reachable_state_45"
{
  return mu__invariant_2023( );
}

/**** end rule declaration ****/

int mu__invariant_2031() // Invariant "test_reachable_state_44"
{
bool mu__boolexpr2032;
bool mu__boolexpr2033;
bool mu__boolexpr2034;
bool mu__boolexpr2035;
bool mu__boolexpr2036;
bool mu__boolexpr2037;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2037 = FALSE ;
  else {
  mu__boolexpr2037 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2037)) mu__boolexpr2036 = FALSE ;
  else {
  mu__boolexpr2036 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2036)) mu__boolexpr2035 = FALSE ;
  else {
  mu__boolexpr2035 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2035)) mu__boolexpr2034 = FALSE ;
  else {
  mu__boolexpr2034 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2034)) mu__boolexpr2033 = FALSE ;
  else {
  mu__boolexpr2033 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2033)) mu__boolexpr2032 = FALSE ;
  else {
  mu__boolexpr2032 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2032);
};

bool mu__condition_2038() // Condition for Rule "test_reachable_state_44"
{
  return mu__invariant_2031( );
}

/**** end rule declaration ****/

int mu__invariant_2039() // Invariant "test_reachable_state_43"
{
bool mu__boolexpr2040;
bool mu__boolexpr2041;
bool mu__boolexpr2042;
bool mu__boolexpr2043;
bool mu__boolexpr2044;
bool mu__boolexpr2045;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2045 = FALSE ;
  else {
  mu__boolexpr2045 = ((mu_Tree[2].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2045)) mu__boolexpr2044 = FALSE ;
  else {
  mu__boolexpr2044 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2044)) mu__boolexpr2043 = FALSE ;
  else {
  mu__boolexpr2043 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2043)) mu__boolexpr2042 = FALSE ;
  else {
  mu__boolexpr2042 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2042)) mu__boolexpr2041 = FALSE ;
  else {
  mu__boolexpr2041 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2041)) mu__boolexpr2040 = FALSE ;
  else {
  mu__boolexpr2040 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2040);
};

bool mu__condition_2046() // Condition for Rule "test_reachable_state_43"
{
  return mu__invariant_2039( );
}

/**** end rule declaration ****/

int mu__invariant_2047() // Invariant "test_reachable_state_42"
{
bool mu__boolexpr2048;
bool mu__boolexpr2049;
bool mu__boolexpr2050;
bool mu__boolexpr2051;
bool mu__boolexpr2052;
bool mu__boolexpr2053;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2053 = FALSE ;
  else {
  mu__boolexpr2053 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2053)) mu__boolexpr2052 = FALSE ;
  else {
  mu__boolexpr2052 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2052)) mu__boolexpr2051 = FALSE ;
  else {
  mu__boolexpr2051 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2051)) mu__boolexpr2050 = FALSE ;
  else {
  mu__boolexpr2050 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2050)) mu__boolexpr2049 = FALSE ;
  else {
  mu__boolexpr2049 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2049)) mu__boolexpr2048 = FALSE ;
  else {
  mu__boolexpr2048 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2048);
};

bool mu__condition_2054() // Condition for Rule "test_reachable_state_42"
{
  return mu__invariant_2047( );
}

/**** end rule declaration ****/

int mu__invariant_2055() // Invariant "test_reachable_state_41"
{
bool mu__boolexpr2056;
bool mu__boolexpr2057;
bool mu__boolexpr2058;
bool mu__boolexpr2059;
bool mu__boolexpr2060;
bool mu__boolexpr2061;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2061 = FALSE ;
  else {
  mu__boolexpr2061 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2061)) mu__boolexpr2060 = FALSE ;
  else {
  mu__boolexpr2060 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2060)) mu__boolexpr2059 = FALSE ;
  else {
  mu__boolexpr2059 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2059)) mu__boolexpr2058 = FALSE ;
  else {
  mu__boolexpr2058 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2058)) mu__boolexpr2057 = FALSE ;
  else {
  mu__boolexpr2057 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2057)) mu__boolexpr2056 = FALSE ;
  else {
  mu__boolexpr2056 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2056);
};

bool mu__condition_2062() // Condition for Rule "test_reachable_state_41"
{
  return mu__invariant_2055( );
}

/**** end rule declaration ****/

int mu__invariant_2063() // Invariant "test_reachable_state_40"
{
bool mu__boolexpr2064;
bool mu__boolexpr2065;
bool mu__boolexpr2066;
bool mu__boolexpr2067;
bool mu__boolexpr2068;
bool mu__boolexpr2069;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2069 = FALSE ;
  else {
  mu__boolexpr2069 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2069)) mu__boolexpr2068 = FALSE ;
  else {
  mu__boolexpr2068 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2068)) mu__boolexpr2067 = FALSE ;
  else {
  mu__boolexpr2067 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2067)) mu__boolexpr2066 = FALSE ;
  else {
  mu__boolexpr2066 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2066)) mu__boolexpr2065 = FALSE ;
  else {
  mu__boolexpr2065 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2065)) mu__boolexpr2064 = FALSE ;
  else {
  mu__boolexpr2064 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2064);
};

bool mu__condition_2070() // Condition for Rule "test_reachable_state_40"
{
  return mu__invariant_2063( );
}

/**** end rule declaration ****/

int mu__invariant_2071() // Invariant "test_reachable_state_39"
{
bool mu__boolexpr2072;
bool mu__boolexpr2073;
bool mu__boolexpr2074;
bool mu__boolexpr2075;
bool mu__boolexpr2076;
bool mu__boolexpr2077;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2077 = FALSE ;
  else {
  mu__boolexpr2077 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2077)) mu__boolexpr2076 = FALSE ;
  else {
  mu__boolexpr2076 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2076)) mu__boolexpr2075 = FALSE ;
  else {
  mu__boolexpr2075 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2075)) mu__boolexpr2074 = FALSE ;
  else {
  mu__boolexpr2074 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2074)) mu__boolexpr2073 = FALSE ;
  else {
  mu__boolexpr2073 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2073)) mu__boolexpr2072 = FALSE ;
  else {
  mu__boolexpr2072 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2072);
};

bool mu__condition_2078() // Condition for Rule "test_reachable_state_39"
{
  return mu__invariant_2071( );
}

/**** end rule declaration ****/

int mu__invariant_2079() // Invariant "test_reachable_state_38"
{
bool mu__boolexpr2080;
bool mu__boolexpr2081;
bool mu__boolexpr2082;
bool mu__boolexpr2083;
bool mu__boolexpr2084;
bool mu__boolexpr2085;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2085 = FALSE ;
  else {
  mu__boolexpr2085 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2085)) mu__boolexpr2084 = FALSE ;
  else {
  mu__boolexpr2084 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2084)) mu__boolexpr2083 = FALSE ;
  else {
  mu__boolexpr2083 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2083)) mu__boolexpr2082 = FALSE ;
  else {
  mu__boolexpr2082 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2082)) mu__boolexpr2081 = FALSE ;
  else {
  mu__boolexpr2081 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2081)) mu__boolexpr2080 = FALSE ;
  else {
  mu__boolexpr2080 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2080);
};

bool mu__condition_2086() // Condition for Rule "test_reachable_state_38"
{
  return mu__invariant_2079( );
}

/**** end rule declaration ****/

int mu__invariant_2087() // Invariant "test_reachable_state_37"
{
bool mu__boolexpr2088;
bool mu__boolexpr2089;
bool mu__boolexpr2090;
bool mu__boolexpr2091;
bool mu__boolexpr2092;
bool mu__boolexpr2093;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2093 = FALSE ;
  else {
  mu__boolexpr2093 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2093)) mu__boolexpr2092 = FALSE ;
  else {
  mu__boolexpr2092 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2092)) mu__boolexpr2091 = FALSE ;
  else {
  mu__boolexpr2091 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2091)) mu__boolexpr2090 = FALSE ;
  else {
  mu__boolexpr2090 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2090)) mu__boolexpr2089 = FALSE ;
  else {
  mu__boolexpr2089 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2089)) mu__boolexpr2088 = FALSE ;
  else {
  mu__boolexpr2088 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Tip)) ; 
}
return !(mu__boolexpr2088);
};

bool mu__condition_2094() // Condition for Rule "test_reachable_state_37"
{
  return mu__invariant_2087( );
}

/**** end rule declaration ****/

int mu__invariant_2095() // Invariant "test_reachable_state_36"
{
bool mu__boolexpr2096;
bool mu__boolexpr2097;
bool mu__boolexpr2098;
bool mu__boolexpr2099;
bool mu__boolexpr2100;
bool mu__boolexpr2101;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2101 = FALSE ;
  else {
  mu__boolexpr2101 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2101)) mu__boolexpr2100 = FALSE ;
  else {
  mu__boolexpr2100 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2100)) mu__boolexpr2099 = FALSE ;
  else {
  mu__boolexpr2099 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2099)) mu__boolexpr2098 = FALSE ;
  else {
  mu__boolexpr2098 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2098)) mu__boolexpr2097 = FALSE ;
  else {
  mu__boolexpr2097 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2097)) mu__boolexpr2096 = FALSE ;
  else {
  mu__boolexpr2096 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2096);
};

bool mu__condition_2102() // Condition for Rule "test_reachable_state_36"
{
  return mu__invariant_2095( );
}

/**** end rule declaration ****/

int mu__invariant_2103() // Invariant "test_reachable_state_35"
{
bool mu__boolexpr2104;
bool mu__boolexpr2105;
bool mu__boolexpr2106;
bool mu__boolexpr2107;
bool mu__boolexpr2108;
bool mu__boolexpr2109;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2109 = FALSE ;
  else {
  mu__boolexpr2109 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2109)) mu__boolexpr2108 = FALSE ;
  else {
  mu__boolexpr2108 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2108)) mu__boolexpr2107 = FALSE ;
  else {
  mu__boolexpr2107 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2107)) mu__boolexpr2106 = FALSE ;
  else {
  mu__boolexpr2106 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2106)) mu__boolexpr2105 = FALSE ;
  else {
  mu__boolexpr2105 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2105)) mu__boolexpr2104 = FALSE ;
  else {
  mu__boolexpr2104 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2104);
};

bool mu__condition_2110() // Condition for Rule "test_reachable_state_35"
{
  return mu__invariant_2103( );
}

/**** end rule declaration ****/

int mu__invariant_2111() // Invariant "test_reachable_state_34"
{
bool mu__boolexpr2112;
bool mu__boolexpr2113;
bool mu__boolexpr2114;
bool mu__boolexpr2115;
bool mu__boolexpr2116;
bool mu__boolexpr2117;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2117 = FALSE ;
  else {
  mu__boolexpr2117 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2117)) mu__boolexpr2116 = FALSE ;
  else {
  mu__boolexpr2116 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2116)) mu__boolexpr2115 = FALSE ;
  else {
  mu__boolexpr2115 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2115)) mu__boolexpr2114 = FALSE ;
  else {
  mu__boolexpr2114 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2114)) mu__boolexpr2113 = FALSE ;
  else {
  mu__boolexpr2113 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2113)) mu__boolexpr2112 = FALSE ;
  else {
  mu__boolexpr2112 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2112);
};

bool mu__condition_2118() // Condition for Rule "test_reachable_state_34"
{
  return mu__invariant_2111( );
}

/**** end rule declaration ****/

int mu__invariant_2119() // Invariant "test_reachable_state_33"
{
bool mu__boolexpr2120;
bool mu__boolexpr2121;
bool mu__boolexpr2122;
bool mu__boolexpr2123;
bool mu__boolexpr2124;
bool mu__boolexpr2125;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2125 = FALSE ;
  else {
  mu__boolexpr2125 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2125)) mu__boolexpr2124 = FALSE ;
  else {
  mu__boolexpr2124 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2124)) mu__boolexpr2123 = FALSE ;
  else {
  mu__boolexpr2123 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2123)) mu__boolexpr2122 = FALSE ;
  else {
  mu__boolexpr2122 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2122)) mu__boolexpr2121 = FALSE ;
  else {
  mu__boolexpr2121 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2121)) mu__boolexpr2120 = FALSE ;
  else {
  mu__boolexpr2120 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2120);
};

bool mu__condition_2126() // Condition for Rule "test_reachable_state_33"
{
  return mu__invariant_2119( );
}

/**** end rule declaration ****/

int mu__invariant_2127() // Invariant "test_reachable_state_32"
{
bool mu__boolexpr2128;
bool mu__boolexpr2129;
bool mu__boolexpr2130;
bool mu__boolexpr2131;
bool mu__boolexpr2132;
bool mu__boolexpr2133;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2133 = FALSE ;
  else {
  mu__boolexpr2133 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2133)) mu__boolexpr2132 = FALSE ;
  else {
  mu__boolexpr2132 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2132)) mu__boolexpr2131 = FALSE ;
  else {
  mu__boolexpr2131 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2131)) mu__boolexpr2130 = FALSE ;
  else {
  mu__boolexpr2130 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2130)) mu__boolexpr2129 = FALSE ;
  else {
  mu__boolexpr2129 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2129)) mu__boolexpr2128 = FALSE ;
  else {
  mu__boolexpr2128 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2128);
};

bool mu__condition_2134() // Condition for Rule "test_reachable_state_32"
{
  return mu__invariant_2127( );
}

/**** end rule declaration ****/

int mu__invariant_2135() // Invariant "test_reachable_state_31"
{
bool mu__boolexpr2136;
bool mu__boolexpr2137;
bool mu__boolexpr2138;
bool mu__boolexpr2139;
bool mu__boolexpr2140;
bool mu__boolexpr2141;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2141 = FALSE ;
  else {
  mu__boolexpr2141 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2141)) mu__boolexpr2140 = FALSE ;
  else {
  mu__boolexpr2140 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2140)) mu__boolexpr2139 = FALSE ;
  else {
  mu__boolexpr2139 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2139)) mu__boolexpr2138 = FALSE ;
  else {
  mu__boolexpr2138 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2138)) mu__boolexpr2137 = FALSE ;
  else {
  mu__boolexpr2137 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2137)) mu__boolexpr2136 = FALSE ;
  else {
  mu__boolexpr2136 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2136);
};

bool mu__condition_2142() // Condition for Rule "test_reachable_state_31"
{
  return mu__invariant_2135( );
}

/**** end rule declaration ****/

int mu__invariant_2143() // Invariant "test_reachable_state_30"
{
bool mu__boolexpr2144;
bool mu__boolexpr2145;
bool mu__boolexpr2146;
bool mu__boolexpr2147;
bool mu__boolexpr2148;
bool mu__boolexpr2149;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2149 = FALSE ;
  else {
  mu__boolexpr2149 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2149)) mu__boolexpr2148 = FALSE ;
  else {
  mu__boolexpr2148 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2148)) mu__boolexpr2147 = FALSE ;
  else {
  mu__boolexpr2147 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2147)) mu__boolexpr2146 = FALSE ;
  else {
  mu__boolexpr2146 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2146)) mu__boolexpr2145 = FALSE ;
  else {
  mu__boolexpr2145 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2145)) mu__boolexpr2144 = FALSE ;
  else {
  mu__boolexpr2144 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2144);
};

bool mu__condition_2150() // Condition for Rule "test_reachable_state_30"
{
  return mu__invariant_2143( );
}

/**** end rule declaration ****/

int mu__invariant_2151() // Invariant "test_reachable_state_29"
{
bool mu__boolexpr2152;
bool mu__boolexpr2153;
bool mu__boolexpr2154;
bool mu__boolexpr2155;
bool mu__boolexpr2156;
bool mu__boolexpr2157;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2157 = FALSE ;
  else {
  mu__boolexpr2157 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2157)) mu__boolexpr2156 = FALSE ;
  else {
  mu__boolexpr2156 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2156)) mu__boolexpr2155 = FALSE ;
  else {
  mu__boolexpr2155 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2155)) mu__boolexpr2154 = FALSE ;
  else {
  mu__boolexpr2154 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2154)) mu__boolexpr2153 = FALSE ;
  else {
  mu__boolexpr2153 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2153)) mu__boolexpr2152 = FALSE ;
  else {
  mu__boolexpr2152 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2152);
};

bool mu__condition_2158() // Condition for Rule "test_reachable_state_29"
{
  return mu__invariant_2151( );
}

/**** end rule declaration ****/

int mu__invariant_2159() // Invariant "test_reachable_state_28"
{
bool mu__boolexpr2160;
bool mu__boolexpr2161;
bool mu__boolexpr2162;
bool mu__boolexpr2163;
bool mu__boolexpr2164;
bool mu__boolexpr2165;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2165 = FALSE ;
  else {
  mu__boolexpr2165 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2165)) mu__boolexpr2164 = FALSE ;
  else {
  mu__boolexpr2164 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2164)) mu__boolexpr2163 = FALSE ;
  else {
  mu__boolexpr2163 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2163)) mu__boolexpr2162 = FALSE ;
  else {
  mu__boolexpr2162 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2162)) mu__boolexpr2161 = FALSE ;
  else {
  mu__boolexpr2161 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2161)) mu__boolexpr2160 = FALSE ;
  else {
  mu__boolexpr2160 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2160);
};

bool mu__condition_2166() // Condition for Rule "test_reachable_state_28"
{
  return mu__invariant_2159( );
}

/**** end rule declaration ****/

int mu__invariant_2167() // Invariant "test_reachable_state_27"
{
bool mu__boolexpr2168;
bool mu__boolexpr2169;
bool mu__boolexpr2170;
bool mu__boolexpr2171;
bool mu__boolexpr2172;
bool mu__boolexpr2173;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2173 = FALSE ;
  else {
  mu__boolexpr2173 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2173)) mu__boolexpr2172 = FALSE ;
  else {
  mu__boolexpr2172 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2172)) mu__boolexpr2171 = FALSE ;
  else {
  mu__boolexpr2171 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2171)) mu__boolexpr2170 = FALSE ;
  else {
  mu__boolexpr2170 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2170)) mu__boolexpr2169 = FALSE ;
  else {
  mu__boolexpr2169 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2169)) mu__boolexpr2168 = FALSE ;
  else {
  mu__boolexpr2168 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2168);
};

bool mu__condition_2174() // Condition for Rule "test_reachable_state_27"
{
  return mu__invariant_2167( );
}

/**** end rule declaration ****/

int mu__invariant_2175() // Invariant "test_reachable_state_26"
{
bool mu__boolexpr2176;
bool mu__boolexpr2177;
bool mu__boolexpr2178;
bool mu__boolexpr2179;
bool mu__boolexpr2180;
bool mu__boolexpr2181;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2181 = FALSE ;
  else {
  mu__boolexpr2181 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2181)) mu__boolexpr2180 = FALSE ;
  else {
  mu__boolexpr2180 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2180)) mu__boolexpr2179 = FALSE ;
  else {
  mu__boolexpr2179 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2179)) mu__boolexpr2178 = FALSE ;
  else {
  mu__boolexpr2178 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2178)) mu__boolexpr2177 = FALSE ;
  else {
  mu__boolexpr2177 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2177)) mu__boolexpr2176 = FALSE ;
  else {
  mu__boolexpr2176 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2176);
};

bool mu__condition_2182() // Condition for Rule "test_reachable_state_26"
{
  return mu__invariant_2175( );
}

/**** end rule declaration ****/

int mu__invariant_2183() // Invariant "test_reachable_state_25"
{
bool mu__boolexpr2184;
bool mu__boolexpr2185;
bool mu__boolexpr2186;
bool mu__boolexpr2187;
bool mu__boolexpr2188;
bool mu__boolexpr2189;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2189 = FALSE ;
  else {
  mu__boolexpr2189 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2189)) mu__boolexpr2188 = FALSE ;
  else {
  mu__boolexpr2188 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2188)) mu__boolexpr2187 = FALSE ;
  else {
  mu__boolexpr2187 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2187)) mu__boolexpr2186 = FALSE ;
  else {
  mu__boolexpr2186 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2186)) mu__boolexpr2185 = FALSE ;
  else {
  mu__boolexpr2185 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2185)) mu__boolexpr2184 = FALSE ;
  else {
  mu__boolexpr2184 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2184);
};

bool mu__condition_2190() // Condition for Rule "test_reachable_state_25"
{
  return mu__invariant_2183( );
}

/**** end rule declaration ****/

int mu__invariant_2191() // Invariant "test_reachable_state_24"
{
bool mu__boolexpr2192;
bool mu__boolexpr2193;
bool mu__boolexpr2194;
bool mu__boolexpr2195;
bool mu__boolexpr2196;
bool mu__boolexpr2197;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2197 = FALSE ;
  else {
  mu__boolexpr2197 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2197)) mu__boolexpr2196 = FALSE ;
  else {
  mu__boolexpr2196 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2196)) mu__boolexpr2195 = FALSE ;
  else {
  mu__boolexpr2195 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2195)) mu__boolexpr2194 = FALSE ;
  else {
  mu__boolexpr2194 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2194)) mu__boolexpr2193 = FALSE ;
  else {
  mu__boolexpr2193 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2193)) mu__boolexpr2192 = FALSE ;
  else {
  mu__boolexpr2192 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2192);
};

bool mu__condition_2198() // Condition for Rule "test_reachable_state_24"
{
  return mu__invariant_2191( );
}

/**** end rule declaration ****/

int mu__invariant_2199() // Invariant "test_reachable_state_23"
{
bool mu__boolexpr2200;
bool mu__boolexpr2201;
bool mu__boolexpr2202;
bool mu__boolexpr2203;
bool mu__boolexpr2204;
bool mu__boolexpr2205;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2205 = FALSE ;
  else {
  mu__boolexpr2205 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2205)) mu__boolexpr2204 = FALSE ;
  else {
  mu__boolexpr2204 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2204)) mu__boolexpr2203 = FALSE ;
  else {
  mu__boolexpr2203 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2203)) mu__boolexpr2202 = FALSE ;
  else {
  mu__boolexpr2202 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2202)) mu__boolexpr2201 = FALSE ;
  else {
  mu__boolexpr2201 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2201)) mu__boolexpr2200 = FALSE ;
  else {
  mu__boolexpr2200 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2200);
};

bool mu__condition_2206() // Condition for Rule "test_reachable_state_23"
{
  return mu__invariant_2199( );
}

/**** end rule declaration ****/

int mu__invariant_2207() // Invariant "test_reachable_state_22"
{
bool mu__boolexpr2208;
bool mu__boolexpr2209;
bool mu__boolexpr2210;
bool mu__boolexpr2211;
bool mu__boolexpr2212;
bool mu__boolexpr2213;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2213 = FALSE ;
  else {
  mu__boolexpr2213 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2213)) mu__boolexpr2212 = FALSE ;
  else {
  mu__boolexpr2212 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2212)) mu__boolexpr2211 = FALSE ;
  else {
  mu__boolexpr2211 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2211)) mu__boolexpr2210 = FALSE ;
  else {
  mu__boolexpr2210 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2210)) mu__boolexpr2209 = FALSE ;
  else {
  mu__boolexpr2209 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2209)) mu__boolexpr2208 = FALSE ;
  else {
  mu__boolexpr2208 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2208);
};

bool mu__condition_2214() // Condition for Rule "test_reachable_state_22"
{
  return mu__invariant_2207( );
}

/**** end rule declaration ****/

int mu__invariant_2215() // Invariant "test_reachable_state_21"
{
bool mu__boolexpr2216;
bool mu__boolexpr2217;
bool mu__boolexpr2218;
bool mu__boolexpr2219;
bool mu__boolexpr2220;
bool mu__boolexpr2221;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2221 = FALSE ;
  else {
  mu__boolexpr2221 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2221)) mu__boolexpr2220 = FALSE ;
  else {
  mu__boolexpr2220 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2220)) mu__boolexpr2219 = FALSE ;
  else {
  mu__boolexpr2219 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2219)) mu__boolexpr2218 = FALSE ;
  else {
  mu__boolexpr2218 = ((mu_Tree[3].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2218)) mu__boolexpr2217 = FALSE ;
  else {
  mu__boolexpr2217 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2217)) mu__boolexpr2216 = FALSE ;
  else {
  mu__boolexpr2216 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2216);
};

bool mu__condition_2222() // Condition for Rule "test_reachable_state_21"
{
  return mu__invariant_2215( );
}

/**** end rule declaration ****/

int mu__invariant_2223() // Invariant "test_reachable_state_20"
{
bool mu__boolexpr2224;
bool mu__boolexpr2225;
bool mu__boolexpr2226;
bool mu__boolexpr2227;
bool mu__boolexpr2228;
bool mu__boolexpr2229;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2229 = FALSE ;
  else {
  mu__boolexpr2229 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2229)) mu__boolexpr2228 = FALSE ;
  else {
  mu__boolexpr2228 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2228)) mu__boolexpr2227 = FALSE ;
  else {
  mu__boolexpr2227 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2227)) mu__boolexpr2226 = FALSE ;
  else {
  mu__boolexpr2226 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2226)) mu__boolexpr2225 = FALSE ;
  else {
  mu__boolexpr2225 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2225)) mu__boolexpr2224 = FALSE ;
  else {
  mu__boolexpr2224 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2224);
};

bool mu__condition_2230() // Condition for Rule "test_reachable_state_20"
{
  return mu__invariant_2223( );
}

/**** end rule declaration ****/

int mu__invariant_2231() // Invariant "test_reachable_state_19"
{
bool mu__boolexpr2232;
bool mu__boolexpr2233;
bool mu__boolexpr2234;
bool mu__boolexpr2235;
bool mu__boolexpr2236;
bool mu__boolexpr2237;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2237 = FALSE ;
  else {
  mu__boolexpr2237 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2237)) mu__boolexpr2236 = FALSE ;
  else {
  mu__boolexpr2236 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2236)) mu__boolexpr2235 = FALSE ;
  else {
  mu__boolexpr2235 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2235)) mu__boolexpr2234 = FALSE ;
  else {
  mu__boolexpr2234 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2234)) mu__boolexpr2233 = FALSE ;
  else {
  mu__boolexpr2233 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2233)) mu__boolexpr2232 = FALSE ;
  else {
  mu__boolexpr2232 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2232);
};

bool mu__condition_2238() // Condition for Rule "test_reachable_state_19"
{
  return mu__invariant_2231( );
}

/**** end rule declaration ****/

int mu__invariant_2239() // Invariant "test_reachable_state_18"
{
bool mu__boolexpr2240;
bool mu__boolexpr2241;
bool mu__boolexpr2242;
bool mu__boolexpr2243;
bool mu__boolexpr2244;
bool mu__boolexpr2245;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2245 = FALSE ;
  else {
  mu__boolexpr2245 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2245)) mu__boolexpr2244 = FALSE ;
  else {
  mu__boolexpr2244 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2244)) mu__boolexpr2243 = FALSE ;
  else {
  mu__boolexpr2243 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2243)) mu__boolexpr2242 = FALSE ;
  else {
  mu__boolexpr2242 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2242)) mu__boolexpr2241 = FALSE ;
  else {
  mu__boolexpr2241 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2241)) mu__boolexpr2240 = FALSE ;
  else {
  mu__boolexpr2240 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2240);
};

bool mu__condition_2246() // Condition for Rule "test_reachable_state_18"
{
  return mu__invariant_2239( );
}

/**** end rule declaration ****/

int mu__invariant_2247() // Invariant "test_reachable_state_17"
{
bool mu__boolexpr2248;
bool mu__boolexpr2249;
bool mu__boolexpr2250;
bool mu__boolexpr2251;
bool mu__boolexpr2252;
bool mu__boolexpr2253;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2253 = FALSE ;
  else {
  mu__boolexpr2253 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2253)) mu__boolexpr2252 = FALSE ;
  else {
  mu__boolexpr2252 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2252)) mu__boolexpr2251 = FALSE ;
  else {
  mu__boolexpr2251 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2251)) mu__boolexpr2250 = FALSE ;
  else {
  mu__boolexpr2250 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2250)) mu__boolexpr2249 = FALSE ;
  else {
  mu__boolexpr2249 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2249)) mu__boolexpr2248 = FALSE ;
  else {
  mu__boolexpr2248 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2248);
};

bool mu__condition_2254() // Condition for Rule "test_reachable_state_17"
{
  return mu__invariant_2247( );
}

/**** end rule declaration ****/

int mu__invariant_2255() // Invariant "test_reachable_state_16"
{
bool mu__boolexpr2256;
bool mu__boolexpr2257;
bool mu__boolexpr2258;
bool mu__boolexpr2259;
bool mu__boolexpr2260;
bool mu__boolexpr2261;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2261 = FALSE ;
  else {
  mu__boolexpr2261 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2261)) mu__boolexpr2260 = FALSE ;
  else {
  mu__boolexpr2260 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2260)) mu__boolexpr2259 = FALSE ;
  else {
  mu__boolexpr2259 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2259)) mu__boolexpr2258 = FALSE ;
  else {
  mu__boolexpr2258 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2258)) mu__boolexpr2257 = FALSE ;
  else {
  mu__boolexpr2257 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2257)) mu__boolexpr2256 = FALSE ;
  else {
  mu__boolexpr2256 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2256);
};

bool mu__condition_2262() // Condition for Rule "test_reachable_state_16"
{
  return mu__invariant_2255( );
}

/**** end rule declaration ****/

int mu__invariant_2263() // Invariant "test_reachable_state_15"
{
bool mu__boolexpr2264;
bool mu__boolexpr2265;
bool mu__boolexpr2266;
bool mu__boolexpr2267;
bool mu__boolexpr2268;
bool mu__boolexpr2269;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2269 = FALSE ;
  else {
  mu__boolexpr2269 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2269)) mu__boolexpr2268 = FALSE ;
  else {
  mu__boolexpr2268 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2268)) mu__boolexpr2267 = FALSE ;
  else {
  mu__boolexpr2267 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2267)) mu__boolexpr2266 = FALSE ;
  else {
  mu__boolexpr2266 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2266)) mu__boolexpr2265 = FALSE ;
  else {
  mu__boolexpr2265 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2265)) mu__boolexpr2264 = FALSE ;
  else {
  mu__boolexpr2264 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2264);
};

bool mu__condition_2270() // Condition for Rule "test_reachable_state_15"
{
  return mu__invariant_2263( );
}

/**** end rule declaration ****/

int mu__invariant_2271() // Invariant "test_reachable_state_14"
{
bool mu__boolexpr2272;
bool mu__boolexpr2273;
bool mu__boolexpr2274;
bool mu__boolexpr2275;
bool mu__boolexpr2276;
bool mu__boolexpr2277;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2277 = FALSE ;
  else {
  mu__boolexpr2277 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2277)) mu__boolexpr2276 = FALSE ;
  else {
  mu__boolexpr2276 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2276)) mu__boolexpr2275 = FALSE ;
  else {
  mu__boolexpr2275 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2275)) mu__boolexpr2274 = FALSE ;
  else {
  mu__boolexpr2274 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2274)) mu__boolexpr2273 = FALSE ;
  else {
  mu__boolexpr2273 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2273)) mu__boolexpr2272 = FALSE ;
  else {
  mu__boolexpr2272 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2272);
};

bool mu__condition_2278() // Condition for Rule "test_reachable_state_14"
{
  return mu__invariant_2271( );
}

/**** end rule declaration ****/

int mu__invariant_2279() // Invariant "test_reachable_state_13"
{
bool mu__boolexpr2280;
bool mu__boolexpr2281;
bool mu__boolexpr2282;
bool mu__boolexpr2283;
bool mu__boolexpr2284;
bool mu__boolexpr2285;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2285 = FALSE ;
  else {
  mu__boolexpr2285 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2285)) mu__boolexpr2284 = FALSE ;
  else {
  mu__boolexpr2284 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2284)) mu__boolexpr2283 = FALSE ;
  else {
  mu__boolexpr2283 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2283)) mu__boolexpr2282 = FALSE ;
  else {
  mu__boolexpr2282 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2282)) mu__boolexpr2281 = FALSE ;
  else {
  mu__boolexpr2281 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2281)) mu__boolexpr2280 = FALSE ;
  else {
  mu__boolexpr2280 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2280);
};

bool mu__condition_2286() // Condition for Rule "test_reachable_state_13"
{
  return mu__invariant_2279( );
}

/**** end rule declaration ****/

int mu__invariant_2287() // Invariant "test_reachable_state_12"
{
bool mu__boolexpr2288;
bool mu__boolexpr2289;
bool mu__boolexpr2290;
bool mu__boolexpr2291;
bool mu__boolexpr2292;
bool mu__boolexpr2293;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2293 = FALSE ;
  else {
  mu__boolexpr2293 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2293)) mu__boolexpr2292 = FALSE ;
  else {
  mu__boolexpr2292 = ((mu_Tree[4].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2292)) mu__boolexpr2291 = FALSE ;
  else {
  mu__boolexpr2291 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2291)) mu__boolexpr2290 = FALSE ;
  else {
  mu__boolexpr2290 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2290)) mu__boolexpr2289 = FALSE ;
  else {
  mu__boolexpr2289 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2289)) mu__boolexpr2288 = FALSE ;
  else {
  mu__boolexpr2288 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2288);
};

bool mu__condition_2294() // Condition for Rule "test_reachable_state_12"
{
  return mu__invariant_2287( );
}

/**** end rule declaration ****/

int mu__invariant_2295() // Invariant "test_reachable_state_11"
{
bool mu__boolexpr2296;
bool mu__boolexpr2297;
bool mu__boolexpr2298;
bool mu__boolexpr2299;
bool mu__boolexpr2300;
bool mu__boolexpr2301;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2301 = FALSE ;
  else {
  mu__boolexpr2301 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2301)) mu__boolexpr2300 = FALSE ;
  else {
  mu__boolexpr2300 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2300)) mu__boolexpr2299 = FALSE ;
  else {
  mu__boolexpr2299 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2299)) mu__boolexpr2298 = FALSE ;
  else {
  mu__boolexpr2298 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2298)) mu__boolexpr2297 = FALSE ;
  else {
  mu__boolexpr2297 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2297)) mu__boolexpr2296 = FALSE ;
  else {
  mu__boolexpr2296 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2296);
};

bool mu__condition_2302() // Condition for Rule "test_reachable_state_11"
{
  return mu__invariant_2295( );
}

/**** end rule declaration ****/

int mu__invariant_2303() // Invariant "test_reachable_state_10"
{
bool mu__boolexpr2304;
bool mu__boolexpr2305;
bool mu__boolexpr2306;
bool mu__boolexpr2307;
bool mu__boolexpr2308;
bool mu__boolexpr2309;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2309 = FALSE ;
  else {
  mu__boolexpr2309 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2309)) mu__boolexpr2308 = FALSE ;
  else {
  mu__boolexpr2308 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2308)) mu__boolexpr2307 = FALSE ;
  else {
  mu__boolexpr2307 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2307)) mu__boolexpr2306 = FALSE ;
  else {
  mu__boolexpr2306 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2306)) mu__boolexpr2305 = FALSE ;
  else {
  mu__boolexpr2305 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2305)) mu__boolexpr2304 = FALSE ;
  else {
  mu__boolexpr2304 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2304);
};

bool mu__condition_2310() // Condition for Rule "test_reachable_state_10"
{
  return mu__invariant_2303( );
}

/**** end rule declaration ****/

int mu__invariant_2311() // Invariant "test_reachable_state_9"
{
bool mu__boolexpr2312;
bool mu__boolexpr2313;
bool mu__boolexpr2314;
bool mu__boolexpr2315;
bool mu__boolexpr2316;
bool mu__boolexpr2317;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2317 = FALSE ;
  else {
  mu__boolexpr2317 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2317)) mu__boolexpr2316 = FALSE ;
  else {
  mu__boolexpr2316 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2316)) mu__boolexpr2315 = FALSE ;
  else {
  mu__boolexpr2315 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2315)) mu__boolexpr2314 = FALSE ;
  else {
  mu__boolexpr2314 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2314)) mu__boolexpr2313 = FALSE ;
  else {
  mu__boolexpr2313 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2313)) mu__boolexpr2312 = FALSE ;
  else {
  mu__boolexpr2312 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2312);
};

bool mu__condition_2318() // Condition for Rule "test_reachable_state_9"
{
  return mu__invariant_2311( );
}

/**** end rule declaration ****/

int mu__invariant_2319() // Invariant "test_reachable_state_8"
{
bool mu__boolexpr2320;
bool mu__boolexpr2321;
bool mu__boolexpr2322;
bool mu__boolexpr2323;
bool mu__boolexpr2324;
bool mu__boolexpr2325;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2325 = FALSE ;
  else {
  mu__boolexpr2325 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2325)) mu__boolexpr2324 = FALSE ;
  else {
  mu__boolexpr2324 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2324)) mu__boolexpr2323 = FALSE ;
  else {
  mu__boolexpr2323 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2323)) mu__boolexpr2322 = FALSE ;
  else {
  mu__boolexpr2322 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2322)) mu__boolexpr2321 = FALSE ;
  else {
  mu__boolexpr2321 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2321)) mu__boolexpr2320 = FALSE ;
  else {
  mu__boolexpr2320 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2320);
};

bool mu__condition_2326() // Condition for Rule "test_reachable_state_8"
{
  return mu__invariant_2319( );
}

/**** end rule declaration ****/

int mu__invariant_2327() // Invariant "test_reachable_state_7"
{
bool mu__boolexpr2328;
bool mu__boolexpr2329;
bool mu__boolexpr2330;
bool mu__boolexpr2331;
bool mu__boolexpr2332;
bool mu__boolexpr2333;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2333 = FALSE ;
  else {
  mu__boolexpr2333 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2333)) mu__boolexpr2332 = FALSE ;
  else {
  mu__boolexpr2332 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2332)) mu__boolexpr2331 = FALSE ;
  else {
  mu__boolexpr2331 = ((mu_Tree[5].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2331)) mu__boolexpr2330 = FALSE ;
  else {
  mu__boolexpr2330 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2330)) mu__boolexpr2329 = FALSE ;
  else {
  mu__boolexpr2329 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2329)) mu__boolexpr2328 = FALSE ;
  else {
  mu__boolexpr2328 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2328);
};

bool mu__condition_2334() // Condition for Rule "test_reachable_state_7"
{
  return mu__invariant_2327( );
}

/**** end rule declaration ****/

int mu__invariant_2335() // Invariant "test_reachable_state_6"
{
bool mu__boolexpr2336;
bool mu__boolexpr2337;
bool mu__boolexpr2338;
bool mu__boolexpr2339;
bool mu__boolexpr2340;
bool mu__boolexpr2341;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2341 = FALSE ;
  else {
  mu__boolexpr2341 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2341)) mu__boolexpr2340 = FALSE ;
  else {
  mu__boolexpr2340 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2340)) mu__boolexpr2339 = FALSE ;
  else {
  mu__boolexpr2339 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2339)) mu__boolexpr2338 = FALSE ;
  else {
  mu__boolexpr2338 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2338)) mu__boolexpr2337 = FALSE ;
  else {
  mu__boolexpr2337 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2337)) mu__boolexpr2336 = FALSE ;
  else {
  mu__boolexpr2336 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2336);
};

bool mu__condition_2342() // Condition for Rule "test_reachable_state_6"
{
  return mu__invariant_2335( );
}

/**** end rule declaration ****/

int mu__invariant_2343() // Invariant "test_reachable_state_5"
{
bool mu__boolexpr2344;
bool mu__boolexpr2345;
bool mu__boolexpr2346;
bool mu__boolexpr2347;
bool mu__boolexpr2348;
bool mu__boolexpr2349;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2349 = FALSE ;
  else {
  mu__boolexpr2349 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2349)) mu__boolexpr2348 = FALSE ;
  else {
  mu__boolexpr2348 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2348)) mu__boolexpr2347 = FALSE ;
  else {
  mu__boolexpr2347 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2347)) mu__boolexpr2346 = FALSE ;
  else {
  mu__boolexpr2346 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2346)) mu__boolexpr2345 = FALSE ;
  else {
  mu__boolexpr2345 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2345)) mu__boolexpr2344 = FALSE ;
  else {
  mu__boolexpr2344 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2344);
};

bool mu__condition_2350() // Condition for Rule "test_reachable_state_5"
{
  return mu__invariant_2343( );
}

/**** end rule declaration ****/

int mu__invariant_2351() // Invariant "test_reachable_state_4"
{
bool mu__boolexpr2352;
bool mu__boolexpr2353;
bool mu__boolexpr2354;
bool mu__boolexpr2355;
bool mu__boolexpr2356;
bool mu__boolexpr2357;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2357 = FALSE ;
  else {
  mu__boolexpr2357 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2357)) mu__boolexpr2356 = FALSE ;
  else {
  mu__boolexpr2356 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2356)) mu__boolexpr2355 = FALSE ;
  else {
  mu__boolexpr2355 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2355)) mu__boolexpr2354 = FALSE ;
  else {
  mu__boolexpr2354 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2354)) mu__boolexpr2353 = FALSE ;
  else {
  mu__boolexpr2353 = ((mu_Tree[6].mu_cache.mu_state) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2353)) mu__boolexpr2352 = FALSE ;
  else {
  mu__boolexpr2352 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2352);
};

bool mu__condition_2358() // Condition for Rule "test_reachable_state_4"
{
  return mu__invariant_2351( );
}

/**** end rule declaration ****/

int mu__invariant_2359() // Invariant "test_reachable_state_3"
{
bool mu__boolexpr2360;
bool mu__boolexpr2361;
bool mu__boolexpr2362;
bool mu__boolexpr2363;
bool mu__boolexpr2364;
bool mu__boolexpr2365;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2365 = FALSE ;
  else {
  mu__boolexpr2365 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2365)) mu__boolexpr2364 = FALSE ;
  else {
  mu__boolexpr2364 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2364)) mu__boolexpr2363 = FALSE ;
  else {
  mu__boolexpr2363 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2363)) mu__boolexpr2362 = FALSE ;
  else {
  mu__boolexpr2362 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2362)) mu__boolexpr2361 = FALSE ;
  else {
  mu__boolexpr2361 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2361)) mu__boolexpr2360 = FALSE ;
  else {
  mu__boolexpr2360 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Tip)) ; 
}
return !(mu__boolexpr2360);
};

bool mu__condition_2366() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_2359( );
}

/**** end rule declaration ****/

int mu__invariant_2367() // Invariant "test_reachable_state_2"
{
bool mu__boolexpr2368;
bool mu__boolexpr2369;
bool mu__boolexpr2370;
bool mu__boolexpr2371;
bool mu__boolexpr2372;
bool mu__boolexpr2373;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2373 = FALSE ;
  else {
  mu__boolexpr2373 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2373)) mu__boolexpr2372 = FALSE ;
  else {
  mu__boolexpr2372 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2372)) mu__boolexpr2371 = FALSE ;
  else {
  mu__boolexpr2371 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2371)) mu__boolexpr2370 = FALSE ;
  else {
  mu__boolexpr2370 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2370)) mu__boolexpr2369 = FALSE ;
  else {
  mu__boolexpr2369 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2369)) mu__boolexpr2368 = FALSE ;
  else {
  mu__boolexpr2368 = ((mu_Tree[7].mu_cache.mu_state) == (mu_Branch)) ; 
}
return !(mu__boolexpr2368);
};

bool mu__condition_2374() // Condition for Rule "test_reachable_state_2"
{
  return mu__invariant_2367( );
}

/**** end rule declaration ****/

int mu__invariant_2375() // Invariant "test_reachable_state_1"
{
bool mu__boolexpr2376;
bool mu__boolexpr2377;
bool mu__boolexpr2378;
bool mu__boolexpr2379;
bool mu__boolexpr2380;
bool mu__boolexpr2381;
  if (!((mu_Tree[1].mu_cache.mu_state) == (mu_None))) mu__boolexpr2381 = FALSE ;
  else {
  mu__boolexpr2381 = ((mu_Tree[2].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2381)) mu__boolexpr2380 = FALSE ;
  else {
  mu__boolexpr2380 = ((mu_Tree[4].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2380)) mu__boolexpr2379 = FALSE ;
  else {
  mu__boolexpr2379 = ((mu_Tree[5].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2379)) mu__boolexpr2378 = FALSE ;
  else {
  mu__boolexpr2378 = ((mu_Tree[3].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2378)) mu__boolexpr2377 = FALSE ;
  else {
  mu__boolexpr2377 = ((mu_Tree[6].mu_cache.mu_state) == (mu_None)) ; 
}
  if (!(mu__boolexpr2377)) mu__boolexpr2376 = FALSE ;
  else {
  mu__boolexpr2376 = ((mu_Tree[7].mu_cache.mu_state) == (mu_None)) ; 
}
return !(mu__boolexpr2376);
};

bool mu__condition_2382() // Condition for Rule "test_reachable_state_1"
{
  return mu__invariant_2375( );
}

/**** end rule declaration ****/

// set invariants
const rulerec invariants[] = {
{"test_reachable_state_5", &mu__condition_2350, NULL, },
};// set invariants
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
memData:ScalarsetVariable
Tree:ScalarsetVariable
auxData:ScalarsetVariable
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
  int class_mu_1_dataType[2];
  int undefined_class_mu_1_dataType;// has the highest class number

  void Print_class_mu_1_dataType();
  bool OnlyOneRemain_mu_1_dataType;
  bool MTO_class_mu_1_dataType()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_dataType)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_dataType[i]== class_mu_1_dataType[j])
	    return TRUE;
    OnlyOneRemain_mu_1_dataType = TRUE;
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
  int * in_mu_1_dataType;
  typedef int arr_mu_1_dataType[2];
  arr_mu_1_dataType * perm_mu_1_dataType;
  arr_mu_1_dataType * revperm_mu_1_dataType;

  int size_mu_1_dataType[2];
  bool reversed_sorted_mu_1_dataType(int start, int end);
  void reverse_reversed_mu_1_dataType(int start, int end);

  // procedure for explicit representation
  bool ok0(mu_1_dataType* perm, int size, mu_1_dataType k);
  void GenPerm0(mu_1_dataType* perm, int size, unsigned long& index);

  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
void PermSet::Print_class_mu_1_dataType()
{
  cout << "class_mu_1_dataType:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_dataType[i];
  cout << " " << undefined_class_mu_1_dataType << "\n";
}
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_dataType[i]== class_mu_1_dataType[j])
	    return TRUE;
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
    mu_1_dataType Perm0[2];

  /********************
   declaration of class variables
  ********************/
  in = new bool[2];
 in_mu_1_dataType = new int[2];
 perm_mu_1_dataType = new arr_mu_1_dataType[2];
 revperm_mu_1_dataType = new arr_mu_1_dataType[2];

    // Set perm and revperm
    count = 0;
    for (i=1; i<=2; i++)
      {
        Perm0[0].value(i);
        GenPerm0(Perm0, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=1; j<=2; j++)
        for (k=1; k<=2; k++)
          if (revperm_mu_1_dataType[i][k-1]==j)   // k - base 
            perm_mu_1_dataType[i][j-1]=k; // j - base 

    // setting up combination of permutations
    // for different scalarset
    int carry;
    int i_mu_1_dataType = 0;
    size = 2;
    count = 2;
    for (i=0; i<2; i++)
      {
        carry = 1;
        in[i]= TRUE;
      in_mu_1_dataType[i] = i_mu_1_dataType;
      i_mu_1_dataType += carry;
      if (i_mu_1_dataType >= 2) { i_mu_1_dataType = 0; carry = 1; } 
      else { carry = 0; } 
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
 in_mu_1_dataType = new int[1];
 perm_mu_1_dataType = new arr_mu_1_dataType[1];
 revperm_mu_1_dataType = new arr_mu_1_dataType[1];
  in[0] = TRUE;
    in_mu_1_dataType[0] = 0;
  }
}
void PermSet::ResetToSimple()
{
  int i;
  for (i=0; i<2; i++)
    class_mu_1_dataType[i]=0;
  undefined_class_mu_1_dataType=0;
  OnlyOneRemain_mu_1_dataType = FALSE;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<2; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;
  int start_mu_1_dataType[2];
  int size_mu_1_dataType[2];
  bool should_be_in_mu_1_dataType[2];

  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_dataType; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_dataType[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_dataType[k]==j)
	  {
	    size_mu_1_dataType[k] = class_size;
	    start_mu_1_dataType[k] = start;
	  }
      start+=class_size;
    }

  // To be In or not to be
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_dataType[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_dataType[i][k]-1 >=start_mu_1_dataType[k] 
	     && perm_mu_1_dataType[i][k]-1 < start_mu_1_dataType[k] + size_mu_1_dataType[k]) )
  	    {
	      should_be_in_mu_1_dataType[i] = FALSE;
	      break;
	    }

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<2; i++)
    {
      in[i] = TRUE;
      if (in[i] && !should_be_in_mu_1_dataType[in_mu_1_dataType[i]]) in[i] = FALSE;
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
  for (j=0; j<=undefined_class_mu_1_dataType; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_dataType[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_dataType[k]==j)
	  {
	    size_mu_1_dataType[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_dataType; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_dataType[k]==j)
	      revperm_mu_1_dataType[0][start++] = k+1;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_dataType[0][k]==j+1)
        perm_mu_1_dataType[0][j]=k+1;
  Presentation = Explicit;
}
bool PermSet::ok0(mu_1_dataType* Perm, int size, mu_1_dataType k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm0(mu_1_dataType* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=1; i<=2; i++)
        if(ok0(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm0(Perm, size+1, count);
          }
    }
  else
    {
      for (i=1; i<=2; i++)
        revperm_mu_1_dataType[count][i-1]=Perm[i-1].value();// i - base
      count++;
    }
}
bool PermSet::reversed_sorted_mu_1_dataType(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_dataType[0][i]<revperm_mu_1_dataType[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_dataType(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_dataType[0][j];
      revperm_mu_1_dataType[0][j] = revperm_mu_1_dataType[0][i];
      revperm_mu_1_dataType[0][i] = temp;
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
      end = start-1+size_mu_1_dataType[revperm_mu_1_dataType[0][start]-1];
      if (reversed_sorted_mu_1_dataType(start,end))
	       {
	  reverse_reversed_mu_1_dataType(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_dataType(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_dataType[0][j]<revperm_mu_1_dataType[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_dataType[0][j];
			  revperm_mu_1_dataType[0][j] = revperm_mu_1_dataType[0][k];
			  revperm_mu_1_dataType[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_dataType(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
if (!nexted) return FALSE;
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_dataType[0][k]==j+1)   // k - base 
	perm_mu_1_dataType[0][j]=k+1; // j - base 
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
        mu_memData.MultisetSort();
        mu_Tree.MultisetSort();
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
void mu_1_dataType::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_dataType[Perm.in_mu_1_dataType[i]][value()-1]); // value - base
};
void mu_1_dataType::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_dataType[value()-1]==Perm.undefined_class_mu_1_dataType) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_dataType[i] == Perm.undefined_class_mu_1_dataType && i!=value()-1)
            Perm.class_mu_1_dataType[i]++;
        value(1 + Perm.undefined_class_mu_1_dataType++);
      }
    else 
      {
        value(Perm.class_mu_1_dataType[value()-1]+1);
      }
}
void mu_1_dataType::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_dataType::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_dataType[value()-1]==Perm.undefined_class_mu_1_dataType) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_dataType[i] == Perm.undefined_class_mu_1_dataType && i!=value()-1)
            Perm.class_mu_1_dataType[i]++;
        Perm.undefined_class_mu_1_dataType++;
      }
}
void mu_1_dataType::ArrayLimit(PermSet& Perm) {}
void mu_1_dataType::Limit(PermSet& Perm) {}
void mu_1_dataType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
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
  mu_data.Permute(Perm,i);
};
void mu_1_chCType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_chCType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chCType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_chCType::ArrayLimit(PermSet& Perm){}
void mu_1_chCType::Limit(PermSet& Perm)
{
};
void mu_1_chCType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_chDType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_chDType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_chDType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chDType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
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
  mu_data.Permute(Perm,i);
};
void mu_1_cacheType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_cacheType::Canonicalize(PermSet& Perm)
{
};
void mu_1_cacheType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
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
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
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
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
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
  mu_cache.Permute(Perm,i);
  mu_chanC.Permute(Perm,i);
  mu_chanD.Permute(Perm,i);
};
void mu_1_TreeNode::SimpleCanonicalize(PermSet& Perm)
{
  mu_cache.SimpleCanonicalize(Perm);
  mu_chanC.SimpleCanonicalize(Perm);
  mu_chanD.SimpleCanonicalize(Perm);
};
void mu_1_TreeNode::Canonicalize(PermSet& Perm)
{
};
void mu_1_TreeNode::SimpleLimit(PermSet& Perm)
{
  mu_cache.SimpleLimit(Perm);
  mu_chanC.SimpleLimit(Perm);
  mu_chanD.SimpleLimit(Perm);
};
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
{
  for (int j=0; j<7; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<7; j++) {
    array[j].SimpleLimit(Perm);
  }
}
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
              
              mu_memData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_memData.MultisetSort();
              mu_Tree.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Tree.MultisetSort();
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

          mu_memData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_memData.MultisetSort();
          mu_Tree.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Tree.MultisetSort();
          mu_auxData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_auxData.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_memData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_memData.MultisetSort();
              mu_Tree.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Tree.MultisetSort();
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
      mu_memData.MultisetSort();
      mu_Tree.MultisetSort();
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

  mu_memData.SimpleCanonicalize(Perm);

  mu_Tree.SimpleCanonicalize(Perm);

  mu_auxData.SimpleCanonicalize(Perm);

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

  mu_memData.SimpleCanonicalize(Perm);

  mu_Tree.SimpleCanonicalize(Perm);

  mu_auxData.SimpleCanonicalize(Perm);

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

  mu_memData.SimpleCanonicalize(Perm);

  mu_Tree.SimpleCanonicalize(Perm);

  mu_auxData.SimpleCanonicalize(Perm);

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
