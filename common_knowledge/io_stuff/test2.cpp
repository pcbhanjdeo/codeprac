#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a = 222222;
  cout <<"with out setw() value of a = " << a << endl;
  cout <<"with setw(3) value of a = " << setw(3) << a << endl;

  return 0;
}
