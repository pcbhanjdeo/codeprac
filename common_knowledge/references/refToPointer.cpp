#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 15;

  int* pa = &a;
  int*& pRefA = pa;

  cout <<"value of pRefA = " << *pRefA << endl;

  pa = &b;
  cout <<"assigning pointer pa to int b" << endl;

  cout <<"val of pRefA = " << *pRefA << endl;

  return 0; 

}
