#include <iostream>

using namespace std;

void func(int a)
{
  cout <<"inside func" << endl;
  cout <<"value of input var = " << a << endl;

  return;
}

int main()
{
  int a = 10;
  int b = 10;

  cout <<"both a and b are initialized to 10" << endl;

  cout <<"calling func(++a) " << endl;
  func(++a);

  cout <<"calling func(b++) " << endl;
  func(b++);

  return 0;
}
