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

      if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -3] << '\n';
    else
      cout << name << ":Undefined\n";
    
    if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -7] << '\n';
    else
      cout << name << ":Undefined\n";
    if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -8] << '\n';
    else
      cout << name << ":Undefined\n";
          if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -9] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -11] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -14] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -15] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -18] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -21] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -26] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
    if (defined())
      cout << name << ":" << values[ value() -28] << '\n';
    else
      cout << name << ":Undefined\n";
            if (!is_attr(make_pair(offset, name)))
        attr_list.push_back(make_pair<int&, string>(offset, name));
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
if ( !(mu__boolexpr22) ) Error.Error("Assertion failed: test.m, line 173.");
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
if ( !(mu__boolexpr24) ) Error.Error("Assertion failed: test.m, line 185.");
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
if ( !(mu__boolexpr25) ) Error.Error("Assertion failed: test.m, line 208.");
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
if ( !(mu__boolexpr26) ) Error.Error("Assertion failed: test.m, line 213.");
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
if ( !(mu__boolexpr27) ) Error.Error("Assertion failed: test.m, line 218.");
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
if ( !(mu__boolexpr28) ) Error.Error("Assertion failed: test.m, line 223.");
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
if ( !(mu__boolexpr29) ) Error.Error("Assertion failed: test.m, line 228.");
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
// if ( !(!(mu__boolexpr653)) ) Error.Error("Assertion failed: test.m, line 713."); -- makun
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
bool mu__boolexpr766;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr766 = FALSE ;
  else {
  mu__boolexpr766 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr766)) mu__boolexpr765 = FALSE ;
  else {
bool mu__boolexpr767;
  if ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) mu__boolexpr767 = TRUE ;
  else {
  mu__boolexpr767 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr765 = (mu__boolexpr767) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr764)) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr763)) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = (!(mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_dirty.isundefined())) ; 
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
bool mu__boolexpr768;
bool mu__boolexpr769;
bool mu__boolexpr770;
bool mu__boolexpr771;
bool mu__boolexpr772;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_GrantData)) ; 
}
  if (!(mu__boolexpr772)) mu__boolexpr771 = FALSE ;
  else {
bool mu__boolexpr773;
  if ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) mu__boolexpr773 = TRUE ;
  else {
  mu__boolexpr773 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toB)) ; 
}
  mu__boolexpr771 = (mu__boolexpr773) ; 
}
  if (!(mu__boolexpr771)) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr770)) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = ((mu_Tree[mu_j].mu_chan5[mu_b].mu_used) < (mu_chanBuffNum)) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = (!(mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_dirty.isundefined())) ; 
}
	      if (mu__boolexpr768) {
		if ( ( TRUE  ) )
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
bool mu__boolexpr774;
  if (!(mu_insertLine( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a, mu_l ))) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = (mu_sendEMsg( mu_Tree[mu_j].mu_chan5[mu_b], mu_msg )) ; 
}
if ( mu__boolexpr774 )
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
bool mu__boolexpr775;
bool mu__boolexpr776;
bool mu__boolexpr777;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr777)) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr776)) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
    return mu__boolexpr775;
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
bool mu__boolexpr778;
bool mu__boolexpr779;
bool mu__boolexpr780;
  if (!((mu_Tree[mu_j].mu_chan4[mu_b].mu_used) > (0))) mu__boolexpr780 = FALSE ;
  else {
  mu__boolexpr780 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_opcode) == (mu_Grant)) ; 
}
  if (!(mu__boolexpr780)) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = ((mu_Tree[mu_j].mu_chan4[mu_b].mu_buffer[1].mu_para) == (mu_toT)) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
	      if (mu__boolexpr778) {
		if ( ( TRUE  ) )
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
    return mu__boolexpr781;
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
bool mu__boolexpr783;
bool mu__boolexpr784;
  if ((mu_getState( mu_c, mu_a )) == (mu_Branch)) mu__boolexpr784 = TRUE ;
  else {
  mu__boolexpr784 = ((mu_getState( mu_c, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr784)) mu__boolexpr783 = FALSE ;
  else {
  mu__boolexpr783 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr783) {
		if ( ( TRUE  ) )
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
    return mu__boolexpr785;
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
bool mu__boolexpr787;
bool mu__boolexpr788;
  if ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None)) mu__boolexpr788 = TRUE ;
  else {
  mu__boolexpr788 = ((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr787) {
		if ( ( TRUE  ) )
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
bool mu__boolexpr789;
  if (!((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None))) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
    return mu__boolexpr789;
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
bool mu__boolexpr790;
  if (!((mu_getState( mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_cache, mu_a )) == (mu_None))) mu__boolexpr790 = FALSE ;
  else {
  mu__boolexpr790 = (mu_Tree[mu_Tree[mu_j].mu_sons[mu_b]].mu_master_pending[mu_a].isundefined()) ; 
}
	      if (mu__boolexpr790) {
		if ( ( TRUE  ) )
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


#include <map>
#include <functional>
std::map<std::string, mu_1_stateType> goalstateMap;
std::map<std::string, std::function<mu_1_stateType()>> funcMap;

bool checkFuncAttr(string attr_name)
{
  if (goalstateMap.find(attr_name) != goalstateMap.end())
  {
    mu_1_stateType curstate_val = funcMap[attr_name]();
    if (curstate_val == goalstateMap[attr_name])
      return true;
    else
      return false;
  }
  return false;
}

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

  funcMap["getState(Tree[1].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[1].mu_cache, 1); };
  funcMap["getState(Tree[2].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[2].mu_cache, 1); };
  funcMap["getState(Tree[3].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[3].mu_cache, 1); };
  funcMap["getState(Tree[4].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[4].mu_cache, 1); };
  funcMap["getState(Tree[5].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[5].mu_cache, 1); };
  funcMap["getState(Tree[6].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[6].mu_cache, 1); };
  funcMap["getState(Tree[7].cache, a)"] = []() -> mu_1_stateType { return mu_getState(mu_Tree[7].mu_cache, 1); };

  // get smt solution from invariant to set goalstate
  // set states
goalstateMap["getState(Tree[1].cache, a)"] = mu_Tip;
goalstateMap["getState(Tree[2].cache, a)"] = mu_Branch;
goalstateMap["getState(Tree[4].cache, a)"] = mu_Branch;
goalstateMap["getState(Tree[5].cache, a)"] = mu_Branch;
goalstateMap["getState(Tree[3].cache, a)"] = mu_Branch;
goalstateMap["getState(Tree[6].cache, a)"] = mu_Branch;
goalstateMap["getState(Tree[7].cache, a)"] = mu_Branch;
// set states

    // set carelist about invariant 
    carelist_l1.clear(); 
    carelist_l1.push_back("getState(Tree[1].cache, a)");

    carelist_l2.clear(); 
    carelist_l2.push_back("getState(Tree[2].cache, a)");
    carelist_l2.push_back("getState(Tree[3].cache, a)");

    carelist_l3.clear(); 
    carelist_l3.push_back("getState(Tree[4].cache, a)");
    carelist_l3.push_back("getState(Tree[5].cache, a)");
    carelist_l3.push_back("getState(Tree[6].cache, a)");
    carelist_l3.push_back("getState(Tree[7].cache, a)");

    carelist_rb.clear(); 
    carelist_flow.clear(); 

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
int mu__invariant_791() // Invariant "test_reachable_state_224"
{
bool mu__quant792; 
mu__quant792 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr793;
bool mu__boolexpr794;
bool mu__boolexpr795;
bool mu__boolexpr796;
bool mu__boolexpr797;
bool mu__boolexpr798;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr798 = FALSE ;
  else {
  mu__boolexpr798 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr798)) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr796)) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr794)) mu__boolexpr793 = FALSE ;
  else {
  mu__boolexpr793 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr793)) )
  { mu__quant792 = FALSE; break; }
};
};
return mu__quant792;
};

bool mu__condition_799() // Condition for Rule "test_reachable_state_224"
{
  return mu__invariant_791( );
}

/**** end rule declaration ****/

int mu__invariant_800() // Invariant "test_reachable_state_223"
{
bool mu__quant801; 
mu__quant801 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr802;
bool mu__boolexpr803;
bool mu__boolexpr804;
bool mu__boolexpr805;
bool mu__boolexpr806;
bool mu__boolexpr807;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr807)) mu__boolexpr806 = FALSE ;
  else {
  mu__boolexpr806 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr806)) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr804)) mu__boolexpr803 = FALSE ;
  else {
  mu__boolexpr803 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr803)) mu__boolexpr802 = FALSE ;
  else {
  mu__boolexpr802 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr802)) )
  { mu__quant801 = FALSE; break; }
};
};
return mu__quant801;
};

bool mu__condition_808() // Condition for Rule "test_reachable_state_223"
{
  return mu__invariant_800( );
}

/**** end rule declaration ****/

int mu__invariant_809() // Invariant "test_reachable_state_222"
{
bool mu__quant810; 
mu__quant810 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr811;
bool mu__boolexpr812;
bool mu__boolexpr813;
bool mu__boolexpr814;
bool mu__boolexpr815;
bool mu__boolexpr816;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr816)) mu__boolexpr815 = FALSE ;
  else {
  mu__boolexpr815 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr815)) mu__boolexpr814 = FALSE ;
  else {
  mu__boolexpr814 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr814)) mu__boolexpr813 = FALSE ;
  else {
  mu__boolexpr813 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr813)) mu__boolexpr812 = FALSE ;
  else {
  mu__boolexpr812 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr812)) mu__boolexpr811 = FALSE ;
  else {
  mu__boolexpr811 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr811)) )
  { mu__quant810 = FALSE; break; }
};
};
return mu__quant810;
};

bool mu__condition_817() // Condition for Rule "test_reachable_state_222"
{
  return mu__invariant_809( );
}

/**** end rule declaration ****/

int mu__invariant_818() // Invariant "test_reachable_state_221"
{
bool mu__quant819; 
mu__quant819 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr820;
bool mu__boolexpr821;
bool mu__boolexpr822;
bool mu__boolexpr823;
bool mu__boolexpr824;
bool mu__boolexpr825;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr825 = FALSE ;
  else {
  mu__boolexpr825 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr825)) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr824)) mu__boolexpr823 = FALSE ;
  else {
  mu__boolexpr823 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr823)) mu__boolexpr822 = FALSE ;
  else {
  mu__boolexpr822 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr822)) mu__boolexpr821 = FALSE ;
  else {
  mu__boolexpr821 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr821)) mu__boolexpr820 = FALSE ;
  else {
  mu__boolexpr820 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr820)) )
  { mu__quant819 = FALSE; break; }
};
};
return mu__quant819;
};

bool mu__condition_826() // Condition for Rule "test_reachable_state_221"
{
  return mu__invariant_818( );
}

/**** end rule declaration ****/

int mu__invariant_827() // Invariant "test_reachable_state_220"
{
bool mu__quant828; 
mu__quant828 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr829;
bool mu__boolexpr830;
bool mu__boolexpr831;
bool mu__boolexpr832;
bool mu__boolexpr833;
bool mu__boolexpr834;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr834 = FALSE ;
  else {
  mu__boolexpr834 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr834)) mu__boolexpr833 = FALSE ;
  else {
  mu__boolexpr833 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr833)) mu__boolexpr832 = FALSE ;
  else {
  mu__boolexpr832 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr832)) mu__boolexpr831 = FALSE ;
  else {
  mu__boolexpr831 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr831)) mu__boolexpr830 = FALSE ;
  else {
  mu__boolexpr830 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr830)) mu__boolexpr829 = FALSE ;
  else {
  mu__boolexpr829 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr829)) )
  { mu__quant828 = FALSE; break; }
};
};
return mu__quant828;
};

bool mu__condition_835() // Condition for Rule "test_reachable_state_220"
{
  return mu__invariant_827( );
}

/**** end rule declaration ****/

int mu__invariant_836() // Invariant "test_reachable_state_219"
{
bool mu__quant837; 
mu__quant837 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr838;
bool mu__boolexpr839;
bool mu__boolexpr840;
bool mu__boolexpr841;
bool mu__boolexpr842;
bool mu__boolexpr843;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr843 = FALSE ;
  else {
  mu__boolexpr843 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr843)) mu__boolexpr842 = FALSE ;
  else {
  mu__boolexpr842 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr842)) mu__boolexpr841 = FALSE ;
  else {
  mu__boolexpr841 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr841)) mu__boolexpr840 = FALSE ;
  else {
  mu__boolexpr840 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr840)) mu__boolexpr839 = FALSE ;
  else {
  mu__boolexpr839 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr839)) mu__boolexpr838 = FALSE ;
  else {
  mu__boolexpr838 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr838)) )
  { mu__quant837 = FALSE; break; }
};
};
return mu__quant837;
};

bool mu__condition_844() // Condition for Rule "test_reachable_state_219"
{
  return mu__invariant_836( );
}

/**** end rule declaration ****/

int mu__invariant_845() // Invariant "test_reachable_state_218"
{
bool mu__quant846; 
mu__quant846 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr847;
bool mu__boolexpr848;
bool mu__boolexpr849;
bool mu__boolexpr850;
bool mu__boolexpr851;
bool mu__boolexpr852;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr852 = FALSE ;
  else {
  mu__boolexpr852 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr852)) mu__boolexpr851 = FALSE ;
  else {
  mu__boolexpr851 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr851)) mu__boolexpr850 = FALSE ;
  else {
  mu__boolexpr850 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr850)) mu__boolexpr849 = FALSE ;
  else {
  mu__boolexpr849 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr849)) mu__boolexpr848 = FALSE ;
  else {
  mu__boolexpr848 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr848)) mu__boolexpr847 = FALSE ;
  else {
  mu__boolexpr847 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr847)) )
  { mu__quant846 = FALSE; break; }
};
};
return mu__quant846;
};

bool mu__condition_853() // Condition for Rule "test_reachable_state_218"
{
  return mu__invariant_845( );
}

/**** end rule declaration ****/

int mu__invariant_854() // Invariant "test_reachable_state_217"
{
bool mu__quant855; 
mu__quant855 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr856;
bool mu__boolexpr857;
bool mu__boolexpr858;
bool mu__boolexpr859;
bool mu__boolexpr860;
bool mu__boolexpr861;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr861 = FALSE ;
  else {
  mu__boolexpr861 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr861)) mu__boolexpr860 = FALSE ;
  else {
  mu__boolexpr860 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr860)) mu__boolexpr859 = FALSE ;
  else {
  mu__boolexpr859 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr859)) mu__boolexpr858 = FALSE ;
  else {
  mu__boolexpr858 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr858)) mu__boolexpr857 = FALSE ;
  else {
  mu__boolexpr857 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr857)) mu__boolexpr856 = FALSE ;
  else {
  mu__boolexpr856 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr856)) )
  { mu__quant855 = FALSE; break; }
};
};
return mu__quant855;
};

bool mu__condition_862() // Condition for Rule "test_reachable_state_217"
{
  return mu__invariant_854( );
}

/**** end rule declaration ****/

int mu__invariant_863() // Invariant "test_reachable_state_216"
{
bool mu__quant864; 
mu__quant864 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr865;
bool mu__boolexpr866;
bool mu__boolexpr867;
bool mu__boolexpr868;
bool mu__boolexpr869;
bool mu__boolexpr870;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr870 = FALSE ;
  else {
  mu__boolexpr870 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr870)) mu__boolexpr869 = FALSE ;
  else {
  mu__boolexpr869 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr869)) mu__boolexpr868 = FALSE ;
  else {
  mu__boolexpr868 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr868)) mu__boolexpr867 = FALSE ;
  else {
  mu__boolexpr867 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr867)) mu__boolexpr866 = FALSE ;
  else {
  mu__boolexpr866 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr866)) mu__boolexpr865 = FALSE ;
  else {
  mu__boolexpr865 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr865)) )
  { mu__quant864 = FALSE; break; }
};
};
return mu__quant864;
};

bool mu__condition_871() // Condition for Rule "test_reachable_state_216"
{
  return mu__invariant_863( );
}

/**** end rule declaration ****/

int mu__invariant_872() // Invariant "test_reachable_state_215"
{
bool mu__quant873; 
mu__quant873 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr874;
bool mu__boolexpr875;
bool mu__boolexpr876;
bool mu__boolexpr877;
bool mu__boolexpr878;
bool mu__boolexpr879;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr879 = FALSE ;
  else {
  mu__boolexpr879 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr879)) mu__boolexpr878 = FALSE ;
  else {
  mu__boolexpr878 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr878)) mu__boolexpr877 = FALSE ;
  else {
  mu__boolexpr877 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr877)) mu__boolexpr876 = FALSE ;
  else {
  mu__boolexpr876 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr876)) mu__boolexpr875 = FALSE ;
  else {
  mu__boolexpr875 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr875)) mu__boolexpr874 = FALSE ;
  else {
  mu__boolexpr874 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr874)) )
  { mu__quant873 = FALSE; break; }
};
};
return mu__quant873;
};

bool mu__condition_880() // Condition for Rule "test_reachable_state_215"
{
  return mu__invariant_872( );
}

/**** end rule declaration ****/

int mu__invariant_881() // Invariant "test_reachable_state_214"
{
bool mu__quant882; 
mu__quant882 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr883;
bool mu__boolexpr884;
bool mu__boolexpr885;
bool mu__boolexpr886;
bool mu__boolexpr887;
bool mu__boolexpr888;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr888 = FALSE ;
  else {
  mu__boolexpr888 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr888)) mu__boolexpr887 = FALSE ;
  else {
  mu__boolexpr887 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr887)) mu__boolexpr886 = FALSE ;
  else {
  mu__boolexpr886 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr886)) mu__boolexpr885 = FALSE ;
  else {
  mu__boolexpr885 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr885)) mu__boolexpr884 = FALSE ;
  else {
  mu__boolexpr884 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr884)) mu__boolexpr883 = FALSE ;
  else {
  mu__boolexpr883 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr883)) )
  { mu__quant882 = FALSE; break; }
};
};
return mu__quant882;
};

bool mu__condition_889() // Condition for Rule "test_reachable_state_214"
{
  return mu__invariant_881( );
}

/**** end rule declaration ****/

int mu__invariant_890() // Invariant "test_reachable_state_213"
{
bool mu__quant891; 
mu__quant891 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr892;
bool mu__boolexpr893;
bool mu__boolexpr894;
bool mu__boolexpr895;
bool mu__boolexpr896;
bool mu__boolexpr897;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr897 = FALSE ;
  else {
  mu__boolexpr897 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr897)) mu__boolexpr896 = FALSE ;
  else {
  mu__boolexpr896 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr896)) mu__boolexpr895 = FALSE ;
  else {
  mu__boolexpr895 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr895)) mu__boolexpr894 = FALSE ;
  else {
  mu__boolexpr894 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr894)) mu__boolexpr893 = FALSE ;
  else {
  mu__boolexpr893 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr893)) mu__boolexpr892 = FALSE ;
  else {
  mu__boolexpr892 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr892)) )
  { mu__quant891 = FALSE; break; }
};
};
return mu__quant891;
};

bool mu__condition_898() // Condition for Rule "test_reachable_state_213"
{
  return mu__invariant_890( );
}

/**** end rule declaration ****/

int mu__invariant_899() // Invariant "test_reachable_state_212"
{
bool mu__quant900; 
mu__quant900 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr901;
bool mu__boolexpr902;
bool mu__boolexpr903;
bool mu__boolexpr904;
bool mu__boolexpr905;
bool mu__boolexpr906;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr906 = FALSE ;
  else {
  mu__boolexpr906 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr906)) mu__boolexpr905 = FALSE ;
  else {
  mu__boolexpr905 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr905)) mu__boolexpr904 = FALSE ;
  else {
  mu__boolexpr904 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr904)) mu__boolexpr903 = FALSE ;
  else {
  mu__boolexpr903 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr903)) mu__boolexpr902 = FALSE ;
  else {
  mu__boolexpr902 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr902)) mu__boolexpr901 = FALSE ;
  else {
  mu__boolexpr901 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr901)) )
  { mu__quant900 = FALSE; break; }
};
};
return mu__quant900;
};

bool mu__condition_907() // Condition for Rule "test_reachable_state_212"
{
  return mu__invariant_899( );
}

/**** end rule declaration ****/

int mu__invariant_908() // Invariant "test_reachable_state_211"
{
bool mu__quant909; 
mu__quant909 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr910;
bool mu__boolexpr911;
bool mu__boolexpr912;
bool mu__boolexpr913;
bool mu__boolexpr914;
bool mu__boolexpr915;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr915 = FALSE ;
  else {
  mu__boolexpr915 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr915)) mu__boolexpr914 = FALSE ;
  else {
  mu__boolexpr914 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr914)) mu__boolexpr913 = FALSE ;
  else {
  mu__boolexpr913 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr913)) mu__boolexpr912 = FALSE ;
  else {
  mu__boolexpr912 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr912)) mu__boolexpr911 = FALSE ;
  else {
  mu__boolexpr911 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr911)) mu__boolexpr910 = FALSE ;
  else {
  mu__boolexpr910 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr910)) )
  { mu__quant909 = FALSE; break; }
};
};
return mu__quant909;
};

bool mu__condition_916() // Condition for Rule "test_reachable_state_211"
{
  return mu__invariant_908( );
}

/**** end rule declaration ****/

int mu__invariant_917() // Invariant "test_reachable_state_210"
{
bool mu__quant918; 
mu__quant918 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr919;
bool mu__boolexpr920;
bool mu__boolexpr921;
bool mu__boolexpr922;
bool mu__boolexpr923;
bool mu__boolexpr924;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr924 = FALSE ;
  else {
  mu__boolexpr924 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr924)) mu__boolexpr923 = FALSE ;
  else {
  mu__boolexpr923 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr923)) mu__boolexpr922 = FALSE ;
  else {
  mu__boolexpr922 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr922)) mu__boolexpr921 = FALSE ;
  else {
  mu__boolexpr921 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr921)) mu__boolexpr920 = FALSE ;
  else {
  mu__boolexpr920 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr920)) mu__boolexpr919 = FALSE ;
  else {
  mu__boolexpr919 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr919)) )
  { mu__quant918 = FALSE; break; }
};
};
return mu__quant918;
};

bool mu__condition_925() // Condition for Rule "test_reachable_state_210"
{
  return mu__invariant_917( );
}

/**** end rule declaration ****/

int mu__invariant_926() // Invariant "test_reachable_state_209"
{
bool mu__quant927; 
mu__quant927 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr928;
bool mu__boolexpr929;
bool mu__boolexpr930;
bool mu__boolexpr931;
bool mu__boolexpr932;
bool mu__boolexpr933;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr933 = FALSE ;
  else {
  mu__boolexpr933 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr933)) mu__boolexpr932 = FALSE ;
  else {
  mu__boolexpr932 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr932)) mu__boolexpr931 = FALSE ;
  else {
  mu__boolexpr931 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr931)) mu__boolexpr930 = FALSE ;
  else {
  mu__boolexpr930 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr930)) mu__boolexpr929 = FALSE ;
  else {
  mu__boolexpr929 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr929)) mu__boolexpr928 = FALSE ;
  else {
  mu__boolexpr928 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr928)) )
  { mu__quant927 = FALSE; break; }
};
};
return mu__quant927;
};

bool mu__condition_934() // Condition for Rule "test_reachable_state_209"
{
  return mu__invariant_926( );
}

/**** end rule declaration ****/

int mu__invariant_935() // Invariant "test_reachable_state_208"
{
bool mu__quant936; 
mu__quant936 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr937;
bool mu__boolexpr938;
bool mu__boolexpr939;
bool mu__boolexpr940;
bool mu__boolexpr941;
bool mu__boolexpr942;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr942 = FALSE ;
  else {
  mu__boolexpr942 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr942)) mu__boolexpr941 = FALSE ;
  else {
  mu__boolexpr941 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr941)) mu__boolexpr940 = FALSE ;
  else {
  mu__boolexpr940 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr940)) mu__boolexpr939 = FALSE ;
  else {
  mu__boolexpr939 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr939)) mu__boolexpr938 = FALSE ;
  else {
  mu__boolexpr938 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr938)) mu__boolexpr937 = FALSE ;
  else {
  mu__boolexpr937 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr937)) )
  { mu__quant936 = FALSE; break; }
};
};
return mu__quant936;
};

bool mu__condition_943() // Condition for Rule "test_reachable_state_208"
{
  return mu__invariant_935( );
}

/**** end rule declaration ****/

int mu__invariant_944() // Invariant "test_reachable_state_207"
{
bool mu__quant945; 
mu__quant945 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr946;
bool mu__boolexpr947;
bool mu__boolexpr948;
bool mu__boolexpr949;
bool mu__boolexpr950;
bool mu__boolexpr951;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr951 = FALSE ;
  else {
  mu__boolexpr951 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr951)) mu__boolexpr950 = FALSE ;
  else {
  mu__boolexpr950 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr950)) mu__boolexpr949 = FALSE ;
  else {
  mu__boolexpr949 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr949)) mu__boolexpr948 = FALSE ;
  else {
  mu__boolexpr948 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr948)) mu__boolexpr947 = FALSE ;
  else {
  mu__boolexpr947 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr947)) mu__boolexpr946 = FALSE ;
  else {
  mu__boolexpr946 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr946)) )
  { mu__quant945 = FALSE; break; }
};
};
return mu__quant945;
};

bool mu__condition_952() // Condition for Rule "test_reachable_state_207"
{
  return mu__invariant_944( );
}

/**** end rule declaration ****/

int mu__invariant_953() // Invariant "test_reachable_state_206"
{
bool mu__quant954; 
mu__quant954 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr955;
bool mu__boolexpr956;
bool mu__boolexpr957;
bool mu__boolexpr958;
bool mu__boolexpr959;
bool mu__boolexpr960;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr960 = FALSE ;
  else {
  mu__boolexpr960 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr960)) mu__boolexpr959 = FALSE ;
  else {
  mu__boolexpr959 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr959)) mu__boolexpr958 = FALSE ;
  else {
  mu__boolexpr958 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr958)) mu__boolexpr957 = FALSE ;
  else {
  mu__boolexpr957 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr957)) mu__boolexpr956 = FALSE ;
  else {
  mu__boolexpr956 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr956)) mu__boolexpr955 = FALSE ;
  else {
  mu__boolexpr955 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr955)) )
  { mu__quant954 = FALSE; break; }
};
};
return mu__quant954;
};

bool mu__condition_961() // Condition for Rule "test_reachable_state_206"
{
  return mu__invariant_953( );
}

/**** end rule declaration ****/

int mu__invariant_962() // Invariant "test_reachable_state_205"
{
bool mu__quant963; 
mu__quant963 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr964;
bool mu__boolexpr965;
bool mu__boolexpr966;
bool mu__boolexpr967;
bool mu__boolexpr968;
bool mu__boolexpr969;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr969 = FALSE ;
  else {
  mu__boolexpr969 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr969)) mu__boolexpr968 = FALSE ;
  else {
  mu__boolexpr968 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr968)) mu__boolexpr967 = FALSE ;
  else {
  mu__boolexpr967 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr967)) mu__boolexpr966 = FALSE ;
  else {
  mu__boolexpr966 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr966)) mu__boolexpr965 = FALSE ;
  else {
  mu__boolexpr965 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr965)) mu__boolexpr964 = FALSE ;
  else {
  mu__boolexpr964 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr964)) )
  { mu__quant963 = FALSE; break; }
};
};
return mu__quant963;
};

bool mu__condition_970() // Condition for Rule "test_reachable_state_205"
{
  return mu__invariant_962( );
}

/**** end rule declaration ****/

int mu__invariant_971() // Invariant "test_reachable_state_204"
{
bool mu__quant972; 
mu__quant972 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr973;
bool mu__boolexpr974;
bool mu__boolexpr975;
bool mu__boolexpr976;
bool mu__boolexpr977;
bool mu__boolexpr978;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr978 = FALSE ;
  else {
  mu__boolexpr978 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr978)) mu__boolexpr977 = FALSE ;
  else {
  mu__boolexpr977 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr977)) mu__boolexpr976 = FALSE ;
  else {
  mu__boolexpr976 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr976)) mu__boolexpr975 = FALSE ;
  else {
  mu__boolexpr975 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr975)) mu__boolexpr974 = FALSE ;
  else {
  mu__boolexpr974 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr974)) mu__boolexpr973 = FALSE ;
  else {
  mu__boolexpr973 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr973)) )
  { mu__quant972 = FALSE; break; }
};
};
return mu__quant972;
};

bool mu__condition_979() // Condition for Rule "test_reachable_state_204"
{
  return mu__invariant_971( );
}

/**** end rule declaration ****/

int mu__invariant_980() // Invariant "test_reachable_state_203"
{
bool mu__quant981; 
mu__quant981 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr982;
bool mu__boolexpr983;
bool mu__boolexpr984;
bool mu__boolexpr985;
bool mu__boolexpr986;
bool mu__boolexpr987;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr987 = FALSE ;
  else {
  mu__boolexpr987 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr987)) mu__boolexpr986 = FALSE ;
  else {
  mu__boolexpr986 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr986)) mu__boolexpr985 = FALSE ;
  else {
  mu__boolexpr985 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr985)) mu__boolexpr984 = FALSE ;
  else {
  mu__boolexpr984 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr984)) mu__boolexpr983 = FALSE ;
  else {
  mu__boolexpr983 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr983)) mu__boolexpr982 = FALSE ;
  else {
  mu__boolexpr982 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr982)) )
  { mu__quant981 = FALSE; break; }
};
};
return mu__quant981;
};

bool mu__condition_988() // Condition for Rule "test_reachable_state_203"
{
  return mu__invariant_980( );
}

/**** end rule declaration ****/

int mu__invariant_989() // Invariant "test_reachable_state_202"
{
bool mu__quant990; 
mu__quant990 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr991;
bool mu__boolexpr992;
bool mu__boolexpr993;
bool mu__boolexpr994;
bool mu__boolexpr995;
bool mu__boolexpr996;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr996 = FALSE ;
  else {
  mu__boolexpr996 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr996)) mu__boolexpr995 = FALSE ;
  else {
  mu__boolexpr995 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr995)) mu__boolexpr994 = FALSE ;
  else {
  mu__boolexpr994 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr994)) mu__boolexpr993 = FALSE ;
  else {
  mu__boolexpr993 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr993)) mu__boolexpr992 = FALSE ;
  else {
  mu__boolexpr992 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr992)) mu__boolexpr991 = FALSE ;
  else {
  mu__boolexpr991 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr991)) )
  { mu__quant990 = FALSE; break; }
};
};
return mu__quant990;
};

bool mu__condition_997() // Condition for Rule "test_reachable_state_202"
{
  return mu__invariant_989( );
}

/**** end rule declaration ****/

int mu__invariant_998() // Invariant "test_reachable_state_201"
{
bool mu__quant999; 
mu__quant999 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1000;
bool mu__boolexpr1001;
bool mu__boolexpr1002;
bool mu__boolexpr1003;
bool mu__boolexpr1004;
bool mu__boolexpr1005;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1005 = FALSE ;
  else {
  mu__boolexpr1005 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1005)) mu__boolexpr1004 = FALSE ;
  else {
  mu__boolexpr1004 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1004)) mu__boolexpr1003 = FALSE ;
  else {
  mu__boolexpr1003 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1003)) mu__boolexpr1002 = FALSE ;
  else {
  mu__boolexpr1002 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1002)) mu__boolexpr1001 = FALSE ;
  else {
  mu__boolexpr1001 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1001)) mu__boolexpr1000 = FALSE ;
  else {
  mu__boolexpr1000 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1000)) )
  { mu__quant999 = FALSE; break; }
};
};
return mu__quant999;
};

bool mu__condition_1006() // Condition for Rule "test_reachable_state_201"
{
  return mu__invariant_998( );
}

/**** end rule declaration ****/

