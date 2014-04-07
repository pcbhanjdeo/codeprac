#include <stdio.h>
/*#include <unistd.h>*/

int main()
{
  printf("get the pid of the process = %ld\n" , (long)getpid());
  printf("get the ppid of the process = %ld\n", (long)getppid());
  return 0;
} 

