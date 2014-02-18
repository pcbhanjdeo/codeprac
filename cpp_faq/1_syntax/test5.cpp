#include <iostream>

using namespace std;

//int func(int a = 42);

int func(int a = 42)
{
  cout <<"in func() val = " << a << endl;
  return a;
}

int main()
{
  cout <<"in main" << endl;

  cout <<"calling f(32) " << endl;
  func(32);

  cout <<"calling f() " << endl;
  func();

  return 0;
}
