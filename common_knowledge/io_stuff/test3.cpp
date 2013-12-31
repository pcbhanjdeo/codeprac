#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  char a[] = "bhanj is god";

  cout <<"with setw(30) value of a   = " << setw(30) << a << endl;
  cout <<"with out setw() value of a = " << a << endl;
  cout <<"with setw(10) value of a   = " << a << endl;

  return 0;
}
