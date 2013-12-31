#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  const int& b = a;
  cout << "value of b before a is changed = " << b << endl;
  a = 12;
  b = 13;
  cout <<"value of b after a is changed = " << b << endl;

  return 0;
}
