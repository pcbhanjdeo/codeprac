#include <iostream>

using namespace std;

template <typename T, typename U>

U maxi(T a, U b)
{
  return (a > b) ? a : b;
}

int main()
{
  int a = 4;
  int b = 6;
  double c = 5.5;

  cout <<"using two different typenames for int and double" << endl;
  cout <<"maximum of a (" << a << ") and c(" << c << ") using maxi(T a, U c) = " << maxi(a,c) << endl;

  return 0;
}
