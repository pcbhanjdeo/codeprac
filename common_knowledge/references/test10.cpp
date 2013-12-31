#include <iostream>

using namespace std;

int main()
{
  int* p = NULL;
  int& a = *p;
  cout <<"a = " << a << endl;

  return 0;
}
