#include <stdio.h>
#include <stdlib.h>


int main()
{
  int a = 10;
  int b = 15;

  (int*) pa = NULL;
  //int (*pa) = &a;
  //int*& pRefA = pa;

  printf("value of pRefA = %d\n", *pa);
  //cout <<"value of pRefA = " << *pRefA << endl;

  pa = &b;
  //cout <<"assigning pointer pa to int b" << endl;
  printf("assigning pointer pa to int b\n");

  //cout <<"val of pRefA = " << *pRefA << endl;
  printf("val of pRefA = %d\n", *pa);

  return 0; 

}
