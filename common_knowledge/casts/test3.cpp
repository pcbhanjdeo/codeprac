#include <iostream>

using namespace std;

class shape
{
  public:
  shape();
  void f1();
  void f2();
  ~shape();
};

shape::shape()
{
  cout <<"in shape constructor" << endl;
}

shape::~shape()
{
  cout <<"in shape destructor" << endl;
}

void shape::f1()
{
  cout <<"in shape::f1" << endl;
}

void shape::f2()
{
  cout <<"in shape::f2" << endl;
}

class circle:public shape
{
  public:
  circle();
  ~circle();
  void f3();
};


circle::circle()
{
  cout <<"in circle constructor" << endl;
}

circle::~circle()
{
  cout <<"in circle destructor" << endl;
}


void circle::f3()
{
  cout <<"in circle::f3()" << endl;
}



int main()
{
  cout <<"in main" << endl;
  shape* pShape = new circle();
  pShape->f1();
  pShape->f2();
  
  //throws an error since f3() is not defined in shape.
  //pShape->f3();

  circle* pCircle = static_cast<circle*> (pShape);
  pCircle->f3();

  //throws an error since int has nothing to do with circle, 
  // but old c style cast would have accepted it as such.
  //int* pInt = static_cast<int*>(pShape);

  delete pShape;  
  return 0;  
}
