#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  cout <<"value of a using cout << a = " << a << endl;
  cout <<"value of a using cout.operator<<(a) = ";
  cout.operator<<(a);
  cout << endl;

  int x = 5;
  int y = 6;
  int z = 7;

  cout <<"output of cout << x << y << z = ";
  cout << x << y << z << endl << endl;
  
  cout <<"output of ((cout.operator<<(x)).operator<<(y)).operator<<(z) = ";
  ((cout.operator<<(x)).operator<<(y)).operator<<(z);

  cout << endl << endl;

  cout <<"output of cout.operator<<(x).operator<<(y).operator(z) = ";
  cout.operator<<(x).operator<<(y).operator<<(z);

  cout << endl << endl;

  return 0;
}
