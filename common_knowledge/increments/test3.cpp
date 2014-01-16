#include <iostream>

using namespace std;

int func()
{
  int a = 10;
  return a--;
}

int main()
{
  cout <<"calling func() expecting a value of 10 = " << func() << endl;

  return 0;
}
