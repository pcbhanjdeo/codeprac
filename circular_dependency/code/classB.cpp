#include <iostream>
#include "classB.h"

using namespace std;

classB::classB(classA* pA):m_a(pA)
{
   cout <<"classB::cotor address of the obj = " << this << endl;
}

classB::~classB()
{
  cout <<"classB::Dtor address of the obj = " << this << endl;
}

classB::classB(const classB& b)
{
  cout <<"classB::copy ctor" << endl;
  cout <<"classB::cctor address of this->m_a = " << this->m_a << endl;
  cout <<"classB::cctor address of b.m_a     = " << b.m_a << endl;
  *(this->m_a) = *(b.m_a);
}

classB& classB::operator=(const classB& b)
{
  cout <<"classB::operator= " << endl;
  if(this == &b)
  {
    cout <<"classB::operator=, this is the same object" << endl;
  }
  else
  {
    delete this->m_a;
    this->m_a = new classA(*b.m_a);
  }
  return *this;
}

