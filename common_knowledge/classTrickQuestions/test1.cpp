#include <iostream>

using namespace std;

class noCopy
{
  public:
  noCopy(int i);
  void print();
  
  private:
  noCopy(const noCopy& a);
  noCopy& operator=(const noCopy& a);
  int m_i;
};

noCopy::noCopy(int i):m_i(i)
{
  cout <<"in noCopy constructor" << endl;
}

noCopy::noCopy(const noCopy& a)
{
  m_i = a.m_i;
}

noCopy& noCopy::operator=(const noCopy& a)
{
  m_i = a.m_i;
  return *this;
}

void noCopy::print()
{
  cout <<"noCopy::print value of m_i = " << m_i << endl;
}

int main()
{
  noCopy a(10);
  a.print();

  //error since copy constructor is private/
  //noCopy b = a;
  noCopy b(11);
  b.print();

  //error since assignment operator is private.
  //a = b;

  return 0;
  
}
