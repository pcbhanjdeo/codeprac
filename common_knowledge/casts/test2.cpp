#include <iostream>

using namespace std;

void func(const int a, int const* p)
{
  cout <<"func::value of a = " << a << endl;
  cout <<"func::address of p = " << p << endl;
  cout <<"func::value of *p = " << *p << endl;
}

int main()
{
  int const a = 10;
  int const* p = &a;

  int* q = const_cast<int *>(p);

  cout <<"value of a before increment = " << a << endl;
  cout <<"address of a before increment = " << &a << endl << endl;

  cout <<"value of *p before increment = " << *p << endl;
  cout <<"address of p before increment = " << p << endl << endl;

  cout <<"value of *q before increment = " << *q << endl;
  cout <<"address of q after increment = " << q << endl << endl;

  ++(*q);

  cout << endl << endl << endl;

  cout <<"value of a after increment = " << a << endl;
  cout <<"address of a after increment = " << &a << endl << endl;

  cout <<"value of *p after increment = " << *p << endl;
  cout <<"address of p after increment = " << p << endl << endl;
  
  cout <<"value of *q after increment = " << *q << endl;
  cout <<"address of q after increment = " << q << endl << endl;

  func(a, p);

  return 0;

}
