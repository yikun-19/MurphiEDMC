/******************************
  Program "./models/TL-C_NonIn_M_data.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Oct  9 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Oct  9 2023"
#define PROTOCOL_NAME "./models/TL-C_NonIn_M_data"
#define BITS_IN_WORLD 7312
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

class mu_1_chanType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chanType& val) { return mu__byte::operator=((int) val); };
  mu_1_chanType (const char *name, int os): mu__byte(1, 5, 3, name, os) {};
  mu_1_chanType (void): mu__byte(1, 5, 3) {};
  mu_1_chanType (int val): mu__byte(1, 5, 3, "Parameter or function result.", 0)
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
mu_1_chanType mu_1_chanType_undefined_var;

class mu_1_chanBuffType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chanBuffType& val) { return mu__byte::operator=((int) val); };
  mu_1_chanBuffType (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_chanBuffType (void): mu__byte(1, 2, 2) {};
  mu_1_chanBuffType (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_chanBuffType mu_1_chanBuffType_undefined_var;

class mu_1_extend_chan_buff_Type: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_extend_chan_buff_Type& val) { return mu__byte::operator=((int) val); };
  mu_1_extend_chan_buff_Type (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_extend_chan_buff_Type (void): mu__byte(0, 2, 2) {};
  mu_1_extend_chan_buff_Type (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu_1_extend_chan_buff_Type mu_1_extend_chan_buff_Type_undefined_var;

class mu_1_coreId: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_coreId& val) { return mu__byte::operator=((int) val); };
  mu_1_coreId (const char *name, int os): mu__byte(4, 7, 3, name, os) {};
  mu_1_coreId (void): mu__byte(4, 7, 3) {};
  mu_1_coreId (int val): mu__byte(4, 7, 3, "Parameter or function result.", 0)
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
mu_1_coreId mu_1_coreId_undefined_var;

class mu_1_l2Id: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_l2Id& val) { return mu__byte::operator=((int) val); };
  mu_1_l2Id (const char *name, int os): mu__byte(2, 3, 2, name, os) {};
  mu_1_l2Id (void): mu__byte(2, 3, 2) {};
  mu_1_l2Id (int val): mu__byte(2, 3, 2, "Parameter or function result.", 0)
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
mu_1_l2Id mu_1_l2Id_undefined_var;

class mu_1_l3Id: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_l3Id& val) { return mu__byte::operator=((int) val); };
  mu_1_l3Id (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_l3Id (void): mu__byte(1, 1, 1) {};
  mu_1_l3Id (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_l3Id mu_1_l3Id_undefined_var;

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

class mu_1_storType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_storType& val) { return mu__byte::operator=((int) val); };
  mu_1_storType (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_storType (void): mu__byte(1, 2, 2) {};
  mu_1_storType (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_storType mu_1_storType_undefined_var;

class mu_1_extend_stor_Type: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_extend_stor_Type& val) { return mu__byte::operator=((int) val); };
  mu_1_extend_stor_Type (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_extend_stor_Type (void): mu__byte(0, 2, 2) {};
  mu_1_extend_stor_Type (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu_1_extend_stor_Type mu_1_extend_stor_Type_undefined_var;

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

  mu_1_AType (const char *name, int os): mu__byte(7, 7, 1, name, os) {};
  mu_1_AType (void): mu__byte(7, 7, 1) {};
  mu_1_AType (int val): mu__byte(7, 7, 1, "Parameter or function result.", 0)
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

const char *mu_1_AType::values[] = {"Acquire",NULL };

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

  mu_1_BType (const char *name, int os): mu__byte(8, 8, 1, name, os) {};
  mu_1_BType (void): mu__byte(8, 8, 1) {};
  mu_1_BType (int val): mu__byte(8, 8, 1, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -8] << '\n';
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
      return ( s << mu_1_CType::values[ int(val) - 9] );
    else return ( s << "Undefined" );
  };

  mu_1_CType (const char *name, int os): mu__byte(9, 10, 2, name, os) {};
  mu_1_CType (void): mu__byte(9, 10, 2) {};
  mu_1_CType (int val): mu__byte(9, 10, 2, "Parameter or function result.", 0)
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

const char *mu_1_CType::values[] = {"ProbeAck","Release",NULL };

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
      return ( s << mu_1_DType::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_DType (const char *name, int os): mu__byte(11, 13, 2, name, os) {};
  mu_1_DType (void): mu__byte(11, 13, 2) {};
  mu_1_DType (int val): mu__byte(11, 13, 2, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -11] << '\n';
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
      return ( s << mu_1_EType::values[ int(val) - 14] );
    else return ( s << "Undefined" );
  };

  mu_1_EType (const char *name, int os): mu__byte(14, 14, 1, name, os) {};
  mu_1_EType (void): mu__byte(14, 14, 1) {};
  mu_1_EType (int val): mu__byte(14, 14, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -14]; };
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
      cout << name << ":" << values[ value() -14] << '\n';
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
      return ( s << mu_1_growType::values[ int(val) - 15] );
    else return ( s << "Undefined" );
  };

  mu_1_growType (const char *name, int os): mu__byte(15, 17, 2, name, os) {};
  mu_1_growType (void): mu__byte(15, 17, 2) {};
  mu_1_growType (int val): mu__byte(15, 17, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_capType::values[ int(val) - 18] );
    else return ( s << "Undefined" );
  };

  mu_1_capType (const char *name, int os): mu__byte(18, 20, 2, name, os) {};
  mu_1_capType (void): mu__byte(18, 20, 2) {};
  mu_1_capType (int val): mu__byte(18, 20, 2, "Parameter or function result.", 0)
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
      cout << name << ":" << values[ value() -18] << '\n';
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
      return ( s << mu_1_pruneType::values[ int(val) - 21] );
    else return ( s << "Undefined" );
  };

  mu_1_pruneType (const char *name, int os): mu__byte(21, 25, 3, name, os) {};
  mu_1_pruneType (void): mu__byte(21, 25, 3) {};
  mu_1_pruneType (int val): mu__byte(21, 25, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -21]; };
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
      cout << name << ":" << values[ value() -21] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_pruneType::values[] = {"BtoN","TtoN","TtoB","NtoN","BtoB",NULL };

/*** end of enum declaration ***/
mu_1_pruneType mu_1_pruneType_undefined_var;

class mu_1_slave_pending_Type: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_slave_pending_Type& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_slave_pending_Type& val)
  {
    if (val.defined())
      return ( s << mu_1_slave_pending_Type::values[ int(val) - 26] );
    else return ( s << "Undefined" );
  };

  mu_1_slave_pending_Type (const char *name, int os): mu__byte(26, 27, 2, name, os) {};
  mu_1_slave_pending_Type (void): mu__byte(26, 27, 2) {};
  mu_1_slave_pending_Type (int val): mu__byte(26, 27, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -26]; };
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
      cout << name << ":" << values[ value() -26] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_slave_pending_Type::values[] = {"pending_ProbeAck","pending_GrantAck",NULL };

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
      return ( s << mu_1_master_pending_Type::values[ int(val) - 28] );
    else return ( s << "Undefined" );
  };

  mu_1_master_pending_Type (const char *name, int os): mu__byte(28, 30, 2, name, os) {};
  mu_1_master_pending_Type (void): mu__byte(28, 30, 2) {};
  mu_1_master_pending_Type (int val): mu__byte(28, 30, 2, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -28] << '\n';
  if (!is_attr(make_pair(offset, name)))
  attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_master_pending_Type::values[] = {"pending_Grant","pending_GrantData","pending_ReleaseAck",NULL };

/*** end of enum declaration ***/
mu_1_master_pending_Type mu_1_master_pending_Type_undefined_var;

class mu_1_msgAType
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
  mu_1_dataType mu_data;
  mu_0_boolean mu_dirty;
  mu_1_msgAType ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgAType ( void ) {};

  virtual ~mu_1_msgAType(); 
friend int CompareWeight(mu_1_msgAType& a, mu_1_msgAType& b)
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
friend int Compare(mu_1_msgAType& a, mu_1_msgAType& b)
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
  mu_1_msgAType& operator= (const mu_1_msgAType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_msgAType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgAType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgAType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 32 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_msgAType::~mu_1_msgAType()
{
}

/*** end record declaration ***/
mu_1_msgAType mu_1_msgAType_undefined_var;

class mu_1_msgBType
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
  mu_1_dataType mu_data;
  mu_0_boolean mu_dirty;
  mu_1_msgBType ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgBType ( void ) {};

  virtual ~mu_1_msgBType(); 
friend int CompareWeight(mu_1_msgBType& a, mu_1_msgBType& b)
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
friend int Compare(mu_1_msgBType& a, mu_1_msgBType& b)
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
  mu_1_msgBType& operator= (const mu_1_msgBType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_msgBType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgBType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgBType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 32 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_msgBType::~mu_1_msgBType()
{
}

/*** end record declaration ***/
mu_1_msgBType mu_1_msgBType_undefined_var;

class mu_1_msgCType
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
  mu_1_msgCType ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgCType ( void ) {};

  virtual ~mu_1_msgCType(); 
friend int CompareWeight(mu_1_msgCType& a, mu_1_msgCType& b)
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
friend int Compare(mu_1_msgCType& a, mu_1_msgCType& b)
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
  mu_1_msgCType& operator= (const mu_1_msgCType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_msgCType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgCType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgCType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 32 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_msgCType::~mu_1_msgCType()
{
}

/*** end record declaration ***/
mu_1_msgCType mu_1_msgCType_undefined_var;

class mu_1_msgDType
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
  mu_0_boolean mu_dirty;
  mu_1_msgDType ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgDType ( void ) {};

  virtual ~mu_1_msgDType(); 
friend int CompareWeight(mu_1_msgDType& a, mu_1_msgDType& b)
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
friend int Compare(mu_1_msgDType& a, mu_1_msgDType& b)
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
  mu_1_msgDType& operator= (const mu_1_msgDType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_para.value(from.mu_para.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_msgDType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgDType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgDType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_para.set_self_2(name, ".para", os + 8 ); else mu_para.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 16 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 24 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 32 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_msgDType::~mu_1_msgDType()
{
}

/*** end record declaration ***/
mu_1_msgDType mu_1_msgDType_undefined_var;

class mu_1_msgEType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EType mu_opcode;
  mu_1_addrType mu_addr;
  mu_1_dataType mu_data;
  mu_0_boolean mu_dirty;
  mu_1_msgEType ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgEType ( void ) {};

  virtual ~mu_1_msgEType(); 
friend int CompareWeight(mu_1_msgEType& a, mu_1_msgEType& b)
  {
    int w;
    w = CompareWeight(a.mu_opcode, b.mu_opcode);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dirty, b.mu_dirty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_msgEType& a, mu_1_msgEType& b)
  {
    int w;
    w = Compare(a.mu_opcode, b.mu_opcode);
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
    mu_addr.MultisetSort();
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_opcode.print_statistic();
    mu_addr.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_opcode.clear();
    mu_addr.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_opcode.undefine();
    mu_addr.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_opcode.reset();
    mu_addr.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_opcode.print();
    mu_addr.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_opcode.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_opcode.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_msgEType& operator= (const mu_1_msgEType& from) {
    mu_opcode.value(from.mu_opcode.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_msgEType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgEType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgEType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_opcode.set_self_2(name, ".opcode", os + 0 ); else mu_opcode.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 24 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_msgEType::~mu_1_msgEType()
{
}

/*** end record declaration ***/
mu_1_msgEType mu_1_msgEType_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_msgAType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_msgAType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 40 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_chanAType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_buffer;
  mu_1_extend_chan_buff_Type mu_used;
  mu_1_chanAType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chanAType ( void ) {};

  virtual ~mu_1_chanAType(); 
friend int CompareWeight(mu_1_chanAType& a, mu_1_chanAType& b)
  {
    int w;
    w = CompareWeight(a.mu_buffer, b.mu_buffer);
    if (w!=0) return w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chanAType& a, mu_1_chanAType& b)
  {
    int w;
    w = Compare(a.mu_buffer, b.mu_buffer);
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
    mu_buffer.MultisetSort();
    mu_used.MultisetSort();
  }
  void print_statistic()
  {
    mu_buffer.print_statistic();
    mu_used.print_statistic();
  }
  void clear() {
    mu_buffer.clear();
    mu_used.clear();
 };
  void undefine() {
    mu_buffer.undefine();
    mu_used.undefine();
 };
  void reset() {
    mu_buffer.reset();
    mu_used.reset();
 };
  void print() {
    mu_buffer.print();
    mu_used.print();
  };
  void print_diff(state *prevstate) {
    mu_buffer.print_diff(prevstate);
    mu_used.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_buffer.to_state(thestate);
    mu_used.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chanAType& operator= (const mu_1_chanAType& from) {
    mu_buffer = from.mu_buffer;
    mu_used.value(from.mu_used.value());
    return *this;
  };
};

  void mu_1_chanAType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chanAType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chanAType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_buffer.set_self_2(name, ".buffer", os + 0 ); else mu_buffer.set_self_2(NULL, NULL, 0);
  if (name) mu_used.set_self_2(name, ".used", os + 80 ); else mu_used.set_self_2(NULL, NULL, 0);
}

mu_1_chanAType::~mu_1_chanAType()
{
}

/*** end record declaration ***/
mu_1_chanAType mu_1_chanAType_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_msgBType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_msgBType& operator[] (int index) /* const */
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
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 40 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_chanBType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_buffer;
  mu_1_extend_chan_buff_Type mu_used;
  mu_1_chanBType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chanBType ( void ) {};

  virtual ~mu_1_chanBType(); 
friend int CompareWeight(mu_1_chanBType& a, mu_1_chanBType& b)
  {
    int w;
    w = CompareWeight(a.mu_buffer, b.mu_buffer);
    if (w!=0) return w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chanBType& a, mu_1_chanBType& b)
  {
    int w;
    w = Compare(a.mu_buffer, b.mu_buffer);
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
    mu_buffer.MultisetSort();
    mu_used.MultisetSort();
  }
  void print_statistic()
  {
    mu_buffer.print_statistic();
    mu_used.print_statistic();
  }
  void clear() {
    mu_buffer.clear();
    mu_used.clear();
 };
  void undefine() {
    mu_buffer.undefine();
    mu_used.undefine();
 };
  void reset() {
    mu_buffer.reset();
    mu_used.reset();
 };
  void print() {
    mu_buffer.print();
    mu_used.print();
  };
  void print_diff(state *prevstate) {
    mu_buffer.print_diff(prevstate);
    mu_used.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_buffer.to_state(thestate);
    mu_used.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chanBType& operator= (const mu_1_chanBType& from) {
    mu_buffer = from.mu_buffer;
    mu_used.value(from.mu_used.value());
    return *this;
  };
};

  void mu_1_chanBType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chanBType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chanBType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_buffer.set_self_2(name, ".buffer", os + 0 ); else mu_buffer.set_self_2(NULL, NULL, 0);
  if (name) mu_used.set_self_2(name, ".used", os + 80 ); else mu_used.set_self_2(NULL, NULL, 0);
}

mu_1_chanBType::~mu_1_chanBType()
{
}

/*** end record declaration ***/
mu_1_chanBType mu_1_chanBType_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_msgCType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_msgCType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 40 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1_chanCType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_2 mu_buffer;
  mu_1_extend_chan_buff_Type mu_used;
  mu_1_chanCType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chanCType ( void ) {};

  virtual ~mu_1_chanCType(); 
friend int CompareWeight(mu_1_chanCType& a, mu_1_chanCType& b)
  {
    int w;
    w = CompareWeight(a.mu_buffer, b.mu_buffer);
    if (w!=0) return w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chanCType& a, mu_1_chanCType& b)
  {
    int w;
    w = Compare(a.mu_buffer, b.mu_buffer);
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
    mu_buffer.MultisetSort();
    mu_used.MultisetSort();
  }
  void print_statistic()
  {
    mu_buffer.print_statistic();
    mu_used.print_statistic();
  }
  void clear() {
    mu_buffer.clear();
    mu_used.clear();
 };
  void undefine() {
    mu_buffer.undefine();
    mu_used.undefine();
 };
  void reset() {
    mu_buffer.reset();
    mu_used.reset();
 };
  void print() {
    mu_buffer.print();
    mu_used.print();
  };
  void print_diff(state *prevstate) {
    mu_buffer.print_diff(prevstate);
    mu_used.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_buffer.to_state(thestate);
    mu_used.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chanCType& operator= (const mu_1_chanCType& from) {
    mu_buffer = from.mu_buffer;
    mu_used.value(from.mu_used.value());
    return *this;
  };
};

  void mu_1_chanCType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chanCType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chanCType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_buffer.set_self_2(name, ".buffer", os + 0 ); else mu_buffer.set_self_2(NULL, NULL, 0);
  if (name) mu_used.set_self_2(name, ".used", os + 80 ); else mu_used.set_self_2(NULL, NULL, 0);
}

mu_1_chanCType::~mu_1_chanCType()
{
}

/*** end record declaration ***/
mu_1_chanCType mu_1_chanCType_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_msgDType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_msgDType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 40 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1_chanDType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_3 mu_buffer;
  mu_1_extend_chan_buff_Type mu_used;
  mu_1_chanDType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chanDType ( void ) {};

  virtual ~mu_1_chanDType(); 
friend int CompareWeight(mu_1_chanDType& a, mu_1_chanDType& b)
  {
    int w;
    w = CompareWeight(a.mu_buffer, b.mu_buffer);
    if (w!=0) return w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chanDType& a, mu_1_chanDType& b)
  {
    int w;
    w = Compare(a.mu_buffer, b.mu_buffer);
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
    mu_buffer.MultisetSort();
    mu_used.MultisetSort();
  }
  void print_statistic()
  {
    mu_buffer.print_statistic();
    mu_used.print_statistic();
  }
  void clear() {
    mu_buffer.clear();
    mu_used.clear();
 };
  void undefine() {
    mu_buffer.undefine();
    mu_used.undefine();
 };
  void reset() {
    mu_buffer.reset();
    mu_used.reset();
 };
  void print() {
    mu_buffer.print();
    mu_used.print();
  };
  void print_diff(state *prevstate) {
    mu_buffer.print_diff(prevstate);
    mu_used.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_buffer.to_state(thestate);
    mu_used.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chanDType& operator= (const mu_1_chanDType& from) {
    mu_buffer = from.mu_buffer;
    mu_used.value(from.mu_used.value());
    return *this;
  };
};

  void mu_1_chanDType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chanDType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chanDType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_buffer.set_self_2(name, ".buffer", os + 0 ); else mu_buffer.set_self_2(NULL, NULL, 0);
  if (name) mu_used.set_self_2(name, ".used", os + 80 ); else mu_used.set_self_2(NULL, NULL, 0);
}

mu_1_chanDType::~mu_1_chanDType()
{
}

/*** end record declaration ***/
mu_1_chanDType mu_1_chanDType_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_msgEType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_msgEType& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1_chanEType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_4 mu_buffer;
  mu_1_extend_chan_buff_Type mu_used;
  mu_1_chanEType ( const char *n, int os ) { set_self(n,os); };
  mu_1_chanEType ( void ) {};

  virtual ~mu_1_chanEType(); 
friend int CompareWeight(mu_1_chanEType& a, mu_1_chanEType& b)
  {
    int w;
    w = CompareWeight(a.mu_buffer, b.mu_buffer);
    if (w!=0) return w;
    w = CompareWeight(a.mu_used, b.mu_used);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_chanEType& a, mu_1_chanEType& b)
  {
    int w;
    w = Compare(a.mu_buffer, b.mu_buffer);
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
    mu_buffer.MultisetSort();
    mu_used.MultisetSort();
  }
  void print_statistic()
  {
    mu_buffer.print_statistic();
    mu_used.print_statistic();
  }
  void clear() {
    mu_buffer.clear();
    mu_used.clear();
 };
  void undefine() {
    mu_buffer.undefine();
    mu_used.undefine();
 };
  void reset() {
    mu_buffer.reset();
    mu_used.reset();
 };
  void print() {
    mu_buffer.print();
    mu_used.print();
  };
  void print_diff(state *prevstate) {
    mu_buffer.print_diff(prevstate);
    mu_used.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_buffer.to_state(thestate);
    mu_used.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_chanEType& operator= (const mu_1_chanEType& from) {
    mu_buffer = from.mu_buffer;
    mu_used.value(from.mu_used.value());
    return *this;
  };
};

  void mu_1_chanEType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_chanEType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_chanEType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_buffer.set_self_2(name, ".buffer", os + 0 ); else mu_buffer.set_self_2(NULL, NULL, 0);
  if (name) mu_used.set_self_2(name, ".used", os + 64 ); else mu_used.set_self_2(NULL, NULL, 0);
}

mu_1_chanEType::~mu_1_chanEType()
{
}

/*** end record declaration ***/
mu_1_chanEType mu_1_chanEType_undefined_var;

class mu_1_lineType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_addrType mu_addr;
  mu_1_stateType mu_state;
  mu_1_dataType mu_data;
  mu_0_boolean mu_dirty;
  mu_1_lineType ( const char *n, int os ) { set_self(n,os); };
  mu_1_lineType ( void ) {};

  virtual ~mu_1_lineType(); 
friend int CompareWeight(mu_1_lineType& a, mu_1_lineType& b)
  {
    int w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dirty, b.mu_dirty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_lineType& a, mu_1_lineType& b)
  {
    int w;
    w = Compare(a.mu_addr, b.mu_addr);
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
    mu_addr.MultisetSort();
    mu_state.MultisetSort();
    mu_data.MultisetSort();
    mu_dirty.MultisetSort();
  }
  void print_statistic()
  {
    mu_addr.print_statistic();
    mu_state.print_statistic();
    mu_data.print_statistic();
    mu_dirty.print_statistic();
  }
  void clear() {
    mu_addr.clear();
    mu_state.clear();
    mu_data.clear();
    mu_dirty.clear();
 };
  void undefine() {
    mu_addr.undefine();
    mu_state.undefine();
    mu_data.undefine();
    mu_dirty.undefine();
 };
  void reset() {
    mu_addr.reset();
    mu_state.reset();
    mu_data.reset();
    mu_dirty.reset();
 };
  void print() {
    mu_addr.print();
    mu_state.print();
    mu_data.print();
    mu_dirty.print();
  };
  void print_diff(state *prevstate) {
    mu_addr.print_diff(prevstate);
    mu_state.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_dirty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_addr.to_state(thestate);
    mu_state.to_state(thestate);
    mu_data.to_state(thestate);
    mu_dirty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_lineType& operator= (const mu_1_lineType& from) {
    mu_addr.value(from.mu_addr.value());
    mu_state.value(from.mu_state.value());
    mu_data.value(from.mu_data.value());
    mu_dirty.value(from.mu_dirty.value());
    return *this;
  };
};

  void mu_1_lineType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_lineType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_lineType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_addr.set_self_2(name, ".addr", os + 0 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_state.set_self_2(name, ".state", os + 8 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_dirty.set_self_2(name, ".dirty", os + 24 ); else mu_dirty.set_self_2(NULL, NULL, 0);
}

mu_1_lineType::~mu_1_lineType()
{
}

/*** end record declaration ***/
mu_1_lineType mu_1_lineType_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_lineType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_lineType& operator[] (int index) /* const */
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
  mu_1_extend_stor_Type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_extend_stor_Type& operator[] (int index) /* const */
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

class mu_1_cacheType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_extend_stor_Type mu_used;
  mu_1__type_5 mu_line;
  mu_1__type_6 mu_valid;
  mu_1_cacheType ( const char *n, int os ) { set_self(n,os); };
  mu_1_cacheType ( void ) {};

  virtual ~mu_1_cacheType(); 
friend int CompareWeight(mu_1_cacheType& a, mu_1_cacheType& b)
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
friend int Compare(mu_1_cacheType& a, mu_1_cacheType& b)
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
  mu_1_cacheType& operator= (const mu_1_cacheType& from) {
    mu_used.value(from.mu_used.value());
    mu_line = from.mu_line;
    mu_valid = from.mu_valid;
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

  if (name) mu_used.set_self_2(name, ".used", os + 0 ); else mu_used.set_self_2(NULL, NULL, 0);
  if (name) mu_line.set_self_2(name, ".line", os + 8 ); else mu_line.set_self_2(NULL, NULL, 0);
  if (name) mu_valid.set_self_2(name, ".valid", os + 72 ); else mu_valid.set_self_2(NULL, NULL, 0);
}

mu_1_cacheType::~mu_1_cacheType()
{
}

/*** end record declaration ***/
mu_1_cacheType mu_1_cacheType_undefined_var;

class mu_1__type_7
{
 public:
  mu_1_nodeId array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
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
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
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

class mu_1__type_8
{
 public:
  mu_1_stateType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
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
  mu_1__type_8 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1__type_8& operator[] (int index) /* const */
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

class mu_1__type_10
{
 public:
  mu_1_slave_pending_Type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
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
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
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
  mu_1__type_10 array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1__type_10& operator[] (int index) /* const */
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

class mu_1__type_12
{
 public:
  mu_1_master_pending_Type array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
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
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
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
  mu_1_chanAType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_1_chanAType& operator[] (int index) /* const */
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
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 88 + os);
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
  mu_1_chanBType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1_chanBType& operator[] (int index) /* const */
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
      array[i] = from.array[i];
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 88 + os);
    delete[] s;
  }
};
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15
{
 public:
  mu_1_chanCType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_1_chanCType& operator[] (int index) /* const */
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
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 88 + os);
    delete[] s;
  }
};
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16
{
 public:
  mu_1_chanDType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_1_chanDType& operator[] (int index) /* const */
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
  mu_1__type_16& operator= (const mu_1__type_16& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 88 + os);
    delete[] s;
  }
};
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17
{
 public:
  mu_1_chanEType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_17 (const char *n, int os) { set_self(n, os); };
  mu_1__type_17 ( void ) {};
  virtual ~mu_1__type_17 ();
  mu_1_chanEType& operator[] (int index) /* const */
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
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 72 + os);
    delete[] s;
  }
};
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1_treeNode
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_cacheType mu_cache;
  mu_1__type_7 mu_sons;
  mu_1__type_9 mu_directory;
  mu_1__type_11 mu_slave_pending;
  mu_1__type_12 mu_master_pending;
  mu_1_branchType mu_reqId;
  mu_1__type_13 mu_chan1;
  mu_1__type_14 mu_chan2;
  mu_1__type_15 mu_chan3;
  mu_1__type_16 mu_chan4;
  mu_1__type_17 mu_chan5;
  mu_1_treeNode ( const char *n, int os ) { set_self(n,os); };
  mu_1_treeNode ( void ) {};

  virtual ~mu_1_treeNode(); 
