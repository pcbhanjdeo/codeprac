#include <iostream>

using namespace std;

void fun(int* p)
{
  ++(*p);
  cout <<"fun::value of a = " << *p << endl;
}

int main()
{
  int a = 10;
  const int* p = &a; 
  cout <<"pass const int* to fun(inti*), it gives error" << endl;
  //fun(p) ;

  cout <<"pass const_cast<int*>p to funt(int*) it works" << endl;
  fun( const_cast<int*>(p) );

  return 0;
   
}
