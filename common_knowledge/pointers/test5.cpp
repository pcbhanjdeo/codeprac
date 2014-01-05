#include <iostream>

using namespace std;

void func(int** pRef)
{
  int* p = *pRef;
  cout << "printing address and the value in the array" << endl << endl;

  for(size_t i=0; i < 3; ++i)
  {
    cout <<"address of p[" << i << "] = "<< (p+i) << "  value = " << *(p+i) << endl;
  }

}

int main()
{
   int a = 10;
   int b = 11;
   int c = 12;

   int* pArr[] = {&a, &b, &c};

   func(pArr);

   return 0; 
}
