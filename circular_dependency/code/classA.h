#ifndef CLASSA_H
#define CLASSA_H

class classB;

class classA
{
  public:
  classA();
  ~classA();
  classA(const classA& a);
  classA& operator=(const classA& a);

  private:
  classB* m_b;
};
#endif
