#include <iostream>
#include <memory>
#include "classA.h"

using namespace std;

int main()
{
  cout <<"in main()" << endl;

  cout <<"create object A with 10 as value" << endl; 
  auto_ptr <A> a(new A(10));
  cout <<"address of a = " << a.get() << endl;
  cout <<"value of auto_ptr a->printVal() = ";
  a->printVal();

  cout <<"create object B with 20 as value" << endl;
  auto_ptr <A> b(new A(20));
  cout <<"address of b = " << b.get() << endl;
  cout <<"value of auto_ptr b->printVal() = ";
  b->printVal();

  cout <<"now use b = a and see what happens" << endl;
  b = a;

  cout <<"addresses after assignment" << endl;
  
  cout <<"address of a = " << a.get() << endl;
  cout <<"address of b = " << b.get() << endl;

  cout <<"the exit" << endl;
  return 0;
  
}
