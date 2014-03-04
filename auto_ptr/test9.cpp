#include <iostream>
#include <memory>
#include "classA.h"

using namespace std;

int main()
{
  cout <<"in main()" << endl;

  cout <<"create object A with 10 as value on stack" << endl; 
  A a(10);
  cout <<"address of A a object = " << &a << endl;

  cout <<"create object A with &a as value" << endl;
  auto_ptr <A> b(&a);
  cout <<"address of b = " << b.get() << endl;
  cout <<"value of auto_ptr b->printVal() = ";
  b->printVal();

  cout <<"address of a after assignment = " << &a << endl;

  cout <<"the exit" << endl;
  return 0;
  
}