friend int CompareWeight(mu_1_treeNode& a, mu_1_treeNode& b)
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
    w = CompareWeight(a.mu_reqId, b.mu_reqId);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chan1, b.mu_chan1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chan2, b.mu_chan2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chan3, b.mu_chan3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chan4, b.mu_chan4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_chan5, b.mu_chan5);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_treeNode& a, mu_1_treeNode& b)
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
    w = Compare(a.mu_reqId, b.mu_reqId);
    if (w!=0) return w;
    w = Compare(a.mu_chan1, b.mu_chan1);
    if (w!=0) return w;
    w = Compare(a.mu_chan2, b.mu_chan2);
    if (w!=0) return w;
    w = Compare(a.mu_chan3, b.mu_chan3);
    if (w!=0) return w;
    w = Compare(a.mu_chan4, b.mu_chan4);
    if (w!=0) return w;
    w = Compare(a.mu_chan5, b.mu_chan5);
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
    mu_reqId.MultisetSort();
    mu_chan1.MultisetSort();
    mu_chan2.MultisetSort();
    mu_chan3.MultisetSort();
    mu_chan4.MultisetSort();
    mu_chan5.MultisetSort();
  }
  void print_statistic()
  {
    mu_cache.print_statistic();
    mu_sons.print_statistic();
    mu_directory.print_statistic();
    mu_slave_pending.print_statistic();
    mu_master_pending.print_statistic();
    mu_reqId.print_statistic();
    mu_chan1.print_statistic();
    mu_chan2.print_statistic();
    mu_chan3.print_statistic();
    mu_chan4.print_statistic();
    mu_chan5.print_statistic();
  }
  void clear() {
    mu_cache.clear();
    mu_sons.clear();
    mu_directory.clear();
    mu_slave_pending.clear();
    mu_master_pending.clear();
    mu_reqId.clear();
    mu_chan1.clear();
    mu_chan2.clear();
    mu_chan3.clear();
    mu_chan4.clear();
    mu_chan5.clear();
 };
  void undefine() {
    mu_cache.undefine();
    mu_sons.undefine();
    mu_directory.undefine();
    mu_slave_pending.undefine();
    mu_master_pending.undefine();
    mu_reqId.undefine();
    mu_chan1.undefine();
    mu_chan2.undefine();
    mu_chan3.undefine();
    mu_chan4.undefine();
    mu_chan5.undefine();
 };
  void reset() {
    mu_cache.reset();
    mu_sons.reset();
    mu_directory.reset();
    mu_slave_pending.reset();
    mu_master_pending.reset();
    mu_reqId.reset();
    mu_chan1.reset();
    mu_chan2.reset();
    mu_chan3.reset();
    mu_chan4.reset();
    mu_chan5.reset();
 };
  void print() {
    mu_cache.print();
    mu_sons.print();
    mu_directory.print();
    mu_slave_pending.print();
    mu_master_pending.print();
    mu_reqId.print();
    mu_chan1.print();
    mu_chan2.print();
    mu_chan3.print();
    mu_chan4.print();
    mu_chan5.print();
  };
  void print_diff(state *prevstate) {
    mu_cache.print_diff(prevstate);
    mu_sons.print_diff(prevstate);
    mu_directory.print_diff(prevstate);
    mu_slave_pending.print_diff(prevstate);
    mu_master_pending.print_diff(prevstate);
    mu_reqId.print_diff(prevstate);
    mu_chan1.print_diff(prevstate);
    mu_chan2.print_diff(prevstate);
    mu_chan3.print_diff(prevstate);
    mu_chan4.print_diff(prevstate);
    mu_chan5.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cache.to_state(thestate);
    mu_sons.to_state(thestate);
    mu_directory.to_state(thestate);
    mu_slave_pending.to_state(thestate);
    mu_master_pending.to_state(thestate);
    mu_reqId.to_state(thestate);
    mu_chan1.to_state(thestate);
    mu_chan2.to_state(thestate);
    mu_chan3.to_state(thestate);
    mu_chan4.to_state(thestate);
    mu_chan5.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_treeNode& operator= (const mu_1_treeNode& from) {
    mu_cache = from.mu_cache;
    mu_sons = from.mu_sons;
    mu_directory = from.mu_directory;
    mu_slave_pending = from.mu_slave_pending;
    mu_master_pending = from.mu_master_pending;
    mu_reqId.value(from.mu_reqId.value());
    mu_chan1 = from.mu_chan1;
    mu_chan2 = from.mu_chan2;
    mu_chan3 = from.mu_chan3;
    mu_chan4 = from.mu_chan4;
    mu_chan5 = from.mu_chan5;
    return *this;
  };
};

  void mu_1_treeNode::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_treeNode::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_treeNode::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cache.set_self_2(name, ".cache", os + 0 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_sons.set_self_2(name, ".sons", os + 88 ); else mu_sons.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 104 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_slave_pending.set_self_2(name, ".slave_pending", os + 136 ); else mu_slave_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_master_pending.set_self_2(name, ".master_pending", os + 168 ); else mu_master_pending.set_self_2(NULL, NULL, 0);
  if (name) mu_reqId.set_self_2(name, ".reqId", os + 184 ); else mu_reqId.set_self_2(NULL, NULL, 0);
  if (name) mu_chan1.set_self_2(name, ".chan1", os + 192 ); else mu_chan1.set_self_2(NULL, NULL, 0);
  if (name) mu_chan2.set_self_2(name, ".chan2", os + 368 ); else mu_chan2.set_self_2(NULL, NULL, 0);
  if (name) mu_chan3.set_self_2(name, ".chan3", os + 544 ); else mu_chan3.set_self_2(NULL, NULL, 0);
  if (name) mu_chan4.set_self_2(name, ".chan4", os + 720 ); else mu_chan4.set_self_2(NULL, NULL, 0);
  if (name) mu_chan5.set_self_2(name, ".chan5", os + 896 ); else mu_chan5.set_self_2(NULL, NULL, 0);
}

mu_1_treeNode::~mu_1_treeNode()
{
}

/*** end record declaration ***/
mu_1_treeNode mu_1_treeNode_undefined_var;

class mu_1__type_18
{
 public:
  mu_1_treeNode array[ 7 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_18 (const char *n, int os) { set_self(n, os); };
  mu_1__type_18 ( void ) {};
  virtual ~mu_1__type_18 ();
  mu_1_treeNode& operator[] (int index) /* const */
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
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 7; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<7; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 7; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 1040 + os);
    delete[] s;
  }
};
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19
{
 public:
  mu_1_dataType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_19 (const char *n, int os) { set_self(n, os); };
  mu_1__type_19 ( void ) {};
  virtual ~mu_1__type_19 ();
  mu_1_dataType& operator[] (int index) /* const */
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
  mu_1__type_19& operator= (const mu_1__type_19& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20
{
 public:
  mu_1_dataType array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_20 (const char *n, int os) { set_self(n, os); };
  mu_1__type_20 ( void ) {};
  virtual ~mu_1__type_20 ();
  mu_1_dataType& operator[] (int index) /* const */
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
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
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
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
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
  mu_1__type_21 (const char *name, int os): mu__byte(1, 8, 4, name, os) {};
  mu_1__type_21 (void): mu__byte(1, 8, 4) {};
  mu_1__type_21 (int val): mu__byte(1, 8, 4, "Parameter or function result.", 0)
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

const int mu_coreNum = 4;
const int mu_allNodeNum = 7;
const int mu_allBranchNum = 2;
const int mu_ChanNum = 5;
const int mu_chanBuffNum = 2;
const int mu_DataNum = 2;
const int mu_storNum = 2;
const int mu_addNum = 2;
const int mu_dataType_1 = 1;
const int mu_dataType_2 = 2;
const int mu_None = 3;
const int mu_Trunk = 4;
const int mu_Branch = 5;
const int mu_Tip = 6;
const int mu_Acquire = 7;
const int mu_Probe = 8;
const int mu_ProbeAck = 9;
const int mu_Release = 10;
const int mu_Grant = 11;
const int mu_GrantData = 12;
const int mu_ReleaseAck = 13;
const int mu_GrantAck = 14;
const int mu_NtoB = 15;
const int mu_NtoT = 16;
const int mu_BtoT = 17;
const int mu_toN = 18;
const int mu_toB = 19;
const int mu_toT = 20;
const int mu_BtoN = 21;
const int mu_TtoN = 22;
const int mu_TtoB = 23;
const int mu_NtoN = 24;
const int mu_BtoB = 25;
const int mu_pending_ProbeAck = 26;
const int mu_pending_GrantAck = 27;
const int mu_pending_Grant = 28;
const int mu_pending_GrantData = 29;
const int mu_pending_ReleaseAck = 30;
/*** Variable declaration ***/
mu_1__type_18 mu_Tree("Tree",0);

/*** Variable declaration ***/
mu_1__type_19 mu_memData("memData",7280);

/*** Variable declaration ***/
mu_1__type_20 mu_auxData("auxData",7296);

void mu_removeData(mu_1_cacheType& mu_ca, const mu_1_addrType& mu_addr)
{
bool mu__boolexpr22;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_ca.mu_valid[mu_addr]) >= (0)) ; 
}
if ( !(mu__boolexpr22) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 173.");
if ( (mu_ca.mu_valid[mu_addr]) >= (1) )
{
{
int mu__ub23 = (mu_ca.mu_used) - (1);
for (int mu_i = mu_ca.mu_valid[mu_addr]; mu_i <= mu__ub23; mu_i += 1) {
mu_ca.mu_line[mu_i] = mu_ca.mu_line[(mu_i) + (1)];
mu_ca.mu_valid[mu_ca.mu_line[(mu_i) + (1)].mu_addr] = mu_i;
};
};
mu_ca.mu_valid[mu_addr] = 0;
mu_ca.mu_used = (mu_ca.mu_used) - (1);
}
};
/*** end procedure declaration ***/

mu_0_boolean mu_insertLine(mu_1_cacheType& mu_ca,const mu_1_addrType& mu_addr,mu_1_lineType& mu_line)
{
bool mu__boolexpr24;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_ca.mu_valid[mu_addr]) >= (0)) ; 
}
if ( !(mu__boolexpr24) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 185.");
if ( (mu_ca.mu_valid[mu_addr]) >= (1) )
{
mu_ca.mu_line[mu_ca.mu_valid[mu_addr]] = mu_line;
return mu_true;
}
else
{
if ( (mu_ca.mu_used) < (mu_storNum) )
{
mu_ca.mu_used = (mu_ca.mu_used) + (1);
mu_ca.mu_line[mu_ca.mu_used] = mu_line;
mu_ca.mu_valid[mu_addr] = mu_ca.mu_used;
return mu_true;
}
else
{
return mu_false;
}
}
	Error.Error("The end of function insertLine reached without returning values.");
};
/*** end function declaration ***/

mu_1_stateType mu_getState(mu_1_cacheType& mu_ca,const mu_1_addrType& mu_addr)
{
if ( (mu_ca.mu_valid[mu_addr]) == (0) )
{
return mu_None;
}
else
{
return mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_state;
}
	Error.Error("The end of function getState reached without returning values.");
};
/*** end function declaration ***/

mu_1_dataType mu_getData(mu_1_cacheType& mu_ca,const mu_1_addrType& mu_addr)
{
bool mu__boolexpr25;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_ca.mu_valid[mu_addr]) >= (1)) ; 
}
if ( !(mu__boolexpr25) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 208.");
return mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_data;
	Error.Error("The end of function getData reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_getDirty(mu_1_cacheType& mu_ca,const mu_1_addrType& mu_addr)
{
bool mu__boolexpr26;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_ca.mu_valid[mu_addr]) >= (1)) ; 
}
if ( !(mu__boolexpr26) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 213.");
return mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_dirty;
	Error.Error("The end of function getDirty reached without returning values.");
};
/*** end function declaration ***/

void mu_updateState(mu_1_cacheType& mu_ca, const mu_1_addrType& mu_addr, const mu_1_stateType& mu_s)
{
bool mu__boolexpr27;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_ca.mu_valid[mu_addr]) >= (1)) ; 
}
if ( !(mu__boolexpr27) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 218.");
if (mu_s.isundefined())
  mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_state.undefine();
else
  mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_state = mu_s;
};
/*** end procedure declaration ***/

void mu_updateData(mu_1_cacheType& mu_ca, const mu_1_addrType& mu_addr, const mu_1_dataType& mu_d)
{
bool mu__boolexpr28;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_ca.mu_valid[mu_addr]) >= (1)) ; 
}
if ( !(mu__boolexpr28) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 223.");
if (mu_d.isundefined())
  mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_data.undefine();
else
  mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_data = mu_d;
};
/*** end procedure declaration ***/

void mu_updateDirty(mu_1_cacheType& mu_ca, const mu_1_addrType& mu_addr, const mu_0_boolean& mu_d)
{
bool mu__boolexpr29;
  if (!((mu_ca.mu_valid[mu_addr]) <= (mu_storNum))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_ca.mu_valid[mu_addr]) >= (1)) ; 
}
if ( !(mu__boolexpr29) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 228.");
if (mu_d.isundefined())
  mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_dirty.undefine();
else
  mu_ca.mu_line[mu_ca.mu_valid[mu_addr]].mu_dirty = mu_d;
};
/*** end procedure declaration ***/

