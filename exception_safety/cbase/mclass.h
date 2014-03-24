#ifndef MCLASS_H
#define MCLASS_H

#include <memory>
//#include "class1.h"
//#include "class2.h"

class class1;
class class2;
class class3;

class mclass
{
  public:
  mclass();
  ~mclass();
  mclass(const mclass& mc);

  private:
  std::auto_ptr<class1> pC1;
  std::auto_ptr<class2> pC2;
  std::auto_ptr<class3> pC3;
  
};

#endif
