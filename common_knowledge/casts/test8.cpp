#include <iostream>

using namespace std;

int main()
{
  int a1 = 40;
  const int* b1 = &a1;
  cout <<"value of b1 = " << *b1 << endl;
  char* c1 = (char*) (b1);
  *c1 = 'A';
  cout <<"value of b1 = " << *b1 << endl;
  cout <<"value of c1 = " << *c1 << endl;

  return 0;
}