int mu__invariant_1007() // Invariant "test_reachable_state_200"
{
bool mu__quant1008; 
mu__quant1008 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1009;
bool mu__boolexpr1010;
bool mu__boolexpr1011;
bool mu__boolexpr1012;
bool mu__boolexpr1013;
bool mu__boolexpr1014;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1014 = FALSE ;
  else {
  mu__boolexpr1014 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1014)) mu__boolexpr1013 = FALSE ;
  else {
  mu__boolexpr1013 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1013)) mu__boolexpr1012 = FALSE ;
  else {
  mu__boolexpr1012 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1012)) mu__boolexpr1011 = FALSE ;
  else {
  mu__boolexpr1011 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1011)) mu__boolexpr1010 = FALSE ;
  else {
  mu__boolexpr1010 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1010)) mu__boolexpr1009 = FALSE ;
  else {
  mu__boolexpr1009 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1009)) )
  { mu__quant1008 = FALSE; break; }
};
};
return mu__quant1008;
};

bool mu__condition_1015() // Condition for Rule "test_reachable_state_200"
{
  return mu__invariant_1007( );
}

/**** end rule declaration ****/

int mu__invariant_1016() // Invariant "test_reachable_state_199"
{
bool mu__quant1017; 
mu__quant1017 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1018;
bool mu__boolexpr1019;
bool mu__boolexpr1020;
bool mu__boolexpr1021;
bool mu__boolexpr1022;
bool mu__boolexpr1023;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1023 = FALSE ;
  else {
  mu__boolexpr1023 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1023)) mu__boolexpr1022 = FALSE ;
  else {
  mu__boolexpr1022 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1022)) mu__boolexpr1021 = FALSE ;
  else {
  mu__boolexpr1021 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1021)) mu__boolexpr1020 = FALSE ;
  else {
  mu__boolexpr1020 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1020)) mu__boolexpr1019 = FALSE ;
  else {
  mu__boolexpr1019 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1019)) mu__boolexpr1018 = FALSE ;
  else {
  mu__boolexpr1018 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1018)) )
  { mu__quant1017 = FALSE; break; }
};
};
return mu__quant1017;
};

bool mu__condition_1024() // Condition for Rule "test_reachable_state_199"
{
  return mu__invariant_1016( );
}

/**** end rule declaration ****/

int mu__invariant_1025() // Invariant "test_reachable_state_198"
{
bool mu__quant1026; 
mu__quant1026 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1027;
bool mu__boolexpr1028;
bool mu__boolexpr1029;
bool mu__boolexpr1030;
bool mu__boolexpr1031;
bool mu__boolexpr1032;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1032 = FALSE ;
  else {
  mu__boolexpr1032 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1032)) mu__boolexpr1031 = FALSE ;
  else {
  mu__boolexpr1031 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1031)) mu__boolexpr1030 = FALSE ;
  else {
  mu__boolexpr1030 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1030)) mu__boolexpr1029 = FALSE ;
  else {
  mu__boolexpr1029 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1029)) mu__boolexpr1028 = FALSE ;
  else {
  mu__boolexpr1028 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1028)) mu__boolexpr1027 = FALSE ;
  else {
  mu__boolexpr1027 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1027)) )
  { mu__quant1026 = FALSE; break; }
};
};
return mu__quant1026;
};

bool mu__condition_1033() // Condition for Rule "test_reachable_state_198"
{
  return mu__invariant_1025( );
}

/**** end rule declaration ****/

int mu__invariant_1034() // Invariant "test_reachable_state_197"
{
bool mu__quant1035; 
mu__quant1035 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1036;
bool mu__boolexpr1037;
bool mu__boolexpr1038;
bool mu__boolexpr1039;
bool mu__boolexpr1040;
bool mu__boolexpr1041;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1041 = FALSE ;
  else {
  mu__boolexpr1041 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1041)) mu__boolexpr1040 = FALSE ;
  else {
  mu__boolexpr1040 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1040)) mu__boolexpr1039 = FALSE ;
  else {
  mu__boolexpr1039 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1039)) mu__boolexpr1038 = FALSE ;
  else {
  mu__boolexpr1038 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1038)) mu__boolexpr1037 = FALSE ;
  else {
  mu__boolexpr1037 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1037)) mu__boolexpr1036 = FALSE ;
  else {
  mu__boolexpr1036 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1036)) )
  { mu__quant1035 = FALSE; break; }
};
};
return mu__quant1035;
};

bool mu__condition_1042() // Condition for Rule "test_reachable_state_197"
{
  return mu__invariant_1034( );
}

/**** end rule declaration ****/

int mu__invariant_1043() // Invariant "test_reachable_state_196"
{
bool mu__quant1044; 
mu__quant1044 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1045;
bool mu__boolexpr1046;
bool mu__boolexpr1047;
bool mu__boolexpr1048;
bool mu__boolexpr1049;
bool mu__boolexpr1050;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1050 = FALSE ;
  else {
  mu__boolexpr1050 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1050)) mu__boolexpr1049 = FALSE ;
  else {
  mu__boolexpr1049 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1049)) mu__boolexpr1048 = FALSE ;
  else {
  mu__boolexpr1048 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1048)) mu__boolexpr1047 = FALSE ;
  else {
  mu__boolexpr1047 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1047)) mu__boolexpr1046 = FALSE ;
  else {
  mu__boolexpr1046 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1046)) mu__boolexpr1045 = FALSE ;
  else {
  mu__boolexpr1045 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1045)) )
  { mu__quant1044 = FALSE; break; }
};
};
return mu__quant1044;
};

bool mu__condition_1051() // Condition for Rule "test_reachable_state_196"
{
  return mu__invariant_1043( );
}

/**** end rule declaration ****/

int mu__invariant_1052() // Invariant "test_reachable_state_195"
{
bool mu__quant1053; 
mu__quant1053 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1054;
bool mu__boolexpr1055;
bool mu__boolexpr1056;
bool mu__boolexpr1057;
bool mu__boolexpr1058;
bool mu__boolexpr1059;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1059 = FALSE ;
  else {
  mu__boolexpr1059 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1059)) mu__boolexpr1058 = FALSE ;
  else {
  mu__boolexpr1058 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1058)) mu__boolexpr1057 = FALSE ;
  else {
  mu__boolexpr1057 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1057)) mu__boolexpr1056 = FALSE ;
  else {
  mu__boolexpr1056 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1056)) mu__boolexpr1055 = FALSE ;
  else {
  mu__boolexpr1055 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1055)) mu__boolexpr1054 = FALSE ;
  else {
  mu__boolexpr1054 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1054)) )
  { mu__quant1053 = FALSE; break; }
};
};
return mu__quant1053;
};

bool mu__condition_1060() // Condition for Rule "test_reachable_state_195"
{
  return mu__invariant_1052( );
}

/**** end rule declaration ****/

int mu__invariant_1061() // Invariant "test_reachable_state_194"
{
bool mu__quant1062; 
mu__quant1062 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1063;
bool mu__boolexpr1064;
bool mu__boolexpr1065;
bool mu__boolexpr1066;
bool mu__boolexpr1067;
bool mu__boolexpr1068;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1068 = FALSE ;
  else {
  mu__boolexpr1068 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1068)) mu__boolexpr1067 = FALSE ;
  else {
  mu__boolexpr1067 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1067)) mu__boolexpr1066 = FALSE ;
  else {
  mu__boolexpr1066 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1066)) mu__boolexpr1065 = FALSE ;
  else {
  mu__boolexpr1065 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1065)) mu__boolexpr1064 = FALSE ;
  else {
  mu__boolexpr1064 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1064)) mu__boolexpr1063 = FALSE ;
  else {
  mu__boolexpr1063 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1063)) )
  { mu__quant1062 = FALSE; break; }
};
};
return mu__quant1062;
};

bool mu__condition_1069() // Condition for Rule "test_reachable_state_194"
{
  return mu__invariant_1061( );
}

/**** end rule declaration ****/

int mu__invariant_1070() // Invariant "test_reachable_state_193"
{
bool mu__quant1071; 
mu__quant1071 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1072;
bool mu__boolexpr1073;
bool mu__boolexpr1074;
bool mu__boolexpr1075;
bool mu__boolexpr1076;
bool mu__boolexpr1077;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1077 = FALSE ;
  else {
  mu__boolexpr1077 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1077)) mu__boolexpr1076 = FALSE ;
  else {
  mu__boolexpr1076 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1076)) mu__boolexpr1075 = FALSE ;
  else {
  mu__boolexpr1075 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1075)) mu__boolexpr1074 = FALSE ;
  else {
  mu__boolexpr1074 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1074)) mu__boolexpr1073 = FALSE ;
  else {
  mu__boolexpr1073 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1073)) mu__boolexpr1072 = FALSE ;
  else {
  mu__boolexpr1072 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1072)) )
  { mu__quant1071 = FALSE; break; }
};
};
return mu__quant1071;
};

bool mu__condition_1078() // Condition for Rule "test_reachable_state_193"
{
  return mu__invariant_1070( );
}

/**** end rule declaration ****/

int mu__invariant_1079() // Invariant "test_reachable_state_192"
{
bool mu__quant1080; 
mu__quant1080 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1081;
bool mu__boolexpr1082;
bool mu__boolexpr1083;
bool mu__boolexpr1084;
bool mu__boolexpr1085;
bool mu__boolexpr1086;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1086 = FALSE ;
  else {
  mu__boolexpr1086 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1086)) mu__boolexpr1085 = FALSE ;
  else {
  mu__boolexpr1085 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1085)) mu__boolexpr1084 = FALSE ;
  else {
  mu__boolexpr1084 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1084)) mu__boolexpr1083 = FALSE ;
  else {
  mu__boolexpr1083 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1083)) mu__boolexpr1082 = FALSE ;
  else {
  mu__boolexpr1082 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1082)) mu__boolexpr1081 = FALSE ;
  else {
  mu__boolexpr1081 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1081)) )
  { mu__quant1080 = FALSE; break; }
};
};
return mu__quant1080;
};

bool mu__condition_1087() // Condition for Rule "test_reachable_state_192"
{
  return mu__invariant_1079( );
}

/**** end rule declaration ****/

int mu__invariant_1088() // Invariant "test_reachable_state_191"
{
bool mu__quant1089; 
mu__quant1089 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1090;
bool mu__boolexpr1091;
bool mu__boolexpr1092;
bool mu__boolexpr1093;
bool mu__boolexpr1094;
bool mu__boolexpr1095;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1095 = FALSE ;
  else {
  mu__boolexpr1095 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1095)) mu__boolexpr1094 = FALSE ;
  else {
  mu__boolexpr1094 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1094)) mu__boolexpr1093 = FALSE ;
  else {
  mu__boolexpr1093 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1093)) mu__boolexpr1092 = FALSE ;
  else {
  mu__boolexpr1092 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1092)) mu__boolexpr1091 = FALSE ;
  else {
  mu__boolexpr1091 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1091)) mu__boolexpr1090 = FALSE ;
  else {
  mu__boolexpr1090 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1090)) )
  { mu__quant1089 = FALSE; break; }
};
};
return mu__quant1089;
};

bool mu__condition_1096() // Condition for Rule "test_reachable_state_191"
{
  return mu__invariant_1088( );
}

/**** end rule declaration ****/

int mu__invariant_1097() // Invariant "test_reachable_state_190"
{
bool mu__quant1098; 
mu__quant1098 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1099;
bool mu__boolexpr1100;
bool mu__boolexpr1101;
bool mu__boolexpr1102;
bool mu__boolexpr1103;
bool mu__boolexpr1104;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1104 = FALSE ;
  else {
  mu__boolexpr1104 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1104)) mu__boolexpr1103 = FALSE ;
  else {
  mu__boolexpr1103 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1103)) mu__boolexpr1102 = FALSE ;
  else {
  mu__boolexpr1102 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1102)) mu__boolexpr1101 = FALSE ;
  else {
  mu__boolexpr1101 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1101)) mu__boolexpr1100 = FALSE ;
  else {
  mu__boolexpr1100 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1100)) mu__boolexpr1099 = FALSE ;
  else {
  mu__boolexpr1099 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1099)) )
  { mu__quant1098 = FALSE; break; }
};
};
return mu__quant1098;
};

bool mu__condition_1105() // Condition for Rule "test_reachable_state_190"
{
  return mu__invariant_1097( );
}

/**** end rule declaration ****/

int mu__invariant_1106() // Invariant "test_reachable_state_189"
{
bool mu__quant1107; 
mu__quant1107 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1108;
bool mu__boolexpr1109;
bool mu__boolexpr1110;
bool mu__boolexpr1111;
bool mu__boolexpr1112;
bool mu__boolexpr1113;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1113 = FALSE ;
  else {
  mu__boolexpr1113 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1113)) mu__boolexpr1112 = FALSE ;
  else {
  mu__boolexpr1112 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1112)) mu__boolexpr1111 = FALSE ;
  else {
  mu__boolexpr1111 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1111)) mu__boolexpr1110 = FALSE ;
  else {
  mu__boolexpr1110 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1110)) mu__boolexpr1109 = FALSE ;
  else {
  mu__boolexpr1109 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1109)) mu__boolexpr1108 = FALSE ;
  else {
  mu__boolexpr1108 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1108)) )
  { mu__quant1107 = FALSE; break; }
};
};
return mu__quant1107;
};

bool mu__condition_1114() // Condition for Rule "test_reachable_state_189"
{
  return mu__invariant_1106( );
}

/**** end rule declaration ****/

int mu__invariant_1115() // Invariant "test_reachable_state_188"
{
bool mu__quant1116; 
mu__quant1116 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1117;
bool mu__boolexpr1118;
bool mu__boolexpr1119;
bool mu__boolexpr1120;
bool mu__boolexpr1121;
bool mu__boolexpr1122;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1122 = FALSE ;
  else {
  mu__boolexpr1122 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1122)) mu__boolexpr1121 = FALSE ;
  else {
  mu__boolexpr1121 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1121)) mu__boolexpr1120 = FALSE ;
  else {
  mu__boolexpr1120 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1120)) mu__boolexpr1119 = FALSE ;
  else {
  mu__boolexpr1119 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1119)) mu__boolexpr1118 = FALSE ;
  else {
  mu__boolexpr1118 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1118)) mu__boolexpr1117 = FALSE ;
  else {
  mu__boolexpr1117 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1117)) )
  { mu__quant1116 = FALSE; break; }
};
};
return mu__quant1116;
};

bool mu__condition_1123() // Condition for Rule "test_reachable_state_188"
{
  return mu__invariant_1115( );
}

/**** end rule declaration ****/

int mu__invariant_1124() // Invariant "test_reachable_state_187"
{
bool mu__quant1125; 
mu__quant1125 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1126;
bool mu__boolexpr1127;
bool mu__boolexpr1128;
bool mu__boolexpr1129;
bool mu__boolexpr1130;
bool mu__boolexpr1131;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1131 = FALSE ;
  else {
  mu__boolexpr1131 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1131)) mu__boolexpr1130 = FALSE ;
  else {
  mu__boolexpr1130 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1130)) mu__boolexpr1129 = FALSE ;
  else {
  mu__boolexpr1129 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1129)) mu__boolexpr1128 = FALSE ;
  else {
  mu__boolexpr1128 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1128)) mu__boolexpr1127 = FALSE ;
  else {
  mu__boolexpr1127 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1127)) mu__boolexpr1126 = FALSE ;
  else {
  mu__boolexpr1126 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1126)) )
  { mu__quant1125 = FALSE; break; }
};
};
return mu__quant1125;
};

bool mu__condition_1132() // Condition for Rule "test_reachable_state_187"
{
  return mu__invariant_1124( );
}

/**** end rule declaration ****/

int mu__invariant_1133() // Invariant "test_reachable_state_186"
{
bool mu__quant1134; 
mu__quant1134 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1135;
bool mu__boolexpr1136;
bool mu__boolexpr1137;
bool mu__boolexpr1138;
bool mu__boolexpr1139;
bool mu__boolexpr1140;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1140 = FALSE ;
  else {
  mu__boolexpr1140 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1140)) mu__boolexpr1139 = FALSE ;
  else {
  mu__boolexpr1139 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1139)) mu__boolexpr1138 = FALSE ;
  else {
  mu__boolexpr1138 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1138)) mu__boolexpr1137 = FALSE ;
  else {
  mu__boolexpr1137 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1137)) mu__boolexpr1136 = FALSE ;
  else {
  mu__boolexpr1136 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1136)) mu__boolexpr1135 = FALSE ;
  else {
  mu__boolexpr1135 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1135)) )
  { mu__quant1134 = FALSE; break; }
};
};
return mu__quant1134;
};

bool mu__condition_1141() // Condition for Rule "test_reachable_state_186"
{
  return mu__invariant_1133( );
}

/**** end rule declaration ****/

int mu__invariant_1142() // Invariant "test_reachable_state_185"
{
bool mu__quant1143; 
mu__quant1143 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1144;
bool mu__boolexpr1145;
bool mu__boolexpr1146;
bool mu__boolexpr1147;
bool mu__boolexpr1148;
bool mu__boolexpr1149;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1149 = FALSE ;
  else {
  mu__boolexpr1149 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1149)) mu__boolexpr1148 = FALSE ;
  else {
  mu__boolexpr1148 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1148)) mu__boolexpr1147 = FALSE ;
  else {
  mu__boolexpr1147 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1147)) mu__boolexpr1146 = FALSE ;
  else {
  mu__boolexpr1146 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1146)) mu__boolexpr1145 = FALSE ;
  else {
  mu__boolexpr1145 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1145)) mu__boolexpr1144 = FALSE ;
  else {
  mu__boolexpr1144 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1144)) )
  { mu__quant1143 = FALSE; break; }
};
};
return mu__quant1143;
};

bool mu__condition_1150() // Condition for Rule "test_reachable_state_185"
{
  return mu__invariant_1142( );
}

/**** end rule declaration ****/

int mu__invariant_1151() // Invariant "test_reachable_state_184"
{
bool mu__quant1152; 
mu__quant1152 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1153;
bool mu__boolexpr1154;
bool mu__boolexpr1155;
bool mu__boolexpr1156;
bool mu__boolexpr1157;
bool mu__boolexpr1158;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1158 = FALSE ;
  else {
  mu__boolexpr1158 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1158)) mu__boolexpr1157 = FALSE ;
  else {
  mu__boolexpr1157 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1157)) mu__boolexpr1156 = FALSE ;
  else {
  mu__boolexpr1156 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1156)) mu__boolexpr1155 = FALSE ;
  else {
  mu__boolexpr1155 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1155)) mu__boolexpr1154 = FALSE ;
  else {
  mu__boolexpr1154 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1154)) mu__boolexpr1153 = FALSE ;
  else {
  mu__boolexpr1153 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1153)) )
  { mu__quant1152 = FALSE; break; }
};
};
return mu__quant1152;
};

bool mu__condition_1159() // Condition for Rule "test_reachable_state_184"
{
  return mu__invariant_1151( );
}

/**** end rule declaration ****/

int mu__invariant_1160() // Invariant "test_reachable_state_183"
{
bool mu__quant1161; 
mu__quant1161 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1162;
bool mu__boolexpr1163;
bool mu__boolexpr1164;
bool mu__boolexpr1165;
bool mu__boolexpr1166;
bool mu__boolexpr1167;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1167 = FALSE ;
  else {
  mu__boolexpr1167 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1167)) mu__boolexpr1166 = FALSE ;
  else {
  mu__boolexpr1166 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1166)) mu__boolexpr1165 = FALSE ;
  else {
  mu__boolexpr1165 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1165)) mu__boolexpr1164 = FALSE ;
  else {
  mu__boolexpr1164 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1164)) mu__boolexpr1163 = FALSE ;
  else {
  mu__boolexpr1163 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1163)) mu__boolexpr1162 = FALSE ;
  else {
  mu__boolexpr1162 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1162)) )
  { mu__quant1161 = FALSE; break; }
};
};
return mu__quant1161;
};

bool mu__condition_1168() // Condition for Rule "test_reachable_state_183"
{
  return mu__invariant_1160( );
}

/**** end rule declaration ****/

int mu__invariant_1169() // Invariant "test_reachable_state_182"
{
bool mu__quant1170; 
mu__quant1170 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1171;
bool mu__boolexpr1172;
bool mu__boolexpr1173;
bool mu__boolexpr1174;
bool mu__boolexpr1175;
bool mu__boolexpr1176;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1176 = FALSE ;
  else {
  mu__boolexpr1176 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1176)) mu__boolexpr1175 = FALSE ;
  else {
  mu__boolexpr1175 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1175)) mu__boolexpr1174 = FALSE ;
  else {
  mu__boolexpr1174 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1174)) mu__boolexpr1173 = FALSE ;
  else {
  mu__boolexpr1173 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1173)) mu__boolexpr1172 = FALSE ;
  else {
  mu__boolexpr1172 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1172)) mu__boolexpr1171 = FALSE ;
  else {
  mu__boolexpr1171 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1171)) )
  { mu__quant1170 = FALSE; break; }
};
};
return mu__quant1170;
};

bool mu__condition_1177() // Condition for Rule "test_reachable_state_182"
{
  return mu__invariant_1169( );
}

/**** end rule declaration ****/

int mu__invariant_1178() // Invariant "test_reachable_state_181"
{
bool mu__quant1179; 
mu__quant1179 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1180;
bool mu__boolexpr1181;
bool mu__boolexpr1182;
bool mu__boolexpr1183;
bool mu__boolexpr1184;
bool mu__boolexpr1185;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1185 = FALSE ;
  else {
  mu__boolexpr1185 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1185)) mu__boolexpr1184 = FALSE ;
  else {
  mu__boolexpr1184 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1184)) mu__boolexpr1183 = FALSE ;
  else {
  mu__boolexpr1183 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1183)) mu__boolexpr1182 = FALSE ;
  else {
  mu__boolexpr1182 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1182)) mu__boolexpr1181 = FALSE ;
  else {
  mu__boolexpr1181 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1181)) mu__boolexpr1180 = FALSE ;
  else {
  mu__boolexpr1180 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1180)) )
  { mu__quant1179 = FALSE; break; }
};
};
return mu__quant1179;
};

bool mu__condition_1186() // Condition for Rule "test_reachable_state_181"
{
  return mu__invariant_1178( );
}

/**** end rule declaration ****/

int mu__invariant_1187() // Invariant "test_reachable_state_180"
{
bool mu__quant1188; 
mu__quant1188 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1189;
bool mu__boolexpr1190;
bool mu__boolexpr1191;
bool mu__boolexpr1192;
bool mu__boolexpr1193;
bool mu__boolexpr1194;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1194 = FALSE ;
  else {
  mu__boolexpr1194 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1194)) mu__boolexpr1193 = FALSE ;
  else {
  mu__boolexpr1193 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1193)) mu__boolexpr1192 = FALSE ;
  else {
  mu__boolexpr1192 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1192)) mu__boolexpr1191 = FALSE ;
  else {
  mu__boolexpr1191 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1191)) mu__boolexpr1190 = FALSE ;
  else {
  mu__boolexpr1190 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1190)) mu__boolexpr1189 = FALSE ;
  else {
  mu__boolexpr1189 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1189)) )
  { mu__quant1188 = FALSE; break; }
};
};
return mu__quant1188;
};

bool mu__condition_1195() // Condition for Rule "test_reachable_state_180"
{
  return mu__invariant_1187( );
}

/**** end rule declaration ****/

int mu__invariant_1196() // Invariant "test_reachable_state_179"
{
bool mu__quant1197; 
mu__quant1197 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1198;
bool mu__boolexpr1199;
bool mu__boolexpr1200;
bool mu__boolexpr1201;
bool mu__boolexpr1202;
bool mu__boolexpr1203;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1203 = FALSE ;
  else {
  mu__boolexpr1203 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1203)) mu__boolexpr1202 = FALSE ;
  else {
  mu__boolexpr1202 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1202)) mu__boolexpr1201 = FALSE ;
  else {
  mu__boolexpr1201 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1201)) mu__boolexpr1200 = FALSE ;
  else {
  mu__boolexpr1200 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1200)) mu__boolexpr1199 = FALSE ;
  else {
  mu__boolexpr1199 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1199)) mu__boolexpr1198 = FALSE ;
  else {
  mu__boolexpr1198 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1198)) )
  { mu__quant1197 = FALSE; break; }
};
};
return mu__quant1197;
};

bool mu__condition_1204() // Condition for Rule "test_reachable_state_179"
{
  return mu__invariant_1196( );
}

/**** end rule declaration ****/

int mu__invariant_1205() // Invariant "test_reachable_state_178"
{
bool mu__quant1206; 
mu__quant1206 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1207;
bool mu__boolexpr1208;
bool mu__boolexpr1209;
bool mu__boolexpr1210;
bool mu__boolexpr1211;
bool mu__boolexpr1212;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1212 = FALSE ;
  else {
  mu__boolexpr1212 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1212)) mu__boolexpr1211 = FALSE ;
  else {
  mu__boolexpr1211 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1211)) mu__boolexpr1210 = FALSE ;
  else {
  mu__boolexpr1210 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1210)) mu__boolexpr1209 = FALSE ;
  else {
  mu__boolexpr1209 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1209)) mu__boolexpr1208 = FALSE ;
  else {
  mu__boolexpr1208 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1208)) mu__boolexpr1207 = FALSE ;
  else {
  mu__boolexpr1207 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1207)) )
  { mu__quant1206 = FALSE; break; }
};
};
return mu__quant1206;
};

bool mu__condition_1213() // Condition for Rule "test_reachable_state_178"
{
  return mu__invariant_1205( );
}

/**** end rule declaration ****/

int mu__invariant_1214() // Invariant "test_reachable_state_177"
{
bool mu__quant1215; 
mu__quant1215 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1216;
bool mu__boolexpr1217;
bool mu__boolexpr1218;
bool mu__boolexpr1219;
bool mu__boolexpr1220;
bool mu__boolexpr1221;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1221 = FALSE ;
  else {
  mu__boolexpr1221 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1221)) mu__boolexpr1220 = FALSE ;
  else {
  mu__boolexpr1220 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1220)) mu__boolexpr1219 = FALSE ;
  else {
  mu__boolexpr1219 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1219)) mu__boolexpr1218 = FALSE ;
  else {
  mu__boolexpr1218 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1218)) mu__boolexpr1217 = FALSE ;
  else {
  mu__boolexpr1217 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1217)) mu__boolexpr1216 = FALSE ;
  else {
  mu__boolexpr1216 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1216)) )
  { mu__quant1215 = FALSE; break; }
};
};
return mu__quant1215;
};

bool mu__condition_1222() // Condition for Rule "test_reachable_state_177"
{
  return mu__invariant_1214( );
}

/**** end rule declaration ****/

int mu__invariant_1223() // Invariant "test_reachable_state_176"
{
bool mu__quant1224; 
mu__quant1224 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1225;
bool mu__boolexpr1226;
bool mu__boolexpr1227;
bool mu__boolexpr1228;
bool mu__boolexpr1229;
bool mu__boolexpr1230;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1230 = FALSE ;
  else {
  mu__boolexpr1230 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1230)) mu__boolexpr1229 = FALSE ;
  else {
  mu__boolexpr1229 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1229)) mu__boolexpr1228 = FALSE ;
  else {
  mu__boolexpr1228 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1228)) mu__boolexpr1227 = FALSE ;
  else {
  mu__boolexpr1227 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1227)) mu__boolexpr1226 = FALSE ;
  else {
  mu__boolexpr1226 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1226)) mu__boolexpr1225 = FALSE ;
  else {
  mu__boolexpr1225 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1225)) )
  { mu__quant1224 = FALSE; break; }
};
};
return mu__quant1224;
};

bool mu__condition_1231() // Condition for Rule "test_reachable_state_176"
{
  return mu__invariant_1223( );
}

/**** end rule declaration ****/

int mu__invariant_1232() // Invariant "test_reachable_state_175"
{
bool mu__quant1233; 
mu__quant1233 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1234;
bool mu__boolexpr1235;
bool mu__boolexpr1236;
bool mu__boolexpr1237;
bool mu__boolexpr1238;
bool mu__boolexpr1239;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1239 = FALSE ;
  else {
  mu__boolexpr1239 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1239)) mu__boolexpr1238 = FALSE ;
  else {
  mu__boolexpr1238 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1238)) mu__boolexpr1237 = FALSE ;
  else {
  mu__boolexpr1237 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1237)) mu__boolexpr1236 = FALSE ;
  else {
  mu__boolexpr1236 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1236)) mu__boolexpr1235 = FALSE ;
  else {
  mu__boolexpr1235 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1235)) mu__boolexpr1234 = FALSE ;
  else {
  mu__boolexpr1234 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1234)) )
  { mu__quant1233 = FALSE; break; }
};
};
return mu__quant1233;
};

bool mu__condition_1240() // Condition for Rule "test_reachable_state_175"
{
  return mu__invariant_1232( );
}

/**** end rule declaration ****/

int mu__invariant_1241() // Invariant "test_reachable_state_174"
{
bool mu__quant1242; 
mu__quant1242 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1243;
bool mu__boolexpr1244;
bool mu__boolexpr1245;
bool mu__boolexpr1246;
bool mu__boolexpr1247;
bool mu__boolexpr1248;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1248 = FALSE ;
  else {
  mu__boolexpr1248 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1248)) mu__boolexpr1247 = FALSE ;
  else {
  mu__boolexpr1247 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1247)) mu__boolexpr1246 = FALSE ;
  else {
  mu__boolexpr1246 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1246)) mu__boolexpr1245 = FALSE ;
  else {
  mu__boolexpr1245 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1245)) mu__boolexpr1244 = FALSE ;
  else {
  mu__boolexpr1244 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1244)) mu__boolexpr1243 = FALSE ;
  else {
  mu__boolexpr1243 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1243)) )
  { mu__quant1242 = FALSE; break; }
};
};
return mu__quant1242;
};

bool mu__condition_1249() // Condition for Rule "test_reachable_state_174"
{
  return mu__invariant_1241( );
}

/**** end rule declaration ****/

int mu__invariant_1250() // Invariant "test_reachable_state_173"
{
bool mu__quant1251; 
mu__quant1251 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1252;
bool mu__boolexpr1253;
bool mu__boolexpr1254;
bool mu__boolexpr1255;
bool mu__boolexpr1256;
bool mu__boolexpr1257;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1257 = FALSE ;
  else {
  mu__boolexpr1257 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1257)) mu__boolexpr1256 = FALSE ;
  else {
  mu__boolexpr1256 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1256)) mu__boolexpr1255 = FALSE ;
  else {
  mu__boolexpr1255 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1255)) mu__boolexpr1254 = FALSE ;
  else {
  mu__boolexpr1254 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1254)) mu__boolexpr1253 = FALSE ;
  else {
  mu__boolexpr1253 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1253)) mu__boolexpr1252 = FALSE ;
  else {
  mu__boolexpr1252 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1252)) )
  { mu__quant1251 = FALSE; break; }
};
};
return mu__quant1251;
};

bool mu__condition_1258() // Condition for Rule "test_reachable_state_173"
{
  return mu__invariant_1250( );
}

/**** end rule declaration ****/

int mu__invariant_1259() // Invariant "test_reachable_state_172"
{
bool mu__quant1260; 
mu__quant1260 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1261;
bool mu__boolexpr1262;
bool mu__boolexpr1263;
bool mu__boolexpr1264;
bool mu__boolexpr1265;
bool mu__boolexpr1266;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1266 = FALSE ;
  else {
  mu__boolexpr1266 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1266)) mu__boolexpr1265 = FALSE ;
  else {
  mu__boolexpr1265 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1265)) mu__boolexpr1264 = FALSE ;
  else {
  mu__boolexpr1264 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1264)) mu__boolexpr1263 = FALSE ;
  else {
  mu__boolexpr1263 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1263)) mu__boolexpr1262 = FALSE ;
  else {
  mu__boolexpr1262 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1262)) mu__boolexpr1261 = FALSE ;
  else {
  mu__boolexpr1261 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1261)) )
  { mu__quant1260 = FALSE; break; }
};
};
return mu__quant1260;
};

