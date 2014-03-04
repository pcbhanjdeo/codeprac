#include <iostream>
#include <memory>
#include "classA.h"

using namespace std;

int main()
{
  cout <<"main() entry" << endl;
  endl(cout);

  cout <<"creating an empty auto pointer, since there is a default constructor" << endl;
  cout <<"auto_ptr<A> a;" << endl;

  auto_ptr<A> a;

  cout <<"creating an auto pointer from new pointer" << endl;
  auto_ptr<A> b(new A(10));

  cout <<"creating an auto pointer by assignment to an existing pointer" << endl;
  auto_ptr<A> c = b;
  c->printVal();
  b->printVal();

  return 0;
  
}
