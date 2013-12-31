#include <iostream>
#include <iomanip>

using namespace std;

int func(int* p)
{
  cout <<"entered random func" << endl;

  cout <<"size of array a in func() = " << sizeof(p) << endl;
  cout <<"size of element a[0] in func() = " << sizeof(p[0]) << endl;

  size_t i = sizeof(p)/sizeof(p[0]);
  cout <<"size of array p = " << i << endl;

  return i;
}

int main()
{
  int a[10] = {1,2,3,4,5,6,7,8,9,10};

  cout <<"print the array" << endl << endl;

  for(size_t i = 0; i < 10; ++ i)
  {
     cout <<"a[" << setw(3) << i << "] = " << setw(3) << a[i] << endl;
  }

  cout <<"size of array a in main() = " << sizeof(a) << endl;
  cout <<"size of element a[0] in main = " << sizeof(a[0]) << endl;

  cout <<"call the random function" << endl;

  func(a);

  return 0;

}