mu_0_boolean mu_sendAMsg(mu_1_chanAType& mu_ch,mu_1_msgAType& mu_msgA)
{
if ( (mu_ch.mu_used) < (mu_chanBuffNum) )
{
mu_ch.mu_used = (mu_ch.mu_used) + (1);
mu_ch.mu_buffer[mu_ch.mu_used] = mu_msgA;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function sendAMsg reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_sendBMsg(mu_1_chanBType& mu_ch,mu_1_msgBType& mu_msgB)
{
if ( (mu_ch.mu_used) < (mu_chanBuffNum) )
{
mu_ch.mu_used = (mu_ch.mu_used) + (1);
mu_ch.mu_buffer[mu_ch.mu_used] = mu_msgB;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function sendBMsg reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_sendCMsg(mu_1_chanCType& mu_ch,mu_1_msgCType& mu_msgC)
{
if ( (mu_ch.mu_used) < (mu_chanBuffNum) )
{
mu_ch.mu_used = (mu_ch.mu_used) + (1);
mu_ch.mu_buffer[mu_ch.mu_used] = mu_msgC;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function sendCMsg reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_sendDMsg(mu_1_chanDType& mu_ch,mu_1_msgDType& mu_msgD)
{
if ( (mu_ch.mu_used) < (mu_chanBuffNum) )
{
mu_ch.mu_used = (mu_ch.mu_used) + (1);
mu_ch.mu_buffer[mu_ch.mu_used] = mu_msgD;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function sendDMsg reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_sendEMsg(mu_1_chanEType& mu_ch,mu_1_msgEType& mu_msgE)
{
if ( (mu_ch.mu_used) < (mu_chanBuffNum) )
{
mu_ch.mu_used = (mu_ch.mu_used) + (1);
mu_ch.mu_buffer[mu_ch.mu_used] = mu_msgE;
return mu_true;
}
else
{
return mu_false;
}
	Error.Error("The end of function sendEMsg reached without returning values.");
};
/*** end function declaration ***/

void mu_popAMsg(mu_1_chanAType& mu_ch)
{
{
int mu__ub30 = (mu_ch.mu_used) - (1);
for (int mu_i = 1; mu_i <= mu__ub30; mu_i += 1) {
mu_ch.mu_buffer[mu_i] = mu_ch.mu_buffer[(mu_i) + (1)];
};
};
mu_ch.mu_used = (mu_ch.mu_used) - (1);
};
/*** end procedure declaration ***/

void mu_popBMsg(mu_1_chanBType& mu_ch)
{
{
int mu__ub31 = (mu_ch.mu_used) - (1);
for (int mu_i = 1; mu_i <= mu__ub31; mu_i += 1) {
mu_ch.mu_buffer[mu_i] = mu_ch.mu_buffer[(mu_i) + (1)];
};
};
mu_ch.mu_used = (mu_ch.mu_used) - (1);
};
/*** end procedure declaration ***/

void mu_popCMsg(mu_1_chanCType& mu_ch)
{
{
int mu__ub32 = (mu_ch.mu_used) - (1);
for (int mu_i = 1; mu_i <= mu__ub32; mu_i += 1) {
mu_ch.mu_buffer[mu_i] = mu_ch.mu_buffer[(mu_i) + (1)];
};
};
mu_ch.mu_used = (mu_ch.mu_used) - (1);
};
/*** end procedure declaration ***/

void mu_popDMsg(mu_1_chanDType& mu_ch)
{
{
int mu__ub33 = (mu_ch.mu_used) - (1);
for (int mu_i = 1; mu_i <= mu__ub33; mu_i += 1) {
mu_ch.mu_buffer[mu_i] = mu_ch.mu_buffer[(mu_i) + (1)];
};
};
mu_ch.mu_used = (mu_ch.mu_used) - (1);
};
/*** end procedure declaration ***/

void mu_popEMsg(mu_1_chanEType& mu_ch)
{
{
int mu__ub34 = (mu_ch.mu_used) - (1);
for (int mu_i = 1; mu_i <= mu__ub34; mu_i += 1) {
mu_ch.mu_buffer[mu_i] = mu_ch.mu_buffer[(mu_i) + (1)];
};
};
mu_ch.mu_used = (mu_ch.mu_used) - (1);
};
/*** end procedure declaration ***/





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
    return tsprintf("L3_receive_Acquire_NtoT_Branch_None_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr35;
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
bool mu__boolexpr42;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr42 = TRUE ;
  else {
  mu__boolexpr42 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr39 = (mu__boolexpr42) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
bool mu__quant43; 
mu__quant43 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr44;
  if (!((mu_k) != (mu_b))) mu__boolexpr44 = TRUE ;
  else {
  mu__boolexpr44 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr44) )
  { mu__quant43 = FALSE; break; }
};
};
  mu__boolexpr36 = (mu__quant43) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr35;
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
bool mu__boolexpr52;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr52 = TRUE ;
  else {
  mu__boolexpr52 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr49 = (mu__boolexpr52) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
bool mu__quant53; 
mu__quant53 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr54;
  if (!((mu_k) != (mu_b))) mu__boolexpr54 = TRUE ;
  else {
  mu__boolexpr54 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr54) )
  { mu__quant53 = FALSE; break; }
};
};
  mu__boolexpr46 = (mu__quant53) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_GrantData;
mu_msg.mu_para = mu_toT;
mu_msg.mu_data = mu_getData( mu_Tree[1].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[1].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_updateState ( mu_Tree[1].mu_cache, mu_a, mu_Trunk );
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[1].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_popAMsg ( mu_Tree[1].mu_chan1[mu_b] );
mu_Tree[1].mu_reqId.undefine();
}
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
    return tsprintf("L3_receive_Acquire_NtoB(NtoT/BtoT)_None_None_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
bool mu__boolexpr62;
  if ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) mu__boolexpr62 = TRUE ;
  else {
  mu__boolexpr62 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  mu__boolexpr60 = (mu__boolexpr62) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
bool mu__boolexpr63;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr63 = TRUE ;
  else {
  mu__boolexpr63 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr59 = (mu__boolexpr63) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
bool mu__quant64; 
mu__quant64 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr65;
  if (!((mu_k) != (mu_b))) mu__boolexpr65 = TRUE ;
  else {
  mu__boolexpr65 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr65) )
  { mu__quant64 = FALSE; break; }
};
};
  mu__boolexpr56 = (mu__quant64) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr55;
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
bool mu__boolexpr72;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
bool mu__boolexpr73;
  if ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) mu__boolexpr73 = TRUE ;
  else {
  mu__boolexpr73 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  mu__boolexpr71 = (mu__boolexpr73) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
bool mu__boolexpr74;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr74 = TRUE ;
  else {
  mu__boolexpr74 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr70 = (mu__boolexpr74) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
bool mu__quant75; 
mu__quant75 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr76;
  if (!((mu_k) != (mu_b))) mu__boolexpr76 = TRUE ;
  else {
  mu__boolexpr76 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr76) )
  { mu__quant75 = FALSE; break; }
};
};
  mu__boolexpr67 = (mu__quant75) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_GrantData;
mu_msg.mu_para = mu_toT;
mu_msg.mu_data = mu_memData[mu_a];
mu_msg.mu_dirty = mu_false;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_auxData[mu_a] = mu_memData[mu_a];
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[1].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_popAMsg ( mu_Tree[1].mu_chan1[mu_b] );
mu_Tree[1].mu_reqId.undefine();
}
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
    return tsprintf("L3_receive_Acquire_BtoT_Branch_Branch_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
bool mu__boolexpr84;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr84 = TRUE ;
  else {
  mu__boolexpr84 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr81 = (mu__boolexpr84) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
bool mu__quant85; 
mu__quant85 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr86;
  if (!((mu_k) != (mu_b))) mu__boolexpr86 = TRUE ;
  else {
  mu__boolexpr86 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr86) )
  { mu__quant85 = FALSE; break; }
};
};
  mu__boolexpr78 = (mu__quant85) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr77;
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
bool mu__boolexpr94;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr94 = TRUE ;
  else {
  mu__boolexpr94 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr91 = (mu__boolexpr94) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
bool mu__quant95; 
mu__quant95 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr96;
  if (!((mu_k) != (mu_b))) mu__boolexpr96 = TRUE ;
  else {
  mu__boolexpr96 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr96) )
  { mu__quant95 = FALSE; break; }
};
};
  mu__boolexpr88 = (mu__quant95) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
	      if (mu__boolexpr87) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Grant;
mu_msg.mu_para = mu_toT;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_updateState ( mu_Tree[1].mu_cache, mu_a, mu_Trunk );
mu_auxData[mu_a] = mu_memData[mu_a];
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[1].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_popAMsg ( mu_Tree[1].mu_chan1[mu_b] );
mu_Tree[1].mu_reqId.undefine();
}
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
    return tsprintf("L3_receive_Acquire_BtoT_Branch_None_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
bool mu__boolexpr104;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr104 = TRUE ;
  else {
  mu__boolexpr104 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr101 = (mu__boolexpr104) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
bool mu__quant105; 
mu__quant105 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr106;
  if (!((mu_k) != (mu_b))) mu__boolexpr106 = TRUE ;
  else {
  mu__boolexpr106 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr106) )
  { mu__quant105 = FALSE; break; }
};
};
  mu__boolexpr98 = (mu__quant105) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_Tree[1].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr97;
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
bool mu__boolexpr114;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr114 = TRUE ;
  else {
  mu__boolexpr114 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr111 = (mu__boolexpr114) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
bool mu__quant115; 
mu__quant115 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr116;
  if (!((mu_k) != (mu_b))) mu__boolexpr116 = TRUE ;
  else {
  mu__boolexpr116 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr116) )
  { mu__quant115 = FALSE; break; }
};
};
  mu__boolexpr108 = (mu__quant115) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_Tree[1].mu_master_pending[mu_a].isundefined()) ; 
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
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_GrantData;
mu_msg.mu_para = mu_toT;
mu_msg.mu_data = mu_getData( mu_Tree[1].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[1].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_updateState ( mu_Tree[1].mu_cache, mu_a, mu_Trunk );
mu_auxData[mu_a] = mu_memData[mu_a];
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[1].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_popAMsg ( mu_Tree[1].mu_chan1[mu_b] );
mu_Tree[1].mu_reqId.undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_Acquire_BtoT_None_Branch_None, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
bool mu__boolexpr124;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr124 = TRUE ;
  else {
  mu__boolexpr124 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr121 = (mu__boolexpr124) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
bool mu__quant125; 
mu__quant125 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr126;
  if (!((mu_k) != (mu_b))) mu__boolexpr126 = TRUE ;
  else {
  mu__boolexpr126 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr126) )
  { mu__quant125 = FALSE; break; }
};
};
  mu__boolexpr118 = (mu__quant125) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr117;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 10 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_Tree[1].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
bool mu__boolexpr134;
  if (mu_Tree[1].mu_reqId.isundefined()) mu__boolexpr134 = TRUE ;
  else {
  mu__boolexpr134 = ((mu_Tree[1].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr131 = (mu__boolexpr134) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_Tree[1].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
bool mu__quant135; 
mu__quant135 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr136;
  if (!((mu_k) != (mu_b))) mu__boolexpr136 = TRUE ;
  else {
  mu__boolexpr136 = ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr136) )
  { mu__quant135 = FALSE; break; }
};
};
  mu__boolexpr128 = (mu__quant135) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (mu_Tree[1].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
	      if (mu__boolexpr127) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Grant;
mu_msg.mu_para = mu_toT;
mu_msg.mu_data = mu_memData[mu_a];
mu_msg.mu_dirty = mu_false;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_auxData[mu_a] = mu_memData[mu_a];
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_Tip;
mu_Tree[1].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_popAMsg ( mu_Tree[1].mu_chan1[mu_b] );
mu_Tree[1].mu_reqId.undefine();
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_ReleaseThrough_5, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!((mu_Tree[1].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_Tree[1].mu_chan3[mu_b].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr) == (mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
    return mu__boolexpr137;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 12 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
  if (!((mu_Tree[1].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_Tree[1].mu_chan3[mu_b].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr) == (mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
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
    r = what_rule - 10;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_memData[mu_a] = mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_Branch;
mu_popCMsg ( mu_Tree[1].mu_chan3[mu_b] );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_Releasethrough_3, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!((mu_Tree[1].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Tree[1].mu_chan3[mu_b].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr) == (mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
    return mu__boolexpr149;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 14 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
  if (!((mu_Tree[1].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_Tree[1].mu_chan3[mu_b].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr) == (mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
	      if (mu__boolexpr155) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_memData[mu_a] = mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_None;
mu_popCMsg ( mu_Tree[1].mu_chan3[mu_b] );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_receive_Releasethrough_1, b:%s", mu_b.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!((mu_Tree[1].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_Tree[1].mu_chan3[mu_b].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr) == (mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
    return mu__boolexpr161;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 14;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr167;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
  if (!((mu_Tree[1].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_Tree[1].mu_chan3[mu_b].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr) == (mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None)) ; 
}
	      if (mu__boolexpr167) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[1].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[1].mu_chan4[mu_b], mu_msg ) )
{
mu_memData[mu_a] = mu_Tree[1].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_Tree[1].mu_directory[mu_b][mu_a] = mu_None;
mu_popCMsg ( mu_Tree[1].mu_chan3[mu_b] );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_send_release_3, b:%s, a:%s", mu_b.Name(), mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr173;
bool mu__boolexpr174;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_Tree[1].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
bool mu__quant175; 
mu__quant175 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant175 = TRUE; break; }
};
};
  mu__boolexpr173 = (mu__quant175) ; 
}
    return mu__boolexpr173;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 20 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_Tree[1].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
bool mu__quant178; 
mu__quant178 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant178 = TRUE; break; }
};
};
  mu__boolexpr176 = (mu__quant178) ; 
}
	      if (mu__boolexpr176) {
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
    r = what_rule - 16;
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
mu_removeData ( mu_Tree[1].mu_cache, mu_a );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("L3_send_release_1(2), b:%s, a:%s", mu_b.Name(), mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
  if ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr181 = TRUE ;
  else {
  mu__boolexpr181 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_Tree[1].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
bool mu__quant182; 
mu__quant182 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant182 = FALSE; break; }
};
};
  mu__boolexpr179 = (mu__quant182) ; 
}
    return mu__boolexpr179;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 20;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 24 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr185 = TRUE ;
  else {
  mu__boolexpr185 = ((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_Tree[1].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
bool mu__quant186; 
mu__quant186 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[1].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant186 = FALSE; break; }
};
};
  mu__boolexpr183 = (mu__quant186) ; 
}
	      if (mu__boolexpr183) {
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
    r = what_rule - 20;
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
if ( mu_getDirty( mu_Tree[1].mu_cache, mu_a ) )
{
mu_memData[mu_a] = mu_getData( mu_Tree[1].mu_cache, mu_a );
}
mu_removeData ( mu_Tree[1].mu_cache, mu_a );
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
    return tsprintf("Ln_send_Release_7, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
bool mu__quant189; 
mu__quant189 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Tip)) )
  { mu__quant189 = TRUE; break; }
};
};
  mu__boolexpr187 = (mu__quant189) ; 
}
    return mu__boolexpr187;
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
bool mu__boolexpr190;
bool mu__boolexpr191;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
bool mu__quant192; 
mu__quant192 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Tip)) )
  { mu__quant192 = TRUE; break; }
};
};
  mu__boolexpr190 = (mu__quant192) ; 
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
mu_removeData ( mu_Tree[mu_i].mu_cache, mu_a );
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
    return tsprintf("Ln_send_Release_4, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
bool mu__quant195; 
mu__quant195 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) )
  { mu__quant195 = TRUE; break; }
};
};
  mu__boolexpr193 = (mu__quant195) ; 
}
    return mu__boolexpr193;
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
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
bool mu__quant198; 
mu__quant198 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) )
  { mu__quant198 = TRUE; break; }
};
};
  mu__boolexpr196 = (mu__quant198) ; 
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
mu_removeData ( mu_Tree[mu_i].mu_cache, mu_a );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_send_Release_5, a:%s, b:%s, j:%s", mu_a.Name(), mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
bool mu__quant202; 
mu__quant202 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant202 = TRUE; break; }
};
};
  mu__boolexpr200 = (mu__quant202) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr199;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 40 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
bool mu__quant206; 
mu__quant206 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant206 = TRUE; break; }
};
};
  mu__boolexpr204 = (mu__quant206) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr203) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
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
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Release;
mu_msg.mu_para = mu_TtoB;
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_removeData ( mu_Tree[mu_i].mu_cache, mu_a );
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_send_Release_2, a:%s, b:%s, j:%s", mu_a.Name(), mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
bool mu__quant210; 
mu__quant210 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant210 = FALSE; break; }
};
};
  mu__boolexpr208 = (mu__quant210) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr207;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 40;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 44 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_Tree[mu_i].mu_reqId.isundefined()) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
bool mu__quant214; 
mu__quant214 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant214 = FALSE; break; }
};
};
  mu__boolexpr212 = (mu__quant214) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
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
    r = what_rule - 40;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
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
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Release;
mu_msg.mu_para = mu_TtoN;
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_removeData ( mu_Tree[mu_i].mu_cache, mu_a );
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
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_send_Release_1, a:%s, b:%s, j:%s", mu_a.Name(), mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!(mu_Tree[mu_i].mu_reqId.isundefined())) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
bool mu__quant218; 
mu__quant218 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant218 = FALSE; break; }
};
};
  mu__boolexpr216 = (mu__quant218) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr215;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 44;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
  if (!(mu_Tree[mu_i].mu_reqId.isundefined())) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
bool mu__quant222; 
mu__quant222 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant222 = FALSE; break; }
};
};
  mu__boolexpr220 = (mu__quant222) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
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
    r = what_rule - 44;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
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
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Release;
mu_msg.mu_para = mu_BtoN;
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_removeData ( mu_Tree[mu_i].mu_cache, mu_a );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Probe_toN(toB)_Trunk, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
bool mu__boolexpr226;
  if ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) mu__boolexpr226 = TRUE ;
  else {
  mu__boolexpr226 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr224 = (mu__boolexpr226) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
    return mu__boolexpr223;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 50 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
bool mu__boolexpr230;
  if ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) mu__boolexpr230 = TRUE ;
  else {
  mu__boolexpr230 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr228 = (mu__boolexpr230) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk)) ; 
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
    r = what_rule - 48;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr231;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr231 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
}
};
};
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Probe_toB_Branch(Tip), b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
bool mu__boolexpr237;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr237 = TRUE ;
  else {
  mu__boolexpr237 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr234 = (mu__boolexpr237) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
bool mu__boolexpr238;
  if (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) mu__boolexpr238 = TRUE ;
  else {
  mu__boolexpr238 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr232 = (mu__boolexpr238) ; 
}
    return mu__boolexpr232;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 50;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 52 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
bool mu__boolexpr244;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr244 = TRUE ;
  else {
  mu__boolexpr244 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr241 = (mu__boolexpr244) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
bool mu__boolexpr245;
  if (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) mu__boolexpr245 = TRUE ;
  else {
  mu__boolexpr245 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr239 = (mu__boolexpr245) ; 
}
	      if (mu__boolexpr239) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ProbeAck;
mu_msg.mu_para = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ? (mu_BtoB) : (mu_TtoB);
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_updateState ( mu_Tree[mu_i].mu_cache, mu_a, mu_Branch );
mu_popBMsg ( mu_Tree[mu_j].mu_chan2[mu_b] );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Probe_toN_None(Branch/Tip)_Branch, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
bool mu__boolexpr250;
bool mu__boolexpr251;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) mu__boolexpr251 = TRUE ;
  else {
  mu__boolexpr251 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (mu__boolexpr251) mu__boolexpr250 = TRUE ;
  else {
  mu__boolexpr250 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr247 = (mu__boolexpr250) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
bool mu__quant252; 
mu__quant252 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant252 = TRUE; break; }
};
};
  mu__boolexpr246 = (mu__quant252) ; 
}
    return mu__boolexpr246;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 52;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 54 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
bool mu__boolexpr257;
bool mu__boolexpr258;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) mu__boolexpr258 = TRUE ;
  else {
  mu__boolexpr258 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (mu__boolexpr258) mu__boolexpr257 = TRUE ;
  else {
  mu__boolexpr257 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr254 = (mu__boolexpr257) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
bool mu__quant259; 
mu__quant259 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) )
  { mu__quant259 = TRUE; break; }
};
};
  mu__boolexpr253 = (mu__quant259) ; 
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
    r = what_rule - 52;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_toN;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr260;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch))) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr260 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
}
};
};
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Probe_toN(toB)_None_Tip, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr261;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
bool mu__boolexpr265;
  if ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) mu__boolexpr265 = TRUE ;
  else {
  mu__boolexpr265 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr263 = (mu__boolexpr265) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
bool mu__quant266; 
mu__quant266 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) )
  { mu__quant266 = TRUE; break; }
};
};
  mu__boolexpr261 = (mu__quant266) ; 
}
    return mu__boolexpr261;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 54;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 56 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