bool mu__condition_1267() // Condition for Rule "test_reachable_state_172"
{
  return mu__invariant_1259( );
}

/**** end rule declaration ****/

int mu__invariant_1268() // Invariant "test_reachable_state_171"
{
bool mu__quant1269; 
mu__quant1269 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1270;
bool mu__boolexpr1271;
bool mu__boolexpr1272;
bool mu__boolexpr1273;
bool mu__boolexpr1274;
bool mu__boolexpr1275;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1275 = FALSE ;
  else {
  mu__boolexpr1275 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1275)) mu__boolexpr1274 = FALSE ;
  else {
  mu__boolexpr1274 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1274)) mu__boolexpr1273 = FALSE ;
  else {
  mu__boolexpr1273 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1273)) mu__boolexpr1272 = FALSE ;
  else {
  mu__boolexpr1272 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1272)) mu__boolexpr1271 = FALSE ;
  else {
  mu__boolexpr1271 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1271)) mu__boolexpr1270 = FALSE ;
  else {
  mu__boolexpr1270 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1270)) )
  { mu__quant1269 = FALSE; break; }
};
};
return mu__quant1269;
};

bool mu__condition_1276() // Condition for Rule "test_reachable_state_171"
{
  return mu__invariant_1268( );
}

/**** end rule declaration ****/

int mu__invariant_1277() // Invariant "test_reachable_state_170"
{
bool mu__quant1278; 
mu__quant1278 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1279;
bool mu__boolexpr1280;
bool mu__boolexpr1281;
bool mu__boolexpr1282;
bool mu__boolexpr1283;
bool mu__boolexpr1284;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1284 = FALSE ;
  else {
  mu__boolexpr1284 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1284)) mu__boolexpr1283 = FALSE ;
  else {
  mu__boolexpr1283 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1283)) mu__boolexpr1282 = FALSE ;
  else {
  mu__boolexpr1282 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1282)) mu__boolexpr1281 = FALSE ;
  else {
  mu__boolexpr1281 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1281)) mu__boolexpr1280 = FALSE ;
  else {
  mu__boolexpr1280 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1280)) mu__boolexpr1279 = FALSE ;
  else {
  mu__boolexpr1279 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1279)) )
  { mu__quant1278 = FALSE; break; }
};
};
return mu__quant1278;
};

bool mu__condition_1285() // Condition for Rule "test_reachable_state_170"
{
  return mu__invariant_1277( );
}

/**** end rule declaration ****/

int mu__invariant_1286() // Invariant "test_reachable_state_169"
{
bool mu__quant1287; 
mu__quant1287 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1288;
bool mu__boolexpr1289;
bool mu__boolexpr1290;
bool mu__boolexpr1291;
bool mu__boolexpr1292;
bool mu__boolexpr1293;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1293 = FALSE ;
  else {
  mu__boolexpr1293 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1293)) mu__boolexpr1292 = FALSE ;
  else {
  mu__boolexpr1292 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1292)) mu__boolexpr1291 = FALSE ;
  else {
  mu__boolexpr1291 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1291)) mu__boolexpr1290 = FALSE ;
  else {
  mu__boolexpr1290 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1290)) mu__boolexpr1289 = FALSE ;
  else {
  mu__boolexpr1289 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1289)) mu__boolexpr1288 = FALSE ;
  else {
  mu__boolexpr1288 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1288)) )
  { mu__quant1287 = FALSE; break; }
};
};
return mu__quant1287;
};

bool mu__condition_1294() // Condition for Rule "test_reachable_state_169"
{
  return mu__invariant_1286( );
}

/**** end rule declaration ****/

int mu__invariant_1295() // Invariant "test_reachable_state_168"
{
bool mu__quant1296; 
mu__quant1296 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1297;
bool mu__boolexpr1298;
bool mu__boolexpr1299;
bool mu__boolexpr1300;
bool mu__boolexpr1301;
bool mu__boolexpr1302;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1302 = FALSE ;
  else {
  mu__boolexpr1302 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1302)) mu__boolexpr1301 = FALSE ;
  else {
  mu__boolexpr1301 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1301)) mu__boolexpr1300 = FALSE ;
  else {
  mu__boolexpr1300 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1300)) mu__boolexpr1299 = FALSE ;
  else {
  mu__boolexpr1299 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1299)) mu__boolexpr1298 = FALSE ;
  else {
  mu__boolexpr1298 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1298)) mu__boolexpr1297 = FALSE ;
  else {
  mu__boolexpr1297 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1297)) )
  { mu__quant1296 = FALSE; break; }
};
};
return mu__quant1296;
};

bool mu__condition_1303() // Condition for Rule "test_reachable_state_168"
{
  return mu__invariant_1295( );
}

/**** end rule declaration ****/

int mu__invariant_1304() // Invariant "test_reachable_state_167"
{
bool mu__quant1305; 
mu__quant1305 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1306;
bool mu__boolexpr1307;
bool mu__boolexpr1308;
bool mu__boolexpr1309;
bool mu__boolexpr1310;
bool mu__boolexpr1311;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1311 = FALSE ;
  else {
  mu__boolexpr1311 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1311)) mu__boolexpr1310 = FALSE ;
  else {
  mu__boolexpr1310 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1310)) mu__boolexpr1309 = FALSE ;
  else {
  mu__boolexpr1309 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1309)) mu__boolexpr1308 = FALSE ;
  else {
  mu__boolexpr1308 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1308)) mu__boolexpr1307 = FALSE ;
  else {
  mu__boolexpr1307 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1307)) mu__boolexpr1306 = FALSE ;
  else {
  mu__boolexpr1306 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1306)) )
  { mu__quant1305 = FALSE; break; }
};
};
return mu__quant1305;
};

bool mu__condition_1312() // Condition for Rule "test_reachable_state_167"
{
  return mu__invariant_1304( );
}

/**** end rule declaration ****/

int mu__invariant_1313() // Invariant "test_reachable_state_166"
{
bool mu__quant1314; 
mu__quant1314 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1315;
bool mu__boolexpr1316;
bool mu__boolexpr1317;
bool mu__boolexpr1318;
bool mu__boolexpr1319;
bool mu__boolexpr1320;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1320 = FALSE ;
  else {
  mu__boolexpr1320 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1320)) mu__boolexpr1319 = FALSE ;
  else {
  mu__boolexpr1319 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1319)) mu__boolexpr1318 = FALSE ;
  else {
  mu__boolexpr1318 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1318)) mu__boolexpr1317 = FALSE ;
  else {
  mu__boolexpr1317 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1317)) mu__boolexpr1316 = FALSE ;
  else {
  mu__boolexpr1316 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1316)) mu__boolexpr1315 = FALSE ;
  else {
  mu__boolexpr1315 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1315)) )
  { mu__quant1314 = FALSE; break; }
};
};
return mu__quant1314;
};

bool mu__condition_1321() // Condition for Rule "test_reachable_state_166"
{
  return mu__invariant_1313( );
}

/**** end rule declaration ****/

int mu__invariant_1322() // Invariant "test_reachable_state_165"
{
bool mu__quant1323; 
mu__quant1323 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1324;
bool mu__boolexpr1325;
bool mu__boolexpr1326;
bool mu__boolexpr1327;
bool mu__boolexpr1328;
bool mu__boolexpr1329;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1329 = FALSE ;
  else {
  mu__boolexpr1329 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1329)) mu__boolexpr1328 = FALSE ;
  else {
  mu__boolexpr1328 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1328)) mu__boolexpr1327 = FALSE ;
  else {
  mu__boolexpr1327 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1327)) mu__boolexpr1326 = FALSE ;
  else {
  mu__boolexpr1326 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1326)) mu__boolexpr1325 = FALSE ;
  else {
  mu__boolexpr1325 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1325)) mu__boolexpr1324 = FALSE ;
  else {
  mu__boolexpr1324 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1324)) )
  { mu__quant1323 = FALSE; break; }
};
};
return mu__quant1323;
};

bool mu__condition_1330() // Condition for Rule "test_reachable_state_165"
{
  return mu__invariant_1322( );
}

/**** end rule declaration ****/

int mu__invariant_1331() // Invariant "test_reachable_state_164"
{
bool mu__quant1332; 
mu__quant1332 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1333;
bool mu__boolexpr1334;
bool mu__boolexpr1335;
bool mu__boolexpr1336;
bool mu__boolexpr1337;
bool mu__boolexpr1338;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1338 = FALSE ;
  else {
  mu__boolexpr1338 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1338)) mu__boolexpr1337 = FALSE ;
  else {
  mu__boolexpr1337 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1337)) mu__boolexpr1336 = FALSE ;
  else {
  mu__boolexpr1336 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1336)) mu__boolexpr1335 = FALSE ;
  else {
  mu__boolexpr1335 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1335)) mu__boolexpr1334 = FALSE ;
  else {
  mu__boolexpr1334 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1334)) mu__boolexpr1333 = FALSE ;
  else {
  mu__boolexpr1333 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1333)) )
  { mu__quant1332 = FALSE; break; }
};
};
return mu__quant1332;
};

bool mu__condition_1339() // Condition for Rule "test_reachable_state_164"
{
  return mu__invariant_1331( );
}

/**** end rule declaration ****/

int mu__invariant_1340() // Invariant "test_reachable_state_163"
{
bool mu__quant1341; 
mu__quant1341 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1342;
bool mu__boolexpr1343;
bool mu__boolexpr1344;
bool mu__boolexpr1345;
bool mu__boolexpr1346;
bool mu__boolexpr1347;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1347 = FALSE ;
  else {
  mu__boolexpr1347 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1347)) mu__boolexpr1346 = FALSE ;
  else {
  mu__boolexpr1346 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1346)) mu__boolexpr1345 = FALSE ;
  else {
  mu__boolexpr1345 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1345)) mu__boolexpr1344 = FALSE ;
  else {
  mu__boolexpr1344 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1344)) mu__boolexpr1343 = FALSE ;
  else {
  mu__boolexpr1343 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1343)) mu__boolexpr1342 = FALSE ;
  else {
  mu__boolexpr1342 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1342)) )
  { mu__quant1341 = FALSE; break; }
};
};
return mu__quant1341;
};

bool mu__condition_1348() // Condition for Rule "test_reachable_state_163"
{
  return mu__invariant_1340( );
}

/**** end rule declaration ****/

int mu__invariant_1349() // Invariant "test_reachable_state_162"
{
bool mu__quant1350; 
mu__quant1350 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1351;
bool mu__boolexpr1352;
bool mu__boolexpr1353;
bool mu__boolexpr1354;
bool mu__boolexpr1355;
bool mu__boolexpr1356;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1356 = FALSE ;
  else {
  mu__boolexpr1356 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1356)) mu__boolexpr1355 = FALSE ;
  else {
  mu__boolexpr1355 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1355)) mu__boolexpr1354 = FALSE ;
  else {
  mu__boolexpr1354 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1354)) mu__boolexpr1353 = FALSE ;
  else {
  mu__boolexpr1353 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1353)) mu__boolexpr1352 = FALSE ;
  else {
  mu__boolexpr1352 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1352)) mu__boolexpr1351 = FALSE ;
  else {
  mu__boolexpr1351 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1351)) )
  { mu__quant1350 = FALSE; break; }
};
};
return mu__quant1350;
};

bool mu__condition_1357() // Condition for Rule "test_reachable_state_162"
{
  return mu__invariant_1349( );
}

/**** end rule declaration ****/

int mu__invariant_1358() // Invariant "test_reachable_state_161"
{
bool mu__quant1359; 
mu__quant1359 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1360;
bool mu__boolexpr1361;
bool mu__boolexpr1362;
bool mu__boolexpr1363;
bool mu__boolexpr1364;
bool mu__boolexpr1365;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Tip))) mu__boolexpr1365 = FALSE ;
  else {
  mu__boolexpr1365 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1365)) mu__boolexpr1364 = FALSE ;
  else {
  mu__boolexpr1364 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1364)) mu__boolexpr1363 = FALSE ;
  else {
  mu__boolexpr1363 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1363)) mu__boolexpr1362 = FALSE ;
  else {
  mu__boolexpr1362 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1362)) mu__boolexpr1361 = FALSE ;
  else {
  mu__boolexpr1361 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1361)) mu__boolexpr1360 = FALSE ;
  else {
  mu__boolexpr1360 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1360)) )
  { mu__quant1359 = FALSE; break; }
};
};
return mu__quant1359;
};

bool mu__condition_1366() // Condition for Rule "test_reachable_state_161"
{
  return mu__invariant_1358( );
}

/**** end rule declaration ****/

int mu__invariant_1367() // Invariant "test_reachable_state_160"
{
bool mu__quant1368; 
mu__quant1368 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1369;
bool mu__boolexpr1370;
bool mu__boolexpr1371;
bool mu__boolexpr1372;
bool mu__boolexpr1373;
bool mu__boolexpr1374;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1374 = FALSE ;
  else {
  mu__boolexpr1374 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1374)) mu__boolexpr1373 = FALSE ;
  else {
  mu__boolexpr1373 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1373)) mu__boolexpr1372 = FALSE ;
  else {
  mu__boolexpr1372 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1372)) mu__boolexpr1371 = FALSE ;
  else {
  mu__boolexpr1371 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1371)) mu__boolexpr1370 = FALSE ;
  else {
  mu__boolexpr1370 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1370)) mu__boolexpr1369 = FALSE ;
  else {
  mu__boolexpr1369 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1369)) )
  { mu__quant1368 = FALSE; break; }
};
};
return mu__quant1368;
};

bool mu__condition_1375() // Condition for Rule "test_reachable_state_160"
{
  return mu__invariant_1367( );
}

/**** end rule declaration ****/

int mu__invariant_1376() // Invariant "test_reachable_state_159"
{
bool mu__quant1377; 
mu__quant1377 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1378;
bool mu__boolexpr1379;
bool mu__boolexpr1380;
bool mu__boolexpr1381;
bool mu__boolexpr1382;
bool mu__boolexpr1383;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1383 = FALSE ;
  else {
  mu__boolexpr1383 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1383)) mu__boolexpr1382 = FALSE ;
  else {
  mu__boolexpr1382 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1382)) mu__boolexpr1381 = FALSE ;
  else {
  mu__boolexpr1381 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1381)) mu__boolexpr1380 = FALSE ;
  else {
  mu__boolexpr1380 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1380)) mu__boolexpr1379 = FALSE ;
  else {
  mu__boolexpr1379 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1379)) mu__boolexpr1378 = FALSE ;
  else {
  mu__boolexpr1378 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1378)) )
  { mu__quant1377 = FALSE; break; }
};
};
return mu__quant1377;
};

bool mu__condition_1384() // Condition for Rule "test_reachable_state_159"
{
  return mu__invariant_1376( );
}

/**** end rule declaration ****/

int mu__invariant_1385() // Invariant "test_reachable_state_158"
{
bool mu__quant1386; 
mu__quant1386 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1387;
bool mu__boolexpr1388;
bool mu__boolexpr1389;
bool mu__boolexpr1390;
bool mu__boolexpr1391;
bool mu__boolexpr1392;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1392 = FALSE ;
  else {
  mu__boolexpr1392 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1392)) mu__boolexpr1391 = FALSE ;
  else {
  mu__boolexpr1391 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1391)) mu__boolexpr1390 = FALSE ;
  else {
  mu__boolexpr1390 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1390)) mu__boolexpr1389 = FALSE ;
  else {
  mu__boolexpr1389 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1389)) mu__boolexpr1388 = FALSE ;
  else {
  mu__boolexpr1388 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1388)) mu__boolexpr1387 = FALSE ;
  else {
  mu__boolexpr1387 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1387)) )
  { mu__quant1386 = FALSE; break; }
};
};
return mu__quant1386;
};

bool mu__condition_1393() // Condition for Rule "test_reachable_state_158"
{
  return mu__invariant_1385( );
}

/**** end rule declaration ****/

int mu__invariant_1394() // Invariant "test_reachable_state_157"
{
bool mu__quant1395; 
mu__quant1395 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1396;
bool mu__boolexpr1397;
bool mu__boolexpr1398;
bool mu__boolexpr1399;
bool mu__boolexpr1400;
bool mu__boolexpr1401;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1401 = FALSE ;
  else {
  mu__boolexpr1401 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1401)) mu__boolexpr1400 = FALSE ;
  else {
  mu__boolexpr1400 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1400)) mu__boolexpr1399 = FALSE ;
  else {
  mu__boolexpr1399 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1399)) mu__boolexpr1398 = FALSE ;
  else {
  mu__boolexpr1398 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1398)) mu__boolexpr1397 = FALSE ;
  else {
  mu__boolexpr1397 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1397)) mu__boolexpr1396 = FALSE ;
  else {
  mu__boolexpr1396 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1396)) )
  { mu__quant1395 = FALSE; break; }
};
};
return mu__quant1395;
};

bool mu__condition_1402() // Condition for Rule "test_reachable_state_157"
{
  return mu__invariant_1394( );
}

/**** end rule declaration ****/

int mu__invariant_1403() // Invariant "test_reachable_state_156"
{
bool mu__quant1404; 
mu__quant1404 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1405;
bool mu__boolexpr1406;
bool mu__boolexpr1407;
bool mu__boolexpr1408;
bool mu__boolexpr1409;
bool mu__boolexpr1410;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1410 = FALSE ;
  else {
  mu__boolexpr1410 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1410)) mu__boolexpr1409 = FALSE ;
  else {
  mu__boolexpr1409 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1409)) mu__boolexpr1408 = FALSE ;
  else {
  mu__boolexpr1408 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1408)) mu__boolexpr1407 = FALSE ;
  else {
  mu__boolexpr1407 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1407)) mu__boolexpr1406 = FALSE ;
  else {
  mu__boolexpr1406 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1406)) mu__boolexpr1405 = FALSE ;
  else {
  mu__boolexpr1405 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1405)) )
  { mu__quant1404 = FALSE; break; }
};
};
return mu__quant1404;
};

bool mu__condition_1411() // Condition for Rule "test_reachable_state_156"
{
  return mu__invariant_1403( );
}

/**** end rule declaration ****/

int mu__invariant_1412() // Invariant "test_reachable_state_155"
{
bool mu__quant1413; 
mu__quant1413 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1414;
bool mu__boolexpr1415;
bool mu__boolexpr1416;
bool mu__boolexpr1417;
bool mu__boolexpr1418;
bool mu__boolexpr1419;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1419 = FALSE ;
  else {
  mu__boolexpr1419 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1419)) mu__boolexpr1418 = FALSE ;
  else {
  mu__boolexpr1418 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1418)) mu__boolexpr1417 = FALSE ;
  else {
  mu__boolexpr1417 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1417)) mu__boolexpr1416 = FALSE ;
  else {
  mu__boolexpr1416 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1416)) mu__boolexpr1415 = FALSE ;
  else {
  mu__boolexpr1415 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1415)) mu__boolexpr1414 = FALSE ;
  else {
  mu__boolexpr1414 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1414)) )
  { mu__quant1413 = FALSE; break; }
};
};
return mu__quant1413;
};

bool mu__condition_1420() // Condition for Rule "test_reachable_state_155"
{
  return mu__invariant_1412( );
}

/**** end rule declaration ****/

int mu__invariant_1421() // Invariant "test_reachable_state_154"
{
bool mu__quant1422; 
mu__quant1422 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1423;
bool mu__boolexpr1424;
bool mu__boolexpr1425;
bool mu__boolexpr1426;
bool mu__boolexpr1427;
bool mu__boolexpr1428;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1428 = FALSE ;
  else {
  mu__boolexpr1428 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1428)) mu__boolexpr1427 = FALSE ;
  else {
  mu__boolexpr1427 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1427)) mu__boolexpr1426 = FALSE ;
  else {
  mu__boolexpr1426 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1426)) mu__boolexpr1425 = FALSE ;
  else {
  mu__boolexpr1425 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1425)) mu__boolexpr1424 = FALSE ;
  else {
  mu__boolexpr1424 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1424)) mu__boolexpr1423 = FALSE ;
  else {
  mu__boolexpr1423 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1423)) )
  { mu__quant1422 = FALSE; break; }
};
};
return mu__quant1422;
};

bool mu__condition_1429() // Condition for Rule "test_reachable_state_154"
{
  return mu__invariant_1421( );
}

/**** end rule declaration ****/

int mu__invariant_1430() // Invariant "test_reachable_state_153"
{
bool mu__quant1431; 
mu__quant1431 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1432;
bool mu__boolexpr1433;
bool mu__boolexpr1434;
bool mu__boolexpr1435;
bool mu__boolexpr1436;
bool mu__boolexpr1437;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1437 = FALSE ;
  else {
  mu__boolexpr1437 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1437)) mu__boolexpr1436 = FALSE ;
  else {
  mu__boolexpr1436 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1436)) mu__boolexpr1435 = FALSE ;
  else {
  mu__boolexpr1435 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1435)) mu__boolexpr1434 = FALSE ;
  else {
  mu__boolexpr1434 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1434)) mu__boolexpr1433 = FALSE ;
  else {
  mu__boolexpr1433 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1433)) mu__boolexpr1432 = FALSE ;
  else {
  mu__boolexpr1432 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1432)) )
  { mu__quant1431 = FALSE; break; }
};
};
return mu__quant1431;
};

bool mu__condition_1438() // Condition for Rule "test_reachable_state_153"
{
  return mu__invariant_1430( );
}

/**** end rule declaration ****/

int mu__invariant_1439() // Invariant "test_reachable_state_152"
{
bool mu__quant1440; 
mu__quant1440 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1441;
bool mu__boolexpr1442;
bool mu__boolexpr1443;
bool mu__boolexpr1444;
bool mu__boolexpr1445;
bool mu__boolexpr1446;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1446 = FALSE ;
  else {
  mu__boolexpr1446 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1446)) mu__boolexpr1445 = FALSE ;
  else {
  mu__boolexpr1445 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1445)) mu__boolexpr1444 = FALSE ;
  else {
  mu__boolexpr1444 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1444)) mu__boolexpr1443 = FALSE ;
  else {
  mu__boolexpr1443 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1443)) mu__boolexpr1442 = FALSE ;
  else {
  mu__boolexpr1442 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1442)) mu__boolexpr1441 = FALSE ;
  else {
  mu__boolexpr1441 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1441)) )
  { mu__quant1440 = FALSE; break; }
};
};
return mu__quant1440;
};

bool mu__condition_1447() // Condition for Rule "test_reachable_state_152"
{
  return mu__invariant_1439( );
}

/**** end rule declaration ****/

int mu__invariant_1448() // Invariant "test_reachable_state_151"
{
bool mu__quant1449; 
mu__quant1449 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1450;
bool mu__boolexpr1451;
bool mu__boolexpr1452;
bool mu__boolexpr1453;
bool mu__boolexpr1454;
bool mu__boolexpr1455;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1455 = FALSE ;
  else {
  mu__boolexpr1455 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1455)) mu__boolexpr1454 = FALSE ;
  else {
  mu__boolexpr1454 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1454)) mu__boolexpr1453 = FALSE ;
  else {
  mu__boolexpr1453 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1453)) mu__boolexpr1452 = FALSE ;
  else {
  mu__boolexpr1452 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1452)) mu__boolexpr1451 = FALSE ;
  else {
  mu__boolexpr1451 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1451)) mu__boolexpr1450 = FALSE ;
  else {
  mu__boolexpr1450 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1450)) )
  { mu__quant1449 = FALSE; break; }
};
};
return mu__quant1449;
};

bool mu__condition_1456() // Condition for Rule "test_reachable_state_151"
{
  return mu__invariant_1448( );
}

/**** end rule declaration ****/

int mu__invariant_1457() // Invariant "test_reachable_state_150"
{
bool mu__quant1458; 
mu__quant1458 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1459;
bool mu__boolexpr1460;
bool mu__boolexpr1461;
bool mu__boolexpr1462;
bool mu__boolexpr1463;
bool mu__boolexpr1464;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1464 = FALSE ;
  else {
  mu__boolexpr1464 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1464)) mu__boolexpr1463 = FALSE ;
  else {
  mu__boolexpr1463 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1463)) mu__boolexpr1462 = FALSE ;
  else {
  mu__boolexpr1462 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1462)) mu__boolexpr1461 = FALSE ;
  else {
  mu__boolexpr1461 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1461)) mu__boolexpr1460 = FALSE ;
  else {
  mu__boolexpr1460 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1460)) mu__boolexpr1459 = FALSE ;
  else {
  mu__boolexpr1459 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1459)) )
  { mu__quant1458 = FALSE; break; }
};
};
return mu__quant1458;
};

bool mu__condition_1465() // Condition for Rule "test_reachable_state_150"
{
  return mu__invariant_1457( );
}

/**** end rule declaration ****/

int mu__invariant_1466() // Invariant "test_reachable_state_149"
{
bool mu__quant1467; 
mu__quant1467 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1468;
bool mu__boolexpr1469;
bool mu__boolexpr1470;
bool mu__boolexpr1471;
bool mu__boolexpr1472;
bool mu__boolexpr1473;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1473 = FALSE ;
  else {
  mu__boolexpr1473 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1473)) mu__boolexpr1472 = FALSE ;
  else {
  mu__boolexpr1472 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1472)) mu__boolexpr1471 = FALSE ;
  else {
  mu__boolexpr1471 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1471)) mu__boolexpr1470 = FALSE ;
  else {
  mu__boolexpr1470 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr1470)) mu__boolexpr1469 = FALSE ;
  else {
  mu__boolexpr1469 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1469)) mu__boolexpr1468 = FALSE ;
  else {
  mu__boolexpr1468 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Tip)) ; 
}
if ( !(!(mu__boolexpr1468)) )
  { mu__quant1467 = FALSE; break; }
};
};
return mu__quant1467;
};

bool mu__condition_1474() // Condition for Rule "test_reachable_state_149"
{
  return mu__invariant_1466( );
}

/**** end rule declaration ****/

int mu__invariant_1475() // Invariant "test_reachable_state_148"
{
bool mu__quant1476; 
mu__quant1476 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1477;
bool mu__boolexpr1478;
bool mu__boolexpr1479;
bool mu__boolexpr1480;
bool mu__boolexpr1481;
bool mu__boolexpr1482;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1482 = FALSE ;
  else {
  mu__boolexpr1482 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1482)) mu__boolexpr1481 = FALSE ;
  else {
  mu__boolexpr1481 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1481)) mu__boolexpr1480 = FALSE ;
  else {
  mu__boolexpr1480 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1480)) mu__boolexpr1479 = FALSE ;
  else {
  mu__boolexpr1479 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1479)) mu__boolexpr1478 = FALSE ;
  else {
  mu__boolexpr1478 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1478)) mu__boolexpr1477 = FALSE ;
  else {
  mu__boolexpr1477 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1477)) )
  { mu__quant1476 = FALSE; break; }
};
};
return mu__quant1476;
};

bool mu__condition_1483() // Condition for Rule "test_reachable_state_148"
{
  return mu__invariant_1475( );
}

/**** end rule declaration ****/

int mu__invariant_1484() // Invariant "test_reachable_state_147"
{
bool mu__quant1485; 
mu__quant1485 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1486;
bool mu__boolexpr1487;
bool mu__boolexpr1488;
bool mu__boolexpr1489;
bool mu__boolexpr1490;
bool mu__boolexpr1491;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1491 = FALSE ;
  else {
  mu__boolexpr1491 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1491)) mu__boolexpr1490 = FALSE ;
  else {
  mu__boolexpr1490 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1490)) mu__boolexpr1489 = FALSE ;
  else {
  mu__boolexpr1489 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1489)) mu__boolexpr1488 = FALSE ;
  else {
  mu__boolexpr1488 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1488)) mu__boolexpr1487 = FALSE ;
  else {
  mu__boolexpr1487 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1487)) mu__boolexpr1486 = FALSE ;
  else {
  mu__boolexpr1486 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1486)) )
  { mu__quant1485 = FALSE; break; }
};
};
return mu__quant1485;
};

bool mu__condition_1492() // Condition for Rule "test_reachable_state_147"
{
  return mu__invariant_1484( );
}

/**** end rule declaration ****/

int mu__invariant_1493() // Invariant "test_reachable_state_146"
{
bool mu__quant1494; 
mu__quant1494 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1495;
bool mu__boolexpr1496;
bool mu__boolexpr1497;
bool mu__boolexpr1498;
bool mu__boolexpr1499;
bool mu__boolexpr1500;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1500 = FALSE ;
  else {
  mu__boolexpr1500 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1500)) mu__boolexpr1499 = FALSE ;
  else {
  mu__boolexpr1499 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1499)) mu__boolexpr1498 = FALSE ;
  else {
  mu__boolexpr1498 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1498)) mu__boolexpr1497 = FALSE ;
  else {
  mu__boolexpr1497 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1497)) mu__boolexpr1496 = FALSE ;
  else {
  mu__boolexpr1496 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr1496)) mu__boolexpr1495 = FALSE ;
  else {
  mu__boolexpr1495 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1495)) )
  { mu__quant1494 = FALSE; break; }
};
};
return mu__quant1494;
};

bool mu__condition_1501() // Condition for Rule "test_reachable_state_146"
{
  return mu__invariant_1493( );
}

/**** end rule declaration ****/

int mu__invariant_1502() // Invariant "test_reachable_state_145"
{
bool mu__quant1503; 
mu__quant1503 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1504;
bool mu__boolexpr1505;
bool mu__boolexpr1506;
bool mu__boolexpr1507;
bool mu__boolexpr1508;
bool mu__boolexpr1509;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Trunk))) mu__boolexpr1509 = FALSE ;
  else {
  mu__boolexpr1509 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1509)) mu__boolexpr1508 = FALSE ;
  else {
  mu__boolexpr1508 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1508)) mu__boolexpr1507 = FALSE ;
  else {
  mu__boolexpr1507 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1507)) mu__boolexpr1506 = FALSE ;
  else {
  mu__boolexpr1506 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1506)) mu__boolexpr1505 = FALSE ;
  else {
  mu__boolexpr1505 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1505)) mu__boolexpr1504 = FALSE ;
  else {
  mu__boolexpr1504 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Tip)) ; 
}
if ( !(!(mu__boolexpr1504)) )
  { mu__quant1503 = FALSE; break; }
};
};
return mu__quant1503;
};

bool mu__condition_1510() // Condition for Rule "test_reachable_state_145"
{
  return mu__invariant_1502( );
}

/**** end rule declaration ****/

int mu__invariant_1511() // Invariant "test_reachable_state_144"
{
bool mu__quant1512; 
mu__quant1512 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1513;
bool mu__boolexpr1514;
bool mu__boolexpr1515;
bool mu__boolexpr1516;
bool mu__boolexpr1517;
bool mu__boolexpr1518;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1518 = FALSE ;
  else {
  mu__boolexpr1518 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1518)) mu__boolexpr1517 = FALSE ;
  else {
  mu__boolexpr1517 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1517)) mu__boolexpr1516 = FALSE ;
  else {
  mu__boolexpr1516 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1516)) mu__boolexpr1515 = FALSE ;
  else {
  mu__boolexpr1515 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1515)) mu__boolexpr1514 = FALSE ;
  else {
  mu__boolexpr1514 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1514)) mu__boolexpr1513 = FALSE ;
  else {
  mu__boolexpr1513 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1513)) )
  { mu__quant1512 = FALSE; break; }
};
};
return mu__quant1512;
};

bool mu__condition_1519() // Condition for Rule "test_reachable_state_144"
{
  return mu__invariant_1511( );
}

/**** end rule declaration ****/

int mu__invariant_1520() // Invariant "test_reachable_state_143"
{
bool mu__quant1521; 
mu__quant1521 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1522;
bool mu__boolexpr1523;
bool mu__boolexpr1524;
bool mu__boolexpr1525;
bool mu__boolexpr1526;
bool mu__boolexpr1527;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1527 = FALSE ;
  else {
  mu__boolexpr1527 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1527)) mu__boolexpr1526 = FALSE ;
  else {
  mu__boolexpr1526 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1526)) mu__boolexpr1525 = FALSE ;
  else {
  mu__boolexpr1525 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1525)) mu__boolexpr1524 = FALSE ;
  else {
  mu__boolexpr1524 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1524)) mu__boolexpr1523 = FALSE ;
  else {
  mu__boolexpr1523 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1523)) mu__boolexpr1522 = FALSE ;
  else {
  mu__boolexpr1522 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1522)) )
  { mu__quant1521 = FALSE; break; }
};
};
return mu__quant1521;
};

