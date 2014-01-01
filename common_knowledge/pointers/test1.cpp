#include <iostream>

using namespace std;



int main()
{
  const int* p = NULL;

  const int a = 6;

  p = &a;

  int b = 5;

  p = &b;

  *p++;


  return 0;

}

