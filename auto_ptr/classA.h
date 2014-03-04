#ifndef CLASS_A_H
#define CLASS_A_H

class A
{
  public:
  A(int i = 0);
  ~A();
  A(const A& a);
  A& operator=(const A& a);
  void printVal();
  
  private:
  int m_i;
  const int obj_id;
  static int s_id;
};

#endif
