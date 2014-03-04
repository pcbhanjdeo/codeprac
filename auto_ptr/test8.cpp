#include <iostream>
#include <memory>
#include "classA.h"

using namespace std;

int main()
{
  cout <<"in main()" << endl;

  cout <<"create object A with 10 as value" << endl; 
  auto_ptr <A> a(new A(10));
  cout <<"address of a before reset = " << a.get() << endl;
  cout <<"value of auto_ptr a->printVal() = ";
  a->printVal();

  cout <<"create object A with a.get() as value" << endl;
  auto_ptr <A> b(a.get());
  cout <<"address of b before reset = " << b.get() << endl;
  cout <<"value of auto_ptr b->printVal() = ";
  b->printVal();

  cout <<"address of a after reset = " << a.get() << endl;
  cout <<"value of auto_ptr a->printVal() = ";
  a->printVal();

  cout <<"the exit" << endl;
  return 0;
  
}
