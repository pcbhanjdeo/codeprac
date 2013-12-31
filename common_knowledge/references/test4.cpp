#include <iostream>

using namespace std;

int f(const int& a)
{
  cout <<"inside function f val of a = " << a << endl;
  return a;
}

int main()
{
  cout <<"enter main" << endl;
  f(10);
  return 0;
}