bool mu__condition_1528() // Condition for Rule "test_reachable_state_143"
{
  return mu__invariant_1520( );
}

/**** end rule declaration ****/

int mu__invariant_1529() // Invariant "test_reachable_state_142"
{
bool mu__quant1530; 
mu__quant1530 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1531;
bool mu__boolexpr1532;
bool mu__boolexpr1533;
bool mu__boolexpr1534;
bool mu__boolexpr1535;
bool mu__boolexpr1536;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1536 = FALSE ;
  else {
  mu__boolexpr1536 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1536)) mu__boolexpr1535 = FALSE ;
  else {
  mu__boolexpr1535 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1535)) mu__boolexpr1534 = FALSE ;
  else {
  mu__boolexpr1534 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1534)) mu__boolexpr1533 = FALSE ;
  else {
  mu__boolexpr1533 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1533)) mu__boolexpr1532 = FALSE ;
  else {
  mu__boolexpr1532 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1532)) mu__boolexpr1531 = FALSE ;
  else {
  mu__boolexpr1531 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1531)) )
  { mu__quant1530 = FALSE; break; }
};
};
return mu__quant1530;
};

bool mu__condition_1537() // Condition for Rule "test_reachable_state_142"
{
  return mu__invariant_1529( );
}

/**** end rule declaration ****/

int mu__invariant_1538() // Invariant "test_reachable_state_141"
{
bool mu__quant1539; 
mu__quant1539 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1540;
bool mu__boolexpr1541;
bool mu__boolexpr1542;
bool mu__boolexpr1543;
bool mu__boolexpr1544;
bool mu__boolexpr1545;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1545 = FALSE ;
  else {
  mu__boolexpr1545 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1545)) mu__boolexpr1544 = FALSE ;
  else {
  mu__boolexpr1544 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1544)) mu__boolexpr1543 = FALSE ;
  else {
  mu__boolexpr1543 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1543)) mu__boolexpr1542 = FALSE ;
  else {
  mu__boolexpr1542 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1542)) mu__boolexpr1541 = FALSE ;
  else {
  mu__boolexpr1541 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1541)) mu__boolexpr1540 = FALSE ;
  else {
  mu__boolexpr1540 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1540)) )
  { mu__quant1539 = FALSE; break; }
};
};
return mu__quant1539;
};

bool mu__condition_1546() // Condition for Rule "test_reachable_state_141"
{
  return mu__invariant_1538( );
}

/**** end rule declaration ****/

int mu__invariant_1547() // Invariant "test_reachable_state_140"
{
bool mu__quant1548; 
mu__quant1548 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1549;
bool mu__boolexpr1550;
bool mu__boolexpr1551;
bool mu__boolexpr1552;
bool mu__boolexpr1553;
bool mu__boolexpr1554;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1554 = FALSE ;
  else {
  mu__boolexpr1554 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1554)) mu__boolexpr1553 = FALSE ;
  else {
  mu__boolexpr1553 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1553)) mu__boolexpr1552 = FALSE ;
  else {
  mu__boolexpr1552 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1552)) mu__boolexpr1551 = FALSE ;
  else {
  mu__boolexpr1551 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1551)) mu__boolexpr1550 = FALSE ;
  else {
  mu__boolexpr1550 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1550)) mu__boolexpr1549 = FALSE ;
  else {
  mu__boolexpr1549 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1549)) )
  { mu__quant1548 = FALSE; break; }
};
};
return mu__quant1548;
};

bool mu__condition_1555() // Condition for Rule "test_reachable_state_140"
{
  return mu__invariant_1547( );
}

/**** end rule declaration ****/

int mu__invariant_1556() // Invariant "test_reachable_state_139"
{
bool mu__quant1557; 
mu__quant1557 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1558;
bool mu__boolexpr1559;
bool mu__boolexpr1560;
bool mu__boolexpr1561;
bool mu__boolexpr1562;
bool mu__boolexpr1563;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1563 = FALSE ;
  else {
  mu__boolexpr1563 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1563)) mu__boolexpr1562 = FALSE ;
  else {
  mu__boolexpr1562 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1562)) mu__boolexpr1561 = FALSE ;
  else {
  mu__boolexpr1561 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1561)) mu__boolexpr1560 = FALSE ;
  else {
  mu__boolexpr1560 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1560)) mu__boolexpr1559 = FALSE ;
  else {
  mu__boolexpr1559 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1559)) mu__boolexpr1558 = FALSE ;
  else {
  mu__boolexpr1558 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1558)) )
  { mu__quant1557 = FALSE; break; }
};
};
return mu__quant1557;
};

bool mu__condition_1564() // Condition for Rule "test_reachable_state_139"
{
  return mu__invariant_1556( );
}

/**** end rule declaration ****/

int mu__invariant_1565() // Invariant "test_reachable_state_138"
{
bool mu__quant1566; 
mu__quant1566 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1567;
bool mu__boolexpr1568;
bool mu__boolexpr1569;
bool mu__boolexpr1570;
bool mu__boolexpr1571;
bool mu__boolexpr1572;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1572 = FALSE ;
  else {
  mu__boolexpr1572 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1572)) mu__boolexpr1571 = FALSE ;
  else {
  mu__boolexpr1571 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1571)) mu__boolexpr1570 = FALSE ;
  else {
  mu__boolexpr1570 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1570)) mu__boolexpr1569 = FALSE ;
  else {
  mu__boolexpr1569 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1569)) mu__boolexpr1568 = FALSE ;
  else {
  mu__boolexpr1568 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1568)) mu__boolexpr1567 = FALSE ;
  else {
  mu__boolexpr1567 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1567)) )
  { mu__quant1566 = FALSE; break; }
};
};
return mu__quant1566;
};

bool mu__condition_1573() // Condition for Rule "test_reachable_state_138"
{
  return mu__invariant_1565( );
}

/**** end rule declaration ****/

int mu__invariant_1574() // Invariant "test_reachable_state_137"
{
bool mu__quant1575; 
mu__quant1575 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1576;
bool mu__boolexpr1577;
bool mu__boolexpr1578;
bool mu__boolexpr1579;
bool mu__boolexpr1580;
bool mu__boolexpr1581;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1581 = FALSE ;
  else {
  mu__boolexpr1581 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1581)) mu__boolexpr1580 = FALSE ;
  else {
  mu__boolexpr1580 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1580)) mu__boolexpr1579 = FALSE ;
  else {
  mu__boolexpr1579 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1579)) mu__boolexpr1578 = FALSE ;
  else {
  mu__boolexpr1578 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1578)) mu__boolexpr1577 = FALSE ;
  else {
  mu__boolexpr1577 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1577)) mu__boolexpr1576 = FALSE ;
  else {
  mu__boolexpr1576 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1576)) )
  { mu__quant1575 = FALSE; break; }
};
};
return mu__quant1575;
};

bool mu__condition_1582() // Condition for Rule "test_reachable_state_137"
{
  return mu__invariant_1574( );
}

/**** end rule declaration ****/

int mu__invariant_1583() // Invariant "test_reachable_state_136"
{
bool mu__quant1584; 
mu__quant1584 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1585;
bool mu__boolexpr1586;
bool mu__boolexpr1587;
bool mu__boolexpr1588;
bool mu__boolexpr1589;
bool mu__boolexpr1590;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1590 = FALSE ;
  else {
  mu__boolexpr1590 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1590)) mu__boolexpr1589 = FALSE ;
  else {
  mu__boolexpr1589 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1589)) mu__boolexpr1588 = FALSE ;
  else {
  mu__boolexpr1588 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1588)) mu__boolexpr1587 = FALSE ;
  else {
  mu__boolexpr1587 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1587)) mu__boolexpr1586 = FALSE ;
  else {
  mu__boolexpr1586 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1586)) mu__boolexpr1585 = FALSE ;
  else {
  mu__boolexpr1585 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1585)) )
  { mu__quant1584 = FALSE; break; }
};
};
return mu__quant1584;
};

bool mu__condition_1591() // Condition for Rule "test_reachable_state_136"
{
  return mu__invariant_1583( );
}

/**** end rule declaration ****/

int mu__invariant_1592() // Invariant "test_reachable_state_135"
{
bool mu__quant1593; 
mu__quant1593 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1594;
bool mu__boolexpr1595;
bool mu__boolexpr1596;
bool mu__boolexpr1597;
bool mu__boolexpr1598;
bool mu__boolexpr1599;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1599 = FALSE ;
  else {
  mu__boolexpr1599 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1599)) mu__boolexpr1598 = FALSE ;
  else {
  mu__boolexpr1598 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1598)) mu__boolexpr1597 = FALSE ;
  else {
  mu__boolexpr1597 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1597)) mu__boolexpr1596 = FALSE ;
  else {
  mu__boolexpr1596 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1596)) mu__boolexpr1595 = FALSE ;
  else {
  mu__boolexpr1595 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1595)) mu__boolexpr1594 = FALSE ;
  else {
  mu__boolexpr1594 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1594)) )
  { mu__quant1593 = FALSE; break; }
};
};
return mu__quant1593;
};

bool mu__condition_1600() // Condition for Rule "test_reachable_state_135"
{
  return mu__invariant_1592( );
}

/**** end rule declaration ****/

int mu__invariant_1601() // Invariant "test_reachable_state_134"
{
bool mu__quant1602; 
mu__quant1602 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1603;
bool mu__boolexpr1604;
bool mu__boolexpr1605;
bool mu__boolexpr1606;
bool mu__boolexpr1607;
bool mu__boolexpr1608;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1608 = FALSE ;
  else {
  mu__boolexpr1608 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1608)) mu__boolexpr1607 = FALSE ;
  else {
  mu__boolexpr1607 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1607)) mu__boolexpr1606 = FALSE ;
  else {
  mu__boolexpr1606 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1606)) mu__boolexpr1605 = FALSE ;
  else {
  mu__boolexpr1605 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1605)) mu__boolexpr1604 = FALSE ;
  else {
  mu__boolexpr1604 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1604)) mu__boolexpr1603 = FALSE ;
  else {
  mu__boolexpr1603 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1603)) )
  { mu__quant1602 = FALSE; break; }
};
};
return mu__quant1602;
};

bool mu__condition_1609() // Condition for Rule "test_reachable_state_134"
{
  return mu__invariant_1601( );
}

/**** end rule declaration ****/

int mu__invariant_1610() // Invariant "test_reachable_state_133"
{
bool mu__quant1611; 
mu__quant1611 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1612;
bool mu__boolexpr1613;
bool mu__boolexpr1614;
bool mu__boolexpr1615;
bool mu__boolexpr1616;
bool mu__boolexpr1617;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1617 = FALSE ;
  else {
  mu__boolexpr1617 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1617)) mu__boolexpr1616 = FALSE ;
  else {
  mu__boolexpr1616 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1616)) mu__boolexpr1615 = FALSE ;
  else {
  mu__boolexpr1615 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1615)) mu__boolexpr1614 = FALSE ;
  else {
  mu__boolexpr1614 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1614)) mu__boolexpr1613 = FALSE ;
  else {
  mu__boolexpr1613 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1613)) mu__boolexpr1612 = FALSE ;
  else {
  mu__boolexpr1612 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1612)) )
  { mu__quant1611 = FALSE; break; }
};
};
return mu__quant1611;
};

bool mu__condition_1618() // Condition for Rule "test_reachable_state_133"
{
  return mu__invariant_1610( );
}

/**** end rule declaration ****/

int mu__invariant_1619() // Invariant "test_reachable_state_132"
{
bool mu__quant1620; 
mu__quant1620 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1621;
bool mu__boolexpr1622;
bool mu__boolexpr1623;
bool mu__boolexpr1624;
bool mu__boolexpr1625;
bool mu__boolexpr1626;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1626 = FALSE ;
  else {
  mu__boolexpr1626 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1626)) mu__boolexpr1625 = FALSE ;
  else {
  mu__boolexpr1625 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1625)) mu__boolexpr1624 = FALSE ;
  else {
  mu__boolexpr1624 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1624)) mu__boolexpr1623 = FALSE ;
  else {
  mu__boolexpr1623 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1623)) mu__boolexpr1622 = FALSE ;
  else {
  mu__boolexpr1622 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1622)) mu__boolexpr1621 = FALSE ;
  else {
  mu__boolexpr1621 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1621)) )
  { mu__quant1620 = FALSE; break; }
};
};
return mu__quant1620;
};

bool mu__condition_1627() // Condition for Rule "test_reachable_state_132"
{
  return mu__invariant_1619( );
}

/**** end rule declaration ****/

int mu__invariant_1628() // Invariant "test_reachable_state_131"
{
bool mu__quant1629; 
mu__quant1629 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1630;
bool mu__boolexpr1631;
bool mu__boolexpr1632;
bool mu__boolexpr1633;
bool mu__boolexpr1634;
bool mu__boolexpr1635;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1635 = FALSE ;
  else {
  mu__boolexpr1635 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1635)) mu__boolexpr1634 = FALSE ;
  else {
  mu__boolexpr1634 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1634)) mu__boolexpr1633 = FALSE ;
  else {
  mu__boolexpr1633 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1633)) mu__boolexpr1632 = FALSE ;
  else {
  mu__boolexpr1632 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1632)) mu__boolexpr1631 = FALSE ;
  else {
  mu__boolexpr1631 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1631)) mu__boolexpr1630 = FALSE ;
  else {
  mu__boolexpr1630 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1630)) )
  { mu__quant1629 = FALSE; break; }
};
};
return mu__quant1629;
};

bool mu__condition_1636() // Condition for Rule "test_reachable_state_131"
{
  return mu__invariant_1628( );
}

/**** end rule declaration ****/

int mu__invariant_1637() // Invariant "test_reachable_state_130"
{
bool mu__quant1638; 
mu__quant1638 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1639;
bool mu__boolexpr1640;
bool mu__boolexpr1641;
bool mu__boolexpr1642;
bool mu__boolexpr1643;
bool mu__boolexpr1644;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1644 = FALSE ;
  else {
  mu__boolexpr1644 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1644)) mu__boolexpr1643 = FALSE ;
  else {
  mu__boolexpr1643 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1643)) mu__boolexpr1642 = FALSE ;
  else {
  mu__boolexpr1642 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1642)) mu__boolexpr1641 = FALSE ;
  else {
  mu__boolexpr1641 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1641)) mu__boolexpr1640 = FALSE ;
  else {
  mu__boolexpr1640 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1640)) mu__boolexpr1639 = FALSE ;
  else {
  mu__boolexpr1639 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1639)) )
  { mu__quant1638 = FALSE; break; }
};
};
return mu__quant1638;
};

bool mu__condition_1645() // Condition for Rule "test_reachable_state_130"
{
  return mu__invariant_1637( );
}

/**** end rule declaration ****/

int mu__invariant_1646() // Invariant "test_reachable_state_129"
{
bool mu__quant1647; 
mu__quant1647 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1648;
bool mu__boolexpr1649;
bool mu__boolexpr1650;
bool mu__boolexpr1651;
bool mu__boolexpr1652;
bool mu__boolexpr1653;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1653 = FALSE ;
  else {
  mu__boolexpr1653 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1653)) mu__boolexpr1652 = FALSE ;
  else {
  mu__boolexpr1652 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1652)) mu__boolexpr1651 = FALSE ;
  else {
  mu__boolexpr1651 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1651)) mu__boolexpr1650 = FALSE ;
  else {
  mu__boolexpr1650 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1650)) mu__boolexpr1649 = FALSE ;
  else {
  mu__boolexpr1649 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1649)) mu__boolexpr1648 = FALSE ;
  else {
  mu__boolexpr1648 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1648)) )
  { mu__quant1647 = FALSE; break; }
};
};
return mu__quant1647;
};

bool mu__condition_1654() // Condition for Rule "test_reachable_state_129"
{
  return mu__invariant_1646( );
}

/**** end rule declaration ****/

int mu__invariant_1655() // Invariant "test_reachable_state_128"
{
bool mu__quant1656; 
mu__quant1656 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1657;
bool mu__boolexpr1658;
bool mu__boolexpr1659;
bool mu__boolexpr1660;
bool mu__boolexpr1661;
bool mu__boolexpr1662;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1662 = FALSE ;
  else {
  mu__boolexpr1662 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1662)) mu__boolexpr1661 = FALSE ;
  else {
  mu__boolexpr1661 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1661)) mu__boolexpr1660 = FALSE ;
  else {
  mu__boolexpr1660 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1660)) mu__boolexpr1659 = FALSE ;
  else {
  mu__boolexpr1659 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1659)) mu__boolexpr1658 = FALSE ;
  else {
  mu__boolexpr1658 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1658)) mu__boolexpr1657 = FALSE ;
  else {
  mu__boolexpr1657 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1657)) )
  { mu__quant1656 = FALSE; break; }
};
};
return mu__quant1656;
};

bool mu__condition_1663() // Condition for Rule "test_reachable_state_128"
{
  return mu__invariant_1655( );
}

/**** end rule declaration ****/

int mu__invariant_1664() // Invariant "test_reachable_state_127"
{
bool mu__quant1665; 
mu__quant1665 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1666;
bool mu__boolexpr1667;
bool mu__boolexpr1668;
bool mu__boolexpr1669;
bool mu__boolexpr1670;
bool mu__boolexpr1671;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1671 = FALSE ;
  else {
  mu__boolexpr1671 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1671)) mu__boolexpr1670 = FALSE ;
  else {
  mu__boolexpr1670 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1670)) mu__boolexpr1669 = FALSE ;
  else {
  mu__boolexpr1669 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1669)) mu__boolexpr1668 = FALSE ;
  else {
  mu__boolexpr1668 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1668)) mu__boolexpr1667 = FALSE ;
  else {
  mu__boolexpr1667 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1667)) mu__boolexpr1666 = FALSE ;
  else {
  mu__boolexpr1666 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1666)) )
  { mu__quant1665 = FALSE; break; }
};
};
return mu__quant1665;
};

bool mu__condition_1672() // Condition for Rule "test_reachable_state_127"
{
  return mu__invariant_1664( );
}

/**** end rule declaration ****/

int mu__invariant_1673() // Invariant "test_reachable_state_126"
{
bool mu__quant1674; 
mu__quant1674 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1675;
bool mu__boolexpr1676;
bool mu__boolexpr1677;
bool mu__boolexpr1678;
bool mu__boolexpr1679;
bool mu__boolexpr1680;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1680 = FALSE ;
  else {
  mu__boolexpr1680 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1680)) mu__boolexpr1679 = FALSE ;
  else {
  mu__boolexpr1679 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1679)) mu__boolexpr1678 = FALSE ;
  else {
  mu__boolexpr1678 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1678)) mu__boolexpr1677 = FALSE ;
  else {
  mu__boolexpr1677 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1677)) mu__boolexpr1676 = FALSE ;
  else {
  mu__boolexpr1676 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1676)) mu__boolexpr1675 = FALSE ;
  else {
  mu__boolexpr1675 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1675)) )
  { mu__quant1674 = FALSE; break; }
};
};
return mu__quant1674;
};

bool mu__condition_1681() // Condition for Rule "test_reachable_state_126"
{
  return mu__invariant_1673( );
}

/**** end rule declaration ****/

int mu__invariant_1682() // Invariant "test_reachable_state_125"
{
bool mu__quant1683; 
mu__quant1683 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1684;
bool mu__boolexpr1685;
bool mu__boolexpr1686;
bool mu__boolexpr1687;
bool mu__boolexpr1688;
bool mu__boolexpr1689;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1689 = FALSE ;
  else {
  mu__boolexpr1689 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1689)) mu__boolexpr1688 = FALSE ;
  else {
  mu__boolexpr1688 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1688)) mu__boolexpr1687 = FALSE ;
  else {
  mu__boolexpr1687 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1687)) mu__boolexpr1686 = FALSE ;
  else {
  mu__boolexpr1686 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1686)) mu__boolexpr1685 = FALSE ;
  else {
  mu__boolexpr1685 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1685)) mu__boolexpr1684 = FALSE ;
  else {
  mu__boolexpr1684 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1684)) )
  { mu__quant1683 = FALSE; break; }
};
};
return mu__quant1683;
};

bool mu__condition_1690() // Condition for Rule "test_reachable_state_125"
{
  return mu__invariant_1682( );
}

/**** end rule declaration ****/

int mu__invariant_1691() // Invariant "test_reachable_state_124"
{
bool mu__quant1692; 
mu__quant1692 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1693;
bool mu__boolexpr1694;
bool mu__boolexpr1695;
bool mu__boolexpr1696;
bool mu__boolexpr1697;
bool mu__boolexpr1698;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1698 = FALSE ;
  else {
  mu__boolexpr1698 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1698)) mu__boolexpr1697 = FALSE ;
  else {
  mu__boolexpr1697 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1697)) mu__boolexpr1696 = FALSE ;
  else {
  mu__boolexpr1696 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1696)) mu__boolexpr1695 = FALSE ;
  else {
  mu__boolexpr1695 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1695)) mu__boolexpr1694 = FALSE ;
  else {
  mu__boolexpr1694 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1694)) mu__boolexpr1693 = FALSE ;
  else {
  mu__boolexpr1693 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1693)) )
  { mu__quant1692 = FALSE; break; }
};
};
return mu__quant1692;
};

bool mu__condition_1699() // Condition for Rule "test_reachable_state_124"
{
  return mu__invariant_1691( );
}

/**** end rule declaration ****/

int mu__invariant_1700() // Invariant "test_reachable_state_123"
{
bool mu__quant1701; 
mu__quant1701 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1702;
bool mu__boolexpr1703;
bool mu__boolexpr1704;
bool mu__boolexpr1705;
bool mu__boolexpr1706;
bool mu__boolexpr1707;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1707 = FALSE ;
  else {
  mu__boolexpr1707 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1707)) mu__boolexpr1706 = FALSE ;
  else {
  mu__boolexpr1706 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1706)) mu__boolexpr1705 = FALSE ;
  else {
  mu__boolexpr1705 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1705)) mu__boolexpr1704 = FALSE ;
  else {
  mu__boolexpr1704 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1704)) mu__boolexpr1703 = FALSE ;
  else {
  mu__boolexpr1703 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1703)) mu__boolexpr1702 = FALSE ;
  else {
  mu__boolexpr1702 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1702)) )
  { mu__quant1701 = FALSE; break; }
};
};
return mu__quant1701;
};

bool mu__condition_1708() // Condition for Rule "test_reachable_state_123"
{
  return mu__invariant_1700( );
}

/**** end rule declaration ****/

int mu__invariant_1709() // Invariant "test_reachable_state_122"
{
bool mu__quant1710; 
mu__quant1710 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1711;
bool mu__boolexpr1712;
bool mu__boolexpr1713;
bool mu__boolexpr1714;
bool mu__boolexpr1715;
bool mu__boolexpr1716;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1716 = FALSE ;
  else {
  mu__boolexpr1716 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1716)) mu__boolexpr1715 = FALSE ;
  else {
  mu__boolexpr1715 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1715)) mu__boolexpr1714 = FALSE ;
  else {
  mu__boolexpr1714 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1714)) mu__boolexpr1713 = FALSE ;
  else {
  mu__boolexpr1713 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1713)) mu__boolexpr1712 = FALSE ;
  else {
  mu__boolexpr1712 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1712)) mu__boolexpr1711 = FALSE ;
  else {
  mu__boolexpr1711 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1711)) )
  { mu__quant1710 = FALSE; break; }
};
};
return mu__quant1710;
};

bool mu__condition_1717() // Condition for Rule "test_reachable_state_122"
{
  return mu__invariant_1709( );
}

/**** end rule declaration ****/

int mu__invariant_1718() // Invariant "test_reachable_state_121"
{
bool mu__quant1719; 
mu__quant1719 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1720;
bool mu__boolexpr1721;
bool mu__boolexpr1722;
bool mu__boolexpr1723;
bool mu__boolexpr1724;
bool mu__boolexpr1725;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1725 = FALSE ;
  else {
  mu__boolexpr1725 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1725)) mu__boolexpr1724 = FALSE ;
  else {
  mu__boolexpr1724 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1724)) mu__boolexpr1723 = FALSE ;
  else {
  mu__boolexpr1723 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1723)) mu__boolexpr1722 = FALSE ;
  else {
  mu__boolexpr1722 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1722)) mu__boolexpr1721 = FALSE ;
  else {
  mu__boolexpr1721 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1721)) mu__boolexpr1720 = FALSE ;
  else {
  mu__boolexpr1720 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1720)) )
  { mu__quant1719 = FALSE; break; }
};
};
return mu__quant1719;
};

bool mu__condition_1726() // Condition for Rule "test_reachable_state_121"
{
  return mu__invariant_1718( );
}

/**** end rule declaration ****/

int mu__invariant_1727() // Invariant "test_reachable_state_120"
{
bool mu__quant1728; 
mu__quant1728 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1729;
bool mu__boolexpr1730;
bool mu__boolexpr1731;
bool mu__boolexpr1732;
bool mu__boolexpr1733;
bool mu__boolexpr1734;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1734 = FALSE ;
  else {
  mu__boolexpr1734 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1734)) mu__boolexpr1733 = FALSE ;
  else {
  mu__boolexpr1733 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1733)) mu__boolexpr1732 = FALSE ;
  else {
  mu__boolexpr1732 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1732)) mu__boolexpr1731 = FALSE ;
  else {
  mu__boolexpr1731 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1731)) mu__boolexpr1730 = FALSE ;
  else {
  mu__boolexpr1730 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1730)) mu__boolexpr1729 = FALSE ;
  else {
  mu__boolexpr1729 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1729)) )
  { mu__quant1728 = FALSE; break; }
};
};
return mu__quant1728;
};

bool mu__condition_1735() // Condition for Rule "test_reachable_state_120"
{
  return mu__invariant_1727( );
}

/**** end rule declaration ****/

int mu__invariant_1736() // Invariant "test_reachable_state_119"
{
bool mu__quant1737; 
mu__quant1737 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1738;
bool mu__boolexpr1739;
bool mu__boolexpr1740;
bool mu__boolexpr1741;
bool mu__boolexpr1742;
bool mu__boolexpr1743;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1743 = FALSE ;
  else {
  mu__boolexpr1743 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1743)) mu__boolexpr1742 = FALSE ;
  else {
  mu__boolexpr1742 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1742)) mu__boolexpr1741 = FALSE ;
  else {
  mu__boolexpr1741 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1741)) mu__boolexpr1740 = FALSE ;
  else {
  mu__boolexpr1740 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1740)) mu__boolexpr1739 = FALSE ;
  else {
  mu__boolexpr1739 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1739)) mu__boolexpr1738 = FALSE ;
  else {
  mu__boolexpr1738 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1738)) )
  { mu__quant1737 = FALSE; break; }
};
};
return mu__quant1737;
};

bool mu__condition_1744() // Condition for Rule "test_reachable_state_119"
{
  return mu__invariant_1736( );
}

/**** end rule declaration ****/

int mu__invariant_1745() // Invariant "test_reachable_state_118"
{
bool mu__quant1746; 
mu__quant1746 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1747;
bool mu__boolexpr1748;
bool mu__boolexpr1749;
bool mu__boolexpr1750;
bool mu__boolexpr1751;
bool mu__boolexpr1752;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1752 = FALSE ;
  else {
  mu__boolexpr1752 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1752)) mu__boolexpr1751 = FALSE ;
  else {
  mu__boolexpr1751 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1751)) mu__boolexpr1750 = FALSE ;
  else {
  mu__boolexpr1750 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1750)) mu__boolexpr1749 = FALSE ;
  else {
  mu__boolexpr1749 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1749)) mu__boolexpr1748 = FALSE ;
  else {
  mu__boolexpr1748 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1748)) mu__boolexpr1747 = FALSE ;
  else {
  mu__boolexpr1747 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1747)) )
  { mu__quant1746 = FALSE; break; }
};
};
return mu__quant1746;
};

bool mu__condition_1753() // Condition for Rule "test_reachable_state_118"
{
  return mu__invariant_1745( );
}

/**** end rule declaration ****/

int mu__invariant_1754() // Invariant "test_reachable_state_117"
{
bool mu__quant1755; 
mu__quant1755 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1756;
bool mu__boolexpr1757;
bool mu__boolexpr1758;
bool mu__boolexpr1759;
bool mu__boolexpr1760;
bool mu__boolexpr1761;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1761 = FALSE ;
  else {
  mu__boolexpr1761 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1761)) mu__boolexpr1760 = FALSE ;
  else {
  mu__boolexpr1760 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1760)) mu__boolexpr1759 = FALSE ;
  else {
  mu__boolexpr1759 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1759)) mu__boolexpr1758 = FALSE ;
  else {
  mu__boolexpr1758 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1758)) mu__boolexpr1757 = FALSE ;
  else {
  mu__boolexpr1757 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1757)) mu__boolexpr1756 = FALSE ;
  else {
  mu__boolexpr1756 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1756)) )
  { mu__quant1755 = FALSE; break; }
};
};
return mu__quant1755;
};

bool mu__condition_1762() // Condition for Rule "test_reachable_state_117"
{
  return mu__invariant_1754( );
}

/**** end rule declaration ****/

int mu__invariant_1763() // Invariant "test_reachable_state_116"
{
bool mu__quant1764; 
mu__quant1764 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1765;
bool mu__boolexpr1766;
bool mu__boolexpr1767;
bool mu__boolexpr1768;
bool mu__boolexpr1769;
bool mu__boolexpr1770;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1770 = FALSE ;
  else {
  mu__boolexpr1770 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1770)) mu__boolexpr1769 = FALSE ;
  else {
  mu__boolexpr1769 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1769)) mu__boolexpr1768 = FALSE ;
  else {
  mu__boolexpr1768 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1768)) mu__boolexpr1767 = FALSE ;
  else {
  mu__boolexpr1767 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1767)) mu__boolexpr1766 = FALSE ;
  else {
  mu__boolexpr1766 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1766)) mu__boolexpr1765 = FALSE ;
  else {
  mu__boolexpr1765 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1765)) )
  { mu__quant1764 = FALSE; break; }
};
};
return mu__quant1764;
};

bool mu__condition_1771() // Condition for Rule "test_reachable_state_116"
{
  return mu__invariant_1763( );
}

/**** end rule declaration ****/

int mu__invariant_1772() // Invariant "test_reachable_state_115"
{
bool mu__quant1773; 
mu__quant1773 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1774;
bool mu__boolexpr1775;
bool mu__boolexpr1776;
bool mu__boolexpr1777;
bool mu__boolexpr1778;
bool mu__boolexpr1779;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1779 = FALSE ;
  else {
  mu__boolexpr1779 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1779)) mu__boolexpr1778 = FALSE ;
  else {
  mu__boolexpr1778 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1778)) mu__boolexpr1777 = FALSE ;
  else {
  mu__boolexpr1777 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1777)) mu__boolexpr1776 = FALSE ;
  else {
  mu__boolexpr1776 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1776)) mu__boolexpr1775 = FALSE ;
  else {
  mu__boolexpr1775 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1775)) mu__boolexpr1774 = FALSE ;
  else {
  mu__boolexpr1774 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1774)) )
  { mu__quant1773 = FALSE; break; }
};
};
return mu__quant1773;
};

bool mu__condition_1780() // Condition for Rule "test_reachable_state_115"
{
  return mu__invariant_1772( );
}

/**** end rule declaration ****/