bool mu__boolexpr271;
  if ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) mu__boolexpr271 = TRUE ;
  else {
  mu__boolexpr271 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr269 = (mu__boolexpr271) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
bool mu__quant272; 
mu__quant272 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) )
  { mu__quant272 = TRUE; break; }
};
};
  mu__boolexpr267 = (mu__quant272) ; 
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
    r = what_rule - 54;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr273;
  if (!((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr273 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Probe_toN_Branch_None, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
bool mu__boolexpr279;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr279 = TRUE ;
  else {
  mu__boolexpr279 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr277 = (mu__boolexpr279) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) ; 
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
bool mu__boolexpr281;
  if (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) mu__boolexpr281 = TRUE ;
  else {
  mu__boolexpr281 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr274 = (mu__boolexpr281) ; 
}
    return mu__boolexpr274;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 56;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 58 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
bool mu__boolexpr287;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr287 = TRUE ;
  else {
  mu__boolexpr287 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr285 = (mu__boolexpr287) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
bool mu__quant288; 
mu__quant288 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant288 = FALSE; break; }
};
};
  mu__boolexpr283 = (mu__quant288) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
bool mu__boolexpr289;
  if (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) mu__boolexpr289 = TRUE ;
  else {
  mu__boolexpr289 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr282 = (mu__boolexpr289) ; 
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
    r = what_rule - 56;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ProbeAck;
mu_msg.mu_para = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ? (mu_BtoN) : (mu_TtoN);
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_removeData ( mu_Tree[mu_i].mu_cache, mu_a );
mu_popBMsg ( mu_Tree[mu_j].mu_chan2[mu_b] );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Probe_toN_None_None, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
bool mu__quant294; 
mu__quant294 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant294 = FALSE; break; }
};
};
  mu__boolexpr291 = (mu__quant294) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
bool mu__boolexpr295;
  if (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) mu__boolexpr295 = TRUE ;
  else {
  mu__boolexpr295 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr290 = (mu__boolexpr295) ; 
}
    return mu__boolexpr290;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 58;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 60 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
bool mu__quant300; 
mu__quant300 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
if ( !((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) )
  { mu__quant300 = FALSE; break; }
};
};
  mu__boolexpr297 = (mu__quant300) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
bool mu__boolexpr301;
  if (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) mu__boolexpr301 = TRUE ;
  else {
  mu__boolexpr301 = ((mu_Tree[mu_i].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr296 = (mu__boolexpr301) ; 
}
	      if (mu__boolexpr296) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 58;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ProbeAck;
mu_msg.mu_para = mu_NtoN;
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_popBMsg ( mu_Tree[mu_j].mu_chan2[mu_b] );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_ReleaseAck, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr302;
bool mu__boolexpr303;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (!(mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr302;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 62 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr304;
bool mu__boolexpr305;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (!(mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode.isundefined())) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_ReleaseAck)) ; 
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
    r = what_rule - 60;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
mu_Tree[mu_i].mu_master_pending[mu_a].undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
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
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Grant_toT_1, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (!(mu_Tree[mu_i].mu_reqId.isundefined())) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = ((mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = (mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId].mu_used) < (mu_chanBuffNum)) ; 
}
    return mu__boolexpr306;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 62;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 64 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (!(mu_Tree[mu_i].mu_reqId.isundefined())) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = ((mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId].mu_used) < (mu_chanBuffNum)) ; 
}
	      if (mu__boolexpr314) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_upmsg("upmsg",0);

/*** Variable declaration ***/
mu_1_msgEType mu_downmsg("downmsg",40);

mu_updateState ( mu_Tree[mu_i].mu_cache, mu_a, mu_Trunk );
mu_upmsg.mu_opcode = mu_GrantData;
mu_upmsg.mu_para = mu_toT;
mu_upmsg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_upmsg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId], mu_upmsg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a] = mu_Tip;
}
mu_downmsg.mu_opcode = mu_GrantAck;
mu_downmsg.mu_addr = mu_a;
if ( mu_sendEMsg( mu_Tree[mu_j].mu_chan5[mu_b], mu_downmsg ) )
{
mu_popAMsg ( mu_Tree[mu_i].mu_chan1[mu_Tree[mu_i].mu_reqId] );
mu_Tree[mu_i].mu_reqId.undefine();
mu_Tree[mu_i].mu_master_pending[mu_a].undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
}
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
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Grant_toT_2(3), b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
bool mu__boolexpr328;
bool mu__boolexpr329;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
bool mu__boolexpr330;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr330 = TRUE ;
  else {
  mu__boolexpr330 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  mu__boolexpr327 = (mu__boolexpr330) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (!(mu_Tree[mu_i].mu_reqId.isundefined())) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId].mu_used) < (mu_chanBuffNum)) ; 
}
    return mu__boolexpr322;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 64;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 66 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
bool mu__boolexpr339;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr339 = TRUE ;
  else {
  mu__boolexpr339 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  mu__boolexpr336 = (mu__boolexpr339) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (!(mu_Tree[mu_i].mu_reqId.isundefined())) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId].mu_used) < (mu_chanBuffNum)) ; 
}
	      if (mu__boolexpr331) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgEType mu_msg("msg",0);

if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId], mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1] ) )
{
if ( (mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch) )
{
mu_updateState ( mu_Tree[mu_i].mu_cache, mu_a, mu_Trunk );
}
mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a] = mu_Tip;
}
mu_msg.mu_opcode = mu_GrantAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendEMsg( mu_Tree[mu_j].mu_chan5[mu_b], mu_msg ) )
{
mu_popAMsg ( mu_Tree[mu_i].mu_chan1[mu_Tree[mu_i].mu_reqId] );
mu_Tree[mu_i].mu_reqId.undefine();
mu_Tree[mu_i].mu_master_pending[mu_a].undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_GrantData_toB(toT), b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
bool mu__boolexpr347;
  if ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toB)) mu__boolexpr347 = TRUE ;
  else {
  mu__boolexpr347 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr345 = (mu__boolexpr347) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (!(mu_Tree[mu_i].mu_reqId.isundefined())) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = ((mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId].mu_used) < (mu_chanBuffNum)) ; 
}
    return mu__boolexpr340;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 66;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 68 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
bool mu__boolexpr355;
  if ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toB)) mu__boolexpr355 = TRUE ;
  else {
  mu__boolexpr355 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  mu__boolexpr353 = (mu__boolexpr355) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (!(mu_Tree[mu_i].mu_reqId.isundefined())) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId].mu_used) < (mu_chanBuffNum)) ; 
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
    r = what_rule - 66;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b];
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgEType mu_msg("msg",0);

if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_Tree[mu_i].mu_reqId], mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1] ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_Tree[mu_i].mu_reqId][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_Tree[mu_i].mu_reqId][mu_a] = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ? (mu_Tip) : (mu_Branch);
}
mu_msg.mu_opcode = mu_GrantAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendEMsg( mu_Tree[mu_j].mu_chan5[mu_b], mu_msg ) )
{
mu_popAMsg ( mu_Tree[mu_i].mu_chan1[mu_Tree[mu_i].mu_reqId] );
mu_Tree[mu_i].mu_reqId.undefine();
mu_Tree[mu_i].mu_master_pending[mu_a].undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
}
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
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_ReleaseThrough_1, b2:%s, b1:%s, j:%s", mu_b2.Name(), mu_b1.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan2[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
  if (!((mu_Tree[mu_i].mu_chan2[mu_b1].mu_used) > (0))) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
bool mu__boolexpr364;
  if ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_para) == (mu_TtoN)) mu__boolexpr364 = TRUE ;
  else {
  mu__boolexpr364 = ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  mu__boolexpr361 = (mu__boolexpr364) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_Tree[mu_j].mu_chan3[mu_b2].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = ((mu_Tree[mu_i].mu_chan4[mu_b1].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_Tree[mu_i].mu_chan2[mu_b1].mu_buffer[1].mu_addr) == (mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
    return mu__boolexpr356;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 68;
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 72 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan2[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!((mu_Tree[mu_i].mu_chan2[mu_b1].mu_used) > (0))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_used) > (0)) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
bool mu__boolexpr373;
  if ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_para) == (mu_TtoN)) mu__boolexpr373 = TRUE ;
  else {
  mu__boolexpr373 = ((mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  mu__boolexpr370 = (mu__boolexpr373) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_Tree[mu_j].mu_chan3[mu_b2].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_Tree[mu_i].mu_chan4[mu_b1].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = ((mu_Tree[mu_i].mu_chan2[mu_b1].mu_buffer[1].mu_addr) == (mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1].mu_addr)) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
	      if (mu__boolexpr365) {
		if ( ( TRUE  ) )
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
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan2[mu_b1].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
bool mu__boolexpr374;
  if (!(mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b2], mu_Tree[mu_i].mu_chan3[mu_b1].mu_buffer[1] ))) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b1], mu_msg )) ; 
}
if ( mu__boolexpr374 )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b1] );
mu_Tree[mu_i].mu_directory[mu_b1][mu_a] = mu_None;
}
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
    return tsprintf("Ln_receive_Release_TtoN(TtoB)_Trunk, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = ((mu_Tree[mu_i].mu_chan4[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
    return mu__boolexpr375;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 72;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 78 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = ((mu_Tree[mu_i].mu_chan4[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
	      if (mu__boolexpr379) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_lineType mu_l("l",0);

/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",32);

mu_l.mu_addr = mu_a;
mu_l.mu_state = mu_Tip;
mu_l.mu_data = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_l.mu_dirty = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_dirty;
mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
bool mu__boolexpr383;
  if (!(mu_insertLine( mu_Tree[mu_i].mu_cache, mu_a, mu_l ))) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b], mu_msg )) ; 
}
if ( mu__boolexpr383 )
{
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) ? (mu_None) : (mu_Branch);
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
}
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
    return tsprintf("Ln_receive_Release_BtoN_Tip(Branch), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr384;
bool mu__boolexpr385;
bool mu__boolexpr386;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
bool mu__boolexpr387;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) mu__boolexpr387 = TRUE ;
  else {
  mu__boolexpr387 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  mu__boolexpr384 = (mu__boolexpr387) ; 
}
    return mu__boolexpr384;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 78;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 84 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr388;
bool mu__boolexpr389;
bool mu__boolexpr390;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
bool mu__boolexpr391;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) mu__boolexpr391 = TRUE ;
  else {
  mu__boolexpr391 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  mu__boolexpr388 = (mu__boolexpr391) ; 
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
    r = what_rule - 78;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
}
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
    return tsprintf("Ln_receive_Release_TtoN(BtoN/TtoB)_None, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
bool mu__boolexpr395;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
bool mu__boolexpr396;
bool mu__boolexpr397;
  if ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) mu__boolexpr397 = TRUE ;
  else {
  mu__boolexpr397 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (mu__boolexpr397) mu__boolexpr396 = TRUE ;
  else {
  mu__boolexpr396 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ; 
}
  mu__boolexpr394 = (mu__boolexpr396) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = ((mu_Tree[mu_i].mu_chan4[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
    return mu__boolexpr392;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 84;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 90 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
bool mu__boolexpr401;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_Release)) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
bool mu__boolexpr402;
bool mu__boolexpr403;
  if ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) mu__boolexpr403 = TRUE ;
  else {
  mu__boolexpr403 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (mu__boolexpr403) mu__boolexpr402 = TRUE ;
  else {
  mu__boolexpr402 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ; 
}
  mu__boolexpr400 = (mu__boolexpr402) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_Tree[mu_i].mu_chan4[mu_b].mu_used) < (mu_chanBuffNum)) ; 
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
    r = what_rule - 84;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_lineType mu_l("l",0);

/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",32);

mu_l.mu_addr = mu_a;
mu_l.mu_state = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ? (mu_Branch) : (mu_Tip);
mu_l.mu_data = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_l.mu_dirty = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_dirty;
mu_msg.mu_opcode = mu_ReleaseAck;
mu_msg.mu_addr = mu_a;
bool mu__boolexpr404;
  if (!(mu_insertLine( mu_Tree[mu_i].mu_cache, mu_a, mu_l ))) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b], mu_msg )) ; 
}
if ( mu__boolexpr404 )
{
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ? (mu_Branch) : (mu_None);
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
}
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
    return tsprintf("Ln_receive_ProbeAck_7(8), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr405;
bool mu__boolexpr406;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
bool mu__boolexpr407;
  if ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) mu__boolexpr407 = TRUE ;
  else {
  mu__boolexpr407 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ; 
}
  mu__boolexpr405 = (mu__boolexpr407) ; 
}
    return mu__boolexpr405;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 90;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 96 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr408;
bool mu__boolexpr409;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
bool mu__boolexpr410;
  if ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) mu__boolexpr410 = TRUE ;
  else {
  mu__boolexpr410 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoB)) ; 
}
  mu__boolexpr408 = (mu__boolexpr410) ; 
}
	      if (mu__boolexpr408) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_lineType mu_l("l",0);

mu_l.mu_addr = mu_a;
mu_l.mu_state = mu_Tip;
mu_l.mu_data = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_l.mu_dirty = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_dirty;
if ( mu_insertLine( mu_Tree[mu_i].mu_cache, mu_a, mu_l ) )
{
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_TtoN)) ? (mu_None) : (mu_Branch);
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].undefine();
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
}
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
    return tsprintf("Ln_receive_ProbeAck_2(5), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr411;
bool mu__boolexpr412;
bool mu__boolexpr413;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr413)) mu__boolexpr412 = FALSE ;
  else {
bool mu__boolexpr414;
  if ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) mu__boolexpr414 = TRUE ;
  else {
  mu__boolexpr414 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoB)) ; 
}
  mu__boolexpr412 = (mu__boolexpr414) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
    return mu__boolexpr411;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 96;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 102 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
bool mu__boolexpr418;
  if ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) mu__boolexpr418 = TRUE ;
  else {
  mu__boolexpr418 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoB)) ; 
}
  mu__boolexpr416 = (mu__boolexpr418) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
	      if (mu__boolexpr415) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_lineType mu_l("l",0);

mu_l.mu_addr = mu_a;
mu_l.mu_state = mu_Branch;
mu_l.mu_data = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_data;
mu_l.mu_dirty = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_dirty;
if ( mu_insertLine( mu_Tree[mu_i].mu_cache, mu_a, mu_l ) )
{
if ( (mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN) )
{
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
}
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].undefine();
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
}
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
    return tsprintf("Ln_receive_ProbeAck_3(4), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr419;
bool mu__boolexpr420;
bool mu__boolexpr421;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
bool mu__boolexpr422;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr422 = TRUE ;
  else {
  mu__boolexpr422 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr419 = (mu__boolexpr422) ; 
}
    return mu__boolexpr419;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 102;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 108 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoN)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
bool mu__boolexpr426;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr426 = TRUE ;
  else {
  mu__boolexpr426 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr423 = (mu__boolexpr426) ; 
}
	      if (mu__boolexpr423) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
mu_updateData ( mu_Tree[mu_i].mu_cache, mu_a, mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_data );
mu_updateDirty ( mu_Tree[mu_i].mu_cache, mu_a, mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_dirty );
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].undefine();
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
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
    return tsprintf("Ln_receive_ProbeAck_6, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoB)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
bool mu__boolexpr430;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr430 = TRUE ;
  else {
  mu__boolexpr430 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr427 = (mu__boolexpr430) ; 
}
    return mu__boolexpr427;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 108;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 114 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr431;
bool mu__boolexpr432;
bool mu__boolexpr433;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_BtoB)) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
bool mu__boolexpr434;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr434 = TRUE ;
  else {
  mu__boolexpr434 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr431 = (mu__boolexpr434) ; 
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
    r = what_rule - 108;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].undefine();
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
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
    return tsprintf("Ln_receive_ProbeAck_1, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_NtoN)) ; 
}
    return mu__boolexpr435;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 114;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 120 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr437;
bool mu__boolexpr438;
  if (!((mu_Tree[mu_i].mu_chan3[mu_b].mu_used) > (0))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_opcode) == (mu_ProbeAck)) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_para) == (mu_NtoN)) ; 
}
	      if (mu__boolexpr437) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan3[mu_b].mu_buffer[1].mu_addr;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_None;
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].undefine();
mu_popCMsg ( mu_Tree[mu_i].mu_chan3[mu_b] );
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
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Acquire_NtoB_None_None_None, b2:%s, b1:%s, j:%s", mu_b2.Name(), mu_b1.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr439;
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
bool mu__boolexpr446;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr446 = TRUE ;
  else {
  mu__boolexpr446 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr443 = (mu__boolexpr446) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
bool mu__quant447; 
mu__quant447 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr448;
  if (!((mu_k) != (mu_b1))) mu__boolexpr448 = TRUE ;
  else {
  mu__boolexpr448 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr448) )
  { mu__quant447 = FALSE; break; }
};
};
  mu__boolexpr440 = (mu__quant447) ; 
}
  if (!(mu__boolexpr440)) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr439;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 120;
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 124 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
bool mu__boolexpr454;
bool mu__boolexpr455;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
bool mu__boolexpr456;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr456 = TRUE ;
  else {
  mu__boolexpr456 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr453 = (mu__boolexpr456) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
bool mu__quant457; 
mu__quant457 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr458;
  if (!((mu_k) != (mu_b1))) mu__boolexpr458 = TRUE ;
  else {
  mu__boolexpr458 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr458) )
  { mu__quant457 = FALSE; break; }
};
};
  mu__boolexpr450 = (mu__quant457) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr449) {
		if ( ( TRUE  ) )
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
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgAType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b1;
mu_msg.mu_opcode = mu_Acquire;
mu_msg.mu_para = mu_NtoB;
mu_msg.mu_addr = mu_a;
if ( mu_sendAMsg( mu_Tree[mu_j].mu_chan1[mu_b2], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
}
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
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Acquire_BtoT(NtoT)_None_None_None, b2:%s, b1:%s, j:%s", mu_b2.Name(), mu_b1.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
bool mu__boolexpr463;
bool mu__boolexpr464;
bool mu__boolexpr465;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
bool mu__boolexpr466;
  if ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_BtoT)) mu__boolexpr466 = TRUE ;
  else {
  mu__boolexpr466 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  mu__boolexpr464 = (mu__boolexpr466) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
bool mu__boolexpr467;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr467 = TRUE ;
  else {
  mu__boolexpr467 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr463 = (mu__boolexpr467) ; 
}
  if (!(mu__boolexpr463)) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
bool mu__quant468; 
mu__quant468 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr469;
  if (!((mu_k) != (mu_b1))) mu__boolexpr469 = TRUE ;
  else {
  mu__boolexpr469 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr469) )
  { mu__quant468 = FALSE; break; }
};
};
  mu__boolexpr460 = (mu__quant468) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr459;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 124;
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 128 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr470;
bool mu__boolexpr471;
bool mu__boolexpr472;
bool mu__boolexpr473;
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
bool mu__boolexpr477;
  if ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_BtoT)) mu__boolexpr477 = TRUE ;
  else {
  mu__boolexpr477 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  mu__boolexpr475 = (mu__boolexpr477) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
bool mu__boolexpr478;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr478 = TRUE ;
  else {
  mu__boolexpr478 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr474 = (mu__boolexpr478) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
bool mu__quant479; 
mu__quant479 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr480;
  if (!((mu_k) != (mu_b1))) mu__boolexpr480 = TRUE ;
  else {
  mu__boolexpr480 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr480) )
  { mu__quant479 = FALSE; break; }
};
};
  mu__boolexpr471 = (mu__quant479) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr470) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 124;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgAType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b1;
