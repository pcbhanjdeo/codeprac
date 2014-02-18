#include <iostream>

using namespace std;

int f1(int a);
int f1(int a);

int f2(int b = 10);
int f2(int b = 10);

int main()
{
  cout <<"in main" << endl;
  cout <<"call f1(20)" << endl;
  f1(20);

  cout <<"call f2(100)" << endl;
  f2(100);

  cout <<"call f2()" << endl;
  f2();

  return 0;

}

int f1(int a)
{
  cout <<"in f1(int a) value = " << a << endl;
  return a;
}

int f2(int b)
{
  cout <<"in f2(int b = 10) value = " << b << endl;
  return b;
}
