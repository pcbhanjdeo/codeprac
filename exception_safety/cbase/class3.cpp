#include <iostream>
#include "class3.h"
#include <exception>

using namespace std;

class3::class3()
{
  cout <<"class3::ctor" << endl;
  throw bad_alloc();
}

class3::~class3()
{
  cout <<"class3::dtor" << endl;
}

class3::class3(const class3& c3)
{
  cout <<"class3::cpy ctor" << endl;
}