mu_msg.mu_opcode = mu_Acquire;
mu_msg.mu_para = mu_NtoT;
mu_msg.mu_addr = mu_a;
if ( mu_sendAMsg( mu_Tree[mu_j].mu_chan1[mu_b2], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_GrantData;
}
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
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Acquire_NtoT(BtoT)_Branch_None_None, b2:%s, b1:%s, j:%s", mu_b2.Name(), mu_b1.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
bool mu__boolexpr484;
bool mu__boolexpr485;
bool mu__boolexpr486;
bool mu__boolexpr487;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
bool mu__boolexpr488;
  if ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_NtoT)) mu__boolexpr488 = TRUE ;
  else {
  mu__boolexpr488 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  mu__boolexpr486 = (mu__boolexpr488) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
bool mu__boolexpr489;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr489 = TRUE ;
  else {
  mu__boolexpr489 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr485 = (mu__boolexpr489) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
bool mu__quant490; 
mu__quant490 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr491;
  if (!((mu_k) != (mu_b1))) mu__boolexpr491 = TRUE ;
  else {
  mu__boolexpr491 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr491) )
  { mu__quant490 = FALSE; break; }
};
};
  mu__boolexpr482 = (mu__quant490) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr481;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 128;
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 132 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr492;
bool mu__boolexpr493;
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
bool mu__boolexpr498;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
bool mu__boolexpr499;
  if ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_NtoT)) mu__boolexpr499 = TRUE ;
  else {
  mu__boolexpr499 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  mu__boolexpr497 = (mu__boolexpr499) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
bool mu__boolexpr500;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr500 = TRUE ;
  else {
  mu__boolexpr500 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr496 = (mu__boolexpr500) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
bool mu__quant501; 
mu__quant501 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr502;
  if (!((mu_k) != (mu_b1))) mu__boolexpr502 = TRUE ;
  else {
  mu__boolexpr502 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr502) )
  { mu__quant501 = FALSE; break; }
};
};
  mu__boolexpr493 = (mu__quant501) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr492) {
		if ( ( TRUE  ) )
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
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgAType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b1;
mu_msg.mu_opcode = mu_Acquire;
mu_msg.mu_para = mu_BtoT;
mu_msg.mu_addr = mu_a;
if ( mu_sendAMsg( mu_Tree[mu_j].mu_chan1[mu_b2], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_Grant;
}
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
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("Ln_receive_Acquire_BtoT_Branch(None)_Branch_None, b2:%s, b1:%s, j:%s", mu_b2.Name(), mu_b1.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
bool mu__boolexpr510;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr510 = TRUE ;
  else {
  mu__boolexpr510 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr507 = (mu__boolexpr510) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
bool mu__boolexpr511;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr511 = TRUE ;
  else {
  mu__boolexpr511 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  mu__boolexpr506 = (mu__boolexpr511) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
bool mu__quant512; 
mu__quant512 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr513;
  if (!((mu_k) != (mu_b1))) mu__boolexpr513 = TRUE ;
  else {
  mu__boolexpr513 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr513) )
  { mu__quant512 = FALSE; break; }
};
};
  mu__boolexpr504 = (mu__quant512) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr503;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 132;
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 136 )
      {
	if ( ( TRUE  ) ) {
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
bool mu__boolexpr520;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b1].mu_used) > (0))) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr520)) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
bool mu__boolexpr521;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr521 = TRUE ;
  else {
  mu__boolexpr521 = ((mu_Tree[mu_i].mu_reqId) == (mu_b1)) ; 
}
  mu__boolexpr518 = (mu__boolexpr521) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
bool mu__boolexpr522;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr522 = TRUE ;
  else {
  mu__boolexpr522 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  mu__boolexpr517 = (mu__boolexpr522) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
bool mu__quant523; 
mu__quant523 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr524;
  if (!((mu_k) != (mu_b1))) mu__boolexpr524 = TRUE ;
  else {
  mu__boolexpr524 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr524) )
  { mu__quant523 = FALSE; break; }
};
};
  mu__boolexpr515 = (mu__quant523) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = (mu_Tree[mu_i].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr514) {
		if ( ( TRUE  ) )
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
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b2;
    mu_b2.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b1;
    mu_b1.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l3Id mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
  mu_1_nodeId& mu_i = mu_Tree[mu_j].mu_sons[mu_b2];
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b1].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgAType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b1;
mu_msg.mu_opcode = mu_Acquire;
mu_msg.mu_para = mu_BtoT;
mu_msg.mu_addr = mu_a;
if ( mu_sendAMsg( mu_Tree[mu_j].mu_chan1[mu_b2], mu_msg ) )
{
mu_Tree[mu_i].mu_master_pending[mu_a] = mu_pending_Grant;
}
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
bool mu__boolexpr525;
  if (!((mu_Tree[mu_i].mu_chan5[mu_b].mu_used) > (0))) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_Tree[mu_i].mu_chan5[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantAck)) ; 
}
    return mu__boolexpr525;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 136;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 142 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr526;
  if (!((mu_Tree[mu_i].mu_chan5[mu_b].mu_used) > (0))) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = ((mu_Tree[mu_i].mu_chan5[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantAck)) ; 
}
	      if (mu__boolexpr526) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 136;
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
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_Tree[mu_i].mu_chan5[mu_b].mu_buffer[1].mu_addr].undefine();
mu_popEMsg ( mu_Tree[mu_i].mu_chan5[mu_b] );
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
    return tsprintf("Ln_receive_Acquire_NtoT(BtoT/NtoB)_Trunk_None_Tip, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
bool mu__boolexpr533;
bool mu__boolexpr534;
  if ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) mu__boolexpr534 = TRUE ;
  else {
  mu__boolexpr534 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (mu__boolexpr534) mu__boolexpr533 = TRUE ;
  else {
  mu__boolexpr533 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  mu__boolexpr531 = (mu__boolexpr533) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
bool mu__boolexpr535;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr535 = TRUE ;
  else {
  mu__boolexpr535 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr530 = (mu__boolexpr535) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
bool mu__quant536; 
mu__quant536 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr537;
bool mu__boolexpr538;
  if (!((mu_k) != (mu_b))) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr537) )
  { mu__quant536 = TRUE; break; }
};
};
  mu__boolexpr527 = (mu__quant536) ; 
}
    return mu__boolexpr527;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 142;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 148 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr539;
bool mu__boolexpr540;
bool mu__boolexpr541;
bool mu__boolexpr542;
bool mu__boolexpr543;
bool mu__boolexpr544;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
bool mu__boolexpr545;
bool mu__boolexpr546;
  if ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) mu__boolexpr546 = TRUE ;
  else {
  mu__boolexpr546 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (mu__boolexpr546) mu__boolexpr545 = TRUE ;
  else {
  mu__boolexpr545 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  mu__boolexpr543 = (mu__boolexpr545) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
bool mu__boolexpr547;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr547 = TRUE ;
  else {
  mu__boolexpr547 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr542 = (mu__boolexpr547) ; 
}
  if (!(mu__boolexpr542)) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
bool mu__quant548; 
mu__quant548 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr549;
bool mu__boolexpr550;
  if (!((mu_k) != (mu_b))) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr549) )
  { mu__quant548 = TRUE; break; }
};
};
  mu__boolexpr539 = (mu__quant548) ; 
}
	      if (mu__boolexpr539) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 142;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b;
mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ? (mu_toB) : (mu_toN);
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr551;
bool mu__boolexpr552;
  if (!((mu_k) != (mu_b))) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr551 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
}
};
};
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
    return tsprintf("Ln_receive_Acquire_NtoT_Branch(Tip)_None_Branch, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
bool mu__boolexpr559;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr559 = TRUE ;
  else {
  mu__boolexpr559 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr556 = (mu__boolexpr559) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
bool mu__boolexpr560;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr560 = TRUE ;
  else {
  mu__boolexpr560 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr555 = (mu__boolexpr560) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
bool mu__quant561; 
mu__quant561 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr562;
bool mu__boolexpr563;
  if (!((mu_k) != (mu_b))) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr562) )
  { mu__quant561 = TRUE; break; }
};
};
  mu__boolexpr553 = (mu__quant561) ; 
}
    return mu__boolexpr553;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 148;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 154 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr564;
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
bool mu__boolexpr568;
bool mu__boolexpr569;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
bool mu__boolexpr570;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr570 = TRUE ;
  else {
  mu__boolexpr570 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr567 = (mu__boolexpr570) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
bool mu__boolexpr571;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr571 = TRUE ;
  else {
  mu__boolexpr571 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr566 = (mu__boolexpr571) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
bool mu__quant572; 
mu__quant572 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr573;
bool mu__boolexpr574;
  if (!((mu_k) != (mu_b))) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr573) )
  { mu__quant572 = TRUE; break; }
};
};
  mu__boolexpr564 = (mu__quant572) ; 
}
	      if (mu__boolexpr564) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 148;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b;
mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_toN;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr575;
bool mu__boolexpr576;
  if (!((mu_k) != (mu_b))) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr575 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
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
    return tsprintf("Ln_receive_Acquire_NtoT_None_None_Branch(Tip), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr577;
bool mu__boolexpr578;
bool mu__boolexpr579;
bool mu__boolexpr580;
bool mu__boolexpr581;
bool mu__boolexpr582;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
bool mu__boolexpr583;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr583 = TRUE ;
  else {
  mu__boolexpr583 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr580 = (mu__boolexpr583) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
bool mu__quant584; 
mu__quant584 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr585;
bool mu__boolexpr586;
  if (!((mu_k) != (mu_b))) mu__boolexpr586 = FALSE ;
  else {
bool mu__boolexpr587;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr587 = TRUE ;
  else {
  mu__boolexpr587 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  mu__boolexpr586 = (mu__boolexpr587) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr585) )
  { mu__quant584 = TRUE; break; }
};
};
  mu__boolexpr577 = (mu__quant584) ; 
}
    return mu__boolexpr577;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 154;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 160 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr588;
bool mu__boolexpr589;
bool mu__boolexpr590;
bool mu__boolexpr591;
bool mu__boolexpr592;
bool mu__boolexpr593;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  if (!(mu__boolexpr592)) mu__boolexpr591 = FALSE ;
  else {
bool mu__boolexpr594;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr594 = TRUE ;
  else {
  mu__boolexpr594 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr591 = (mu__boolexpr594) ; 
}
  if (!(mu__boolexpr591)) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr590)) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
bool mu__quant595; 
mu__quant595 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr596;
bool mu__boolexpr597;
  if (!((mu_k) != (mu_b))) mu__boolexpr597 = FALSE ;
  else {
bool mu__boolexpr598;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr598 = TRUE ;
  else {
  mu__boolexpr598 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  mu__boolexpr597 = (mu__boolexpr598) ; 
}
  if (!(mu__boolexpr597)) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr596) )
  { mu__quant595 = TRUE; break; }
};
};
  mu__boolexpr588 = (mu__quant595) ; 
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
    r = what_rule - 154;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b;
mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_toN;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr599;
bool mu__boolexpr600;
  if (!((mu_k) != (mu_b))) mu__boolexpr600 = FALSE ;
  else {
bool mu__boolexpr601;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr601 = TRUE ;
  else {
  mu__boolexpr601 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  mu__boolexpr600 = (mu__boolexpr601) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr599 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
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
    return tsprintf("Ln_receive_Acquire_NtoB_None_None_Branch(Tip), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr602;
bool mu__boolexpr603;
bool mu__boolexpr604;
bool mu__boolexpr605;
bool mu__boolexpr606;
bool mu__boolexpr607;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr607)) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr606)) mu__boolexpr605 = FALSE ;
  else {
bool mu__boolexpr608;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr608 = TRUE ;
  else {
  mu__boolexpr608 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr605 = (mu__boolexpr608) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr604)) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
bool mu__quant609; 
mu__quant609 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr610;
bool mu__boolexpr611;
  if (!((mu_k) != (mu_b))) mu__boolexpr611 = FALSE ;
  else {
bool mu__boolexpr612;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr612 = TRUE ;
  else {
  mu__boolexpr612 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  mu__boolexpr611 = (mu__boolexpr612) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr610) )
  { mu__quant609 = TRUE; break; }
};
};
  mu__boolexpr602 = (mu__quant609) ; 
}
    return mu__boolexpr602;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 160;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 166 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr613;
bool mu__boolexpr614;
bool mu__boolexpr615;
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
bool mu__boolexpr619;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr619 = TRUE ;
  else {
  mu__boolexpr619 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr616 = (mu__boolexpr619) ; 
}
  if (!(mu__boolexpr616)) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr615)) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr614)) mu__boolexpr613 = FALSE ;
  else {
bool mu__quant620; 
mu__quant620 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr621;
bool mu__boolexpr622;
  if (!((mu_k) != (mu_b))) mu__boolexpr622 = FALSE ;
  else {
bool mu__boolexpr623;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr623 = TRUE ;
  else {
  mu__boolexpr623 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  mu__boolexpr622 = (mu__boolexpr623) ; 
}
  if (!(mu__boolexpr622)) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr621) )
  { mu__quant620 = TRUE; break; }
};
};
  mu__boolexpr613 = (mu__quant620) ; 
}
	      if (mu__boolexpr613) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 160;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

mu_Tree[mu_i].mu_reqId = mu_b;
mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_toB;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr624;
bool mu__boolexpr625;
  if (!((mu_k) != (mu_b))) mu__boolexpr625 = FALSE ;
  else {
bool mu__boolexpr626;
  if ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) mu__boolexpr626 = TRUE ;
  else {
  mu__boolexpr626 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Tip)) ; 
}
  mu__boolexpr625 = (mu__boolexpr626) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr624 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
}
};
};
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
    return tsprintf("Ln_receive_Acquire_BtoT_Branch(None)_None(Branch)_Branch, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr627;
bool mu__boolexpr628;
bool mu__boolexpr629;
bool mu__boolexpr630;
bool mu__boolexpr631;
bool mu__boolexpr632;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr632)) mu__boolexpr631 = FALSE ;
  else {
  mu__boolexpr631 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr631)) mu__boolexpr630 = FALSE ;
  else {
bool mu__boolexpr633;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr633 = TRUE ;
  else {
  mu__boolexpr633 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr630 = (mu__boolexpr633) ; 
}
  if (!(mu__boolexpr630)) mu__boolexpr629 = FALSE ;
  else {
bool mu__boolexpr634;
bool mu__boolexpr635;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr635 = TRUE ;
  else {
  mu__boolexpr635 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (mu__boolexpr635) mu__boolexpr634 = TRUE ;
  else {
  mu__boolexpr634 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr629 = (mu__boolexpr634) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
bool mu__boolexpr636;
  if ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) mu__boolexpr636 = TRUE ;
  else {
  mu__boolexpr636 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
  mu__boolexpr628 = (mu__boolexpr636) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
bool mu__quant637; 
mu__quant637 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr638;
bool mu__boolexpr639;
  if (!((mu_k) != (mu_b))) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr638) )
  { mu__quant637 = TRUE; break; }
};
};
  mu__boolexpr627 = (mu__quant637) ; 
}
    return mu__boolexpr627;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 166;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 172 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr640;
bool mu__boolexpr641;
bool mu__boolexpr642;
bool mu__boolexpr643;
bool mu__boolexpr644;
bool mu__boolexpr645;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr645)) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
bool mu__boolexpr646;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr646 = TRUE ;
  else {
  mu__boolexpr646 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr643 = (mu__boolexpr646) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
bool mu__boolexpr647;
bool mu__boolexpr648;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr648 = TRUE ;
  else {
  mu__boolexpr648 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (mu__boolexpr648) mu__boolexpr647 = TRUE ;
  else {
  mu__boolexpr647 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr642 = (mu__boolexpr647) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
bool mu__boolexpr649;
  if ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) mu__boolexpr649 = TRUE ;
  else {
  mu__boolexpr649 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) ; 
}
  mu__boolexpr641 = (mu__boolexpr649) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
bool mu__quant650; 
mu__quant650 = FALSE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr651;
bool mu__boolexpr652;
  if (!((mu_k) != (mu_b))) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr652)) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( (mu__boolexpr651) )
  { mu__quant650 = TRUE; break; }
};
};
  mu__boolexpr640 = (mu__quant650) ; 
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
    r = what_rule - 166;
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgBType mu_msg("msg",0);

bool mu__boolexpr653;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr653)) ) Error.Error("Assertion failed: ./models/TL-C_NonIn_M_data.m, line 712.");
mu_Tree[mu_i].mu_reqId = mu_b;
mu_msg.mu_opcode = mu_Probe;
mu_msg.mu_para = mu_toN;
mu_msg.mu_addr = mu_a;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr654;
bool mu__boolexpr655;
  if (!((mu_k) != (mu_b))) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = (mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a].isundefined()) ; 
}
if ( mu__boolexpr654 )
{
if ( mu_sendBMsg( mu_Tree[mu_i].mu_chan2[mu_k], mu_msg ) )
{
mu_Tree[mu_i].mu_slave_pending[mu_k][mu_a] = mu_pending_ProbeAck;
}
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
    return tsprintf("Ln_receive_Acquire_NtoB_Tip_None_Branch(Branch_None_Branch/None), b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr656;
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
bool mu__boolexpr660;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr660)) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
bool mu__boolexpr661;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr661 = TRUE ;
  else {
  mu__boolexpr661 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr658 = (mu__boolexpr661) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
bool mu__boolexpr662;
bool mu__boolexpr663;
bool mu__boolexpr664;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr664)) mu__boolexpr663 = FALSE ;
  else {
bool mu__quant665; 
mu__quant665 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr666;
  if (!((mu_k) != (mu_b))) mu__boolexpr666 = TRUE ;
  else {
  mu__boolexpr666 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
if ( !(mu__boolexpr666) )
  { mu__quant665 = FALSE; break; }
};
};
  mu__boolexpr663 = (mu__quant665) ; 
}
  if (mu__boolexpr663) mu__boolexpr662 = TRUE ;
  else {
bool mu__boolexpr667;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  mu__boolexpr662 = (mu__boolexpr667) ; 
}
  mu__boolexpr657 = (mu__boolexpr662) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = (mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr656;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 172;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 178 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr668;
bool mu__boolexpr669;
bool mu__boolexpr670;
bool mu__boolexpr671;
bool mu__boolexpr672;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr672)) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) ; 
}
  if (!(mu__boolexpr671)) mu__boolexpr670 = FALSE ;
  else {
bool mu__boolexpr673;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr673 = TRUE ;
  else {
  mu__boolexpr673 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr670 = (mu__boolexpr673) ; 
}
  if (!(mu__boolexpr670)) mu__boolexpr669 = FALSE ;
  else {
bool mu__boolexpr674;
bool mu__boolexpr675;
bool mu__boolexpr676;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
bool mu__quant677; 
mu__quant677 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr678;
  if (!((mu_k) != (mu_b))) mu__boolexpr678 = TRUE ;
  else {
  mu__boolexpr678 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_Branch)) ; 
}
if ( !(mu__boolexpr678) )
  { mu__quant677 = FALSE; break; }
};
};
  mu__boolexpr675 = (mu__quant677) ; 
}
  if (mu__boolexpr675) mu__boolexpr674 = TRUE ;
  else {
bool mu__boolexpr679;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  mu__boolexpr674 = (mu__boolexpr679) ; 
}
  mu__boolexpr669 = (mu__boolexpr674) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = (mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
	      if (mu__boolexpr668) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_GrantData;
mu_msg.mu_para = mu_toB;
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_reqId.undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Branch;
mu_popAMsg ( mu_Tree[mu_i].mu_chan1[mu_b] );
}
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
    return tsprintf("Ln_receive_Acquire_NtoB(NtoT)_Tip_None_None, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr680;
bool mu__boolexpr681;
bool mu__boolexpr682;
bool mu__boolexpr683;
bool mu__boolexpr684;
bool mu__boolexpr685;
bool mu__boolexpr686;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr686)) mu__boolexpr685 = FALSE ;
  else {
bool mu__boolexpr687;
  if ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) mu__boolexpr687 = TRUE ;
  else {
  mu__boolexpr687 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  mu__boolexpr685 = (mu__boolexpr687) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
bool mu__boolexpr688;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr688 = TRUE ;
  else {
  mu__boolexpr688 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr684 = (mu__boolexpr688) ; 
}
  if (!(mu__boolexpr684)) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr683)) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr682)) mu__boolexpr681 = FALSE ;
  else {
bool mu__quant689; 
mu__quant689 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr690;
  if (!((mu_k) != (mu_b))) mu__boolexpr690 = TRUE ;
  else {
  mu__boolexpr690 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr690) )
  { mu__quant689 = FALSE; break; }
};
};
  mu__boolexpr681 = (mu__quant689) ; 
}
  if (!(mu__boolexpr681)) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = (mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr680;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 178;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 184 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr691;
bool mu__boolexpr692;
bool mu__boolexpr693;
bool mu__boolexpr694;
bool mu__boolexpr695;
bool mu__boolexpr696;
bool mu__boolexpr697;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
bool mu__boolexpr698;
  if ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoB)) mu__boolexpr698 = TRUE ;
  else {
  mu__boolexpr698 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_NtoT)) ; 
}
  mu__boolexpr696 = (mu__boolexpr698) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
