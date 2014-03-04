#include <iostream>
#include <memory>
#include "classA.h"

using namespace std;

int main()
{
  cout <<"in main()" << endl;
  cout <<"create a new A" << endl;
  A* pA = new A(10);
  cout <<"value of pA = ";
  pA->printVal();
 
  cout <<"assign the above pointer to a smart pointer" << endl;
  auto_ptr <A> a(pA);
  cout <<"value of auto_ptr a->printVal() = ";
  a->printVal();

  cout <<"dereferencing pA to a object" << endl;
  A b = *pA;
  cout <<"value of b.printVal() = ";
  b.printVal();
  
  cout <<"call for delete pA" << endl;
  delete pA;
  pA = NULL;

  cout <<"the exit" << endl;
  return 0;
  
}
