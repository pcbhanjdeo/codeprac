#include <iostream>

using namespace std;

void func(int& a)
{
  cout <<"value of a = " << a << endl;
}

int main()
{
  const int a = 10;
  //below line throws error since we are passing a const int as a reference to a place which can chnage the value.
  //func(a);

  //but this line dosent.
  func(const_cast<int&>(a));

  return 0;
}