bool mu__boolexpr699;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr699 = TRUE ;
  else {
  mu__boolexpr699 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr695 = (mu__boolexpr699) ; 
}
  if (!(mu__boolexpr695)) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr694)) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  if (!(mu__boolexpr693)) mu__boolexpr692 = FALSE ;
  else {
bool mu__quant700; 
mu__quant700 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr701;
  if (!((mu_k) != (mu_b))) mu__boolexpr701 = TRUE ;
  else {
  mu__boolexpr701 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr701) )
  { mu__quant700 = FALSE; break; }
};
};
  mu__boolexpr692 = (mu__quant700) ; 
}
  if (!(mu__boolexpr692)) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = (mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
	      if (mu__boolexpr691) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_GrantData;
mu_msg.mu_para = mu_toT;
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_reqId.undefine();
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Tip;
mu_updateState ( mu_Tree[mu_i].mu_cache, mu_a, mu_Trunk );
mu_popAMsg ( mu_Tree[mu_i].mu_chan1[mu_b] );
}
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
    return tsprintf("Ln_receive_Acquire_BtoT_Tip_Branch(None)_None, b:%s, i:%s", mu_b.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr702;
bool mu__boolexpr703;
bool mu__boolexpr704;
bool mu__boolexpr705;
bool mu__boolexpr706;
bool mu__boolexpr707;
bool mu__boolexpr708;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
bool mu__boolexpr709;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr709 = TRUE ;
  else {
  mu__boolexpr709 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr706 = (mu__boolexpr709) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
bool mu__boolexpr710;
  if ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) mu__boolexpr710 = TRUE ;
  else {
  mu__boolexpr710 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  mu__boolexpr704 = (mu__boolexpr710) ; 
}
  if (!(mu__boolexpr704)) mu__boolexpr703 = FALSE ;
  else {
bool mu__quant711; 
mu__quant711 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr712;
  if (!((mu_k) != (mu_b))) mu__boolexpr712 = TRUE ;
  else {
  mu__boolexpr712 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr712) )
  { mu__quant711 = FALSE; break; }
};
};
  mu__boolexpr703 = (mu__quant711) ; 
}
  if (!(mu__boolexpr703)) mu__boolexpr702 = FALSE ;
  else {
  mu__boolexpr702 = (mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
    return mu__boolexpr702;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 184;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_cacheId mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 190 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr713;
bool mu__boolexpr714;
bool mu__boolexpr715;
bool mu__boolexpr716;
bool mu__boolexpr717;
bool mu__boolexpr718;
bool mu__boolexpr719;
  if (!((mu_Tree[mu_i].mu_chan1[mu_b].mu_used) > (0))) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_opcode) == (mu_Acquire)) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = ((mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_para) == (mu_BtoT)) ; 
}
  if (!(mu__boolexpr718)) mu__boolexpr717 = FALSE ;
  else {
bool mu__boolexpr720;
  if (mu_Tree[mu_i].mu_reqId.isundefined()) mu__boolexpr720 = TRUE ;
  else {
  mu__boolexpr720 = ((mu_Tree[mu_i].mu_reqId) == (mu_b)) ; 
}
  mu__boolexpr717 = (mu__boolexpr720) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
bool mu__boolexpr721;
  if ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Branch)) mu__boolexpr721 = TRUE ;
  else {
  mu__boolexpr721 = ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None)) ; 
}
  mu__boolexpr715 = (mu__boolexpr721) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
bool mu__quant722; 
mu__quant722 = TRUE;
{
for(int mu_k = 1; mu_k <= 2; mu_k++) {
bool mu__boolexpr723;
  if (!((mu_k) != (mu_b))) mu__boolexpr723 = TRUE ;
  else {
  mu__boolexpr723 = ((mu_Tree[mu_i].mu_directory[mu_k][mu_a]) == (mu_None)) ; 
}
if ( !(mu__boolexpr723) )
  { mu__quant722 = FALSE; break; }
};
};
  mu__boolexpr714 = (mu__quant722) ; 
}
  if (!(mu__boolexpr714)) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = (mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a].isundefined()) ; 
}
	      if (mu__boolexpr713) {
		if ( ( TRUE  ) )
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
  mu_1_addrType& mu_a = mu_Tree[mu_i].mu_chan1[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgDType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Grant;
mu_msg.mu_para = mu_toT;
mu_msg.mu_addr = mu_a;
if ( (mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_None) )
{
mu_msg.mu_opcode = mu_GrantData;
mu_msg.mu_data = mu_getData( mu_Tree[mu_i].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_i].mu_cache, mu_a );
}
if ( mu_sendDMsg( mu_Tree[mu_i].mu_chan4[mu_b], mu_msg ) )
{
mu_Tree[mu_i].mu_reqId.undefine();
mu_Tree[mu_i].mu_directory[mu_b][mu_a] = mu_Tip;
mu_updateState ( mu_Tree[mu_i].mu_cache, mu_a, mu_Trunk );
mu_Tree[mu_i].mu_slave_pending[mu_b][mu_a] = mu_pending_GrantAck;
mu_popAMsg ( mu_Tree[mu_i].mu_chan1[mu_b] );
}
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("receive_ReleaseAck, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr724;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
    return mu__boolexpr724;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 190;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 194 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr725;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_ReleaseAck)) ; 
}
	      if (mu__boolexpr725) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Probe_BtoB(TtoB), b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr726;
