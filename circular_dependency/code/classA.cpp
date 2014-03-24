#include <iostream>
#include "classA.h"
#include "classB.h"

using namespace std;

classA::classA()
{
  cout <<"classA::constructor address of the object = " << this << endl;
  m_b = new classB(this);
}

classA::~classA()
{
  delete m_b;
  cout <<"classA::Destructor address of the object = " << this << endl;
}

classA::classA(const classA& a)
{
  cout <<"classA::copy constructor" << endl;
  *(this->m_b) = *(a.m_b);
  cout <<"address of *(this->m_b) = " << this->m_b << endl;
  cout <<"address of a.m_b        = " << a.m_b << endl;
}

classA& classA::operator=(const classA& a)
{
  cout <<"classA::operator=" << endl;
  if(this == &a)
  {
    cout <<"classA::operator=, both are same, return" << endl;
  }
  else
  {
    delete this->m_b;
    this->m_b = new classB(*a.m_b);
  }
  return *this;
}

