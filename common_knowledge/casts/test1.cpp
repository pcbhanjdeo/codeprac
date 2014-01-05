#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int const* p = &a;

  cout <<"address of p = " << p << endl;

  cout <<"value at p = " << *p << endl;

  //invalid - since we are assigning a pointer to a const object to a pointer to the object.
  //int* q = p;


  int* q = const_cast<int *> (p);

  (*q)++;

  cout <<"value of a = " << a << endl;
  return 0; 
}