bool mu__boolexpr727;
bool mu__boolexpr728;
bool mu__boolexpr729;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr729)) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
bool mu__boolexpr730;
  if (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) mu__boolexpr730 = TRUE ;
  else {
  mu__boolexpr730 = ((mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr727 = (mu__boolexpr730) ; 
}
  if (!(mu__boolexpr727)) mu__boolexpr726 = FALSE ;
  else {
bool mu__boolexpr731;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr731 = TRUE ;
  else {
  mu__boolexpr731 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr726 = (mu__boolexpr731) ; 
}
    return mu__boolexpr726;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 194;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 198 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr732;
bool mu__boolexpr733;
bool mu__boolexpr734;
bool mu__boolexpr735;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr735)) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  if (!(mu__boolexpr734)) mu__boolexpr733 = FALSE ;
  else {
bool mu__boolexpr736;
  if (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) mu__boolexpr736 = TRUE ;
  else {
  mu__boolexpr736 = ((mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr733 = (mu__boolexpr736) ; 
}
  if (!(mu__boolexpr733)) mu__boolexpr732 = FALSE ;
  else {
bool mu__boolexpr737;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr737 = TRUE ;
  else {
  mu__boolexpr737 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr732 = (mu__boolexpr737) ; 
}
	      if (mu__boolexpr732) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ProbeAck;
mu_msg.mu_para = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ? (mu_BtoB) : (mu_TtoB);
mu_msg.mu_data = mu_getData( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_updateState ( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a, mu_Branch );
mu_popBMsg ( mu_Tree[mu_j].mu_chan2[mu_b] );
}
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Probe_BtoN(TtoN), b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr738;
bool mu__boolexpr739;
bool mu__boolexpr740;
bool mu__boolexpr741;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr741)) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr740)) mu__boolexpr739 = FALSE ;
  else {
bool mu__boolexpr742;
  if (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) mu__boolexpr742 = TRUE ;
  else {
  mu__boolexpr742 = ((mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr739 = (mu__boolexpr742) ; 
}
  if (!(mu__boolexpr739)) mu__boolexpr738 = FALSE ;
  else {
bool mu__boolexpr743;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr743 = TRUE ;
  else {
  mu__boolexpr743 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr738 = (mu__boolexpr743) ; 
}
    return mu__boolexpr738;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 198;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 202 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr744;
bool mu__boolexpr745;
bool mu__boolexpr746;
bool mu__boolexpr747;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
bool mu__boolexpr748;
  if (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) mu__boolexpr748 = TRUE ;
  else {
  mu__boolexpr748 = ((mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr745 = (mu__boolexpr748) ; 
}
  if (!(mu__boolexpr745)) mu__boolexpr744 = FALSE ;
  else {
bool mu__boolexpr749;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) mu__boolexpr749 = TRUE ;
  else {
  mu__boolexpr749 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr744 = (mu__boolexpr749) ; 
}
	      if (mu__boolexpr744) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ProbeAck;
mu_msg.mu_para = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ? (mu_BtoN) : (mu_TtoN);
mu_msg.mu_data = mu_getData( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a );
mu_msg.mu_dirty = mu_getDirty( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a );
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_removeData ( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a );
mu_popBMsg ( mu_Tree[mu_j].mu_chan2[mu_b] );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Probe_NtoN, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr750;
bool mu__boolexpr751;
bool mu__boolexpr752;
bool mu__boolexpr753;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr753 = FALSE ;
  else {
  mu__boolexpr753 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr753)) mu__boolexpr752 = FALSE ;
  else {
bool mu__boolexpr754;
  if (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) mu__boolexpr754 = TRUE ;
  else {
  mu__boolexpr754 = ((mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr752 = (mu__boolexpr754) ; 
}
  if (!(mu__boolexpr752)) mu__boolexpr751 = FALSE ;
  else {
bool mu__boolexpr755;
  if ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) mu__boolexpr755 = TRUE ;
  else {
  mu__boolexpr755 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr751 = (mu__boolexpr755) ; 
}
  if (!(mu__boolexpr751)) mu__boolexpr750 = FALSE ;
  else {
  mu__boolexpr750 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ; 
}
    return mu__boolexpr750;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 202;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 206 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr756;
bool mu__boolexpr757;
bool mu__boolexpr758;
bool mu__boolexpr759;
  if (!((mu_Tree[mu_j].mu_chan2[mu_b].mu_used) > (0))) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_opcode) == (mu_Probe)) ; 
}
  if (!(mu__boolexpr759)) mu__boolexpr758 = FALSE ;
  else {
bool mu__boolexpr760;
  if (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) mu__boolexpr760 = TRUE ;
  else {
  mu__boolexpr760 = ((mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a]) != (mu_pending_ReleaseAck)) ; 
}
  mu__boolexpr758 = (mu__boolexpr760) ; 
}
  if (!(mu__boolexpr758)) mu__boolexpr757 = FALSE ;
  else {
bool mu__boolexpr761;
  if ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toN)) mu__boolexpr761 = TRUE ;
  else {
  mu__boolexpr761 = ((mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr757 = (mu__boolexpr761) ; 
}
  if (!(mu__boolexpr757)) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ; 
}
	      if (mu__boolexpr756) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan2[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_ProbeAck;
mu_msg.mu_para = mu_NtoN;
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_removeData ( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a );
mu_popBMsg ( mu_Tree[mu_j].mu_chan2[mu_b] );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Grant_NtoT, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr762;
bool mu__boolexpr763;
bool mu__boolexpr764;
bool mu__boolexpr765;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
bool mu__boolexpr766;
  if ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) mu__boolexpr766 = TRUE ;
  else {
  mu__boolexpr766 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr764 = (mu__boolexpr766) ; 
}
  if (!(mu__boolexpr764)) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr763)) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
    return mu__boolexpr762;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 206;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 210 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr767;
bool mu__boolexpr768;
bool mu__boolexpr769;
bool mu__boolexpr770;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr770)) mu__boolexpr769 = FALSE ;
  else {
bool mu__boolexpr771;
  if ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) mu__boolexpr771 = TRUE ;
  else {
  mu__boolexpr771 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr769 = (mu__boolexpr771) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr768)) mu__boolexpr767 = FALSE ;
  else {
  mu__boolexpr767 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
	      if (mu__boolexpr767) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_lineType mu_l("l",0);

/*** Variable declaration ***/
mu_1_msgEType mu_msg("msg",32);

mu_l.mu_addr = mu_a;
mu_l.mu_state = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ? (mu_Tip) : (mu_Branch);
mu_l.mu_data = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_data;
mu_l.mu_dirty = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_dirty;
mu_msg.mu_opcode = mu_GrantAck;
mu_msg.mu_addr = mu_a;
bool mu__boolexpr772;
  if (!(mu_insertLine( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a, mu_l ))) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = (mu_sendEMsg( mu_Tree[mu_j].mu_chan5[mu_b], mu_msg )) ; 
}
if ( mu__boolexpr772 )
{
mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending.undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("respond_Grant_BtoT, b:%s, j:%s", mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr773;
bool mu__boolexpr774;
bool mu__boolexpr775;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr775)) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr774)) mu__boolexpr773 = FALSE ;
  else {
  mu__boolexpr773 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
    return mu__boolexpr773;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 210;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 214 )
      {
	if ( ( TRUE  ) ) {
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
bool mu__boolexpr776;
bool mu__boolexpr777;
bool mu__boolexpr778;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr777)) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
	      if (mu__boolexpr776) {
		if ( ( TRUE  ) )
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
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_addrType& mu_a = mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_addr;
/*** Variable declaration ***/
mu_1_msgEType mu_msg("msg",0);

mu_msg.mu_opcode = mu_GrantAck;
mu_msg.mu_addr = mu_a;
if ( mu_sendEMsg( mu_Tree[mu_j].mu_chan5[mu_b], mu_msg ) )
{
mu_updateState ( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a, mu_Tip );
mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].undefine();
mu_popDMsg ( mu_Tree[mu_j].mu_chan4[mu_b] );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("send_Release_BtoN(TtoN), a:%s, b:%s, j:%s", mu_a.Name(), mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_cacheType& mu_c = mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache;
bool mu__boolexpr779;
bool mu__boolexpr780;
  if ((mu_getState( mu_c, mu_a )) == (mu_Branch)) mu__boolexpr780 = TRUE ;
  else {
  mu__boolexpr780 = ((mu_getState( mu_c, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr780)) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr779;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 214;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 222 )
      {
	if ( ( TRUE  ) ) {
  mu_1_cacheType& mu_c = mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache;
bool mu__boolexpr781;
bool mu__boolexpr782;
  if ((mu_getState( mu_c, mu_a )) == (mu_Branch)) mu__boolexpr782 = TRUE ;
  else {
  mu__boolexpr782 = ((mu_getState( mu_c, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr782)) mu__boolexpr781 = FALSE ;
  else {
  mu__boolexpr781 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr781) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 214;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
  mu_1_cacheType& mu_c = mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache;
/*** Variable declaration ***/
mu_1_msgCType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Release;
mu_msg.mu_para = ((mu_getState( mu_c, mu_a )) == (mu_Branch)) ? (mu_BtoN) : (mu_TtoN);
mu_msg.mu_addr = mu_a;
mu_msg.mu_data = mu_c.mu_line[mu_c.mu_valid[mu_a]].mu_data;
mu_msg.mu_dirty = mu_c.mu_line[mu_c.mu_valid[mu_a]].mu_dirty;
mu_msg.mu_addr = mu_a;
if ( mu_sendCMsg( mu_Tree[mu_j].mu_chan3[mu_b], mu_msg ) )
{
mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a] = mu_pending_ReleaseAck;
mu_removeData ( mu_c, mu_a );
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("send_AcquireBlock(Perm)_toT, a:%s, b:%s, j:%s", mu_a.Name(), mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
bool mu__boolexpr783;
bool mu__boolexpr784;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) mu__boolexpr784 = TRUE ;
  else {
  mu__boolexpr784 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr784)) mu__boolexpr783 = FALSE ;
  else {
  mu__boolexpr783 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr783;
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 230 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr785;
bool mu__boolexpr786;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) mu__boolexpr786 = TRUE ;
  else {
  mu__boolexpr786 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr786)) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr785) {
		if ( ( TRUE  ) )
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
    mu_j.value((r % 2) + 2);
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
/*** Variable declaration ***/
mu_1_msgAType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Acquire;
mu_msg.mu_para = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ? (mu_NtoT) : (mu_BtoT);
mu_msg.mu_addr = mu_a;
if ( mu_sendAMsg( mu_Tree[mu_j].mu_chan1[mu_b], mu_msg ) )
{
mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a] = mu_pending_Grant;
}
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
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    return tsprintf("send_AcquireBlock_toB, a:%s, b:%s, j:%s", mu_a.Name(), mu_b.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
bool mu__boolexpr787;
  if (!((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None))) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr787;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 230;
    static mu_1_addrType mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_branchType mu_b;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
    while (what_rule < 238 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr788;
  if (!((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None))) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr788) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 230;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_b.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 2);
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
    static mu_1_l2Id mu_j;
    mu_j.value((r % 2) + 2);
    r = r / 2;
/*** Variable declaration ***/
mu_1_msgAType mu_msg("msg",0);

mu_msg.mu_opcode = mu_Acquire;
mu_msg.mu_para = mu_NtoB;
mu_msg.mu_addr = mu_a;
if ( mu_sendAMsg( mu_Tree[mu_j].mu_chan1[mu_b], mu_msg ) )
{
mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a] = mu_pending_Grant;
}
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
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_coreId mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return tsprintf("store, d:%s, j:%s, i:%s", mu_d.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_coreId mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    return (mu_getState( mu_Tree[mu_i].mu_cache, mu_j )) == (mu_Tip);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 238;
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_coreId mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
    while (what_rule < 254 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_j )) == (mu_Tip)) {
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
    r = what_rule - 238;
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
    static mu_1_dataType mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_addrType mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_coreId mu_i;
    mu_i.value((r % 4) + 4);
    r = r / 4;
mu_Tree[mu_i].mu_cache.mu_line[mu_Tree[mu_i].mu_cache.mu_valid[mu_j]].mu_dirty = mu_true;
mu_Tree[mu_i].mu_cache.mu_line[mu_Tree[mu_i].mu_cache.mu_valid[mu_j]].mu_data = mu_d;
mu_auxData[mu_j] = mu_d;
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
  if (what_rule>=8 && what_rule<10)
    { R4.NextRule(what_rule);
      if (what_rule<10) return; }
  if (what_rule>=10 && what_rule<12)
    { R5.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<14)
    { R6.NextRule(what_rule);
      if (what_rule<14) return; }
  if (what_rule>=14 && what_rule<16)
    { R7.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<20)
    { R8.NextRule(what_rule);
      if (what_rule<20) return; }
  if (what_rule>=20 && what_rule<24)
    { R9.NextRule(what_rule);
      if (what_rule<24) return; }
  if (what_rule>=24 && what_rule<30)
    { R10.NextRule(what_rule);
      if (what_rule<30) return; }
  if (what_rule>=30 && what_rule<36)
    { R11.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<40)
    { R12.NextRule(what_rule);
      if (what_rule<40) return; }
  if (what_rule>=40 && what_rule<44)
    { R13.NextRule(what_rule);
      if (what_rule<44) return; }
  if (what_rule>=44 && what_rule<48)
    { R14.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<50)
    { R15.NextRule(what_rule);
      if (what_rule<50) return; }
  if (what_rule>=50 && what_rule<52)
    { R16.NextRule(what_rule);
      if (what_rule<52) return; }
  if (what_rule>=52 && what_rule<54)
    { R17.NextRule(what_rule);
      if (what_rule<54) return; }
  if (what_rule>=54 && what_rule<56)
    { R18.NextRule(what_rule);
      if (what_rule<56) return; }
  if (what_rule>=56 && what_rule<58)
    { R19.NextRule(what_rule);
      if (what_rule<58) return; }
  if (what_rule>=58 && what_rule<60)
    { R20.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<62)
    { R21.NextRule(what_rule);
      if (what_rule<62) return; }
  if (what_rule>=62 && what_rule<64)
    { R22.NextRule(what_rule);
      if (what_rule<64) return; }
  if (what_rule>=64 && what_rule<66)
    { R23.NextRule(what_rule);
      if (what_rule<66) return; }
  if (what_rule>=66 && what_rule<68)
    { R24.NextRule(what_rule);
      if (what_rule<68) return; }
  if (what_rule>=68 && what_rule<72)
    { R25.NextRule(what_rule);
      if (what_rule<72) return; }
  if (what_rule>=72 && what_rule<78)
    { R26.NextRule(what_rule);
      if (what_rule<78) return; }
  if (what_rule>=78 && what_rule<84)
    { R27.NextRule(what_rule);
      if (what_rule<84) return; }
  if (what_rule>=84 && what_rule<90)
    { R28.NextRule(what_rule);
      if (what_rule<90) return; }
  if (what_rule>=90 && what_rule<96)
    { R29.NextRule(what_rule);
      if (what_rule<96) return; }
  if (what_rule>=96 && what_rule<102)
    { R30.NextRule(what_rule);
      if (what_rule<102) return; }
  if (what_rule>=102 && what_rule<108)
    { R31.NextRule(what_rule);
      if (what_rule<108) return; }
  if (what_rule>=108 && what_rule<114)
    { R32.NextRule(what_rule);
      if (what_rule<114) return; }
  if (what_rule>=114 && what_rule<120)
    { R33.NextRule(what_rule);
      if (what_rule<120) return; }
  if (what_rule>=120 && what_rule<124)
    { R34.NextRule(what_rule);
      if (what_rule<124) return; }
  if (what_rule>=124 && what_rule<128)
    { R35.NextRule(what_rule);
      if (what_rule<128) return; }
  if (what_rule>=128 && what_rule<132)
    { R36.NextRule(what_rule);
      if (what_rule<132) return; }
  if (what_rule>=132 && what_rule<136)
    { R37.NextRule(what_rule);
      if (what_rule<136) return; }
  if (what_rule>=136 && what_rule<142)
    { R38.NextRule(what_rule);
      if (what_rule<142) return; }
  if (what_rule>=142 && what_rule<148)
    { R39.NextRule(what_rule);
      if (what_rule<148) return; }
  if (what_rule>=148 && what_rule<154)
    { R40.NextRule(what_rule);
      if (what_rule<154) return; }
  if (what_rule>=154 && what_rule<160)
    { R41.NextRule(what_rule);
      if (what_rule<160) return; }
  if (what_rule>=160 && what_rule<166)
    { R42.NextRule(what_rule);
      if (what_rule<166) return; }
  if (what_rule>=166 && what_rule<172)
    { R43.NextRule(what_rule);
      if (what_rule<172) return; }
  if (what_rule>=172 && what_rule<178)
    { R44.NextRule(what_rule);
      if (what_rule<178) return; }
  if (what_rule>=178 && what_rule<184)
    { R45.NextRule(what_rule);
      if (what_rule<184) return; }
  if (what_rule>=184 && what_rule<190)
    { R46.NextRule(what_rule);
      if (what_rule<190) return; }
  if (what_rule>=190 && what_rule<194)
    { R47.NextRule(what_rule);
      if (what_rule<194) return; }
  if (what_rule>=194 && what_rule<198)
    { R48.NextRule(what_rule);
      if (what_rule<198) return; }
  if (what_rule>=198 && what_rule<202)
    { R49.NextRule(what_rule);
      if (what_rule<202) return; }
  if (what_rule>=202 && what_rule<206)
    { R50.NextRule(what_rule);
      if (what_rule<206) return; }
  if (what_rule>=206 && what_rule<210)
    { R51.NextRule(what_rule);
      if (what_rule<210) return; }
  if (what_rule>=210 && what_rule<214)
    { R52.NextRule(what_rule);
      if (what_rule<214) return; }
  if (what_rule>=214 && what_rule<222)
    { R53.NextRule(what_rule);
      if (what_rule<222) return; }
  if (what_rule>=222 && what_rule<230)
    { R54.NextRule(what_rule);
      if (what_rule<230) return; }
  if (what_rule>=230 && what_rule<238)
    { R55.NextRule(what_rule);
      if (what_rule<238) return; }
  if (what_rule>=238 && what_rule<254)
    { R56.NextRule(what_rule);
      if (what_rule<254) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=1) return R0.Condition(r-0);
  if (r>=2 && r<=3) return R1.Condition(r-2);
  if (r>=4 && r<=5) return R2.Condition(r-4);
  if (r>=6 && r<=7) return R3.Condition(r-6);
  if (r>=8 && r<=9) return R4.Condition(r-8);
  if (r>=10 && r<=11) return R5.Condition(r-10);
  if (r>=12 && r<=13) return R6.Condition(r-12);
  if (r>=14 && r<=15) return R7.Condition(r-14);
  if (r>=16 && r<=19) return R8.Condition(r-16);
  if (r>=20 && r<=23) return R9.Condition(r-20);
  if (r>=24 && r<=29) return R10.Condition(r-24);
  if (r>=30 && r<=35) return R11.Condition(r-30);
  if (r>=36 && r<=39) return R12.Condition(r-36);
  if (r>=40 && r<=43) return R13.Condition(r-40);
  if (r>=44 && r<=47) return R14.Condition(r-44);
  if (r>=48 && r<=49) return R15.Condition(r-48);
  if (r>=50 && r<=51) return R16.Condition(r-50);
  if (r>=52 && r<=53) return R17.Condition(r-52);
  if (r>=54 && r<=55) return R18.Condition(r-54);
  if (r>=56 && r<=57) return R19.Condition(r-56);
  if (r>=58 && r<=59) return R20.Condition(r-58);
  if (r>=60 && r<=61) return R21.Condition(r-60);
  if (r>=62 && r<=63) return R22.Condition(r-62);
  if (r>=64 && r<=65) return R23.Condition(r-64);
  if (r>=66 && r<=67) return R24.Condition(r-66);
  if (r>=68 && r<=71) return R25.Condition(r-68);
  if (r>=72 && r<=77) return R26.Condition(r-72);
  if (r>=78 && r<=83) return R27.Condition(r-78);
  if (r>=84 && r<=89) return R28.Condition(r-84);
  if (r>=90 && r<=95) return R29.Condition(r-90);
  if (r>=96 && r<=101) return R30.Condition(r-96);
  if (r>=102 && r<=107) return R31.Condition(r-102);
  if (r>=108 && r<=113) return R32.Condition(r-108);
  if (r>=114 && r<=119) return R33.Condition(r-114);
  if (r>=120 && r<=123) return R34.Condition(r-120);
  if (r>=124 && r<=127) return R35.Condition(r-124);
  if (r>=128 && r<=131) return R36.Condition(r-128);
  if (r>=132 && r<=135) return R37.Condition(r-132);
  if (r>=136 && r<=141) return R38.Condition(r-136);
  if (r>=142 && r<=147) return R39.Condition(r-142);
  if (r>=148 && r<=153) return R40.Condition(r-148);
  if (r>=154 && r<=159) return R41.Condition(r-154);
  if (r>=160 && r<=165) return R42.Condition(r-160);
  if (r>=166 && r<=171) return R43.Condition(r-166);
  if (r>=172 && r<=177) return R44.Condition(r-172);
  if (r>=178 && r<=183) return R45.Condition(r-178);
  if (r>=184 && r<=189) return R46.Condition(r-184);
  if (r>=190 && r<=193) return R47.Condition(r-190);
  if (r>=194 && r<=197) return R48.Condition(r-194);
  if (r>=198 && r<=201) return R49.Condition(r-198);
  if (r>=202 && r<=205) return R50.Condition(r-202);
  if (r>=206 && r<=209) return R51.Condition(r-206);
  if (r>=210 && r<=213) return R52.Condition(r-210);
  if (r>=214 && r<=221) return R53.Condition(r-214);
  if (r>=222 && r<=229) return R54.Condition(r-222);
  if (r>=230 && r<=237) return R55.Condition(r-230);
  if (r>=238 && r<=253) return R56.Condition(r-238);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=1) { R0.Code(r-0); return; } 
  if (r>=2 && r<=3) { R1.Code(r-2); return; } 
  if (r>=4 && r<=5) { R2.Code(r-4); return; } 
  if (r>=6 && r<=7) { R3.Code(r-6); return; } 
  if (r>=8 && r<=9) { R4.Code(r-8); return; } 
  if (r>=10 && r<=11) { R5.Code(r-10); return; } 
  if (r>=12 && r<=13) { R6.Code(r-12); return; } 
  if (r>=14 && r<=15) { R7.Code(r-14); return; } 
  if (r>=16 && r<=19) { R8.Code(r-16); return; } 
  if (r>=20 && r<=23) { R9.Code(r-20); return; } 
  if (r>=24 && r<=29) { R10.Code(r-24); return; } 
  if (r>=30 && r<=35) { R11.Code(r-30); return; } 
  if (r>=36 && r<=39) { R12.Code(r-36); return; } 
  if (r>=40 && r<=43) { R13.Code(r-40); return; } 
  if (r>=44 && r<=47) { R14.Code(r-44); return; } 
  if (r>=48 && r<=49) { R15.Code(r-48); return; } 
  if (r>=50 && r<=51) { R16.Code(r-50); return; } 
  if (r>=52 && r<=53) { R17.Code(r-52); return; } 
  if (r>=54 && r<=55) { R18.Code(r-54); return; } 
  if (r>=56 && r<=57) { R19.Code(r-56); return; } 
  if (r>=58 && r<=59) { R20.Code(r-58); return; } 
  if (r>=60 && r<=61) { R21.Code(r-60); return; } 
  if (r>=62 && r<=63) { R22.Code(r-62); return; } 
  if (r>=64 && r<=65) { R23.Code(r-64); return; } 
  if (r>=66 && r<=67) { R24.Code(r-66); return; } 
  if (r>=68 && r<=71) { R25.Code(r-68); return; } 
  if (r>=72 && r<=77) { R26.Code(r-72); return; } 
  if (r>=78 && r<=83) { R27.Code(r-78); return; } 
  if (r>=84 && r<=89) { R28.Code(r-84); return; } 
  if (r>=90 && r<=95) { R29.Code(r-90); return; } 
  if (r>=96 && r<=101) { R30.Code(r-96); return; } 
  if (r>=102 && r<=107) { R31.Code(r-102); return; } 
  if (r>=108 && r<=113) { R32.Code(r-108); return; } 
  if (r>=114 && r<=119) { R33.Code(r-114); return; } 
  if (r>=120 && r<=123) { R34.Code(r-120); return; } 
  if (r>=124 && r<=127) { R35.Code(r-124); return; } 
  if (r>=128 && r<=131) { R36.Code(r-128); return; } 
  if (r>=132 && r<=135) { R37.Code(r-132); return; } 
  if (r>=136 && r<=141) { R38.Code(r-136); return; } 
  if (r>=142 && r<=147) { R39.Code(r-142); return; } 
  if (r>=148 && r<=153) { R40.Code(r-148); return; } 
  if (r>=154 && r<=159) { R41.Code(r-154); return; } 
  if (r>=160 && r<=165) { R42.Code(r-160); return; } 
  if (r>=166 && r<=171) { R43.Code(r-166); return; } 
  if (r>=172 && r<=177) { R44.Code(r-172); return; } 
  if (r>=178 && r<=183) { R45.Code(r-178); return; } 
  if (r>=184 && r<=189) { R46.Code(r-184); return; } 
  if (r>=190 && r<=193) { R47.Code(r-190); return; } 
  if (r>=194 && r<=197) { R48.Code(r-194); return; } 
  if (r>=198 && r<=201) { R49.Code(r-198); return; } 
  if (r>=202 && r<=205) { R50.Code(r-202); return; } 
  if (r>=206 && r<=209) { R51.Code(r-206); return; } 
  if (r>=210 && r<=213) { R52.Code(r-210); return; } 
  if (r>=214 && r<=221) { R53.Code(r-214); return; } 
  if (r>=222 && r<=229) { R54.Code(r-222); return; } 
  if (r>=230 && r<=237) { R55.Code(r-230); return; } 
  if (r>=238 && r<=253) { R56.Code(r-238); return; } 
}
int Priority(unsigned short r)
{
  if (r<=1) { return R0.Priority(); } 
  if (r>=2 && r<=3) { return R1.Priority(); } 
  if (r>=4 && r<=5) { return R2.Priority(); } 
  if (r>=6 && r<=7) { return R3.Priority(); } 
  if (r>=8 && r<=9) { return R4.Priority(); } 
  if (r>=10 && r<=11) { return R5.Priority(); } 
  if (r>=12 && r<=13) { return R6.Priority(); } 
  if (r>=14 && r<=15) { return R7.Priority(); } 
  if (r>=16 && r<=19) { return R8.Priority(); } 
  if (r>=20 && r<=23) { return R9.Priority(); } 
  if (r>=24 && r<=29) { return R10.Priority(); } 
  if (r>=30 && r<=35) { return R11.Priority(); } 
  if (r>=36 && r<=39) { return R12.Priority(); } 
  if (r>=40 && r<=43) { return R13.Priority(); } 
  if (r>=44 && r<=47) { return R14.Priority(); } 
  if (r>=48 && r<=49) { return R15.Priority(); } 
  if (r>=50 && r<=51) { return R16.Priority(); } 
  if (r>=52 && r<=53) { return R17.Priority(); } 
  if (r>=54 && r<=55) { return R18.Priority(); } 
  if (r>=56 && r<=57) { return R19.Priority(); } 
  if (r>=58 && r<=59) { return R20.Priority(); } 
  if (r>=60 && r<=61) { return R21.Priority(); } 
  if (r>=62 && r<=63) { return R22.Priority(); } 
  if (r>=64 && r<=65) { return R23.Priority(); } 
  if (r>=66 && r<=67) { return R24.Priority(); } 
  if (r>=68 && r<=71) { return R25.Priority(); } 
  if (r>=72 && r<=77) { return R26.Priority(); } 
  if (r>=78 && r<=83) { return R27.Priority(); } 
  if (r>=84 && r<=89) { return R28.Priority(); } 
  if (r>=90 && r<=95) { return R29.Priority(); } 
  if (r>=96 && r<=101) { return R30.Priority(); } 
  if (r>=102 && r<=107) { return R31.Priority(); } 
  if (r>=108 && r<=113) { return R32.Priority(); } 
  if (r>=114 && r<=119) { return R33.Priority(); } 
  if (r>=120 && r<=123) { return R34.Priority(); } 
  if (r>=124 && r<=127) { return R35.Priority(); } 
  if (r>=128 && r<=131) { return R36.Priority(); } 
  if (r>=132 && r<=135) { return R37.Priority(); } 
  if (r>=136 && r<=141) { return R38.Priority(); } 
  if (r>=142 && r<=147) { return R39.Priority(); } 
  if (r>=148 && r<=153) { return R40.Priority(); } 
  if (r>=154 && r<=159) { return R41.Priority(); } 
  if (r>=160 && r<=165) { return R42.Priority(); } 
  if (r>=166 && r<=171) { return R43.Priority(); } 
  if (r>=172 && r<=177) { return R44.Priority(); } 
  if (r>=178 && r<=183) { return R45.Priority(); } 
  if (r>=184 && r<=189) { return R46.Priority(); } 
  if (r>=190 && r<=193) { return R47.Priority(); } 
  if (r>=194 && r<=197) { return R48.Priority(); } 
  if (r>=198 && r<=201) { return R49.Priority(); } 
  if (r>=202 && r<=205) { return R50.Priority(); } 
  if (r>=206 && r<=209) { return R51.Priority(); } 
  if (r>=210 && r<=213) { return R52.Priority(); } 
  if (r>=214 && r<=221) { return R53.Priority(); } 
  if (r>=222 && r<=229) { return R54.Priority(); } 
  if (r>=230 && r<=237) { return R55.Priority(); } 
  if (r>=238 && r<=253) { return R56.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=1) return R0.Name(r-0);
  if (r>=2 && r<=3) return R1.Name(r-2);
  if (r>=4 && r<=5) return R2.Name(r-4);
  if (r>=6 && r<=7) return R3.Name(r-6);
  if (r>=8 && r<=9) return R4.Name(r-8);
  if (r>=10 && r<=11) return R5.Name(r-10);
  if (r>=12 && r<=13) return R6.Name(r-12);
  if (r>=14 && r<=15) return R7.Name(r-14);
  if (r>=16 && r<=19) return R8.Name(r-16);
  if (r>=20 && r<=23) return R9.Name(r-20);
  if (r>=24 && r<=29) return R10.Name(r-24);
  if (r>=30 && r<=35) return R11.Name(r-30);
  if (r>=36 && r<=39) return R12.Name(r-36);
  if (r>=40 && r<=43) return R13.Name(r-40);
  if (r>=44 && r<=47) return R14.Name(r-44);
  if (r>=48 && r<=49) return R15.Name(r-48);
  if (r>=50 && r<=51) return R16.Name(r-50);
  if (r>=52 && r<=53) return R17.Name(r-52);
  if (r>=54 && r<=55) return R18.Name(r-54);
  if (r>=56 && r<=57) return R19.Name(r-56);
  if (r>=58 && r<=59) return R20.Name(r-58);
  if (r>=60 && r<=61) return R21.Name(r-60);
  if (r>=62 && r<=63) return R22.Name(r-62);
  if (r>=64 && r<=65) return R23.Name(r-64);
  if (r>=66 && r<=67) return R24.Name(r-66);
  if (r>=68 && r<=71) return R25.Name(r-68);
  if (r>=72 && r<=77) return R26.Name(r-72);
  if (r>=78 && r<=83) return R27.Name(r-78);
  if (r>=84 && r<=89) return R28.Name(r-84);
  if (r>=90 && r<=95) return R29.Name(r-90);
  if (r>=96 && r<=101) return R30.Name(r-96);
  if (r>=102 && r<=107) return R31.Name(r-102);
  if (r>=108 && r<=113) return R32.Name(r-108);
  if (r>=114 && r<=119) return R33.Name(r-114);
  if (r>=120 && r<=123) return R34.Name(r-120);
  if (r>=124 && r<=127) return R35.Name(r-124);
  if (r>=128 && r<=131) return R36.Name(r-128);
  if (r>=132 && r<=135) return R37.Name(r-132);
  if (r>=136 && r<=141) return R38.Name(r-136);
  if (r>=142 && r<=147) return R39.Name(r-142);
  if (r>=148 && r<=153) return R40.Name(r-148);
  if (r>=154 && r<=159) return R41.Name(r-154);
  if (r>=160 && r<=165) return R42.Name(r-160);
  if (r>=166 && r<=171) return R43.Name(r-166);
  if (r>=172 && r<=177) return R44.Name(r-172);
  if (r>=178 && r<=183) return R45.Name(r-178);
  if (r>=184 && r<=189) return R46.Name(r-184);
  if (r>=190 && r<=193) return R47.Name(r-190);
  if (r>=194 && r<=197) return R48.Name(r-194);
  if (r>=198 && r<=201) return R49.Name(r-198);
  if (r>=202 && r<=205) return R50.Name(r-202);
  if (r>=206 && r<=209) return R51.Name(r-206);
  if (r>=210 && r<=213) return R52.Name(r-210);
  if (r>=214 && r<=221) return R53.Name(r-214);
  if (r>=222 && r<=229) return R54.Name(r-222);
  if (r>=230 && r<=237) return R55.Name(r-230);
  if (r>=238 && r<=253) return R56.Name(r-238);
  return NULL;
}
};
const unsigned numrules = 254;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 254


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
mu_1__type_21 mu_son("son",0);

