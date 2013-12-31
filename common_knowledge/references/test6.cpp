#include <iostream>

using namespace std;

int main()
{
  const int a = 10;
  const int& b = a;

  //b = 12; //read only reference assignment error.

  return 0;
}
