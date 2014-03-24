#include <iostream>
#include "class2.h"

using namespace std;

class2::class2()
{
  cout <<"class2::ctor" << endl;
}

class2::~class2()
{
  cout <<"class2::dtor" << endl;
}

class2::class2(const class2& c2)
{
  cout <<"class2::cpy ctor" << endl;
}


