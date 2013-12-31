#include <iostream>

using namespace std;

int func(int &x)
{
  return x;
}

int main()
{
  int a = 10;
  cout << func(10) << endl;
  //cout << func(a) << endl;
  return 0;
}

