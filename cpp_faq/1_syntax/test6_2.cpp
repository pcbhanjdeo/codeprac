#include <iostream>


using namespace std;

int func(int a = 0);
int f2(int a);

int func(int a)
{
  cout <<"in func()" << endl;
  cout <<"val = " << a << endl;

  return 0;
}

int f2(int a)
{
  cout <<"in f2()" << endl;
  cout <<"call f() " << endl;
  return func();
}


