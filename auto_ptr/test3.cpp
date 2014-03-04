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

  cout <<"address of pA = " << pA << endl;
  cout <<"address of a.get() = " << a.get() << endl;

  cout <<"a random test A d = *pA;" << endl;
  A d = *a.get();
  cout <<"value in d = ";
  d.printVal();

  //cout <<"printing the object d = " << d << endl;
  
 /*
  cout <<"call for delete pA" << endl;
  delete pA;
  pA = NULL;
*/
  cout <<"the exit" << endl;
  return 0;
  
}
