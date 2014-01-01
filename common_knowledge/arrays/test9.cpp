#include <iostream>
#include <iomanip>

using namespace std;

//method1
void printMultiDimArray1(int a[][4], size_t n)
{
  cout <<"printMultiDimArray1()" << endl;

  for(size_t i=0; i < n; ++i)
  {
    for(size_t j=0; j < 4; ++j)
    {
       cout << setw(3) << a[i][j]; 
    }
    cout << endl;
  }
  cout << endl << endl;
}

void printMultiDimArray2(int a[][4], size_t n)
{
   cout <<"printMultiDimArray2()" << endl;

   for(size_t i=0; i < n; ++i)
   {
     for(size_t j=0; j < 4; ++j)
     {
       cout << setw(3) <<  *(*(a+i) + j);
     }
     cout << endl;
   }
   cout << endl << endl;
}

int main()
{
   int a[3][4] = {0};

   for(size_t i=0; i < 3; ++i)
   {
      for(size_t j=0; j < 4; ++j)
      {
         a[i][j] = i*j;
      }
   }

   printMultiDimArray1(a,3);
   printMultiDimArray2(a,3);

   return 0;

}
