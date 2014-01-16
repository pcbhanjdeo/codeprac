#include <iostream>

using namespace std;

int main()
{
  register int i = 10;
  int* p = &i;
  cout <<"value of i = " << *p << endl;

  return 0;
}
