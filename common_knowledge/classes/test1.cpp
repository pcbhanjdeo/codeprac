#include <iostream>

using namespace std;

class base
{
  public:
  base(int a, int b, int c);
  void printVars();

  private:
  int m_a;
  int m_b;
  int m_c;

};

base::base(int a, int b, int c)
{
  m_a = a;
  m_b = b;
  m_c = c;
}

void base::printVars()
{
  cout <<"value of a = " << m_a << endl;
  cout <<"value of b = " << m_b << endl;
  cout <<"value of c = " << m_c << endl;
}


int main()
{
  int a = 10;
  int* p = &a;

  cout <<"size of int a = " << sizeof(a) << endl;
  cout <<"size of int* = " << sizeof(p) << endl;

  base b(10,11,12);
  b.printVars();

  cout <<"size of object b of class base = " << sizeof(b) << endl;
  cout <<"size of class base = " << sizeof(base) << endl;

  return 0;
}
