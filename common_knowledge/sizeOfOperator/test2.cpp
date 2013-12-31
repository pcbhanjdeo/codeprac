#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;
  double c = 12.5;
  
  cout <<"size of int = " << sizeof(int) << endl;
  cout <<"size of double = " << sizeof(double) << endl;
  cout <<"size of expression int a + int b + double c = " << sizeof(a+b+c) << endl;

  return 0;
}
