#include <iostream>
#include <pthread.h>

typedef struct my_struct
{
  pthread_mutex_t mutex;
  int value;
} my_struct_tag;

my_struct_tag mutex_struct = {PTHREAD_MUTEX_INITIALIZER, 0};

int main()
{
  std::cout <<"main entry" << std::endl;
  //std::cout <<"value of mutex initializer PTHREAD_MUTEX_INITIALIZER = " << mutex_struct.mutex << std::endl;
  std::cout <<"main::value of PTHREAD_MUTEX_INITIALIZER = " << PTHREAD_MUTEX_INITIALIZER << std::endl;  

  return 0;
}
