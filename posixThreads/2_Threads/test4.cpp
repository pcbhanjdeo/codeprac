#include <pthread.h>
#include <iostream>


int main()
{
  std::cout <<"in main entry"<< std::endl;
  std::cout <<"value of pthread_t = " << pthread_self() << std::endl;
  std::cout <<"now calling pthread_exit() "<< std::endl;
  pthread_exit(NULL);
  std::cout <<"in main after pthread_exit() " << std::endl;
  
  return 0;
}

