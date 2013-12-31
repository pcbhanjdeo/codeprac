#include <iostream>
# define SIZE 10
using namespace std;

int main()
{
   int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
   
   cout << endl;

   cout <<"Print the array" << endl;

   for(int i=0; i < SIZE; ++i)
   {
     cout <<"a[ " << i << " ] = " << a[i] << endl;
   }

   int arrSize = (sizeof(a)/sizeof(a[0]));

   cout <<"size of array a = " << sizeof(a) << endl;
   cout <<"size of one element in array a = " << sizeof(a[0]) << endl;
   cout <<"array size of a = " << arrSize << endl;

   return 0;

}
