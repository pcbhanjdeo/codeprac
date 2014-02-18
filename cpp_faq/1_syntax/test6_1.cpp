#include <iostream>


using namespace std;



int func(int a = 42);
int f2(int a);

int main()
{
  cout <<"in main()" << endl;
  cout <<"call f(39)" << endl;

  func(39);

  cout <<"call f()" << endl;
  func();

  cout <<"call f2(100) " << endl;
  f2(100);

  return 0;
}
