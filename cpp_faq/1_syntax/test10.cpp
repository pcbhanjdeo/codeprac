#include <iostream>

using namespace std;

int f1()
{
  cout <<"in f1() function with no parameters" << endl;
  return 0;
}

int f1(int a = 10)
{
  cout <<"in f1(int) function value = " << a << endl;
  return a;
}

int main()
{
  cout <<"in main()" << endl;
  cout <<"call f1(20)" << endl;
  f1(20);

  cout << "now calling f1()" << endl;
  f1();

  return 0;
}
