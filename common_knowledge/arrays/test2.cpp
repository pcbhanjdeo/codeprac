#include <iostream>

using namespace std;

int main()
{
  int a[100];

  int arrsize = sizeof(a) / sizeof(a[0]);

  cout <<"array size = " << arrsize << endl;

  return 0;

}
