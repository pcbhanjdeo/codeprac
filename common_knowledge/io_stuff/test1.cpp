#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a = 10;
  int b = 9;
  int c = 22222;

  cout <<"printing values with out setw() " << endl << endl << endl;

  cout <<"with out setw(), a = " << a << endl;
  cout <<"with out setw(), b = " << b << endl;
  cout <<"with out setw(), c = " << c << endl;

  cout <<"printing values with setw() " << endl << endl << endl;

  cout <<"with setw(5), a = " << setw(5) << a << endl;
  cout <<"with setw(5), b = " << setw(5) << b << endl;
  cout <<"with setw(5), c = " << setw(5) << c << endl;

  return 0;

}
