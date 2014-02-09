#include <iostream>
#include <new>

using namespace std;

class pool
{
  public:
  pool(int a=1, int b=1);
  ~pool();
  void printMe();

  private:
  int m_a;
  int m_b;
};

pool::pool(int a, int b):m_a(a), m_b(b)
{
  cout <<"inside pool constructor" << endl;
}

pool::~pool()
{
  cout <<"inside pool destructor" << endl;
}

void pool::printMe()
{
  cout <<"value of a = " << m_a <<" value of b = " << m_b << endl;
}

int main()
{
  cout <<"no of bytes in pool = " << sizeof(pool) << endl;
  char mem[sizeof(pool)];

  pool* pA = new(mem)pool();

  pA->printMe();

  //only time you will ever call the destructor explicitly.
  pA->~pool();

  //creates a segfault - core dump.
  //delete pA;
  return 0;
}