int mu__invariant_1781() // Invariant "test_reachable_state_114"
{
bool mu__quant1782; 
mu__quant1782 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1783;
bool mu__boolexpr1784;
bool mu__boolexpr1785;
bool mu__boolexpr1786;
bool mu__boolexpr1787;
bool mu__boolexpr1788;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1788 = FALSE ;
  else {
  mu__boolexpr1788 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1788)) mu__boolexpr1787 = FALSE ;
  else {
  mu__boolexpr1787 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1787)) mu__boolexpr1786 = FALSE ;
  else {
  mu__boolexpr1786 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1786)) mu__boolexpr1785 = FALSE ;
  else {
  mu__boolexpr1785 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1785)) mu__boolexpr1784 = FALSE ;
  else {
  mu__boolexpr1784 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1784)) mu__boolexpr1783 = FALSE ;
  else {
  mu__boolexpr1783 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1783)) )
  { mu__quant1782 = FALSE; break; }
};
};
return mu__quant1782;
};

bool mu__condition_1789() // Condition for Rule "test_reachable_state_114"
{
  return mu__invariant_1781( );
}

/**** end rule declaration ****/

int mu__invariant_1790() // Invariant "test_reachable_state_113"
{
bool mu__quant1791; 
mu__quant1791 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1792;
bool mu__boolexpr1793;
bool mu__boolexpr1794;
bool mu__boolexpr1795;
bool mu__boolexpr1796;
bool mu__boolexpr1797;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1797 = FALSE ;
  else {
  mu__boolexpr1797 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1797)) mu__boolexpr1796 = FALSE ;
  else {
  mu__boolexpr1796 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1796)) mu__boolexpr1795 = FALSE ;
  else {
  mu__boolexpr1795 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1795)) mu__boolexpr1794 = FALSE ;
  else {
  mu__boolexpr1794 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1794)) mu__boolexpr1793 = FALSE ;
  else {
  mu__boolexpr1793 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1793)) mu__boolexpr1792 = FALSE ;
  else {
  mu__boolexpr1792 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1792)) )
  { mu__quant1791 = FALSE; break; }
};
};
return mu__quant1791;
};

bool mu__condition_1798() // Condition for Rule "test_reachable_state_113"
{
  return mu__invariant_1790( );
}

/**** end rule declaration ****/

int mu__invariant_1799() // Invariant "test_reachable_state_112"
{
bool mu__quant1800; 
mu__quant1800 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1801;
bool mu__boolexpr1802;
bool mu__boolexpr1803;
bool mu__boolexpr1804;
bool mu__boolexpr1805;
bool mu__boolexpr1806;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1806 = FALSE ;
  else {
  mu__boolexpr1806 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1806)) mu__boolexpr1805 = FALSE ;
  else {
  mu__boolexpr1805 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1805)) mu__boolexpr1804 = FALSE ;
  else {
  mu__boolexpr1804 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1804)) mu__boolexpr1803 = FALSE ;
  else {
  mu__boolexpr1803 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1803)) mu__boolexpr1802 = FALSE ;
  else {
  mu__boolexpr1802 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1802)) mu__boolexpr1801 = FALSE ;
  else {
  mu__boolexpr1801 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1801)) )
  { mu__quant1800 = FALSE; break; }
};
};
return mu__quant1800;
};

bool mu__condition_1807() // Condition for Rule "test_reachable_state_112"
{
  return mu__invariant_1799( );
}

/**** end rule declaration ****/

int mu__invariant_1808() // Invariant "test_reachable_state_111"
{
bool mu__quant1809; 
mu__quant1809 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1810;
bool mu__boolexpr1811;
bool mu__boolexpr1812;
bool mu__boolexpr1813;
bool mu__boolexpr1814;
bool mu__boolexpr1815;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1815 = FALSE ;
  else {
  mu__boolexpr1815 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1815)) mu__boolexpr1814 = FALSE ;
  else {
  mu__boolexpr1814 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1814)) mu__boolexpr1813 = FALSE ;
  else {
  mu__boolexpr1813 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1813)) mu__boolexpr1812 = FALSE ;
  else {
  mu__boolexpr1812 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1812)) mu__boolexpr1811 = FALSE ;
  else {
  mu__boolexpr1811 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1811)) mu__boolexpr1810 = FALSE ;
  else {
  mu__boolexpr1810 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1810)) )
  { mu__quant1809 = FALSE; break; }
};
};
return mu__quant1809;
};

bool mu__condition_1816() // Condition for Rule "test_reachable_state_111"
{
  return mu__invariant_1808( );
}

/**** end rule declaration ****/

int mu__invariant_1817() // Invariant "test_reachable_state_110"
{
bool mu__quant1818; 
mu__quant1818 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1819;
bool mu__boolexpr1820;
bool mu__boolexpr1821;
bool mu__boolexpr1822;
bool mu__boolexpr1823;
bool mu__boolexpr1824;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1824 = FALSE ;
  else {
  mu__boolexpr1824 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1824)) mu__boolexpr1823 = FALSE ;
  else {
  mu__boolexpr1823 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1823)) mu__boolexpr1822 = FALSE ;
  else {
  mu__boolexpr1822 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1822)) mu__boolexpr1821 = FALSE ;
  else {
  mu__boolexpr1821 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1821)) mu__boolexpr1820 = FALSE ;
  else {
  mu__boolexpr1820 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1820)) mu__boolexpr1819 = FALSE ;
  else {
  mu__boolexpr1819 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1819)) )
  { mu__quant1818 = FALSE; break; }
};
};
return mu__quant1818;
};

bool mu__condition_1825() // Condition for Rule "test_reachable_state_110"
{
  return mu__invariant_1817( );
}

/**** end rule declaration ****/

int mu__invariant_1826() // Invariant "test_reachable_state_109"
{
bool mu__quant1827; 
mu__quant1827 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1828;
bool mu__boolexpr1829;
bool mu__boolexpr1830;
bool mu__boolexpr1831;
bool mu__boolexpr1832;
bool mu__boolexpr1833;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1833 = FALSE ;
  else {
  mu__boolexpr1833 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1833)) mu__boolexpr1832 = FALSE ;
  else {
  mu__boolexpr1832 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1832)) mu__boolexpr1831 = FALSE ;
  else {
  mu__boolexpr1831 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1831)) mu__boolexpr1830 = FALSE ;
  else {
  mu__boolexpr1830 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1830)) mu__boolexpr1829 = FALSE ;
  else {
  mu__boolexpr1829 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1829)) mu__boolexpr1828 = FALSE ;
  else {
  mu__boolexpr1828 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1828)) )
  { mu__quant1827 = FALSE; break; }
};
};
return mu__quant1827;
};

bool mu__condition_1834() // Condition for Rule "test_reachable_state_109"
{
  return mu__invariant_1826( );
}

/**** end rule declaration ****/

int mu__invariant_1835() // Invariant "test_reachable_state_108"
{
bool mu__quant1836; 
mu__quant1836 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1837;
bool mu__boolexpr1838;
bool mu__boolexpr1839;
bool mu__boolexpr1840;
bool mu__boolexpr1841;
bool mu__boolexpr1842;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1842 = FALSE ;
  else {
  mu__boolexpr1842 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1842)) mu__boolexpr1841 = FALSE ;
  else {
  mu__boolexpr1841 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1841)) mu__boolexpr1840 = FALSE ;
  else {
  mu__boolexpr1840 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1840)) mu__boolexpr1839 = FALSE ;
  else {
  mu__boolexpr1839 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1839)) mu__boolexpr1838 = FALSE ;
  else {
  mu__boolexpr1838 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1838)) mu__boolexpr1837 = FALSE ;
  else {
  mu__boolexpr1837 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1837)) )
  { mu__quant1836 = FALSE; break; }
};
};
return mu__quant1836;
};

bool mu__condition_1843() // Condition for Rule "test_reachable_state_108"
{
  return mu__invariant_1835( );
}

/**** end rule declaration ****/

int mu__invariant_1844() // Invariant "test_reachable_state_107"
{
bool mu__quant1845; 
mu__quant1845 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1846;
bool mu__boolexpr1847;
bool mu__boolexpr1848;
bool mu__boolexpr1849;
bool mu__boolexpr1850;
bool mu__boolexpr1851;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1851 = FALSE ;
  else {
  mu__boolexpr1851 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1851)) mu__boolexpr1850 = FALSE ;
  else {
  mu__boolexpr1850 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1850)) mu__boolexpr1849 = FALSE ;
  else {
  mu__boolexpr1849 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1849)) mu__boolexpr1848 = FALSE ;
  else {
  mu__boolexpr1848 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1848)) mu__boolexpr1847 = FALSE ;
  else {
  mu__boolexpr1847 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1847)) mu__boolexpr1846 = FALSE ;
  else {
  mu__boolexpr1846 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1846)) )
  { mu__quant1845 = FALSE; break; }
};
};
return mu__quant1845;
};

bool mu__condition_1852() // Condition for Rule "test_reachable_state_107"
{
  return mu__invariant_1844( );
}

/**** end rule declaration ****/

int mu__invariant_1853() // Invariant "test_reachable_state_106"
{
bool mu__quant1854; 
mu__quant1854 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1855;
bool mu__boolexpr1856;
bool mu__boolexpr1857;
bool mu__boolexpr1858;
bool mu__boolexpr1859;
bool mu__boolexpr1860;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1860 = FALSE ;
  else {
  mu__boolexpr1860 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1860)) mu__boolexpr1859 = FALSE ;
  else {
  mu__boolexpr1859 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1859)) mu__boolexpr1858 = FALSE ;
  else {
  mu__boolexpr1858 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1858)) mu__boolexpr1857 = FALSE ;
  else {
  mu__boolexpr1857 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1857)) mu__boolexpr1856 = FALSE ;
  else {
  mu__boolexpr1856 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1856)) mu__boolexpr1855 = FALSE ;
  else {
  mu__boolexpr1855 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1855)) )
  { mu__quant1854 = FALSE; break; }
};
};
return mu__quant1854;
};

bool mu__condition_1861() // Condition for Rule "test_reachable_state_106"
{
  return mu__invariant_1853( );
}

/**** end rule declaration ****/

int mu__invariant_1862() // Invariant "test_reachable_state_105"
{
bool mu__quant1863; 
mu__quant1863 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1864;
bool mu__boolexpr1865;
bool mu__boolexpr1866;
bool mu__boolexpr1867;
bool mu__boolexpr1868;
bool mu__boolexpr1869;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1869 = FALSE ;
  else {
  mu__boolexpr1869 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1869)) mu__boolexpr1868 = FALSE ;
  else {
  mu__boolexpr1868 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1868)) mu__boolexpr1867 = FALSE ;
  else {
  mu__boolexpr1867 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1867)) mu__boolexpr1866 = FALSE ;
  else {
  mu__boolexpr1866 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1866)) mu__boolexpr1865 = FALSE ;
  else {
  mu__boolexpr1865 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1865)) mu__boolexpr1864 = FALSE ;
  else {
  mu__boolexpr1864 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1864)) )
  { mu__quant1863 = FALSE; break; }
};
};
return mu__quant1863;
};

bool mu__condition_1870() // Condition for Rule "test_reachable_state_105"
{
  return mu__invariant_1862( );
}

/**** end rule declaration ****/

int mu__invariant_1871() // Invariant "test_reachable_state_104"
{
bool mu__quant1872; 
mu__quant1872 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1873;
bool mu__boolexpr1874;
bool mu__boolexpr1875;
bool mu__boolexpr1876;
bool mu__boolexpr1877;
bool mu__boolexpr1878;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1878 = FALSE ;
  else {
  mu__boolexpr1878 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1878)) mu__boolexpr1877 = FALSE ;
  else {
  mu__boolexpr1877 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1877)) mu__boolexpr1876 = FALSE ;
  else {
  mu__boolexpr1876 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1876)) mu__boolexpr1875 = FALSE ;
  else {
  mu__boolexpr1875 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1875)) mu__boolexpr1874 = FALSE ;
  else {
  mu__boolexpr1874 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1874)) mu__boolexpr1873 = FALSE ;
  else {
  mu__boolexpr1873 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1873)) )
  { mu__quant1872 = FALSE; break; }
};
};
return mu__quant1872;
};

bool mu__condition_1879() // Condition for Rule "test_reachable_state_104"
{
  return mu__invariant_1871( );
}

/**** end rule declaration ****/

int mu__invariant_1880() // Invariant "test_reachable_state_103"
{
bool mu__quant1881; 
mu__quant1881 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1882;
bool mu__boolexpr1883;
bool mu__boolexpr1884;
bool mu__boolexpr1885;
bool mu__boolexpr1886;
bool mu__boolexpr1887;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1887 = FALSE ;
  else {
  mu__boolexpr1887 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1887)) mu__boolexpr1886 = FALSE ;
  else {
  mu__boolexpr1886 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1886)) mu__boolexpr1885 = FALSE ;
  else {
  mu__boolexpr1885 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1885)) mu__boolexpr1884 = FALSE ;
  else {
  mu__boolexpr1884 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1884)) mu__boolexpr1883 = FALSE ;
  else {
  mu__boolexpr1883 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1883)) mu__boolexpr1882 = FALSE ;
  else {
  mu__boolexpr1882 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1882)) )
  { mu__quant1881 = FALSE; break; }
};
};
return mu__quant1881;
};

bool mu__condition_1888() // Condition for Rule "test_reachable_state_103"
{
  return mu__invariant_1880( );
}

/**** end rule declaration ****/

int mu__invariant_1889() // Invariant "test_reachable_state_102"
{
bool mu__quant1890; 
mu__quant1890 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1891;
bool mu__boolexpr1892;
bool mu__boolexpr1893;
bool mu__boolexpr1894;
bool mu__boolexpr1895;
bool mu__boolexpr1896;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1896 = FALSE ;
  else {
  mu__boolexpr1896 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1896)) mu__boolexpr1895 = FALSE ;
  else {
  mu__boolexpr1895 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1895)) mu__boolexpr1894 = FALSE ;
  else {
  mu__boolexpr1894 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1894)) mu__boolexpr1893 = FALSE ;
  else {
  mu__boolexpr1893 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1893)) mu__boolexpr1892 = FALSE ;
  else {
  mu__boolexpr1892 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1892)) mu__boolexpr1891 = FALSE ;
  else {
  mu__boolexpr1891 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1891)) )
  { mu__quant1890 = FALSE; break; }
};
};
return mu__quant1890;
};

bool mu__condition_1897() // Condition for Rule "test_reachable_state_102"
{
  return mu__invariant_1889( );
}

/**** end rule declaration ****/

int mu__invariant_1898() // Invariant "test_reachable_state_101"
{
bool mu__quant1899; 
mu__quant1899 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1900;
bool mu__boolexpr1901;
bool mu__boolexpr1902;
bool mu__boolexpr1903;
bool mu__boolexpr1904;
bool mu__boolexpr1905;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1905 = FALSE ;
  else {
  mu__boolexpr1905 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1905)) mu__boolexpr1904 = FALSE ;
  else {
  mu__boolexpr1904 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1904)) mu__boolexpr1903 = FALSE ;
  else {
  mu__boolexpr1903 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1903)) mu__boolexpr1902 = FALSE ;
  else {
  mu__boolexpr1902 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1902)) mu__boolexpr1901 = FALSE ;
  else {
  mu__boolexpr1901 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1901)) mu__boolexpr1900 = FALSE ;
  else {
  mu__boolexpr1900 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1900)) )
  { mu__quant1899 = FALSE; break; }
};
};
return mu__quant1899;
};

bool mu__condition_1906() // Condition for Rule "test_reachable_state_101"
{
  return mu__invariant_1898( );
}

/**** end rule declaration ****/

int mu__invariant_1907() // Invariant "test_reachable_state_100"
{
bool mu__quant1908; 
mu__quant1908 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1909;
bool mu__boolexpr1910;
bool mu__boolexpr1911;
bool mu__boolexpr1912;
bool mu__boolexpr1913;
bool mu__boolexpr1914;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1914 = FALSE ;
  else {
  mu__boolexpr1914 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1914)) mu__boolexpr1913 = FALSE ;
  else {
  mu__boolexpr1913 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1913)) mu__boolexpr1912 = FALSE ;
  else {
  mu__boolexpr1912 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1912)) mu__boolexpr1911 = FALSE ;
  else {
  mu__boolexpr1911 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1911)) mu__boolexpr1910 = FALSE ;
  else {
  mu__boolexpr1910 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1910)) mu__boolexpr1909 = FALSE ;
  else {
  mu__boolexpr1909 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1909)) )
  { mu__quant1908 = FALSE; break; }
};
};
return mu__quant1908;
};

bool mu__condition_1915() // Condition for Rule "test_reachable_state_100"
{
  return mu__invariant_1907( );
}

/**** end rule declaration ****/

int mu__invariant_1916() // Invariant "test_reachable_state_99"
{
bool mu__quant1917; 
mu__quant1917 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1918;
bool mu__boolexpr1919;
bool mu__boolexpr1920;
bool mu__boolexpr1921;
bool mu__boolexpr1922;
bool mu__boolexpr1923;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1923 = FALSE ;
  else {
  mu__boolexpr1923 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1923)) mu__boolexpr1922 = FALSE ;
  else {
  mu__boolexpr1922 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1922)) mu__boolexpr1921 = FALSE ;
  else {
  mu__boolexpr1921 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1921)) mu__boolexpr1920 = FALSE ;
  else {
  mu__boolexpr1920 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1920)) mu__boolexpr1919 = FALSE ;
  else {
  mu__boolexpr1919 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1919)) mu__boolexpr1918 = FALSE ;
  else {
  mu__boolexpr1918 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1918)) )
  { mu__quant1917 = FALSE; break; }
};
};
return mu__quant1917;
};

bool mu__condition_1924() // Condition for Rule "test_reachable_state_99"
{
  return mu__invariant_1916( );
}

/**** end rule declaration ****/

int mu__invariant_1925() // Invariant "test_reachable_state_98"
{
bool mu__quant1926; 
mu__quant1926 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1927;
bool mu__boolexpr1928;
bool mu__boolexpr1929;
bool mu__boolexpr1930;
bool mu__boolexpr1931;
bool mu__boolexpr1932;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1932 = FALSE ;
  else {
  mu__boolexpr1932 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1932)) mu__boolexpr1931 = FALSE ;
  else {
  mu__boolexpr1931 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1931)) mu__boolexpr1930 = FALSE ;
  else {
  mu__boolexpr1930 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1930)) mu__boolexpr1929 = FALSE ;
  else {
  mu__boolexpr1929 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1929)) mu__boolexpr1928 = FALSE ;
  else {
  mu__boolexpr1928 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1928)) mu__boolexpr1927 = FALSE ;
  else {
  mu__boolexpr1927 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1927)) )
  { mu__quant1926 = FALSE; break; }
};
};
return mu__quant1926;
};

bool mu__condition_1933() // Condition for Rule "test_reachable_state_98"
{
  return mu__invariant_1925( );
}

/**** end rule declaration ****/

int mu__invariant_1934() // Invariant "test_reachable_state_97"
{
bool mu__quant1935; 
mu__quant1935 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1936;
bool mu__boolexpr1937;
bool mu__boolexpr1938;
bool mu__boolexpr1939;
bool mu__boolexpr1940;
bool mu__boolexpr1941;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1941 = FALSE ;
  else {
  mu__boolexpr1941 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1941)) mu__boolexpr1940 = FALSE ;
  else {
  mu__boolexpr1940 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1940)) mu__boolexpr1939 = FALSE ;
  else {
  mu__boolexpr1939 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1939)) mu__boolexpr1938 = FALSE ;
  else {
  mu__boolexpr1938 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1938)) mu__boolexpr1937 = FALSE ;
  else {
  mu__boolexpr1937 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1937)) mu__boolexpr1936 = FALSE ;
  else {
  mu__boolexpr1936 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1936)) )
  { mu__quant1935 = FALSE; break; }
};
};
return mu__quant1935;
};

bool mu__condition_1942() // Condition for Rule "test_reachable_state_97"
{
  return mu__invariant_1934( );
}

/**** end rule declaration ****/

int mu__invariant_1943() // Invariant "test_reachable_state_96"
{
bool mu__quant1944; 
mu__quant1944 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1945;
bool mu__boolexpr1946;
bool mu__boolexpr1947;
bool mu__boolexpr1948;
bool mu__boolexpr1949;
bool mu__boolexpr1950;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1950 = FALSE ;
  else {
  mu__boolexpr1950 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1950)) mu__boolexpr1949 = FALSE ;
  else {
  mu__boolexpr1949 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1949)) mu__boolexpr1948 = FALSE ;
  else {
  mu__boolexpr1948 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1948)) mu__boolexpr1947 = FALSE ;
  else {
  mu__boolexpr1947 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1947)) mu__boolexpr1946 = FALSE ;
  else {
  mu__boolexpr1946 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1946)) mu__boolexpr1945 = FALSE ;
  else {
  mu__boolexpr1945 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1945)) )
  { mu__quant1944 = FALSE; break; }
};
};
return mu__quant1944;
};

bool mu__condition_1951() // Condition for Rule "test_reachable_state_96"
{
  return mu__invariant_1943( );
}

/**** end rule declaration ****/

int mu__invariant_1952() // Invariant "test_reachable_state_95"
{
bool mu__quant1953; 
mu__quant1953 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1954;
bool mu__boolexpr1955;
bool mu__boolexpr1956;
bool mu__boolexpr1957;
bool mu__boolexpr1958;
bool mu__boolexpr1959;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1959 = FALSE ;
  else {
  mu__boolexpr1959 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1959)) mu__boolexpr1958 = FALSE ;
  else {
  mu__boolexpr1958 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1958)) mu__boolexpr1957 = FALSE ;
  else {
  mu__boolexpr1957 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1957)) mu__boolexpr1956 = FALSE ;
  else {
  mu__boolexpr1956 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1956)) mu__boolexpr1955 = FALSE ;
  else {
  mu__boolexpr1955 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1955)) mu__boolexpr1954 = FALSE ;
  else {
  mu__boolexpr1954 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1954)) )
  { mu__quant1953 = FALSE; break; }
};
};
return mu__quant1953;
};

bool mu__condition_1960() // Condition for Rule "test_reachable_state_95"
{
  return mu__invariant_1952( );
}

/**** end rule declaration ****/

int mu__invariant_1961() // Invariant "test_reachable_state_94"
{
bool mu__quant1962; 
mu__quant1962 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1963;
bool mu__boolexpr1964;
bool mu__boolexpr1965;
bool mu__boolexpr1966;
bool mu__boolexpr1967;
bool mu__boolexpr1968;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1968 = FALSE ;
  else {
  mu__boolexpr1968 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1968)) mu__boolexpr1967 = FALSE ;
  else {
  mu__boolexpr1967 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1967)) mu__boolexpr1966 = FALSE ;
  else {
  mu__boolexpr1966 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1966)) mu__boolexpr1965 = FALSE ;
  else {
  mu__boolexpr1965 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1965)) mu__boolexpr1964 = FALSE ;
  else {
  mu__boolexpr1964 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1964)) mu__boolexpr1963 = FALSE ;
  else {
  mu__boolexpr1963 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1963)) )
  { mu__quant1962 = FALSE; break; }
};
};
return mu__quant1962;
};

bool mu__condition_1969() // Condition for Rule "test_reachable_state_94"
{
  return mu__invariant_1961( );
}

/**** end rule declaration ****/

int mu__invariant_1970() // Invariant "test_reachable_state_93"
{
bool mu__quant1971; 
mu__quant1971 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1972;
bool mu__boolexpr1973;
bool mu__boolexpr1974;
bool mu__boolexpr1975;
bool mu__boolexpr1976;
bool mu__boolexpr1977;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1977 = FALSE ;
  else {
  mu__boolexpr1977 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1977)) mu__boolexpr1976 = FALSE ;
  else {
  mu__boolexpr1976 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1976)) mu__boolexpr1975 = FALSE ;
  else {
  mu__boolexpr1975 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1975)) mu__boolexpr1974 = FALSE ;
  else {
  mu__boolexpr1974 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1974)) mu__boolexpr1973 = FALSE ;
  else {
  mu__boolexpr1973 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1973)) mu__boolexpr1972 = FALSE ;
  else {
  mu__boolexpr1972 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1972)) )
  { mu__quant1971 = FALSE; break; }
};
};
return mu__quant1971;
};

bool mu__condition_1978() // Condition for Rule "test_reachable_state_93"
{
  return mu__invariant_1970( );
}

/**** end rule declaration ****/

int mu__invariant_1979() // Invariant "test_reachable_state_92"
{
bool mu__quant1980; 
mu__quant1980 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1981;
bool mu__boolexpr1982;
bool mu__boolexpr1983;
bool mu__boolexpr1984;
bool mu__boolexpr1985;
bool mu__boolexpr1986;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1986 = FALSE ;
  else {
  mu__boolexpr1986 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1986)) mu__boolexpr1985 = FALSE ;
  else {
  mu__boolexpr1985 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1985)) mu__boolexpr1984 = FALSE ;
  else {
  mu__boolexpr1984 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1984)) mu__boolexpr1983 = FALSE ;
  else {
  mu__boolexpr1983 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1983)) mu__boolexpr1982 = FALSE ;
  else {
  mu__boolexpr1982 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1982)) mu__boolexpr1981 = FALSE ;
  else {
  mu__boolexpr1981 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1981)) )
  { mu__quant1980 = FALSE; break; }
};
};
return mu__quant1980;
};

bool mu__condition_1987() // Condition for Rule "test_reachable_state_92"
{
  return mu__invariant_1979( );
}

/**** end rule declaration ****/

int mu__invariant_1988() // Invariant "test_reachable_state_91"
{
bool mu__quant1989; 
mu__quant1989 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1990;
bool mu__boolexpr1991;
bool mu__boolexpr1992;
bool mu__boolexpr1993;
bool mu__boolexpr1994;
bool mu__boolexpr1995;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr1995 = FALSE ;
  else {
  mu__boolexpr1995 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1995)) mu__boolexpr1994 = FALSE ;
  else {
  mu__boolexpr1994 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1994)) mu__boolexpr1993 = FALSE ;
  else {
  mu__boolexpr1993 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1993)) mu__boolexpr1992 = FALSE ;
  else {
  mu__boolexpr1992 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr1992)) mu__boolexpr1991 = FALSE ;
  else {
  mu__boolexpr1991 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr1991)) mu__boolexpr1990 = FALSE ;
  else {
  mu__boolexpr1990 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr1990)) )
  { mu__quant1989 = FALSE; break; }
};
};
return mu__quant1989;
};

bool mu__condition_1996() // Condition for Rule "test_reachable_state_91"
{
  return mu__invariant_1988( );
}

/**** end rule declaration ****/

int mu__invariant_1997() // Invariant "test_reachable_state_90"
{
bool mu__quant1998; 
mu__quant1998 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr1999;
bool mu__boolexpr2000;
bool mu__boolexpr2001;
bool mu__boolexpr2002;
bool mu__boolexpr2003;
bool mu__boolexpr2004;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2004 = FALSE ;
  else {
  mu__boolexpr2004 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2004)) mu__boolexpr2003 = FALSE ;
  else {
  mu__boolexpr2003 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2003)) mu__boolexpr2002 = FALSE ;
  else {
  mu__boolexpr2002 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2002)) mu__boolexpr2001 = FALSE ;
  else {
  mu__boolexpr2001 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2001)) mu__boolexpr2000 = FALSE ;
  else {
  mu__boolexpr2000 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2000)) mu__boolexpr1999 = FALSE ;
  else {
  mu__boolexpr1999 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr1999)) )
  { mu__quant1998 = FALSE; break; }
};
};
return mu__quant1998;
};

bool mu__condition_2005() // Condition for Rule "test_reachable_state_90"
{
  return mu__invariant_1997( );
}

/**** end rule declaration ****/

int mu__invariant_2006() // Invariant "test_reachable_state_89"
{
bool mu__quant2007; 
mu__quant2007 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2008;
bool mu__boolexpr2009;
bool mu__boolexpr2010;
bool mu__boolexpr2011;
bool mu__boolexpr2012;
bool mu__boolexpr2013;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2013 = FALSE ;
  else {
  mu__boolexpr2013 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2013)) mu__boolexpr2012 = FALSE ;
  else {
  mu__boolexpr2012 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2012)) mu__boolexpr2011 = FALSE ;
  else {
  mu__boolexpr2011 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2011)) mu__boolexpr2010 = FALSE ;
  else {
  mu__boolexpr2010 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2010)) mu__boolexpr2009 = FALSE ;
  else {
  mu__boolexpr2009 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2009)) mu__boolexpr2008 = FALSE ;
  else {
  mu__boolexpr2008 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2008)) )
  { mu__quant2007 = FALSE; break; }
};
};
return mu__quant2007;
};

bool mu__condition_2014() // Condition for Rule "test_reachable_state_89"
{
  return mu__invariant_2006( );
}

/**** end rule declaration ****/

int mu__invariant_2015() // Invariant "test_reachable_state_88"
{
bool mu__quant2016; 
mu__quant2016 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2017;
bool mu__boolexpr2018;
bool mu__boolexpr2019;
bool mu__boolexpr2020;
bool mu__boolexpr2021;
bool mu__boolexpr2022;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2022 = FALSE ;
  else {
  mu__boolexpr2022 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2022)) mu__boolexpr2021 = FALSE ;
  else {
  mu__boolexpr2021 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2021)) mu__boolexpr2020 = FALSE ;
  else {
  mu__boolexpr2020 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2020)) mu__boolexpr2019 = FALSE ;
  else {
  mu__boolexpr2019 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2019)) mu__boolexpr2018 = FALSE ;
  else {
  mu__boolexpr2018 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2018)) mu__boolexpr2017 = FALSE ;
  else {
  mu__boolexpr2017 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2017)) )
  { mu__quant2016 = FALSE; break; }
};
};
return mu__quant2016;
};

bool mu__condition_2023() // Condition for Rule "test_reachable_state_88"
{
  return mu__invariant_2015( );
}

/**** end rule declaration ****/

int mu__invariant_2024() // Invariant "test_reachable_state_87"
{
bool mu__quant2025; 
mu__quant2025 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2026;
bool mu__boolexpr2027;
bool mu__boolexpr2028;
bool mu__boolexpr2029;
bool mu__boolexpr2030;
bool mu__boolexpr2031;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2031 = FALSE ;
  else {
  mu__boolexpr2031 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2031)) mu__boolexpr2030 = FALSE ;
  else {
  mu__boolexpr2030 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2030)) mu__boolexpr2029 = FALSE ;
  else {
  mu__boolexpr2029 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2029)) mu__boolexpr2028 = FALSE ;
  else {
  mu__boolexpr2028 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2028)) mu__boolexpr2027 = FALSE ;
  else {
  mu__boolexpr2027 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2027)) mu__boolexpr2026 = FALSE ;
  else {
  mu__boolexpr2026 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2026)) )
  { mu__quant2025 = FALSE; break; }
};
};
return mu__quant2025;
};

bool mu__condition_2032() // Condition for Rule "test_reachable_state_87"
{
  return mu__invariant_2024( );
}

/**** end rule declaration ****/

int mu__invariant_2033() // Invariant "test_reachable_state_86"
{
bool mu__quant2034; 
mu__quant2034 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2035;
bool mu__boolexpr2036;
bool mu__boolexpr2037;
bool mu__boolexpr2038;
bool mu__boolexpr2039;
bool mu__boolexpr2040;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2040 = FALSE ;
  else {
  mu__boolexpr2040 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2040)) mu__boolexpr2039 = FALSE ;
  else {
  mu__boolexpr2039 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2039)) mu__boolexpr2038 = FALSE ;
  else {
  mu__boolexpr2038 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2038)) mu__boolexpr2037 = FALSE ;
  else {
  mu__boolexpr2037 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2037)) mu__boolexpr2036 = FALSE ;
  else {
  mu__boolexpr2036 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2036)) mu__boolexpr2035 = FALSE ;
  else {
  mu__boolexpr2035 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2035)) )
  { mu__quant2034 = FALSE; break; }
};
};
return mu__quant2034;
};

