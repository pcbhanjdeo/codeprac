#include <iostream>

using namespace std;

int& f()
{
  static int a = 10;
  return a;
}


int main()
{
  int a = 20;
  f() = a;
  return 0;
}
