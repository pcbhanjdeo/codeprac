#include <iostream>
#include "class1.h"
#include "class2.h"
#include "class3.h"
#include "mclass.h"

using namespace std;

mclass::mclass():pC1(new class1()), pC2(new class2()),pC3(new class3())
{
  cout <<"mclass::ctor" << endl;
}

mclass::~mclass()
{
  cout <<"mclass::dtor" << endl;
}

mclass::mclass(const mclass& mc)
{
  cout <<"mclass::cpy ctor" << endl;
}


