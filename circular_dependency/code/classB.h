#ifndef CLASSB_H
#define CLASSB_H

#include "classA.h"

class classB
{
  public:
  classB(classA* pA);
  ~classB();
  classB(const classB& b);
  classB& operator=(const classB& b);

  private:
  classA* m_a;
};

#endif