bool mu__condition_2041() // Condition for Rule "test_reachable_state_86"
{
  return mu__invariant_2033( );
}

/**** end rule declaration ****/

int mu__invariant_2042() // Invariant "test_reachable_state_85"
{
bool mu__quant2043; 
mu__quant2043 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2044;
bool mu__boolexpr2045;
bool mu__boolexpr2046;
bool mu__boolexpr2047;
bool mu__boolexpr2048;
bool mu__boolexpr2049;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2049 = FALSE ;
  else {
  mu__boolexpr2049 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2049)) mu__boolexpr2048 = FALSE ;
  else {
  mu__boolexpr2048 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2048)) mu__boolexpr2047 = FALSE ;
  else {
  mu__boolexpr2047 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2047)) mu__boolexpr2046 = FALSE ;
  else {
  mu__boolexpr2046 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2046)) mu__boolexpr2045 = FALSE ;
  else {
  mu__boolexpr2045 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2045)) mu__boolexpr2044 = FALSE ;
  else {
  mu__boolexpr2044 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2044)) )
  { mu__quant2043 = FALSE; break; }
};
};
return mu__quant2043;
};

bool mu__condition_2050() // Condition for Rule "test_reachable_state_85"
{
  return mu__invariant_2042( );
}

/**** end rule declaration ****/

int mu__invariant_2051() // Invariant "test_reachable_state_84"
{
bool mu__quant2052; 
mu__quant2052 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2053;
bool mu__boolexpr2054;
bool mu__boolexpr2055;
bool mu__boolexpr2056;
bool mu__boolexpr2057;
bool mu__boolexpr2058;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2058 = FALSE ;
  else {
  mu__boolexpr2058 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2058)) mu__boolexpr2057 = FALSE ;
  else {
  mu__boolexpr2057 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2057)) mu__boolexpr2056 = FALSE ;
  else {
  mu__boolexpr2056 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2056)) mu__boolexpr2055 = FALSE ;
  else {
  mu__boolexpr2055 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2055)) mu__boolexpr2054 = FALSE ;
  else {
  mu__boolexpr2054 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2054)) mu__boolexpr2053 = FALSE ;
  else {
  mu__boolexpr2053 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2053)) )
  { mu__quant2052 = FALSE; break; }
};
};
return mu__quant2052;
};

bool mu__condition_2059() // Condition for Rule "test_reachable_state_84"
{
  return mu__invariant_2051( );
}

/**** end rule declaration ****/

int mu__invariant_2060() // Invariant "test_reachable_state_83"
{
bool mu__quant2061; 
mu__quant2061 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2062;
bool mu__boolexpr2063;
bool mu__boolexpr2064;
bool mu__boolexpr2065;
bool mu__boolexpr2066;
bool mu__boolexpr2067;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2067 = FALSE ;
  else {
  mu__boolexpr2067 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2067)) mu__boolexpr2066 = FALSE ;
  else {
  mu__boolexpr2066 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2066)) mu__boolexpr2065 = FALSE ;
  else {
  mu__boolexpr2065 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2065)) mu__boolexpr2064 = FALSE ;
  else {
  mu__boolexpr2064 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2064)) mu__boolexpr2063 = FALSE ;
  else {
  mu__boolexpr2063 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2063)) mu__boolexpr2062 = FALSE ;
  else {
  mu__boolexpr2062 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2062)) )
  { mu__quant2061 = FALSE; break; }
};
};
return mu__quant2061;
};

bool mu__condition_2068() // Condition for Rule "test_reachable_state_83"
{
  return mu__invariant_2060( );
}

/**** end rule declaration ****/

int mu__invariant_2069() // Invariant "test_reachable_state_82"
{
bool mu__quant2070; 
mu__quant2070 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2071;
bool mu__boolexpr2072;
bool mu__boolexpr2073;
bool mu__boolexpr2074;
bool mu__boolexpr2075;
bool mu__boolexpr2076;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2076 = FALSE ;
  else {
  mu__boolexpr2076 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2076)) mu__boolexpr2075 = FALSE ;
  else {
  mu__boolexpr2075 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2075)) mu__boolexpr2074 = FALSE ;
  else {
  mu__boolexpr2074 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2074)) mu__boolexpr2073 = FALSE ;
  else {
  mu__boolexpr2073 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2073)) mu__boolexpr2072 = FALSE ;
  else {
  mu__boolexpr2072 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2072)) mu__boolexpr2071 = FALSE ;
  else {
  mu__boolexpr2071 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2071)) )
  { mu__quant2070 = FALSE; break; }
};
};
return mu__quant2070;
};

bool mu__condition_2077() // Condition for Rule "test_reachable_state_82"
{
  return mu__invariant_2069( );
}

/**** end rule declaration ****/

int mu__invariant_2078() // Invariant "test_reachable_state_81"
{
bool mu__quant2079; 
mu__quant2079 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2080;
bool mu__boolexpr2081;
bool mu__boolexpr2082;
bool mu__boolexpr2083;
bool mu__boolexpr2084;
bool mu__boolexpr2085;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_Branch))) mu__boolexpr2085 = FALSE ;
  else {
  mu__boolexpr2085 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2085)) mu__boolexpr2084 = FALSE ;
  else {
  mu__boolexpr2084 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2084)) mu__boolexpr2083 = FALSE ;
  else {
  mu__boolexpr2083 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2083)) mu__boolexpr2082 = FALSE ;
  else {
  mu__boolexpr2082 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2082)) mu__boolexpr2081 = FALSE ;
  else {
  mu__boolexpr2081 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2081)) mu__boolexpr2080 = FALSE ;
  else {
  mu__boolexpr2080 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2080)) )
  { mu__quant2079 = FALSE; break; }
};
};
return mu__quant2079;
};

bool mu__condition_2086() // Condition for Rule "test_reachable_state_81"
{
  return mu__invariant_2078( );
}

/**** end rule declaration ****/

int mu__invariant_2087() // Invariant "test_reachable_state_80"
{
bool mu__quant2088; 
mu__quant2088 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2089;
bool mu__boolexpr2090;
bool mu__boolexpr2091;
bool mu__boolexpr2092;
bool mu__boolexpr2093;
bool mu__boolexpr2094;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2094 = FALSE ;
  else {
  mu__boolexpr2094 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2094)) mu__boolexpr2093 = FALSE ;
  else {
  mu__boolexpr2093 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2093)) mu__boolexpr2092 = FALSE ;
  else {
  mu__boolexpr2092 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2092)) mu__boolexpr2091 = FALSE ;
  else {
  mu__boolexpr2091 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2091)) mu__boolexpr2090 = FALSE ;
  else {
  mu__boolexpr2090 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2090)) mu__boolexpr2089 = FALSE ;
  else {
  mu__boolexpr2089 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2089)) )
  { mu__quant2088 = FALSE; break; }
};
};
return mu__quant2088;
};

bool mu__condition_2095() // Condition for Rule "test_reachable_state_80"
{
  return mu__invariant_2087( );
}

/**** end rule declaration ****/

int mu__invariant_2096() // Invariant "test_reachable_state_79"
{
bool mu__quant2097; 
mu__quant2097 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2098;
bool mu__boolexpr2099;
bool mu__boolexpr2100;
bool mu__boolexpr2101;
bool mu__boolexpr2102;
bool mu__boolexpr2103;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2103 = FALSE ;
  else {
  mu__boolexpr2103 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2103)) mu__boolexpr2102 = FALSE ;
  else {
  mu__boolexpr2102 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2102)) mu__boolexpr2101 = FALSE ;
  else {
  mu__boolexpr2101 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2101)) mu__boolexpr2100 = FALSE ;
  else {
  mu__boolexpr2100 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2100)) mu__boolexpr2099 = FALSE ;
  else {
  mu__boolexpr2099 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2099)) mu__boolexpr2098 = FALSE ;
  else {
  mu__boolexpr2098 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2098)) )
  { mu__quant2097 = FALSE; break; }
};
};
return mu__quant2097;
};

bool mu__condition_2104() // Condition for Rule "test_reachable_state_79"
{
  return mu__invariant_2096( );
}

/**** end rule declaration ****/

int mu__invariant_2105() // Invariant "test_reachable_state_78"
{
bool mu__quant2106; 
mu__quant2106 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2107;
bool mu__boolexpr2108;
bool mu__boolexpr2109;
bool mu__boolexpr2110;
bool mu__boolexpr2111;
bool mu__boolexpr2112;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2112 = FALSE ;
  else {
  mu__boolexpr2112 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2112)) mu__boolexpr2111 = FALSE ;
  else {
  mu__boolexpr2111 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2111)) mu__boolexpr2110 = FALSE ;
  else {
  mu__boolexpr2110 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2110)) mu__boolexpr2109 = FALSE ;
  else {
  mu__boolexpr2109 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2109)) mu__boolexpr2108 = FALSE ;
  else {
  mu__boolexpr2108 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2108)) mu__boolexpr2107 = FALSE ;
  else {
  mu__boolexpr2107 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2107)) )
  { mu__quant2106 = FALSE; break; }
};
};
return mu__quant2106;
};

bool mu__condition_2113() // Condition for Rule "test_reachable_state_78"
{
  return mu__invariant_2105( );
}

/**** end rule declaration ****/

int mu__invariant_2114() // Invariant "test_reachable_state_77"
{
bool mu__quant2115; 
mu__quant2115 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2116;
bool mu__boolexpr2117;
bool mu__boolexpr2118;
bool mu__boolexpr2119;
bool mu__boolexpr2120;
bool mu__boolexpr2121;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2121 = FALSE ;
  else {
  mu__boolexpr2121 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2121)) mu__boolexpr2120 = FALSE ;
  else {
  mu__boolexpr2120 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2120)) mu__boolexpr2119 = FALSE ;
  else {
  mu__boolexpr2119 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2119)) mu__boolexpr2118 = FALSE ;
  else {
  mu__boolexpr2118 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2118)) mu__boolexpr2117 = FALSE ;
  else {
  mu__boolexpr2117 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2117)) mu__boolexpr2116 = FALSE ;
  else {
  mu__boolexpr2116 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2116)) )
  { mu__quant2115 = FALSE; break; }
};
};
return mu__quant2115;
};

bool mu__condition_2122() // Condition for Rule "test_reachable_state_77"
{
  return mu__invariant_2114( );
}

/**** end rule declaration ****/

int mu__invariant_2123() // Invariant "test_reachable_state_76"
{
bool mu__quant2124; 
mu__quant2124 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2125;
bool mu__boolexpr2126;
bool mu__boolexpr2127;
bool mu__boolexpr2128;
bool mu__boolexpr2129;
bool mu__boolexpr2130;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2130 = FALSE ;
  else {
  mu__boolexpr2130 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2130)) mu__boolexpr2129 = FALSE ;
  else {
  mu__boolexpr2129 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2129)) mu__boolexpr2128 = FALSE ;
  else {
  mu__boolexpr2128 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2128)) mu__boolexpr2127 = FALSE ;
  else {
  mu__boolexpr2127 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2127)) mu__boolexpr2126 = FALSE ;
  else {
  mu__boolexpr2126 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2126)) mu__boolexpr2125 = FALSE ;
  else {
  mu__boolexpr2125 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2125)) )
  { mu__quant2124 = FALSE; break; }
};
};
return mu__quant2124;
};

bool mu__condition_2131() // Condition for Rule "test_reachable_state_76"
{
  return mu__invariant_2123( );
}

/**** end rule declaration ****/

int mu__invariant_2132() // Invariant "test_reachable_state_75"
{
bool mu__quant2133; 
mu__quant2133 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2134;
bool mu__boolexpr2135;
bool mu__boolexpr2136;
bool mu__boolexpr2137;
bool mu__boolexpr2138;
bool mu__boolexpr2139;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2139 = FALSE ;
  else {
  mu__boolexpr2139 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2139)) mu__boolexpr2138 = FALSE ;
  else {
  mu__boolexpr2138 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2138)) mu__boolexpr2137 = FALSE ;
  else {
  mu__boolexpr2137 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2137)) mu__boolexpr2136 = FALSE ;
  else {
  mu__boolexpr2136 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2136)) mu__boolexpr2135 = FALSE ;
  else {
  mu__boolexpr2135 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2135)) mu__boolexpr2134 = FALSE ;
  else {
  mu__boolexpr2134 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2134)) )
  { mu__quant2133 = FALSE; break; }
};
};
return mu__quant2133;
};

bool mu__condition_2140() // Condition for Rule "test_reachable_state_75"
{
  return mu__invariant_2132( );
}

/**** end rule declaration ****/

int mu__invariant_2141() // Invariant "test_reachable_state_74"
{
bool mu__quant2142; 
mu__quant2142 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2143;
bool mu__boolexpr2144;
bool mu__boolexpr2145;
bool mu__boolexpr2146;
bool mu__boolexpr2147;
bool mu__boolexpr2148;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2148 = FALSE ;
  else {
  mu__boolexpr2148 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2148)) mu__boolexpr2147 = FALSE ;
  else {
  mu__boolexpr2147 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2147)) mu__boolexpr2146 = FALSE ;
  else {
  mu__boolexpr2146 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2146)) mu__boolexpr2145 = FALSE ;
  else {
  mu__boolexpr2145 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2145)) mu__boolexpr2144 = FALSE ;
  else {
  mu__boolexpr2144 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2144)) mu__boolexpr2143 = FALSE ;
  else {
  mu__boolexpr2143 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2143)) )
  { mu__quant2142 = FALSE; break; }
};
};
return mu__quant2142;
};

bool mu__condition_2149() // Condition for Rule "test_reachable_state_74"
{
  return mu__invariant_2141( );
}

/**** end rule declaration ****/

int mu__invariant_2150() // Invariant "test_reachable_state_73"
{
bool mu__quant2151; 
mu__quant2151 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2152;
bool mu__boolexpr2153;
bool mu__boolexpr2154;
bool mu__boolexpr2155;
bool mu__boolexpr2156;
bool mu__boolexpr2157;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2157 = FALSE ;
  else {
  mu__boolexpr2157 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2157)) mu__boolexpr2156 = FALSE ;
  else {
  mu__boolexpr2156 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2156)) mu__boolexpr2155 = FALSE ;
  else {
  mu__boolexpr2155 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2155)) mu__boolexpr2154 = FALSE ;
  else {
  mu__boolexpr2154 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2154)) mu__boolexpr2153 = FALSE ;
  else {
  mu__boolexpr2153 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2153)) mu__boolexpr2152 = FALSE ;
  else {
  mu__boolexpr2152 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2152)) )
  { mu__quant2151 = FALSE; break; }
};
};
return mu__quant2151;
};

bool mu__condition_2158() // Condition for Rule "test_reachable_state_73"
{
  return mu__invariant_2150( );
}

/**** end rule declaration ****/

int mu__invariant_2159() // Invariant "test_reachable_state_72"
{
bool mu__quant2160; 
mu__quant2160 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2161;
bool mu__boolexpr2162;
bool mu__boolexpr2163;
bool mu__boolexpr2164;
bool mu__boolexpr2165;
bool mu__boolexpr2166;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2166 = FALSE ;
  else {
  mu__boolexpr2166 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2166)) mu__boolexpr2165 = FALSE ;
  else {
  mu__boolexpr2165 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2165)) mu__boolexpr2164 = FALSE ;
  else {
  mu__boolexpr2164 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2164)) mu__boolexpr2163 = FALSE ;
  else {
  mu__boolexpr2163 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2163)) mu__boolexpr2162 = FALSE ;
  else {
  mu__boolexpr2162 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2162)) mu__boolexpr2161 = FALSE ;
  else {
  mu__boolexpr2161 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2161)) )
  { mu__quant2160 = FALSE; break; }
};
};
return mu__quant2160;
};

bool mu__condition_2167() // Condition for Rule "test_reachable_state_72"
{
  return mu__invariant_2159( );
}

/**** end rule declaration ****/

int mu__invariant_2168() // Invariant "test_reachable_state_71"
{
bool mu__quant2169; 
mu__quant2169 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2170;
bool mu__boolexpr2171;
bool mu__boolexpr2172;
bool mu__boolexpr2173;
bool mu__boolexpr2174;
bool mu__boolexpr2175;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2175 = FALSE ;
  else {
  mu__boolexpr2175 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2175)) mu__boolexpr2174 = FALSE ;
  else {
  mu__boolexpr2174 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2174)) mu__boolexpr2173 = FALSE ;
  else {
  mu__boolexpr2173 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2173)) mu__boolexpr2172 = FALSE ;
  else {
  mu__boolexpr2172 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2172)) mu__boolexpr2171 = FALSE ;
  else {
  mu__boolexpr2171 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2171)) mu__boolexpr2170 = FALSE ;
  else {
  mu__boolexpr2170 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2170)) )
  { mu__quant2169 = FALSE; break; }
};
};
return mu__quant2169;
};

bool mu__condition_2176() // Condition for Rule "test_reachable_state_71"
{
  return mu__invariant_2168( );
}

/**** end rule declaration ****/

int mu__invariant_2177() // Invariant "test_reachable_state_70"
{
bool mu__quant2178; 
mu__quant2178 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2179;
bool mu__boolexpr2180;
bool mu__boolexpr2181;
bool mu__boolexpr2182;
bool mu__boolexpr2183;
bool mu__boolexpr2184;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2184 = FALSE ;
  else {
  mu__boolexpr2184 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2184)) mu__boolexpr2183 = FALSE ;
  else {
  mu__boolexpr2183 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2183)) mu__boolexpr2182 = FALSE ;
  else {
  mu__boolexpr2182 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2182)) mu__boolexpr2181 = FALSE ;
  else {
  mu__boolexpr2181 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2181)) mu__boolexpr2180 = FALSE ;
  else {
  mu__boolexpr2180 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2180)) mu__boolexpr2179 = FALSE ;
  else {
  mu__boolexpr2179 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2179)) )
  { mu__quant2178 = FALSE; break; }
};
};
return mu__quant2178;
};

bool mu__condition_2185() // Condition for Rule "test_reachable_state_70"
{
  return mu__invariant_2177( );
}

/**** end rule declaration ****/

int mu__invariant_2186() // Invariant "test_reachable_state_69"
{
bool mu__quant2187; 
mu__quant2187 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2188;
bool mu__boolexpr2189;
bool mu__boolexpr2190;
bool mu__boolexpr2191;
bool mu__boolexpr2192;
bool mu__boolexpr2193;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2193 = FALSE ;
  else {
  mu__boolexpr2193 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2193)) mu__boolexpr2192 = FALSE ;
  else {
  mu__boolexpr2192 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2192)) mu__boolexpr2191 = FALSE ;
  else {
  mu__boolexpr2191 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2191)) mu__boolexpr2190 = FALSE ;
  else {
  mu__boolexpr2190 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2190)) mu__boolexpr2189 = FALSE ;
  else {
  mu__boolexpr2189 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2189)) mu__boolexpr2188 = FALSE ;
  else {
  mu__boolexpr2188 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2188)) )
  { mu__quant2187 = FALSE; break; }
};
};
return mu__quant2187;
};

bool mu__condition_2194() // Condition for Rule "test_reachable_state_69"
{
  return mu__invariant_2186( );
}

/**** end rule declaration ****/

int mu__invariant_2195() // Invariant "test_reachable_state_68"
{
bool mu__quant2196; 
mu__quant2196 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2197;
bool mu__boolexpr2198;
bool mu__boolexpr2199;
bool mu__boolexpr2200;
bool mu__boolexpr2201;
bool mu__boolexpr2202;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2202 = FALSE ;
  else {
  mu__boolexpr2202 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2202)) mu__boolexpr2201 = FALSE ;
  else {
  mu__boolexpr2201 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2201)) mu__boolexpr2200 = FALSE ;
  else {
  mu__boolexpr2200 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2200)) mu__boolexpr2199 = FALSE ;
  else {
  mu__boolexpr2199 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2199)) mu__boolexpr2198 = FALSE ;
  else {
  mu__boolexpr2198 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2198)) mu__boolexpr2197 = FALSE ;
  else {
  mu__boolexpr2197 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2197)) )
  { mu__quant2196 = FALSE; break; }
};
};
return mu__quant2196;
};

bool mu__condition_2203() // Condition for Rule "test_reachable_state_68"
{
  return mu__invariant_2195( );
}

/**** end rule declaration ****/

int mu__invariant_2204() // Invariant "test_reachable_state_67"
{
bool mu__quant2205; 
mu__quant2205 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2206;
bool mu__boolexpr2207;
bool mu__boolexpr2208;
bool mu__boolexpr2209;
bool mu__boolexpr2210;
bool mu__boolexpr2211;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2211 = FALSE ;
  else {
  mu__boolexpr2211 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2211)) mu__boolexpr2210 = FALSE ;
  else {
  mu__boolexpr2210 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2210)) mu__boolexpr2209 = FALSE ;
  else {
  mu__boolexpr2209 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2209)) mu__boolexpr2208 = FALSE ;
  else {
  mu__boolexpr2208 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2208)) mu__boolexpr2207 = FALSE ;
  else {
  mu__boolexpr2207 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2207)) mu__boolexpr2206 = FALSE ;
  else {
  mu__boolexpr2206 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2206)) )
  { mu__quant2205 = FALSE; break; }
};
};
return mu__quant2205;
};

bool mu__condition_2212() // Condition for Rule "test_reachable_state_67"
{
  return mu__invariant_2204( );
}

/**** end rule declaration ****/

int mu__invariant_2213() // Invariant "test_reachable_state_66"
{
bool mu__quant2214; 
mu__quant2214 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2215;
bool mu__boolexpr2216;
bool mu__boolexpr2217;
bool mu__boolexpr2218;
bool mu__boolexpr2219;
bool mu__boolexpr2220;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2220 = FALSE ;
  else {
  mu__boolexpr2220 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2220)) mu__boolexpr2219 = FALSE ;
  else {
  mu__boolexpr2219 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2219)) mu__boolexpr2218 = FALSE ;
  else {
  mu__boolexpr2218 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2218)) mu__boolexpr2217 = FALSE ;
  else {
  mu__boolexpr2217 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2217)) mu__boolexpr2216 = FALSE ;
  else {
  mu__boolexpr2216 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2216)) mu__boolexpr2215 = FALSE ;
  else {
  mu__boolexpr2215 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2215)) )
  { mu__quant2214 = FALSE; break; }
};
};
return mu__quant2214;
};

bool mu__condition_2221() // Condition for Rule "test_reachable_state_66"
{
  return mu__invariant_2213( );
}

/**** end rule declaration ****/

int mu__invariant_2222() // Invariant "test_reachable_state_65"
{
bool mu__quant2223; 
mu__quant2223 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2224;
bool mu__boolexpr2225;
bool mu__boolexpr2226;
bool mu__boolexpr2227;
bool mu__boolexpr2228;
bool mu__boolexpr2229;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2229 = FALSE ;
  else {
  mu__boolexpr2229 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2229)) mu__boolexpr2228 = FALSE ;
  else {
  mu__boolexpr2228 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2228)) mu__boolexpr2227 = FALSE ;
  else {
  mu__boolexpr2227 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2227)) mu__boolexpr2226 = FALSE ;
  else {
  mu__boolexpr2226 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2226)) mu__boolexpr2225 = FALSE ;
  else {
  mu__boolexpr2225 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2225)) mu__boolexpr2224 = FALSE ;
  else {
  mu__boolexpr2224 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2224)) )
  { mu__quant2223 = FALSE; break; }
};
};
return mu__quant2223;
};

bool mu__condition_2230() // Condition for Rule "test_reachable_state_65"
{
  return mu__invariant_2222( );
}

/**** end rule declaration ****/

int mu__invariant_2231() // Invariant "test_reachable_state_64"
{
bool mu__quant2232; 
mu__quant2232 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2233;
bool mu__boolexpr2234;
bool mu__boolexpr2235;
bool mu__boolexpr2236;
bool mu__boolexpr2237;
bool mu__boolexpr2238;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2238 = FALSE ;
  else {
  mu__boolexpr2238 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2238)) mu__boolexpr2237 = FALSE ;
  else {
  mu__boolexpr2237 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2237)) mu__boolexpr2236 = FALSE ;
  else {
  mu__boolexpr2236 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2236)) mu__boolexpr2235 = FALSE ;
  else {
  mu__boolexpr2235 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2235)) mu__boolexpr2234 = FALSE ;
  else {
  mu__boolexpr2234 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2234)) mu__boolexpr2233 = FALSE ;
  else {
  mu__boolexpr2233 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2233)) )
  { mu__quant2232 = FALSE; break; }
};
};
return mu__quant2232;
};

bool mu__condition_2239() // Condition for Rule "test_reachable_state_64"
{
  return mu__invariant_2231( );
}

/**** end rule declaration ****/

int mu__invariant_2240() // Invariant "test_reachable_state_63"
{
bool mu__quant2241; 
mu__quant2241 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2242;
bool mu__boolexpr2243;
bool mu__boolexpr2244;
bool mu__boolexpr2245;
bool mu__boolexpr2246;
bool mu__boolexpr2247;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2247 = FALSE ;
  else {
  mu__boolexpr2247 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2247)) mu__boolexpr2246 = FALSE ;
  else {
  mu__boolexpr2246 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2246)) mu__boolexpr2245 = FALSE ;
  else {
  mu__boolexpr2245 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2245)) mu__boolexpr2244 = FALSE ;
  else {
  mu__boolexpr2244 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2244)) mu__boolexpr2243 = FALSE ;
  else {
  mu__boolexpr2243 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2243)) mu__boolexpr2242 = FALSE ;
  else {
  mu__boolexpr2242 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2242)) )
  { mu__quant2241 = FALSE; break; }
};
};
return mu__quant2241;
};

bool mu__condition_2248() // Condition for Rule "test_reachable_state_63"
{
  return mu__invariant_2240( );
}

/**** end rule declaration ****/

int mu__invariant_2249() // Invariant "test_reachable_state_62"
{
bool mu__quant2250; 
mu__quant2250 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2251;
bool mu__boolexpr2252;
bool mu__boolexpr2253;
bool mu__boolexpr2254;
bool mu__boolexpr2255;
bool mu__boolexpr2256;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2256 = FALSE ;
  else {
  mu__boolexpr2256 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2256)) mu__boolexpr2255 = FALSE ;
  else {
  mu__boolexpr2255 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2255)) mu__boolexpr2254 = FALSE ;
  else {
  mu__boolexpr2254 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2254)) mu__boolexpr2253 = FALSE ;
  else {
  mu__boolexpr2253 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2253)) mu__boolexpr2252 = FALSE ;
  else {
  mu__boolexpr2252 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2252)) mu__boolexpr2251 = FALSE ;
  else {
  mu__boolexpr2251 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2251)) )
  { mu__quant2250 = FALSE; break; }
};
};
return mu__quant2250;
};

bool mu__condition_2257() // Condition for Rule "test_reachable_state_62"
{
  return mu__invariant_2249( );
}

/**** end rule declaration ****/

int mu__invariant_2258() // Invariant "test_reachable_state_61"
{
bool mu__quant2259; 
mu__quant2259 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2260;
bool mu__boolexpr2261;
bool mu__boolexpr2262;
bool mu__boolexpr2263;
bool mu__boolexpr2264;
bool mu__boolexpr2265;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2265 = FALSE ;
  else {
  mu__boolexpr2265 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2265)) mu__boolexpr2264 = FALSE ;
  else {
  mu__boolexpr2264 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2264)) mu__boolexpr2263 = FALSE ;
  else {
  mu__boolexpr2263 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2263)) mu__boolexpr2262 = FALSE ;
  else {
  mu__boolexpr2262 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2262)) mu__boolexpr2261 = FALSE ;
  else {
  mu__boolexpr2261 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2261)) mu__boolexpr2260 = FALSE ;
  else {
  mu__boolexpr2260 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2260)) )
  { mu__quant2259 = FALSE; break; }
};
};
return mu__quant2259;
};

bool mu__condition_2266() // Condition for Rule "test_reachable_state_61"
{
  return mu__invariant_2258( );
}

/**** end rule declaration ****/

int mu__invariant_2267() // Invariant "test_reachable_state_60"
{
bool mu__quant2268; 
mu__quant2268 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2269;
bool mu__boolexpr2270;
bool mu__boolexpr2271;
bool mu__boolexpr2272;
bool mu__boolexpr2273;
bool mu__boolexpr2274;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2274 = FALSE ;
  else {
  mu__boolexpr2274 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2274)) mu__boolexpr2273 = FALSE ;
  else {
  mu__boolexpr2273 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2273)) mu__boolexpr2272 = FALSE ;
  else {
  mu__boolexpr2272 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2272)) mu__boolexpr2271 = FALSE ;
  else {
  mu__boolexpr2271 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2271)) mu__boolexpr2270 = FALSE ;
  else {
  mu__boolexpr2270 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2270)) mu__boolexpr2269 = FALSE ;
  else {
  mu__boolexpr2269 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2269)) )
  { mu__quant2268 = FALSE; break; }
};
};
return mu__quant2268;
};

bool mu__condition_2275() // Condition for Rule "test_reachable_state_60"
{
  return mu__invariant_2267( );
}

/**** end rule declaration ****/

int mu__invariant_2276() // Invariant "test_reachable_state_59"
{
bool mu__quant2277; 
mu__quant2277 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2278;
bool mu__boolexpr2279;
bool mu__boolexpr2280;
bool mu__boolexpr2281;
bool mu__boolexpr2282;
bool mu__boolexpr2283;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2283 = FALSE ;
  else {
  mu__boolexpr2283 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2283)) mu__boolexpr2282 = FALSE ;
  else {
  mu__boolexpr2282 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2282)) mu__boolexpr2281 = FALSE ;
  else {
  mu__boolexpr2281 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2281)) mu__boolexpr2280 = FALSE ;
  else {
  mu__boolexpr2280 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2280)) mu__boolexpr2279 = FALSE ;
  else {
  mu__boolexpr2279 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2279)) mu__boolexpr2278 = FALSE ;
  else {
  mu__boolexpr2278 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2278)) )
  { mu__quant2277 = FALSE; break; }
};
};
return mu__quant2277;
};

bool mu__condition_2284() // Condition for Rule "test_reachable_state_59"
{
  return mu__invariant_2276( );
}

/**** end rule declaration ****/

int mu__invariant_2285() // Invariant "test_reachable_state_58"
{
bool mu__quant2286; 
mu__quant2286 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2287;
bool mu__boolexpr2288;
bool mu__boolexpr2289;
bool mu__boolexpr2290;
bool mu__boolexpr2291;
bool mu__boolexpr2292;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2292 = FALSE ;
  else {
  mu__boolexpr2292 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2292)) mu__boolexpr2291 = FALSE ;
  else {
  mu__boolexpr2291 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2291)) mu__boolexpr2290 = FALSE ;
  else {
  mu__boolexpr2290 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2290)) mu__boolexpr2289 = FALSE ;
  else {
  mu__boolexpr2289 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2289)) mu__boolexpr2288 = FALSE ;
  else {
  mu__boolexpr2288 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2288)) mu__boolexpr2287 = FALSE ;
  else {
  mu__boolexpr2287 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2287)) )
  { mu__quant2286 = FALSE; break; }
};
};
return mu__quant2286;
};

bool mu__condition_2293() // Condition for Rule "test_reachable_state_58"
{
  return mu__invariant_2285( );
}

/**** end rule declaration ****/

int mu__invariant_2294() // Invariant "test_reachable_state_57"
{
bool mu__quant2295; 
mu__quant2295 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2296;
bool mu__boolexpr2297;
bool mu__boolexpr2298;
bool mu__boolexpr2299;
bool mu__boolexpr2300;
bool mu__boolexpr2301;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2301 = FALSE ;
  else {
  mu__boolexpr2301 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2301)) mu__boolexpr2300 = FALSE ;
  else {
  mu__boolexpr2300 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2300)) mu__boolexpr2299 = FALSE ;
  else {
  mu__boolexpr2299 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2299)) mu__boolexpr2298 = FALSE ;
  else {
  mu__boolexpr2298 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2298)) mu__boolexpr2297 = FALSE ;
  else {
  mu__boolexpr2297 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2297)) mu__boolexpr2296 = FALSE ;
  else {
  mu__boolexpr2296 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2296)) )
  { mu__quant2295 = FALSE; break; }
};
};
return mu__quant2295;
};

