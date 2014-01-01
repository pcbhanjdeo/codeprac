#include <iostream>

using namespace std;

void printArray(const int* p, size_t n)
{
  cout << endl;

  for(size_t i=0; i < n; ++i)
  {
    cout <<"a[" << i << "] = " << p[i] << endl;
  }

}

int main()
{
  int a[5] = {1,2,3,4,5};
  int const (&b)[5] = a;

  cout <<"Printing array a" << endl;
  printArray(a, 5);

  cout <<"Print array b" << endl;
  printArray(b,5);

  cout <<"doubling values in a" << endl;
  for(size_t i=0; i < 5; ++i)
  {
    a[i] = 2*a[i];
  }

  cout <<"Printing array a after change" << endl;
  printArray(a, 5);

  cout <<"Print array b after change" << endl;
  printArray(b,5);

  return 0;

}
