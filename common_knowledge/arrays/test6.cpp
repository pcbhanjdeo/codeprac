#include <iostream>
#include <iomanip>

using namespace std;

//int editArray(const int a[], size_t n) // error - editing a read only reference
//int editArray(int* a, size_t n)  // works fine
//int editArray(const int* p, size_t n)  //obviousely error
int editArray(int a[], size_t n)
{
   //int* a = p;

   for(size_t i=0; i < n; ++i)
   {
     a[i] = 2*a[i];
   }
   return 0;
}

void printArray(int a[], size_t n)
{
  cout << endl;
  for(size_t i=0; i < n; ++i)
  {
    cout <<"a[ " << setw(3) << i << "] = " << setw(3) << a[i] << endl;
  }
  cout << endl;
}

int main()
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   cout << endl << endl;

   cout <<"print the array before editArray() function call" << endl;
   printArray(a, 10);
  
   editArray(a, 10);
   cout << endl << endl;

   cout <<"print the array after editArray function call" << endl;
   printArray(a, 10);

   return 0;

}
