#include "classA.h"
#include <iostream>

using namespace std;

int A::s_id = 0;

A::A(int i):m_i(i),obj_id(++s_id)
{
  cout <<"A cotor for i = " << m_i << " with obj_id = " << obj_id << endl;
}

A::~A()
{
  cout <<"A Detor address of this object = " << this << endl;
  cout <<"A Detor for i = " << m_i << " with obj_id = " << obj_id << endl;
}

A::A(const A& a):m_i(a.m_i),obj_id(++s_id)
{
  cout <<"A copy ctor i = " << m_i << " with obj_id = " << obj_id << endl;
}

A& A::operator=(const A& a)
{
  if(this == &a)
  {
    cout <<"in = op, both are same object" << endl;
    return *this;
  }

  cout <<"in A = op for i = " << m_i << "with obj_id = " << obj_id << endl;
  this->m_i = a.m_i;
  return *this;
}

void A::printVal()
{
  cout <<"value of this val = " << m_i << endl;
}