bool mu__condition_2302() // Condition for Rule "test_reachable_state_57"
{
  return mu__invariant_2294( );
}

/**** end rule declaration ****/

int mu__invariant_2303() // Invariant "test_reachable_state_56"
{
bool mu__quant2304; 
mu__quant2304 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2305;
bool mu__boolexpr2306;
bool mu__boolexpr2307;
bool mu__boolexpr2308;
bool mu__boolexpr2309;
bool mu__boolexpr2310;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2310 = FALSE ;
  else {
  mu__boolexpr2310 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2310)) mu__boolexpr2309 = FALSE ;
  else {
  mu__boolexpr2309 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2309)) mu__boolexpr2308 = FALSE ;
  else {
  mu__boolexpr2308 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2308)) mu__boolexpr2307 = FALSE ;
  else {
  mu__boolexpr2307 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2307)) mu__boolexpr2306 = FALSE ;
  else {
  mu__boolexpr2306 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2306)) mu__boolexpr2305 = FALSE ;
  else {
  mu__boolexpr2305 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2305)) )
  { mu__quant2304 = FALSE; break; }
};
};
return mu__quant2304;
};

bool mu__condition_2311() // Condition for Rule "test_reachable_state_56"
{
  return mu__invariant_2303( );
}

/**** end rule declaration ****/

int mu__invariant_2312() // Invariant "test_reachable_state_55"
{
bool mu__quant2313; 
mu__quant2313 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2314;
bool mu__boolexpr2315;
bool mu__boolexpr2316;
bool mu__boolexpr2317;
bool mu__boolexpr2318;
bool mu__boolexpr2319;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2319 = FALSE ;
  else {
  mu__boolexpr2319 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2319)) mu__boolexpr2318 = FALSE ;
  else {
  mu__boolexpr2318 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2318)) mu__boolexpr2317 = FALSE ;
  else {
  mu__boolexpr2317 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2317)) mu__boolexpr2316 = FALSE ;
  else {
  mu__boolexpr2316 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2316)) mu__boolexpr2315 = FALSE ;
  else {
  mu__boolexpr2315 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2315)) mu__boolexpr2314 = FALSE ;
  else {
  mu__boolexpr2314 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2314)) )
  { mu__quant2313 = FALSE; break; }
};
};
return mu__quant2313;
};

bool mu__condition_2320() // Condition for Rule "test_reachable_state_55"
{
  return mu__invariant_2312( );
}

/**** end rule declaration ****/

int mu__invariant_2321() // Invariant "test_reachable_state_54"
{
bool mu__quant2322; 
mu__quant2322 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2323;
bool mu__boolexpr2324;
bool mu__boolexpr2325;
bool mu__boolexpr2326;
bool mu__boolexpr2327;
bool mu__boolexpr2328;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2328 = FALSE ;
  else {
  mu__boolexpr2328 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2328)) mu__boolexpr2327 = FALSE ;
  else {
  mu__boolexpr2327 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2327)) mu__boolexpr2326 = FALSE ;
  else {
  mu__boolexpr2326 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2326)) mu__boolexpr2325 = FALSE ;
  else {
  mu__boolexpr2325 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2325)) mu__boolexpr2324 = FALSE ;
  else {
  mu__boolexpr2324 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2324)) mu__boolexpr2323 = FALSE ;
  else {
  mu__boolexpr2323 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2323)) )
  { mu__quant2322 = FALSE; break; }
};
};
return mu__quant2322;
};

bool mu__condition_2329() // Condition for Rule "test_reachable_state_54"
{
  return mu__invariant_2321( );
}

/**** end rule declaration ****/

int mu__invariant_2330() // Invariant "test_reachable_state_53"
{
bool mu__quant2331; 
mu__quant2331 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2332;
bool mu__boolexpr2333;
bool mu__boolexpr2334;
bool mu__boolexpr2335;
bool mu__boolexpr2336;
bool mu__boolexpr2337;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2337 = FALSE ;
  else {
  mu__boolexpr2337 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2337)) mu__boolexpr2336 = FALSE ;
  else {
  mu__boolexpr2336 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2336)) mu__boolexpr2335 = FALSE ;
  else {
  mu__boolexpr2335 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2335)) mu__boolexpr2334 = FALSE ;
  else {
  mu__boolexpr2334 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2334)) mu__boolexpr2333 = FALSE ;
  else {
  mu__boolexpr2333 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2333)) mu__boolexpr2332 = FALSE ;
  else {
  mu__boolexpr2332 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2332)) )
  { mu__quant2331 = FALSE; break; }
};
};
return mu__quant2331;
};

bool mu__condition_2338() // Condition for Rule "test_reachable_state_53"
{
  return mu__invariant_2330( );
}

/**** end rule declaration ****/

int mu__invariant_2339() // Invariant "test_reachable_state_52"
{
bool mu__quant2340; 
mu__quant2340 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2341;
bool mu__boolexpr2342;
bool mu__boolexpr2343;
bool mu__boolexpr2344;
bool mu__boolexpr2345;
bool mu__boolexpr2346;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2346 = FALSE ;
  else {
  mu__boolexpr2346 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2346)) mu__boolexpr2345 = FALSE ;
  else {
  mu__boolexpr2345 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2345)) mu__boolexpr2344 = FALSE ;
  else {
  mu__boolexpr2344 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2344)) mu__boolexpr2343 = FALSE ;
  else {
  mu__boolexpr2343 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2343)) mu__boolexpr2342 = FALSE ;
  else {
  mu__boolexpr2342 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2342)) mu__boolexpr2341 = FALSE ;
  else {
  mu__boolexpr2341 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2341)) )
  { mu__quant2340 = FALSE; break; }
};
};
return mu__quant2340;
};

bool mu__condition_2347() // Condition for Rule "test_reachable_state_52"
{
  return mu__invariant_2339( );
}

/**** end rule declaration ****/

int mu__invariant_2348() // Invariant "test_reachable_state_51"
{
bool mu__quant2349; 
mu__quant2349 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2350;
bool mu__boolexpr2351;
bool mu__boolexpr2352;
bool mu__boolexpr2353;
bool mu__boolexpr2354;
bool mu__boolexpr2355;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2355 = FALSE ;
  else {
  mu__boolexpr2355 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2355)) mu__boolexpr2354 = FALSE ;
  else {
  mu__boolexpr2354 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2354)) mu__boolexpr2353 = FALSE ;
  else {
  mu__boolexpr2353 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2353)) mu__boolexpr2352 = FALSE ;
  else {
  mu__boolexpr2352 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2352)) mu__boolexpr2351 = FALSE ;
  else {
  mu__boolexpr2351 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2351)) mu__boolexpr2350 = FALSE ;
  else {
  mu__boolexpr2350 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2350)) )
  { mu__quant2349 = FALSE; break; }
};
};
return mu__quant2349;
};

bool mu__condition_2356() // Condition for Rule "test_reachable_state_51"
{
  return mu__invariant_2348( );
}

/**** end rule declaration ****/

int mu__invariant_2357() // Invariant "test_reachable_state_50"
{
bool mu__quant2358; 
mu__quant2358 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2359;
bool mu__boolexpr2360;
bool mu__boolexpr2361;
bool mu__boolexpr2362;
bool mu__boolexpr2363;
bool mu__boolexpr2364;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2364 = FALSE ;
  else {
  mu__boolexpr2364 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2364)) mu__boolexpr2363 = FALSE ;
  else {
  mu__boolexpr2363 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2363)) mu__boolexpr2362 = FALSE ;
  else {
  mu__boolexpr2362 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2362)) mu__boolexpr2361 = FALSE ;
  else {
  mu__boolexpr2361 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2361)) mu__boolexpr2360 = FALSE ;
  else {
  mu__boolexpr2360 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2360)) mu__boolexpr2359 = FALSE ;
  else {
  mu__boolexpr2359 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2359)) )
  { mu__quant2358 = FALSE; break; }
};
};
return mu__quant2358;
};

bool mu__condition_2365() // Condition for Rule "test_reachable_state_50"
{
  return mu__invariant_2357( );
}

/**** end rule declaration ****/

int mu__invariant_2366() // Invariant "test_reachable_state_49"
{
bool mu__quant2367; 
mu__quant2367 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2368;
bool mu__boolexpr2369;
bool mu__boolexpr2370;
bool mu__boolexpr2371;
bool mu__boolexpr2372;
bool mu__boolexpr2373;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2373 = FALSE ;
  else {
  mu__boolexpr2373 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2373)) mu__boolexpr2372 = FALSE ;
  else {
  mu__boolexpr2372 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2372)) mu__boolexpr2371 = FALSE ;
  else {
  mu__boolexpr2371 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2371)) mu__boolexpr2370 = FALSE ;
  else {
  mu__boolexpr2370 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2370)) mu__boolexpr2369 = FALSE ;
  else {
  mu__boolexpr2369 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2369)) mu__boolexpr2368 = FALSE ;
  else {
  mu__boolexpr2368 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2368)) )
  { mu__quant2367 = FALSE; break; }
};
};
return mu__quant2367;
};

bool mu__condition_2374() // Condition for Rule "test_reachable_state_49"
{
  return mu__invariant_2366( );
}

/**** end rule declaration ****/

int mu__invariant_2375() // Invariant "test_reachable_state_48"
{
bool mu__quant2376; 
mu__quant2376 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2377;
bool mu__boolexpr2378;
bool mu__boolexpr2379;
bool mu__boolexpr2380;
bool mu__boolexpr2381;
bool mu__boolexpr2382;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2382 = FALSE ;
  else {
  mu__boolexpr2382 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2382)) mu__boolexpr2381 = FALSE ;
  else {
  mu__boolexpr2381 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2381)) mu__boolexpr2380 = FALSE ;
  else {
  mu__boolexpr2380 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2380)) mu__boolexpr2379 = FALSE ;
  else {
  mu__boolexpr2379 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2379)) mu__boolexpr2378 = FALSE ;
  else {
  mu__boolexpr2378 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2378)) mu__boolexpr2377 = FALSE ;
  else {
  mu__boolexpr2377 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2377)) )
  { mu__quant2376 = FALSE; break; }
};
};
return mu__quant2376;
};

bool mu__condition_2383() // Condition for Rule "test_reachable_state_48"
{
  return mu__invariant_2375( );
}

/**** end rule declaration ****/

int mu__invariant_2384() // Invariant "test_reachable_state_47"
{
bool mu__quant2385; 
mu__quant2385 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2386;
bool mu__boolexpr2387;
bool mu__boolexpr2388;
bool mu__boolexpr2389;
bool mu__boolexpr2390;
bool mu__boolexpr2391;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2391 = FALSE ;
  else {
  mu__boolexpr2391 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2391)) mu__boolexpr2390 = FALSE ;
  else {
  mu__boolexpr2390 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2390)) mu__boolexpr2389 = FALSE ;
  else {
  mu__boolexpr2389 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2389)) mu__boolexpr2388 = FALSE ;
  else {
  mu__boolexpr2388 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2388)) mu__boolexpr2387 = FALSE ;
  else {
  mu__boolexpr2387 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2387)) mu__boolexpr2386 = FALSE ;
  else {
  mu__boolexpr2386 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2386)) )
  { mu__quant2385 = FALSE; break; }
};
};
return mu__quant2385;
};

bool mu__condition_2392() // Condition for Rule "test_reachable_state_47"
{
  return mu__invariant_2384( );
}

/**** end rule declaration ****/

int mu__invariant_2393() // Invariant "test_reachable_state_46"
{
bool mu__quant2394; 
mu__quant2394 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2395;
bool mu__boolexpr2396;
bool mu__boolexpr2397;
bool mu__boolexpr2398;
bool mu__boolexpr2399;
bool mu__boolexpr2400;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2400 = FALSE ;
  else {
  mu__boolexpr2400 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2400)) mu__boolexpr2399 = FALSE ;
  else {
  mu__boolexpr2399 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2399)) mu__boolexpr2398 = FALSE ;
  else {
  mu__boolexpr2398 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2398)) mu__boolexpr2397 = FALSE ;
  else {
  mu__boolexpr2397 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2397)) mu__boolexpr2396 = FALSE ;
  else {
  mu__boolexpr2396 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2396)) mu__boolexpr2395 = FALSE ;
  else {
  mu__boolexpr2395 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2395)) )
  { mu__quant2394 = FALSE; break; }
};
};
return mu__quant2394;
};

bool mu__condition_2401() // Condition for Rule "test_reachable_state_46"
{
  return mu__invariant_2393( );
}

/**** end rule declaration ****/

int mu__invariant_2402() // Invariant "test_reachable_state_45"
{
bool mu__quant2403; 
mu__quant2403 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2404;
bool mu__boolexpr2405;
bool mu__boolexpr2406;
bool mu__boolexpr2407;
bool mu__boolexpr2408;
bool mu__boolexpr2409;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2409 = FALSE ;
  else {
  mu__boolexpr2409 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2409)) mu__boolexpr2408 = FALSE ;
  else {
  mu__boolexpr2408 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2408)) mu__boolexpr2407 = FALSE ;
  else {
  mu__boolexpr2407 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2407)) mu__boolexpr2406 = FALSE ;
  else {
  mu__boolexpr2406 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2406)) mu__boolexpr2405 = FALSE ;
  else {
  mu__boolexpr2405 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2405)) mu__boolexpr2404 = FALSE ;
  else {
  mu__boolexpr2404 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2404)) )
  { mu__quant2403 = FALSE; break; }
};
};
return mu__quant2403;
};

bool mu__condition_2410() // Condition for Rule "test_reachable_state_45"
{
  return mu__invariant_2402( );
}

/**** end rule declaration ****/

int mu__invariant_2411() // Invariant "test_reachable_state_44"
{
bool mu__quant2412; 
mu__quant2412 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2413;
bool mu__boolexpr2414;
bool mu__boolexpr2415;
bool mu__boolexpr2416;
bool mu__boolexpr2417;
bool mu__boolexpr2418;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2418 = FALSE ;
  else {
  mu__boolexpr2418 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2418)) mu__boolexpr2417 = FALSE ;
  else {
  mu__boolexpr2417 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2417)) mu__boolexpr2416 = FALSE ;
  else {
  mu__boolexpr2416 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2416)) mu__boolexpr2415 = FALSE ;
  else {
  mu__boolexpr2415 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2415)) mu__boolexpr2414 = FALSE ;
  else {
  mu__boolexpr2414 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2414)) mu__boolexpr2413 = FALSE ;
  else {
  mu__boolexpr2413 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2413)) )
  { mu__quant2412 = FALSE; break; }
};
};
return mu__quant2412;
};

bool mu__condition_2419() // Condition for Rule "test_reachable_state_44"
{
  return mu__invariant_2411( );
}

/**** end rule declaration ****/

int mu__invariant_2420() // Invariant "test_reachable_state_43"
{
bool mu__quant2421; 
mu__quant2421 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2422;
bool mu__boolexpr2423;
bool mu__boolexpr2424;
bool mu__boolexpr2425;
bool mu__boolexpr2426;
bool mu__boolexpr2427;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2427 = FALSE ;
  else {
  mu__boolexpr2427 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2427)) mu__boolexpr2426 = FALSE ;
  else {
  mu__boolexpr2426 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2426)) mu__boolexpr2425 = FALSE ;
  else {
  mu__boolexpr2425 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2425)) mu__boolexpr2424 = FALSE ;
  else {
  mu__boolexpr2424 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2424)) mu__boolexpr2423 = FALSE ;
  else {
  mu__boolexpr2423 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2423)) mu__boolexpr2422 = FALSE ;
  else {
  mu__boolexpr2422 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2422)) )
  { mu__quant2421 = FALSE; break; }
};
};
return mu__quant2421;
};

bool mu__condition_2428() // Condition for Rule "test_reachable_state_43"
{
  return mu__invariant_2420( );
}

/**** end rule declaration ****/

int mu__invariant_2429() // Invariant "test_reachable_state_42"
{
bool mu__quant2430; 
mu__quant2430 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2431;
bool mu__boolexpr2432;
bool mu__boolexpr2433;
bool mu__boolexpr2434;
bool mu__boolexpr2435;
bool mu__boolexpr2436;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2436 = FALSE ;
  else {
  mu__boolexpr2436 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2436)) mu__boolexpr2435 = FALSE ;
  else {
  mu__boolexpr2435 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2435)) mu__boolexpr2434 = FALSE ;
  else {
  mu__boolexpr2434 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2434)) mu__boolexpr2433 = FALSE ;
  else {
  mu__boolexpr2433 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2433)) mu__boolexpr2432 = FALSE ;
  else {
  mu__boolexpr2432 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2432)) mu__boolexpr2431 = FALSE ;
  else {
  mu__boolexpr2431 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2431)) )
  { mu__quant2430 = FALSE; break; }
};
};
return mu__quant2430;
};

bool mu__condition_2437() // Condition for Rule "test_reachable_state_42"
{
  return mu__invariant_2429( );
}

/**** end rule declaration ****/

int mu__invariant_2438() // Invariant "test_reachable_state_41"
{
bool mu__quant2439; 
mu__quant2439 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2440;
bool mu__boolexpr2441;
bool mu__boolexpr2442;
bool mu__boolexpr2443;
bool mu__boolexpr2444;
bool mu__boolexpr2445;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2445 = FALSE ;
  else {
  mu__boolexpr2445 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2445)) mu__boolexpr2444 = FALSE ;
  else {
  mu__boolexpr2444 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2444)) mu__boolexpr2443 = FALSE ;
  else {
  mu__boolexpr2443 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2443)) mu__boolexpr2442 = FALSE ;
  else {
  mu__boolexpr2442 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2442)) mu__boolexpr2441 = FALSE ;
  else {
  mu__boolexpr2441 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2441)) mu__boolexpr2440 = FALSE ;
  else {
  mu__boolexpr2440 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2440)) )
  { mu__quant2439 = FALSE; break; }
};
};
return mu__quant2439;
};

bool mu__condition_2446() // Condition for Rule "test_reachable_state_41"
{
  return mu__invariant_2438( );
}

/**** end rule declaration ****/

int mu__invariant_2447() // Invariant "test_reachable_state_40"
{
bool mu__quant2448; 
mu__quant2448 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2449;
bool mu__boolexpr2450;
bool mu__boolexpr2451;
bool mu__boolexpr2452;
bool mu__boolexpr2453;
bool mu__boolexpr2454;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2454 = FALSE ;
  else {
  mu__boolexpr2454 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2454)) mu__boolexpr2453 = FALSE ;
  else {
  mu__boolexpr2453 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2453)) mu__boolexpr2452 = FALSE ;
  else {
  mu__boolexpr2452 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2452)) mu__boolexpr2451 = FALSE ;
  else {
  mu__boolexpr2451 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2451)) mu__boolexpr2450 = FALSE ;
  else {
  mu__boolexpr2450 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2450)) mu__boolexpr2449 = FALSE ;
  else {
  mu__boolexpr2449 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2449)) )
  { mu__quant2448 = FALSE; break; }
};
};
return mu__quant2448;
};

bool mu__condition_2455() // Condition for Rule "test_reachable_state_40"
{
  return mu__invariant_2447( );
}

/**** end rule declaration ****/

int mu__invariant_2456() // Invariant "test_reachable_state_39"
{
bool mu__quant2457; 
mu__quant2457 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2458;
bool mu__boolexpr2459;
bool mu__boolexpr2460;
bool mu__boolexpr2461;
bool mu__boolexpr2462;
bool mu__boolexpr2463;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2463 = FALSE ;
  else {
  mu__boolexpr2463 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2463)) mu__boolexpr2462 = FALSE ;
  else {
  mu__boolexpr2462 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2462)) mu__boolexpr2461 = FALSE ;
  else {
  mu__boolexpr2461 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2461)) mu__boolexpr2460 = FALSE ;
  else {
  mu__boolexpr2460 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2460)) mu__boolexpr2459 = FALSE ;
  else {
  mu__boolexpr2459 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2459)) mu__boolexpr2458 = FALSE ;
  else {
  mu__boolexpr2458 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2458)) )
  { mu__quant2457 = FALSE; break; }
};
};
return mu__quant2457;
};

bool mu__condition_2464() // Condition for Rule "test_reachable_state_39"
{
  return mu__invariant_2456( );
}

/**** end rule declaration ****/

int mu__invariant_2465() // Invariant "test_reachable_state_38"
{
bool mu__quant2466; 
mu__quant2466 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2467;
bool mu__boolexpr2468;
bool mu__boolexpr2469;
bool mu__boolexpr2470;
bool mu__boolexpr2471;
bool mu__boolexpr2472;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2472 = FALSE ;
  else {
  mu__boolexpr2472 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2472)) mu__boolexpr2471 = FALSE ;
  else {
  mu__boolexpr2471 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2471)) mu__boolexpr2470 = FALSE ;
  else {
  mu__boolexpr2470 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2470)) mu__boolexpr2469 = FALSE ;
  else {
  mu__boolexpr2469 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2469)) mu__boolexpr2468 = FALSE ;
  else {
  mu__boolexpr2468 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2468)) mu__boolexpr2467 = FALSE ;
  else {
  mu__boolexpr2467 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2467)) )
  { mu__quant2466 = FALSE; break; }
};
};
return mu__quant2466;
};

bool mu__condition_2473() // Condition for Rule "test_reachable_state_38"
{
  return mu__invariant_2465( );
}

/**** end rule declaration ****/

int mu__invariant_2474() // Invariant "test_reachable_state_37"
{
bool mu__quant2475; 
mu__quant2475 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2476;
bool mu__boolexpr2477;
bool mu__boolexpr2478;
bool mu__boolexpr2479;
bool mu__boolexpr2480;
bool mu__boolexpr2481;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2481 = FALSE ;
  else {
  mu__boolexpr2481 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2481)) mu__boolexpr2480 = FALSE ;
  else {
  mu__boolexpr2480 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2480)) mu__boolexpr2479 = FALSE ;
  else {
  mu__boolexpr2479 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2479)) mu__boolexpr2478 = FALSE ;
  else {
  mu__boolexpr2478 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Trunk)) ; 
}
  if (!(mu__boolexpr2478)) mu__boolexpr2477 = FALSE ;
  else {
  mu__boolexpr2477 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2477)) mu__boolexpr2476 = FALSE ;
  else {
  mu__boolexpr2476 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Tip)) ; 
}
if ( !(!(mu__boolexpr2476)) )
  { mu__quant2475 = FALSE; break; }
};
};
return mu__quant2475;
};

bool mu__condition_2482() // Condition for Rule "test_reachable_state_37"
{
  return mu__invariant_2474( );
}

/**** end rule declaration ****/

int mu__invariant_2483() // Invariant "test_reachable_state_36"
{
bool mu__quant2484; 
mu__quant2484 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2485;
bool mu__boolexpr2486;
bool mu__boolexpr2487;
bool mu__boolexpr2488;
bool mu__boolexpr2489;
bool mu__boolexpr2490;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2490 = FALSE ;
  else {
  mu__boolexpr2490 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2490)) mu__boolexpr2489 = FALSE ;
  else {
  mu__boolexpr2489 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2489)) mu__boolexpr2488 = FALSE ;
  else {
  mu__boolexpr2488 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2488)) mu__boolexpr2487 = FALSE ;
  else {
  mu__boolexpr2487 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2487)) mu__boolexpr2486 = FALSE ;
  else {
  mu__boolexpr2486 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2486)) mu__boolexpr2485 = FALSE ;
  else {
  mu__boolexpr2485 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2485)) )
  { mu__quant2484 = FALSE; break; }
};
};
return mu__quant2484;
};

bool mu__condition_2491() // Condition for Rule "test_reachable_state_36"
{
  return mu__invariant_2483( );
}

/**** end rule declaration ****/

int mu__invariant_2492() // Invariant "test_reachable_state_35"
{
bool mu__quant2493; 
mu__quant2493 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2494;
bool mu__boolexpr2495;
bool mu__boolexpr2496;
bool mu__boolexpr2497;
bool mu__boolexpr2498;
bool mu__boolexpr2499;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2499 = FALSE ;
  else {
  mu__boolexpr2499 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2499)) mu__boolexpr2498 = FALSE ;
  else {
  mu__boolexpr2498 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2498)) mu__boolexpr2497 = FALSE ;
  else {
  mu__boolexpr2497 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2497)) mu__boolexpr2496 = FALSE ;
  else {
  mu__boolexpr2496 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2496)) mu__boolexpr2495 = FALSE ;
  else {
  mu__boolexpr2495 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2495)) mu__boolexpr2494 = FALSE ;
  else {
  mu__boolexpr2494 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2494)) )
  { mu__quant2493 = FALSE; break; }
};
};
return mu__quant2493;
};

bool mu__condition_2500() // Condition for Rule "test_reachable_state_35"
{
  return mu__invariant_2492( );
}

/**** end rule declaration ****/

int mu__invariant_2501() // Invariant "test_reachable_state_34"
{
bool mu__quant2502; 
mu__quant2502 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2503;
bool mu__boolexpr2504;
bool mu__boolexpr2505;
bool mu__boolexpr2506;
bool mu__boolexpr2507;
bool mu__boolexpr2508;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2508 = FALSE ;
  else {
  mu__boolexpr2508 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2508)) mu__boolexpr2507 = FALSE ;
  else {
  mu__boolexpr2507 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2507)) mu__boolexpr2506 = FALSE ;
  else {
  mu__boolexpr2506 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2506)) mu__boolexpr2505 = FALSE ;
  else {
  mu__boolexpr2505 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2505)) mu__boolexpr2504 = FALSE ;
  else {
  mu__boolexpr2504 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2504)) mu__boolexpr2503 = FALSE ;
  else {
  mu__boolexpr2503 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2503)) )
  { mu__quant2502 = FALSE; break; }
};
};
return mu__quant2502;
};

bool mu__condition_2509() // Condition for Rule "test_reachable_state_34"
{
  return mu__invariant_2501( );
}

/**** end rule declaration ****/

int mu__invariant_2510() // Invariant "test_reachable_state_33"
{
bool mu__quant2511; 
mu__quant2511 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2512;
bool mu__boolexpr2513;
bool mu__boolexpr2514;
bool mu__boolexpr2515;
bool mu__boolexpr2516;
bool mu__boolexpr2517;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2517 = FALSE ;
  else {
  mu__boolexpr2517 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2517)) mu__boolexpr2516 = FALSE ;
  else {
  mu__boolexpr2516 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2516)) mu__boolexpr2515 = FALSE ;
  else {
  mu__boolexpr2515 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2515)) mu__boolexpr2514 = FALSE ;
  else {
  mu__boolexpr2514 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2514)) mu__boolexpr2513 = FALSE ;
  else {
  mu__boolexpr2513 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2513)) mu__boolexpr2512 = FALSE ;
  else {
  mu__boolexpr2512 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2512)) )
  { mu__quant2511 = FALSE; break; }
};
};
return mu__quant2511;
};

bool mu__condition_2518() // Condition for Rule "test_reachable_state_33"
{
  return mu__invariant_2510( );
}

/**** end rule declaration ****/

int mu__invariant_2519() // Invariant "test_reachable_state_32"
{
bool mu__quant2520; 
mu__quant2520 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2521;
bool mu__boolexpr2522;
bool mu__boolexpr2523;
bool mu__boolexpr2524;
bool mu__boolexpr2525;
bool mu__boolexpr2526;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2526 = FALSE ;
  else {
  mu__boolexpr2526 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2526)) mu__boolexpr2525 = FALSE ;
  else {
  mu__boolexpr2525 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2525)) mu__boolexpr2524 = FALSE ;
  else {
  mu__boolexpr2524 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2524)) mu__boolexpr2523 = FALSE ;
  else {
  mu__boolexpr2523 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2523)) mu__boolexpr2522 = FALSE ;
  else {
  mu__boolexpr2522 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2522)) mu__boolexpr2521 = FALSE ;
  else {
  mu__boolexpr2521 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2521)) )
  { mu__quant2520 = FALSE; break; }
};
};
return mu__quant2520;
};

bool mu__condition_2527() // Condition for Rule "test_reachable_state_32"
{
  return mu__invariant_2519( );
}

/**** end rule declaration ****/

int mu__invariant_2528() // Invariant "test_reachable_state_31"
{
bool mu__quant2529; 
mu__quant2529 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2530;
bool mu__boolexpr2531;
bool mu__boolexpr2532;
bool mu__boolexpr2533;
bool mu__boolexpr2534;
bool mu__boolexpr2535;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2535 = FALSE ;
  else {
  mu__boolexpr2535 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2535)) mu__boolexpr2534 = FALSE ;
  else {
  mu__boolexpr2534 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2534)) mu__boolexpr2533 = FALSE ;
  else {
  mu__boolexpr2533 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2533)) mu__boolexpr2532 = FALSE ;
  else {
  mu__boolexpr2532 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2532)) mu__boolexpr2531 = FALSE ;
  else {
  mu__boolexpr2531 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2531)) mu__boolexpr2530 = FALSE ;
  else {
  mu__boolexpr2530 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2530)) )
  { mu__quant2529 = FALSE; break; }
};
};
return mu__quant2529;
};

bool mu__condition_2536() // Condition for Rule "test_reachable_state_31"
{
  return mu__invariant_2528( );
}

/**** end rule declaration ****/

int mu__invariant_2537() // Invariant "test_reachable_state_30"
{
bool mu__quant2538; 
mu__quant2538 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2539;
bool mu__boolexpr2540;
bool mu__boolexpr2541;
bool mu__boolexpr2542;
bool mu__boolexpr2543;
bool mu__boolexpr2544;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2544 = FALSE ;
  else {
  mu__boolexpr2544 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2544)) mu__boolexpr2543 = FALSE ;
  else {
  mu__boolexpr2543 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2543)) mu__boolexpr2542 = FALSE ;
  else {
  mu__boolexpr2542 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2542)) mu__boolexpr2541 = FALSE ;
  else {
  mu__boolexpr2541 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2541)) mu__boolexpr2540 = FALSE ;
  else {
  mu__boolexpr2540 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2540)) mu__boolexpr2539 = FALSE ;
  else {
  mu__boolexpr2539 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2539)) )
  { mu__quant2538 = FALSE; break; }
};
};
return mu__quant2538;
};

bool mu__condition_2545() // Condition for Rule "test_reachable_state_30"
{
  return mu__invariant_2537( );
}

/**** end rule declaration ****/

int mu__invariant_2546() // Invariant "test_reachable_state_29"
{
bool mu__quant2547; 
mu__quant2547 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2548;
bool mu__boolexpr2549;
bool mu__boolexpr2550;
bool mu__boolexpr2551;
bool mu__boolexpr2552;
bool mu__boolexpr2553;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2553 = FALSE ;
  else {
  mu__boolexpr2553 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2553)) mu__boolexpr2552 = FALSE ;
  else {
  mu__boolexpr2552 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2552)) mu__boolexpr2551 = FALSE ;
  else {
  mu__boolexpr2551 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2551)) mu__boolexpr2550 = FALSE ;
  else {
  mu__boolexpr2550 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2550)) mu__boolexpr2549 = FALSE ;
  else {
  mu__boolexpr2549 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2549)) mu__boolexpr2548 = FALSE ;
  else {
  mu__boolexpr2548 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2548)) )
  { mu__quant2547 = FALSE; break; }
};
};
return mu__quant2547;
};

bool mu__condition_2554() // Condition for Rule "test_reachable_state_29"
{
  return mu__invariant_2546( );
}

/**** end rule declaration ****/

