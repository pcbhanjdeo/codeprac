#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int const *const p = &a;

  cout <<"value at *p = " << *p << endl;

  //error
  int b = 20;
  p = &b;

  p++;

  return 0;

}
