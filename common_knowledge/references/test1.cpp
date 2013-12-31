#include <iostream>

using namespace std;

int &fun()
{
  static int x = 10;
  static int pass = 0;
  pass++;
  cout <<"value of x in pass = " << pass << " is " << x << endl;
  return x;
}

int main()
{
  fun() = 30;
  cout << fun() << endl;

  return 0;

}
