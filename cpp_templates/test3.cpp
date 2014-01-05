#include <iostream>

using namespace std;

template <typename T>

T maxi(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  int a = 4;
  double b = 4.5;

  cout <<"using max(static_cast<double a, b) to get around type mismatch in templates" << endl;
  cout <<"The maximum of a ( " << a << " ) and b (" << b << ") = " << max(static_cast<double> (a), b) << endl << endl;

  cout <<"using max<double>(a,b) to get around type mismatch in templates" << endl;
  cout <<"the maximum of a ( " << a << " ) and b (" << b << ") = " << max<double> (a, b) << endl << endl;

  return 0;
}

