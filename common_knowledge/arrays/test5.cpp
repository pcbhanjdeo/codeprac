#include <iostream>

using namespace std;

int fun(int& a[10])
{
  cout <<"inside function fun" << endl;
  return 0;
}

int main()
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   
   fun(a);

   return 0;
  
}
