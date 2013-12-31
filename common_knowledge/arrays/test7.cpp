#include <iostream>

using namespace std;


int addArr(int (&arr)[3])
{
   return arr[0] + arr[1] + arr[2];
}


int main()
{
  int a[3] = {1,2,3};
  int b[4] = {1,2,3,4};

  //int c = addArr(a);
  int c = addArr(b);

  cout <<"the sum of elements in array = " << c << endl;

  return 0;
}
