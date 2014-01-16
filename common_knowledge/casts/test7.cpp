#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
  int a = 10;
  const int* pci = &a;
  int* pi = const_cast<int*>(pci);

  cout <<"type of a   = " << typeid(a).name() << endl;
  cout <<"type of pci = " << typeid(pci).name() << endl;
  cout <<"type of pi  = " << typeid(pi).name() << endl;

  const volatile int* pvci = &a;
  pi = const_cast<int*>(pvci);

  cout <<"type of pvci = " << typeid(pvci).name() << endl;
  cout <<"type of pi   = " << typeid(pi).name() << endl;

  return 0;
}
