#include <iostream>

using namespace std;

int main()
{
  //regular pointer

  int a = 10;
  int const *p = NULL;

  p = &a;

  cout <<"value of poinetr before increment = " << *p << endl;
  ++(*p);
  cout <<"value of pointer after increment = " << *p << endl;

  int &b = *p;
  b++;

  return 0;
}
