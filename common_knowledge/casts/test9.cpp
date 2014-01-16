#include <iostream>

using namespace std;

class student
{
  private:
  const int roll;

  public:
  student(int r);
  void fun() const;
  int getRoll();
};

student::student(int r) :roll(r)
{
  //roll = r;
}

void student::fun() const
{
  const_cast<int&>((const_cast<student*>(this))->roll) = 10;
}

int student::getRoll()
{
  return roll;
}

int main()
{
  student s(5);
  cout <<"value of roll before fun() = " << s.getRoll() << endl;

  s.fun();

  cout <<"value of roll after fun() = " << s.getRoll() << endl;

  return 0;
}

