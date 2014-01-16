#include <iostream>

using namespace std;

class student
{
  public:
  student(int r);
  void fun() const;
  int getRoll();

  private:
  int roll;  
};

student::student(int r)
{
  this->roll = r;
}

void student::fun() const
{
  (const_cast<student*> (this))->roll = 10;
}


int student::getRoll()
{
  return roll;
}


int main()
{
  student s(3);
  cout <<"value of roll before fun call = " << s.getRoll() << endl;

  s.fun();

  cout <<"value of roll after fun call = " << s.getRoll() << endl;

  return 0;
}
