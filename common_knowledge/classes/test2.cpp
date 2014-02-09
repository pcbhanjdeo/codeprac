#include <iostream>

using namespace std;

class base
{
  public:
  base(int a);
  void func();
  void secFunc();

  private:
  int m_a;
};

base::base(int a):m_a(a)
{
  cout <<"in base::constructor" << endl;
}

void base::func()
{
  cout <<"in base::func()" << endl;
}

void base::secFunc()
{
  cout <<"in base::secFunc() " << endl;
}

class derived:public base
{
  public:
  derived(int a);
  void func(int a);

  private:
  int m_a;
};

derived::derived(int a):base(a),m_a(a)
{
  cout <<"in derived constructor" << endl;
}

void derived::func(int a)
{
  cout <<"in derived::f(int)" << endl;
}


int main()
{
  derived d(5);
  d.func();
  d.secFunc();

  return 0;
}
