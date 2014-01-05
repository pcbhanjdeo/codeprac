#include <iostream>
#include <string>

using namespace std;

template <typename T>

T const& maxi(T const& a, T const& b)
{
  return a>b?a:b;
}


int main()
{
  int a = 10;
  int b = 11;

  double c = 10.5;
  double d = 11.5;

  string e = "bhanj";
  string f = "bhanj deo";

  cout <<"max of a and b = " << maxi(a,b) << endl;
  cout <<"max of c and d = " << maxi(c,d) << endl;
  cout <<"max of e and f = " << maxi(e,f) << endl;

  return 0;
}
