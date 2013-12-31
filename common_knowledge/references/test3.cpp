#include <iostream>

using namespace std;

int main()
{
  //int a = 10;
  //int &b = a;

  int const &c = 10;

  cout <<"value of c = " << c << endl;

  return 0;
}
