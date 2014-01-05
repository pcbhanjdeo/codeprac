#include <iostream>


using namespace std;

int main()
{
  int a = 10;
  int b = 20;
  int *const p = &a;

  cout <<"value of a before increment = " << *p << endl;
  (*p)++;
  cout <<"value of a after increment = " << *p << endl;

  //throws error since constant pointer.
  //p = &b;
  
  //throws error since it is a constant pointer.
  //p++;

  return 0;
}
