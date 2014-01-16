#include <stdio.h>

int main()
{
  register int a = 10;
  int* p = &a;

  printf("value of a = %d\n", *p);
  return 0;
}
