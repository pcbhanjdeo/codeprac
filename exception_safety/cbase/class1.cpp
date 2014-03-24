#include <iostream>
#include "class1.h"

using namespace std;

class1::class1()
{
  cout <<"class1::ctor" << endl;
}

class1::~class1()
{
  cout <<"class1::dtor" << endl;
}

class1::class1(const class1& c1)
{
  cout <<"class1::cpy ctor" << endl;
}


