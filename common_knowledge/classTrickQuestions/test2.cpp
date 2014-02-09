#include <iostream>

using namespace std;

class noObj
{
  public:
  void getVal();

  private:
  noObj(int i);
  int m_i;
};

noObj::noObj(int i):m_i(i)
{
  cout <<"inside noObj " << endl;
}

void noObj::getVal()
{
  cout <<"noObj::getVal m_i = " << m_i << endl;
}

int main()
{
  noObj a(10);
  a.getVal();

  return 0;
}