mu_son = 2;
{
for(int mu_cur = 1; mu_cur <= 1; mu_cur++) {
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
if (mu_son.isundefined())
  mu_Tree[mu_cur].mu_sons[mu_i].undefine();
else
  mu_Tree[mu_cur].mu_sons[mu_i] = mu_son;
mu_Tree[mu_cur].mu_cache.undefine();
mu_Tree[mu_cur].mu_cache.mu_used = 0;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Tree[mu_cur].mu_cache.mu_valid[mu_j] = 0;
};
};
mu_Tree[mu_cur].mu_chan1[mu_i].undefine();
mu_Tree[mu_cur].mu_chan1[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan2[mu_i].undefine();
mu_Tree[mu_cur].mu_chan2[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan3[mu_i].undefine();
mu_Tree[mu_cur].mu_chan3[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan4[mu_i].undefine();
mu_Tree[mu_cur].mu_chan4[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan5[mu_i].undefine();
mu_Tree[mu_cur].mu_chan5[mu_i].mu_used = 0;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Tree[mu_cur].mu_master_pending[mu_j].undefine();
mu_Tree[mu_cur].mu_slave_pending[mu_i][mu_j].undefine();
mu_Tree[mu_cur].mu_directory[mu_i][mu_j] = mu_None;
};
};
mu_Tree[mu_cur].mu_reqId.undefine();
mu_son = (mu_son) + (1);
};
};
};
};
mu_son = 4;
{
for(int mu_cur = 2; mu_cur <= 3; mu_cur++) {
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
if (mu_son.isundefined())
  mu_Tree[mu_cur].mu_sons[mu_i].undefine();
else
  mu_Tree[mu_cur].mu_sons[mu_i] = mu_son;
mu_Tree[mu_cur].mu_cache.undefine();
mu_Tree[mu_cur].mu_cache.mu_used = 0;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Tree[mu_cur].mu_cache.mu_valid[mu_j] = 0;
};
};
mu_Tree[mu_cur].mu_chan1[mu_i].undefine();
mu_Tree[mu_cur].mu_chan1[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan2[mu_i].undefine();
mu_Tree[mu_cur].mu_chan2[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan3[mu_i].undefine();
mu_Tree[mu_cur].mu_chan3[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan4[mu_i].undefine();
mu_Tree[mu_cur].mu_chan4[mu_i].mu_used = 0;
mu_Tree[mu_cur].mu_chan5[mu_i].undefine();
mu_Tree[mu_cur].mu_chan5[mu_i].mu_used = 0;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Tree[mu_cur].mu_master_pending[mu_j].undefine();
mu_Tree[mu_cur].mu_slave_pending[mu_i][mu_j].undefine();
mu_Tree[mu_cur].mu_directory[mu_i][mu_j] = mu_None;
};
};
mu_Tree[mu_cur].mu_reqId.undefine();
mu_son = (mu_son) + (1);
};
};
};
};
{
for(int mu_cur = 4; mu_cur <= 7; mu_cur++) {
mu_Tree[mu_cur].mu_cache.undefine();
mu_Tree[mu_cur].mu_cache.mu_used = 0;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_Tree[mu_cur].mu_cache.mu_valid[mu_j] = 0;
mu_Tree[mu_cur].mu_master_pending[mu_j].undefine();
};
};
};
};
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
for(int mu_d = 1; mu_d <= 2; mu_d++) {
mu_memData[mu_j] = mu_d;
mu_auxData[mu_j] = mu_d;
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
void Goal_value1() {  // makun: set goalstate
    if (goal_value_flag1) return;
    goal_value_flag1 = true;
}

void FlowSetter() {  // makun: set a flow to improve carelist
    vector<int> flow1 = {20, 16, 8, 4, 22};
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
int mu__invariant_789() // Invariant "Axiom_3"
{
bool mu__quant790; 
mu__quant790 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__quant791; 
mu__quant791 = TRUE;
{
for(int mu_b1 = 1; mu_b1 <= 2; mu_b1++) {
bool mu__quant792; 
mu__quant792 = TRUE;
{
for(int mu_b2 = 1; mu_b2 <= 2; mu_b2++) {
bool mu__boolexpr793;
bool mu__boolexpr794;
  if (!((mu_b1) != (mu_b2))) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = ((mu_Tree[mu_i].mu_directory[mu_b1][mu_a]) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr794)) mu__boolexpr793 = TRUE ;
  else {
bool mu__boolexpr795;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) != (mu_Branch))) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = ((mu_Tree[mu_i].mu_directory[mu_b2][mu_a]) != (mu_Branch)) ; 
}
  mu__boolexpr793 = (mu__boolexpr795) ; 
}
if ( !(mu__boolexpr793) )
  { mu__quant792 = FALSE; break; }
};
};
if ( !(mu__quant792) )
  { mu__quant791 = FALSE; break; }
};
};
if ( !(mu__quant791) )
  { mu__quant790 = FALSE; break; }
};
};
};
return mu__quant790;
};

bool mu__condition_796() // Condition for Rule "Axiom_3"
{
  return mu__invariant_789( );
}

/**** end rule declaration ****/

int mu__invariant_797() // Invariant "Axiom_2"
{
bool mu__boolexpr798;
bool mu__quant799; 
mu__quant799 = TRUE;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr800;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr800 = TRUE ;
  else {
bool mu__quant801; 
mu__quant801 = FALSE;
{
for(int mu_b = 1; mu_b <= 2; mu_b++) {
if ( ((mu_Tree[mu_i].mu_directory[mu_b][mu_a]) == (mu_Tip)) )
  { mu__quant801 = TRUE; break; }
};
};
  mu__boolexpr800 = (mu__quant801) ; 
}
if ( !(mu__boolexpr800) )
  { mu__quant799 = FALSE; break; }
};
};
};
  if (!(mu__quant799)) mu__boolexpr798 = FALSE ;
  else {
bool mu__quant802; 
mu__quant802 = TRUE;
{
for(int mu_i = 4; mu_i <= 7; mu_i++) {
for(int mu_a = 1; mu_a <= 2; mu_a++) {
if ( !((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) != (mu_Trunk)) )
  { mu__quant802 = FALSE; break; }
};
};
};
  mu__boolexpr798 = (mu__quant802) ; 
}
return mu__boolexpr798;
};

bool mu__condition_803() // Condition for Rule "Axiom_2"
{
  return mu__invariant_797( );
}

/**** end rule declaration ****/

int mu__invariant_804() // Invariant "Axiom_1"
{
bool mu__quant805; 
mu__quant805 = TRUE;
{
for(int mu_i = 1; mu_i <= 7; mu_i++) {
for(int mu_j = 1; mu_j <= 7; mu_j++) {
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr806;
  if (!((mu_i) != (mu_j))) mu__boolexpr806 = TRUE ;
  else {
bool mu__boolexpr807;
  if (!((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = ((mu_getState( mu_Tree[mu_j].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  mu__boolexpr806 = (!(mu__boolexpr807)) ; 
}
if ( !(mu__boolexpr806) )
  { mu__quant805 = FALSE; break; }
};
};
};
};
return mu__quant805;
};

bool mu__condition_808() // Condition for Rule "Axiom_1"
{
  return mu__invariant_804( );
}

/**** end rule declaration ****/

int mu__invariant_809() // Invariant "newest"
{
bool mu__quant810; 
mu__quant810 = TRUE;
{
for(int mu_i = 1; mu_i <= 7; mu_i++) {
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr811;
bool mu__boolexpr812;
  if ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Tip)) mu__boolexpr812 = TRUE ;
  else {
  mu__boolexpr812 = ((mu_getState( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr812)) mu__boolexpr811 = TRUE ;
  else {
  mu__boolexpr811 = ((mu_getData( mu_Tree[mu_i].mu_cache, mu_a )) == (mu_auxData[mu_a])) ; 
}
if ( !(mu__boolexpr811) )
  { mu__quant810 = FALSE; break; }
};
};
};
return mu__quant810;
};

bool mu__condition_813() // Condition for Rule "newest"
{
  return mu__invariant_809( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"newest", &mu__condition_813, NULL, },
{"Axiom_1", &mu__condition_808, NULL, },
{"Axiom_2", &mu__condition_803, NULL, },
{"Axiom_3", &mu__condition_796, NULL, },
};
const unsigned short numinvariants = 4;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Tree:ScalarsetVariable
memData:ScalarsetVariable
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
void mu_1_chanType::Permute(PermSet& Perm, int i) {};
void mu_1_chanType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chanType::Canonicalize(PermSet& Perm) {};
void mu_1_chanType::SimpleLimit(PermSet& Perm) {};
void mu_1_chanType::ArrayLimit(PermSet& Perm) {};
void mu_1_chanType::Limit(PermSet& Perm) {};
void mu_1_chanType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_chanBuffType::Permute(PermSet& Perm, int i) {};
void mu_1_chanBuffType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chanBuffType::Canonicalize(PermSet& Perm) {};
void mu_1_chanBuffType::SimpleLimit(PermSet& Perm) {};
void mu_1_chanBuffType::ArrayLimit(PermSet& Perm) {};
void mu_1_chanBuffType::Limit(PermSet& Perm) {};
void mu_1_chanBuffType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_extend_chan_buff_Type::Permute(PermSet& Perm, int i) {};
void mu_1_extend_chan_buff_Type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_extend_chan_buff_Type::Canonicalize(PermSet& Perm) {};
void mu_1_extend_chan_buff_Type::SimpleLimit(PermSet& Perm) {};
void mu_1_extend_chan_buff_Type::ArrayLimit(PermSet& Perm) {};
void mu_1_extend_chan_buff_Type::Limit(PermSet& Perm) {};
void mu_1_extend_chan_buff_Type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_coreId::Permute(PermSet& Perm, int i) {};
void mu_1_coreId::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_coreId::Canonicalize(PermSet& Perm) {};
void mu_1_coreId::SimpleLimit(PermSet& Perm) {};
void mu_1_coreId::ArrayLimit(PermSet& Perm) {};
void mu_1_coreId::Limit(PermSet& Perm) {};
void mu_1_coreId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_l2Id::Permute(PermSet& Perm, int i) {};
void mu_1_l2Id::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_l2Id::Canonicalize(PermSet& Perm) {};
void mu_1_l2Id::SimpleLimit(PermSet& Perm) {};
void mu_1_l2Id::ArrayLimit(PermSet& Perm) {};
void mu_1_l2Id::Limit(PermSet& Perm) {};
void mu_1_l2Id::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_l3Id::Permute(PermSet& Perm, int i) {};
void mu_1_l3Id::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_l3Id::Canonicalize(PermSet& Perm) {};
void mu_1_l3Id::SimpleLimit(PermSet& Perm) {};
void mu_1_l3Id::ArrayLimit(PermSet& Perm) {};
void mu_1_l3Id::Limit(PermSet& Perm) {};
void mu_1_l3Id::MultisetLimit(PermSet& Perm)
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
void mu_1_addrType::Permute(PermSet& Perm, int i) {};
void mu_1_addrType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_addrType::Canonicalize(PermSet& Perm) {};
void mu_1_addrType::SimpleLimit(PermSet& Perm) {};
void mu_1_addrType::ArrayLimit(PermSet& Perm) {};
void mu_1_addrType::Limit(PermSet& Perm) {};
void mu_1_addrType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_storType::Permute(PermSet& Perm, int i) {};
void mu_1_storType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_storType::Canonicalize(PermSet& Perm) {};
void mu_1_storType::SimpleLimit(PermSet& Perm) {};
void mu_1_storType::ArrayLimit(PermSet& Perm) {};
void mu_1_storType::Limit(PermSet& Perm) {};
void mu_1_storType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_extend_stor_Type::Permute(PermSet& Perm, int i) {};
void mu_1_extend_stor_Type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_extend_stor_Type::Canonicalize(PermSet& Perm) {};
void mu_1_extend_stor_Type::SimpleLimit(PermSet& Perm) {};
void mu_1_extend_stor_Type::ArrayLimit(PermSet& Perm) {};
void mu_1_extend_stor_Type::Limit(PermSet& Perm) {};
void mu_1_extend_stor_Type::MultisetLimit(PermSet& Perm)
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
void mu_1_msgAType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_msgAType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_msgAType::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgAType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_msgAType::ArrayLimit(PermSet& Perm){}
void mu_1_msgAType::Limit(PermSet& Perm)
{
};
void mu_1_msgAType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_msgBType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_msgBType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_msgBType::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgBType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_msgBType::ArrayLimit(PermSet& Perm){}
void mu_1_msgBType::Limit(PermSet& Perm)
{
};
void mu_1_msgBType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_msgCType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_msgCType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_msgCType::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgCType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_msgCType::ArrayLimit(PermSet& Perm){}
void mu_1_msgCType::Limit(PermSet& Perm)
{
};
void mu_1_msgCType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_msgDType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_msgDType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_msgDType::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgDType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_msgDType::ArrayLimit(PermSet& Perm){}
void mu_1_msgDType::Limit(PermSet& Perm)
{
};
void mu_1_msgDType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_msgEType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_msgEType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_msgEType::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgEType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_msgEType::ArrayLimit(PermSet& Perm){}
void mu_1_msgEType::Limit(PermSet& Perm)
{
};
void mu_1_msgEType::MultisetLimit(PermSet& Perm)
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
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_chanAType::Permute(PermSet& Perm, int i)
{
  mu_buffer.Permute(Perm,i);
};
void mu_1_chanAType::SimpleCanonicalize(PermSet& Perm)
{
  mu_buffer.SimpleCanonicalize(Perm);
};
void mu_1_chanAType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chanAType::SimpleLimit(PermSet& Perm)
{
  mu_buffer.SimpleLimit(Perm);
};
void mu_1_chanAType::ArrayLimit(PermSet& Perm){}
void mu_1_chanAType::Limit(PermSet& Perm)
{
};
void mu_1_chanAType::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_chanBType::Permute(PermSet& Perm, int i)
{
  mu_buffer.Permute(Perm,i);
};
void mu_1_chanBType::SimpleCanonicalize(PermSet& Perm)
{
  mu_buffer.SimpleCanonicalize(Perm);
};
void mu_1_chanBType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chanBType::SimpleLimit(PermSet& Perm)
{
  mu_buffer.SimpleLimit(Perm);
};
void mu_1_chanBType::ArrayLimit(PermSet& Perm){}
void mu_1_chanBType::Limit(PermSet& Perm)
{
};
void mu_1_chanBType::MultisetLimit(PermSet& Perm)
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
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_chanCType::Permute(PermSet& Perm, int i)
{
  mu_buffer.Permute(Perm,i);
};
void mu_1_chanCType::SimpleCanonicalize(PermSet& Perm)
{
  mu_buffer.SimpleCanonicalize(Perm);
};
void mu_1_chanCType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chanCType::SimpleLimit(PermSet& Perm)
{
  mu_buffer.SimpleLimit(Perm);
};
void mu_1_chanCType::ArrayLimit(PermSet& Perm){}
void mu_1_chanCType::Limit(PermSet& Perm)
{
};
void mu_1_chanCType::MultisetLimit(PermSet& Perm)
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
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_chanDType::Permute(PermSet& Perm, int i)
{
  mu_buffer.Permute(Perm,i);
};
void mu_1_chanDType::SimpleCanonicalize(PermSet& Perm)
{
  mu_buffer.SimpleCanonicalize(Perm);
};
void mu_1_chanDType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chanDType::SimpleLimit(PermSet& Perm)
{
  mu_buffer.SimpleLimit(Perm);
};
void mu_1_chanDType::ArrayLimit(PermSet& Perm){}
void mu_1_chanDType::Limit(PermSet& Perm)
{
};
void mu_1_chanDType::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_chanEType::Permute(PermSet& Perm, int i)
{
  mu_buffer.Permute(Perm,i);
};
void mu_1_chanEType::SimpleCanonicalize(PermSet& Perm)
{
  mu_buffer.SimpleCanonicalize(Perm);
};
void mu_1_chanEType::Canonicalize(PermSet& Perm)
{
};
void mu_1_chanEType::SimpleLimit(PermSet& Perm)
{
  mu_buffer.SimpleLimit(Perm);
};
void mu_1_chanEType::ArrayLimit(PermSet& Perm){}
void mu_1_chanEType::Limit(PermSet& Perm)
{
};
void mu_1_chanEType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_lineType::Permute(PermSet& Perm, int i)
{
  mu_data.Permute(Perm,i);
};
void mu_1_lineType::SimpleCanonicalize(PermSet& Perm)
{
  mu_data.SimpleCanonicalize(Perm);
};
void mu_1_lineType::Canonicalize(PermSet& Perm)
{
};
void mu_1_lineType::SimpleLimit(PermSet& Perm)
{
  mu_data.SimpleLimit(Perm);
};
void mu_1_lineType::ArrayLimit(PermSet& Perm){}
void mu_1_lineType::Limit(PermSet& Perm)
{
};
void mu_1_lineType::MultisetLimit(PermSet& Perm)
{
};
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
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_cacheType::Permute(PermSet& Perm, int i)
{
  mu_line.Permute(Perm,i);
};
void mu_1_cacheType::SimpleCanonicalize(PermSet& Perm)
{
  mu_line.SimpleCanonicalize(Perm);
};
void mu_1_cacheType::Canonicalize(PermSet& Perm)
{
};
void mu_1_cacheType::SimpleLimit(PermSet& Perm)
{
  mu_line.SimpleLimit(Perm);
};
void mu_1_cacheType::ArrayLimit(PermSet& Perm){}
void mu_1_cacheType::Limit(PermSet& Perm)
{
};
void mu_1_cacheType::MultisetLimit(PermSet& Perm)
{
};
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
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<2; j++)
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
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
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
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_14::Canonicalize(PermSet& Perm){};
void mu_1__type_14::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
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
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_15::Canonicalize(PermSet& Perm){};
void mu_1__type_15::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
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
};
void mu_1__type_16::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_16::Canonicalize(PermSet& Perm){};
void mu_1__type_16::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_16::ArrayLimit(PermSet& Perm) {}
void mu_1__type_16::Limit(PermSet& Perm){}
void mu_1__type_16::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_17::Permute(PermSet& Perm, int i)
{
  static mu_1__type_17 temp("Permute_mu_1__type_17",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_17::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_17::Canonicalize(PermSet& Perm){};
void mu_1__type_17::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_17::ArrayLimit(PermSet& Perm) {}
void mu_1__type_17::Limit(PermSet& Perm){}
void mu_1__type_17::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_treeNode::Permute(PermSet& Perm, int i)
{
  mu_cache.Permute(Perm,i);
  mu_chan1.Permute(Perm,i);
  mu_chan2.Permute(Perm,i);
  mu_chan3.Permute(Perm,i);
  mu_chan4.Permute(Perm,i);
  mu_chan5.Permute(Perm,i);
};
void mu_1_treeNode::SimpleCanonicalize(PermSet& Perm)
{
  mu_cache.SimpleCanonicalize(Perm);
  mu_chan1.SimpleCanonicalize(Perm);
  mu_chan2.SimpleCanonicalize(Perm);
  mu_chan3.SimpleCanonicalize(Perm);
  mu_chan4.SimpleCanonicalize(Perm);
  mu_chan5.SimpleCanonicalize(Perm);
};
void mu_1_treeNode::Canonicalize(PermSet& Perm)
{
};
void mu_1_treeNode::SimpleLimit(PermSet& Perm)
{
  mu_cache.SimpleLimit(Perm);
  mu_chan1.SimpleLimit(Perm);
  mu_chan2.SimpleLimit(Perm);
  mu_chan3.SimpleLimit(Perm);
  mu_chan4.SimpleLimit(Perm);
  mu_chan5.SimpleLimit(Perm);
};
void mu_1_treeNode::ArrayLimit(PermSet& Perm){}
void mu_1_treeNode::Limit(PermSet& Perm)
{
};
void mu_1_treeNode::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_18::Permute(PermSet& Perm, int i)
{
  static mu_1__type_18 temp("Permute_mu_1__type_18",-1);
  int j;
  for (j=0; j<7; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_18::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<7; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_18::Canonicalize(PermSet& Perm){};
void mu_1__type_18::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<7; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_18::ArrayLimit(PermSet& Perm) {}
void mu_1__type_18::Limit(PermSet& Perm){}
void mu_1__type_18::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_19::Permute(PermSet& Perm, int i)
{
  static mu_1__type_19 temp("Permute_mu_1__type_19",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_19::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_19::Canonicalize(PermSet& Perm){};
void mu_1__type_19::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
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
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_20::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<2; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_20::Canonicalize(PermSet& Perm){};
void mu_1__type_20::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<2; j++) {
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

  mu_Tree.SimpleCanonicalize(Perm);

  mu_memData.SimpleCanonicalize(Perm);

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

  mu_Tree.SimpleCanonicalize(Perm);

  mu_memData.SimpleCanonicalize(Perm);

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

  mu_Tree.SimpleCanonicalize(Perm);

  mu_memData.SimpleCanonicalize(Perm);

  mu_auxData.SimpleCanonicalize(Perm);

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