int mu__invariant_2555() // Invariant "test_reachable_state_28"
{
bool mu__quant2556; 
mu__quant2556 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2557;
bool mu__boolexpr2558;
bool mu__boolexpr2559;
bool mu__boolexpr2560;
bool mu__boolexpr2561;
bool mu__boolexpr2562;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2562 = FALSE ;
  else {
  mu__boolexpr2562 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2562)) mu__boolexpr2561 = FALSE ;
  else {
  mu__boolexpr2561 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2561)) mu__boolexpr2560 = FALSE ;
  else {
  mu__boolexpr2560 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2560)) mu__boolexpr2559 = FALSE ;
  else {
  mu__boolexpr2559 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2559)) mu__boolexpr2558 = FALSE ;
  else {
  mu__boolexpr2558 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2558)) mu__boolexpr2557 = FALSE ;
  else {
  mu__boolexpr2557 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2557)) )
  { mu__quant2556 = FALSE; break; }
};
};
return mu__quant2556;
};

bool mu__condition_2563() // Condition for Rule "test_reachable_state_28"
{
  return mu__invariant_2555( );
}

/**** end rule declaration ****/

int mu__invariant_2564() // Invariant "test_reachable_state_27"
{
bool mu__quant2565; 
mu__quant2565 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2566;
bool mu__boolexpr2567;
bool mu__boolexpr2568;
bool mu__boolexpr2569;
bool mu__boolexpr2570;
bool mu__boolexpr2571;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2571 = FALSE ;
  else {
  mu__boolexpr2571 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2571)) mu__boolexpr2570 = FALSE ;
  else {
  mu__boolexpr2570 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2570)) mu__boolexpr2569 = FALSE ;
  else {
  mu__boolexpr2569 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2569)) mu__boolexpr2568 = FALSE ;
  else {
  mu__boolexpr2568 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2568)) mu__boolexpr2567 = FALSE ;
  else {
  mu__boolexpr2567 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2567)) mu__boolexpr2566 = FALSE ;
  else {
  mu__boolexpr2566 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2566)) )
  { mu__quant2565 = FALSE; break; }
};
};
return mu__quant2565;
};

bool mu__condition_2572() // Condition for Rule "test_reachable_state_27"
{
  return mu__invariant_2564( );
}

/**** end rule declaration ****/

int mu__invariant_2573() // Invariant "test_reachable_state_26"
{
bool mu__quant2574; 
mu__quant2574 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2575;
bool mu__boolexpr2576;
bool mu__boolexpr2577;
bool mu__boolexpr2578;
bool mu__boolexpr2579;
bool mu__boolexpr2580;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2580 = FALSE ;
  else {
  mu__boolexpr2580 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2580)) mu__boolexpr2579 = FALSE ;
  else {
  mu__boolexpr2579 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2579)) mu__boolexpr2578 = FALSE ;
  else {
  mu__boolexpr2578 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2578)) mu__boolexpr2577 = FALSE ;
  else {
  mu__boolexpr2577 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2577)) mu__boolexpr2576 = FALSE ;
  else {
  mu__boolexpr2576 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2576)) mu__boolexpr2575 = FALSE ;
  else {
  mu__boolexpr2575 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2575)) )
  { mu__quant2574 = FALSE; break; }
};
};
return mu__quant2574;
};

bool mu__condition_2581() // Condition for Rule "test_reachable_state_26"
{
  return mu__invariant_2573( );
}

/**** end rule declaration ****/

int mu__invariant_2582() // Invariant "test_reachable_state_25"
{
bool mu__quant2583; 
mu__quant2583 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2584;
bool mu__boolexpr2585;
bool mu__boolexpr2586;
bool mu__boolexpr2587;
bool mu__boolexpr2588;
bool mu__boolexpr2589;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2589 = FALSE ;
  else {
  mu__boolexpr2589 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2589)) mu__boolexpr2588 = FALSE ;
  else {
  mu__boolexpr2588 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2588)) mu__boolexpr2587 = FALSE ;
  else {
  mu__boolexpr2587 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2587)) mu__boolexpr2586 = FALSE ;
  else {
  mu__boolexpr2586 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2586)) mu__boolexpr2585 = FALSE ;
  else {
  mu__boolexpr2585 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2585)) mu__boolexpr2584 = FALSE ;
  else {
  mu__boolexpr2584 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2584)) )
  { mu__quant2583 = FALSE; break; }
};
};
return mu__quant2583;
};

bool mu__condition_2590() // Condition for Rule "test_reachable_state_25"
{
  return mu__invariant_2582( );
}

/**** end rule declaration ****/

int mu__invariant_2591() // Invariant "test_reachable_state_24"
{
bool mu__quant2592; 
mu__quant2592 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2593;
bool mu__boolexpr2594;
bool mu__boolexpr2595;
bool mu__boolexpr2596;
bool mu__boolexpr2597;
bool mu__boolexpr2598;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2598 = FALSE ;
  else {
  mu__boolexpr2598 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2598)) mu__boolexpr2597 = FALSE ;
  else {
  mu__boolexpr2597 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2597)) mu__boolexpr2596 = FALSE ;
  else {
  mu__boolexpr2596 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2596)) mu__boolexpr2595 = FALSE ;
  else {
  mu__boolexpr2595 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2595)) mu__boolexpr2594 = FALSE ;
  else {
  mu__boolexpr2594 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2594)) mu__boolexpr2593 = FALSE ;
  else {
  mu__boolexpr2593 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2593)) )
  { mu__quant2592 = FALSE; break; }
};
};
return mu__quant2592;
};

bool mu__condition_2599() // Condition for Rule "test_reachable_state_24"
{
  return mu__invariant_2591( );
}

/**** end rule declaration ****/

int mu__invariant_2600() // Invariant "test_reachable_state_23"
{
bool mu__quant2601; 
mu__quant2601 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2602;
bool mu__boolexpr2603;
bool mu__boolexpr2604;
bool mu__boolexpr2605;
bool mu__boolexpr2606;
bool mu__boolexpr2607;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2607 = FALSE ;
  else {
  mu__boolexpr2607 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2607)) mu__boolexpr2606 = FALSE ;
  else {
  mu__boolexpr2606 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2606)) mu__boolexpr2605 = FALSE ;
  else {
  mu__boolexpr2605 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2605)) mu__boolexpr2604 = FALSE ;
  else {
  mu__boolexpr2604 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2604)) mu__boolexpr2603 = FALSE ;
  else {
  mu__boolexpr2603 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2603)) mu__boolexpr2602 = FALSE ;
  else {
  mu__boolexpr2602 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2602)) )
  { mu__quant2601 = FALSE; break; }
};
};
return mu__quant2601;
};

bool mu__condition_2608() // Condition for Rule "test_reachable_state_23"
{
  return mu__invariant_2600( );
}

/**** end rule declaration ****/

int mu__invariant_2609() // Invariant "test_reachable_state_22"
{
bool mu__quant2610; 
mu__quant2610 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2611;
bool mu__boolexpr2612;
bool mu__boolexpr2613;
bool mu__boolexpr2614;
bool mu__boolexpr2615;
bool mu__boolexpr2616;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2616 = FALSE ;
  else {
  mu__boolexpr2616 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2616)) mu__boolexpr2615 = FALSE ;
  else {
  mu__boolexpr2615 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2615)) mu__boolexpr2614 = FALSE ;
  else {
  mu__boolexpr2614 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2614)) mu__boolexpr2613 = FALSE ;
  else {
  mu__boolexpr2613 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2613)) mu__boolexpr2612 = FALSE ;
  else {
  mu__boolexpr2612 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2612)) mu__boolexpr2611 = FALSE ;
  else {
  mu__boolexpr2611 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2611)) )
  { mu__quant2610 = FALSE; break; }
};
};
return mu__quant2610;
};

bool mu__condition_2617() // Condition for Rule "test_reachable_state_22"
{
  return mu__invariant_2609( );
}

/**** end rule declaration ****/

int mu__invariant_2618() // Invariant "test_reachable_state_21"
{
bool mu__quant2619; 
mu__quant2619 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2620;
bool mu__boolexpr2621;
bool mu__boolexpr2622;
bool mu__boolexpr2623;
bool mu__boolexpr2624;
bool mu__boolexpr2625;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2625 = FALSE ;
  else {
  mu__boolexpr2625 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2625)) mu__boolexpr2624 = FALSE ;
  else {
  mu__boolexpr2624 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2624)) mu__boolexpr2623 = FALSE ;
  else {
  mu__boolexpr2623 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2623)) mu__boolexpr2622 = FALSE ;
  else {
  mu__boolexpr2622 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2622)) mu__boolexpr2621 = FALSE ;
  else {
  mu__boolexpr2621 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2621)) mu__boolexpr2620 = FALSE ;
  else {
  mu__boolexpr2620 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2620)) )
  { mu__quant2619 = FALSE; break; }
};
};
return mu__quant2619;
};

bool mu__condition_2626() // Condition for Rule "test_reachable_state_21"
{
  return mu__invariant_2618( );
}

/**** end rule declaration ****/

int mu__invariant_2627() // Invariant "test_reachable_state_20"
{
bool mu__quant2628; 
mu__quant2628 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2629;
bool mu__boolexpr2630;
bool mu__boolexpr2631;
bool mu__boolexpr2632;
bool mu__boolexpr2633;
bool mu__boolexpr2634;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2634 = FALSE ;
  else {
  mu__boolexpr2634 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2634)) mu__boolexpr2633 = FALSE ;
  else {
  mu__boolexpr2633 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2633)) mu__boolexpr2632 = FALSE ;
  else {
  mu__boolexpr2632 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2632)) mu__boolexpr2631 = FALSE ;
  else {
  mu__boolexpr2631 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2631)) mu__boolexpr2630 = FALSE ;
  else {
  mu__boolexpr2630 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2630)) mu__boolexpr2629 = FALSE ;
  else {
  mu__boolexpr2629 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2629)) )
  { mu__quant2628 = FALSE; break; }
};
};
return mu__quant2628;
};

bool mu__condition_2635() // Condition for Rule "test_reachable_state_20"
{
  return mu__invariant_2627( );
}

/**** end rule declaration ****/

int mu__invariant_2636() // Invariant "test_reachable_state_19"
{
bool mu__quant2637; 
mu__quant2637 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2638;
bool mu__boolexpr2639;
bool mu__boolexpr2640;
bool mu__boolexpr2641;
bool mu__boolexpr2642;
bool mu__boolexpr2643;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2643 = FALSE ;
  else {
  mu__boolexpr2643 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2643)) mu__boolexpr2642 = FALSE ;
  else {
  mu__boolexpr2642 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2642)) mu__boolexpr2641 = FALSE ;
  else {
  mu__boolexpr2641 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2641)) mu__boolexpr2640 = FALSE ;
  else {
  mu__boolexpr2640 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2640)) mu__boolexpr2639 = FALSE ;
  else {
  mu__boolexpr2639 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2639)) mu__boolexpr2638 = FALSE ;
  else {
  mu__boolexpr2638 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2638)) )
  { mu__quant2637 = FALSE; break; }
};
};
return mu__quant2637;
};

bool mu__condition_2644() // Condition for Rule "test_reachable_state_19"
{
  return mu__invariant_2636( );
}

/**** end rule declaration ****/

int mu__invariant_2645() // Invariant "test_reachable_state_18"
{
bool mu__quant2646; 
mu__quant2646 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2647;
bool mu__boolexpr2648;
bool mu__boolexpr2649;
bool mu__boolexpr2650;
bool mu__boolexpr2651;
bool mu__boolexpr2652;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2652 = FALSE ;
  else {
  mu__boolexpr2652 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2652)) mu__boolexpr2651 = FALSE ;
  else {
  mu__boolexpr2651 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2651)) mu__boolexpr2650 = FALSE ;
  else {
  mu__boolexpr2650 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2650)) mu__boolexpr2649 = FALSE ;
  else {
  mu__boolexpr2649 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2649)) mu__boolexpr2648 = FALSE ;
  else {
  mu__boolexpr2648 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2648)) mu__boolexpr2647 = FALSE ;
  else {
  mu__boolexpr2647 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2647)) )
  { mu__quant2646 = FALSE; break; }
};
};
return mu__quant2646;
};

bool mu__condition_2653() // Condition for Rule "test_reachable_state_18"
{
  return mu__invariant_2645( );
}

/**** end rule declaration ****/

int mu__invariant_2654() // Invariant "test_reachable_state_17"
{
bool mu__quant2655; 
mu__quant2655 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2656;
bool mu__boolexpr2657;
bool mu__boolexpr2658;
bool mu__boolexpr2659;
bool mu__boolexpr2660;
bool mu__boolexpr2661;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2661 = FALSE ;
  else {
  mu__boolexpr2661 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2661)) mu__boolexpr2660 = FALSE ;
  else {
  mu__boolexpr2660 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2660)) mu__boolexpr2659 = FALSE ;
  else {
  mu__boolexpr2659 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2659)) mu__boolexpr2658 = FALSE ;
  else {
  mu__boolexpr2658 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2658)) mu__boolexpr2657 = FALSE ;
  else {
  mu__boolexpr2657 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2657)) mu__boolexpr2656 = FALSE ;
  else {
  mu__boolexpr2656 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2656)) )
  { mu__quant2655 = FALSE; break; }
};
};
return mu__quant2655;
};

bool mu__condition_2662() // Condition for Rule "test_reachable_state_17"
{
  return mu__invariant_2654( );
}

/**** end rule declaration ****/

int mu__invariant_2663() // Invariant "test_reachable_state_16"
{
bool mu__quant2664; 
mu__quant2664 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2665;
bool mu__boolexpr2666;
bool mu__boolexpr2667;
bool mu__boolexpr2668;
bool mu__boolexpr2669;
bool mu__boolexpr2670;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2670 = FALSE ;
  else {
  mu__boolexpr2670 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2670)) mu__boolexpr2669 = FALSE ;
  else {
  mu__boolexpr2669 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2669)) mu__boolexpr2668 = FALSE ;
  else {
  mu__boolexpr2668 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2668)) mu__boolexpr2667 = FALSE ;
  else {
  mu__boolexpr2667 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2667)) mu__boolexpr2666 = FALSE ;
  else {
  mu__boolexpr2666 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2666)) mu__boolexpr2665 = FALSE ;
  else {
  mu__boolexpr2665 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2665)) )
  { mu__quant2664 = FALSE; break; }
};
};
return mu__quant2664;
};

bool mu__condition_2671() // Condition for Rule "test_reachable_state_16"
{
  return mu__invariant_2663( );
}

/**** end rule declaration ****/

int mu__invariant_2672() // Invariant "test_reachable_state_15"
{
bool mu__quant2673; 
mu__quant2673 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2674;
bool mu__boolexpr2675;
bool mu__boolexpr2676;
bool mu__boolexpr2677;
bool mu__boolexpr2678;
bool mu__boolexpr2679;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2679 = FALSE ;
  else {
  mu__boolexpr2679 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2679)) mu__boolexpr2678 = FALSE ;
  else {
  mu__boolexpr2678 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2678)) mu__boolexpr2677 = FALSE ;
  else {
  mu__boolexpr2677 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2677)) mu__boolexpr2676 = FALSE ;
  else {
  mu__boolexpr2676 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2676)) mu__boolexpr2675 = FALSE ;
  else {
  mu__boolexpr2675 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2675)) mu__boolexpr2674 = FALSE ;
  else {
  mu__boolexpr2674 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2674)) )
  { mu__quant2673 = FALSE; break; }
};
};
return mu__quant2673;
};

bool mu__condition_2680() // Condition for Rule "test_reachable_state_15"
{
  return mu__invariant_2672( );
}

/**** end rule declaration ****/

int mu__invariant_2681() // Invariant "test_reachable_state_14"
{
bool mu__quant2682; 
mu__quant2682 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2683;
bool mu__boolexpr2684;
bool mu__boolexpr2685;
bool mu__boolexpr2686;
bool mu__boolexpr2687;
bool mu__boolexpr2688;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2688 = FALSE ;
  else {
  mu__boolexpr2688 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2688)) mu__boolexpr2687 = FALSE ;
  else {
  mu__boolexpr2687 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2687)) mu__boolexpr2686 = FALSE ;
  else {
  mu__boolexpr2686 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2686)) mu__boolexpr2685 = FALSE ;
  else {
  mu__boolexpr2685 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2685)) mu__boolexpr2684 = FALSE ;
  else {
  mu__boolexpr2684 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2684)) mu__boolexpr2683 = FALSE ;
  else {
  mu__boolexpr2683 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2683)) )
  { mu__quant2682 = FALSE; break; }
};
};
return mu__quant2682;
};

bool mu__condition_2689() // Condition for Rule "test_reachable_state_14"
{
  return mu__invariant_2681( );
}

/**** end rule declaration ****/

int mu__invariant_2690() // Invariant "test_reachable_state_13"
{
bool mu__quant2691; 
mu__quant2691 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2692;
bool mu__boolexpr2693;
bool mu__boolexpr2694;
bool mu__boolexpr2695;
bool mu__boolexpr2696;
bool mu__boolexpr2697;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2697 = FALSE ;
  else {
  mu__boolexpr2697 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2697)) mu__boolexpr2696 = FALSE ;
  else {
  mu__boolexpr2696 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2696)) mu__boolexpr2695 = FALSE ;
  else {
  mu__boolexpr2695 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2695)) mu__boolexpr2694 = FALSE ;
  else {
  mu__boolexpr2694 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2694)) mu__boolexpr2693 = FALSE ;
  else {
  mu__boolexpr2693 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2693)) mu__boolexpr2692 = FALSE ;
  else {
  mu__boolexpr2692 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2692)) )
  { mu__quant2691 = FALSE; break; }
};
};
return mu__quant2691;
};

bool mu__condition_2698() // Condition for Rule "test_reachable_state_13"
{
  return mu__invariant_2690( );
}

/**** end rule declaration ****/

int mu__invariant_2699() // Invariant "test_reachable_state_12"
{
bool mu__quant2700; 
mu__quant2700 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2701;
bool mu__boolexpr2702;
bool mu__boolexpr2703;
bool mu__boolexpr2704;
bool mu__boolexpr2705;
bool mu__boolexpr2706;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2706 = FALSE ;
  else {
  mu__boolexpr2706 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2706)) mu__boolexpr2705 = FALSE ;
  else {
  mu__boolexpr2705 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2705)) mu__boolexpr2704 = FALSE ;
  else {
  mu__boolexpr2704 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2704)) mu__boolexpr2703 = FALSE ;
  else {
  mu__boolexpr2703 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2703)) mu__boolexpr2702 = FALSE ;
  else {
  mu__boolexpr2702 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2702)) mu__boolexpr2701 = FALSE ;
  else {
  mu__boolexpr2701 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2701)) )
  { mu__quant2700 = FALSE; break; }
};
};
return mu__quant2700;
};

bool mu__condition_2707() // Condition for Rule "test_reachable_state_12"
{
  return mu__invariant_2699( );
}

/**** end rule declaration ****/

int mu__invariant_2708() // Invariant "test_reachable_state_11"
{
bool mu__quant2709; 
mu__quant2709 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2710;
bool mu__boolexpr2711;
bool mu__boolexpr2712;
bool mu__boolexpr2713;
bool mu__boolexpr2714;
bool mu__boolexpr2715;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2715 = FALSE ;
  else {
  mu__boolexpr2715 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2715)) mu__boolexpr2714 = FALSE ;
  else {
  mu__boolexpr2714 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2714)) mu__boolexpr2713 = FALSE ;
  else {
  mu__boolexpr2713 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2713)) mu__boolexpr2712 = FALSE ;
  else {
  mu__boolexpr2712 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2712)) mu__boolexpr2711 = FALSE ;
  else {
  mu__boolexpr2711 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2711)) mu__boolexpr2710 = FALSE ;
  else {
  mu__boolexpr2710 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2710)) )
  { mu__quant2709 = FALSE; break; }
};
};
return mu__quant2709;
};

bool mu__condition_2716() // Condition for Rule "test_reachable_state_11"
{
  return mu__invariant_2708( );
}

/**** end rule declaration ****/

int mu__invariant_2717() // Invariant "test_reachable_state_10"
{
bool mu__quant2718; 
mu__quant2718 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2719;
bool mu__boolexpr2720;
bool mu__boolexpr2721;
bool mu__boolexpr2722;
bool mu__boolexpr2723;
bool mu__boolexpr2724;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2724 = FALSE ;
  else {
  mu__boolexpr2724 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2724)) mu__boolexpr2723 = FALSE ;
  else {
  mu__boolexpr2723 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2723)) mu__boolexpr2722 = FALSE ;
  else {
  mu__boolexpr2722 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2722)) mu__boolexpr2721 = FALSE ;
  else {
  mu__boolexpr2721 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2721)) mu__boolexpr2720 = FALSE ;
  else {
  mu__boolexpr2720 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2720)) mu__boolexpr2719 = FALSE ;
  else {
  mu__boolexpr2719 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2719)) )
  { mu__quant2718 = FALSE; break; }
};
};
return mu__quant2718;
};

bool mu__condition_2725() // Condition for Rule "test_reachable_state_10"
{
  return mu__invariant_2717( );
}

/**** end rule declaration ****/

int mu__invariant_2726() // Invariant "test_reachable_state_9"
{
bool mu__quant2727; 
mu__quant2727 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2728;
bool mu__boolexpr2729;
bool mu__boolexpr2730;
bool mu__boolexpr2731;
bool mu__boolexpr2732;
bool mu__boolexpr2733;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2733 = FALSE ;
  else {
  mu__boolexpr2733 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2733)) mu__boolexpr2732 = FALSE ;
  else {
  mu__boolexpr2732 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2732)) mu__boolexpr2731 = FALSE ;
  else {
  mu__boolexpr2731 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2731)) mu__boolexpr2730 = FALSE ;
  else {
  mu__boolexpr2730 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2730)) mu__boolexpr2729 = FALSE ;
  else {
  mu__boolexpr2729 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2729)) mu__boolexpr2728 = FALSE ;
  else {
  mu__boolexpr2728 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2728)) )
  { mu__quant2727 = FALSE; break; }
};
};
return mu__quant2727;
};

bool mu__condition_2734() // Condition for Rule "test_reachable_state_9"
{
  return mu__invariant_2726( );
}

/**** end rule declaration ****/

int mu__invariant_2735() // Invariant "test_reachable_state_8"
{
bool mu__quant2736; 
mu__quant2736 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2737;
bool mu__boolexpr2738;
bool mu__boolexpr2739;
bool mu__boolexpr2740;
bool mu__boolexpr2741;
bool mu__boolexpr2742;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2742 = FALSE ;
  else {
  mu__boolexpr2742 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2742)) mu__boolexpr2741 = FALSE ;
  else {
  mu__boolexpr2741 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2741)) mu__boolexpr2740 = FALSE ;
  else {
  mu__boolexpr2740 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2740)) mu__boolexpr2739 = FALSE ;
  else {
  mu__boolexpr2739 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2739)) mu__boolexpr2738 = FALSE ;
  else {
  mu__boolexpr2738 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2738)) mu__boolexpr2737 = FALSE ;
  else {
  mu__boolexpr2737 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2737)) )
  { mu__quant2736 = FALSE; break; }
};
};
return mu__quant2736;
};

bool mu__condition_2743() // Condition for Rule "test_reachable_state_8"
{
  return mu__invariant_2735( );
}

/**** end rule declaration ****/

int mu__invariant_2744() // Invariant "test_reachable_state_7"
{
bool mu__quant2745; 
mu__quant2745 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2746;
bool mu__boolexpr2747;
bool mu__boolexpr2748;
bool mu__boolexpr2749;
bool mu__boolexpr2750;
bool mu__boolexpr2751;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2751 = FALSE ;
  else {
  mu__boolexpr2751 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2751)) mu__boolexpr2750 = FALSE ;
  else {
  mu__boolexpr2750 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2750)) mu__boolexpr2749 = FALSE ;
  else {
  mu__boolexpr2749 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2749)) mu__boolexpr2748 = FALSE ;
  else {
  mu__boolexpr2748 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2748)) mu__boolexpr2747 = FALSE ;
  else {
  mu__boolexpr2747 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2747)) mu__boolexpr2746 = FALSE ;
  else {
  mu__boolexpr2746 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2746)) )
  { mu__quant2745 = FALSE; break; }
};
};
return mu__quant2745;
};

bool mu__condition_2752() // Condition for Rule "test_reachable_state_7"
{
  return mu__invariant_2744( );
}

/**** end rule declaration ****/

int mu__invariant_2753() // Invariant "test_reachable_state_6"
{
bool mu__quant2754; 
mu__quant2754 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2755;
bool mu__boolexpr2756;
bool mu__boolexpr2757;
bool mu__boolexpr2758;
bool mu__boolexpr2759;
bool mu__boolexpr2760;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2760 = FALSE ;
  else {
  mu__boolexpr2760 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2760)) mu__boolexpr2759 = FALSE ;
  else {
  mu__boolexpr2759 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2759)) mu__boolexpr2758 = FALSE ;
  else {
  mu__boolexpr2758 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2758)) mu__boolexpr2757 = FALSE ;
  else {
  mu__boolexpr2757 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2757)) mu__boolexpr2756 = FALSE ;
  else {
  mu__boolexpr2756 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Tip)) ; 
}
  if (!(mu__boolexpr2756)) mu__boolexpr2755 = FALSE ;
  else {
  mu__boolexpr2755 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2755)) )
  { mu__quant2754 = FALSE; break; }
};
};
return mu__quant2754;
};

bool mu__condition_2761() // Condition for Rule "test_reachable_state_6"
{
  return mu__invariant_2753( );
}

/**** end rule declaration ****/

int mu__invariant_2762() // Invariant "test_reachable_state_5"
{
bool mu__quant2763; 
mu__quant2763 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2764;
bool mu__boolexpr2765;
bool mu__boolexpr2766;
bool mu__boolexpr2767;
bool mu__boolexpr2768;
bool mu__boolexpr2769;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2769 = FALSE ;
  else {
  mu__boolexpr2769 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2769)) mu__boolexpr2768 = FALSE ;
  else {
  mu__boolexpr2768 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2768)) mu__boolexpr2767 = FALSE ;
  else {
  mu__boolexpr2767 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2767)) mu__boolexpr2766 = FALSE ;
  else {
  mu__boolexpr2766 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2766)) mu__boolexpr2765 = FALSE ;
  else {
  mu__boolexpr2765 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2765)) mu__boolexpr2764 = FALSE ;
  else {
  mu__boolexpr2764 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2764)) )
  { mu__quant2763 = FALSE; break; }
};
};
return mu__quant2763;
};

bool mu__condition_2770() // Condition for Rule "test_reachable_state_5"
{
  return mu__invariant_2762( );
}

/**** end rule declaration ****/

int mu__invariant_2771() // Invariant "test_reachable_state_4"
{
bool mu__quant2772; 
mu__quant2772 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2773;
bool mu__boolexpr2774;
bool mu__boolexpr2775;
bool mu__boolexpr2776;
bool mu__boolexpr2777;
bool mu__boolexpr2778;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2778 = FALSE ;
  else {
  mu__boolexpr2778 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2778)) mu__boolexpr2777 = FALSE ;
  else {
  mu__boolexpr2777 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2777)) mu__boolexpr2776 = FALSE ;
  else {
  mu__boolexpr2776 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2776)) mu__boolexpr2775 = FALSE ;
  else {
  mu__boolexpr2775 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2775)) mu__boolexpr2774 = FALSE ;
  else {
  mu__boolexpr2774 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_Branch)) ; 
}
  if (!(mu__boolexpr2774)) mu__boolexpr2773 = FALSE ;
  else {
  mu__boolexpr2773 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2773)) )
  { mu__quant2772 = FALSE; break; }
};
};
return mu__quant2772;
};

bool mu__condition_2779() // Condition for Rule "test_reachable_state_4"
{
  return mu__invariant_2771( );
}

/**** end rule declaration ****/

int mu__invariant_2780() // Invariant "test_reachable_state_3"
{
bool mu__quant2781; 
mu__quant2781 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2782;
bool mu__boolexpr2783;
bool mu__boolexpr2784;
bool mu__boolexpr2785;
bool mu__boolexpr2786;
bool mu__boolexpr2787;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2787 = FALSE ;
  else {
  mu__boolexpr2787 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2787)) mu__boolexpr2786 = FALSE ;
  else {
  mu__boolexpr2786 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2786)) mu__boolexpr2785 = FALSE ;
  else {
  mu__boolexpr2785 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2785)) mu__boolexpr2784 = FALSE ;
  else {
  mu__boolexpr2784 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2784)) mu__boolexpr2783 = FALSE ;
  else {
  mu__boolexpr2783 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2783)) mu__boolexpr2782 = FALSE ;
  else {
  mu__boolexpr2782 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Tip)) ; 
}
if ( !(!(mu__boolexpr2782)) )
  { mu__quant2781 = FALSE; break; }
};
};
return mu__quant2781;
};

bool mu__condition_2788() // Condition for Rule "test_reachable_state_3"
{
  return mu__invariant_2780( );
}

/**** end rule declaration ****/

int mu__invariant_2789() // Invariant "test_reachable_state_2"
{
bool mu__quant2790; 
mu__quant2790 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2791;
bool mu__boolexpr2792;
bool mu__boolexpr2793;
bool mu__boolexpr2794;
bool mu__boolexpr2795;
bool mu__boolexpr2796;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2796 = FALSE ;
  else {
  mu__boolexpr2796 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2796)) mu__boolexpr2795 = FALSE ;
  else {
  mu__boolexpr2795 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2795)) mu__boolexpr2794 = FALSE ;
  else {
  mu__boolexpr2794 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2794)) mu__boolexpr2793 = FALSE ;
  else {
  mu__boolexpr2793 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2793)) mu__boolexpr2792 = FALSE ;
  else {
  mu__boolexpr2792 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2792)) mu__boolexpr2791 = FALSE ;
  else {
  mu__boolexpr2791 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_Branch)) ; 
}
if ( !(!(mu__boolexpr2791)) )
  { mu__quant2790 = FALSE; break; }
};
};
return mu__quant2790;
};

bool mu__condition_2797() // Condition for Rule "test_reachable_state_2"
{
  return mu__invariant_2789( );
}

/**** end rule declaration ****/

int mu__invariant_2798() // Invariant "test_reachable_state_1"
{
bool mu__quant2799; 
mu__quant2799 = TRUE;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
bool mu__boolexpr2800;
bool mu__boolexpr2801;
bool mu__boolexpr2802;
bool mu__boolexpr2803;
bool mu__boolexpr2804;
bool mu__boolexpr2805;
  if (!((mu_getState( mu_Tree[1].mu_cache, mu_a )) == (mu_None))) mu__boolexpr2805 = FALSE ;
  else {
  mu__boolexpr2805 = ((mu_getState( mu_Tree[2].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2805)) mu__boolexpr2804 = FALSE ;
  else {
  mu__boolexpr2804 = ((mu_getState( mu_Tree[4].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2804)) mu__boolexpr2803 = FALSE ;
  else {
  mu__boolexpr2803 = ((mu_getState( mu_Tree[5].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2803)) mu__boolexpr2802 = FALSE ;
  else {
  mu__boolexpr2802 = ((mu_getState( mu_Tree[3].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2802)) mu__boolexpr2801 = FALSE ;
  else {
  mu__boolexpr2801 = ((mu_getState( mu_Tree[6].mu_cache, mu_a )) == (mu_None)) ; 
}
  if (!(mu__boolexpr2801)) mu__boolexpr2800 = FALSE ;
  else {
  mu__boolexpr2800 = ((mu_getState( mu_Tree[7].mu_cache, mu_a )) == (mu_None)) ; 
}
if ( !(!(mu__boolexpr2800)) )
  { mu__quant2799 = FALSE; break; }
};
};
return mu__quant2799;
};

bool mu__condition_2806() // Condition for Rule "test_reachable_state_1"
{
  return mu__invariant_2798( );
}

/**** end rule declaration ****/

// set invariants
const rulerec invariants[] = {
{"test_reachable_state_224", &mu__condition_799, NULL, },
};// set invariants
const unsigned short numinvariants = 1;

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
