#include <iostream>
#include <iomanip>

using namespace std;

int func(int a[10], size_t n)
{
   cout << endl << endl << endl;
   cout <<"enter func" << endl;
   cout <<"print array" << endl << endl << endl;

   for(size_t i = 0; i < n; ++i)
   {
     cout <<"value in a[" << setw(3) << i << "] = " << setw(3) << a[i] << endl;
   }

   return 0;  

}

int main()
{
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  func(a, 10);

  int b[5] = {1,2,3,4,5} ;
  func(b,sizeof(b)/sizeof(b[0]));

  int c[3] = {1,2,3};
  func(c[3], 3);

  return 0;
}
