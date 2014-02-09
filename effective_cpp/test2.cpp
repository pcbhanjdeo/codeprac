#include <iostream>

using namespace std;

int main()
{
  int* const pc = new int[10];
  int* p = pc;

  cout <<"address of pc = " << pc << endl;
  cout <<"address of p  = " << p << endl;

  p++; 

  //error
  // pc++; 

  delete []pc;

  return 0;
}
