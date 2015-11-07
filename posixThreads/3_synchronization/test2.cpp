#include <iostream>
#include <pthread.h>

struct my_struct
{
  pthread_mutex_t m_mutex;
  int m_val;
  my_struct():m_mutex(PTHREAD_MUTEX_INITIALIZER),m_val(0)
  {}
};


int main()
{
  std::cout <<"main entry" << std::endl;
  std::cout <<"main::create a new mutex" << std::endl;
  pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
  my_struct obj;
  pthread_mutex_init(&(obj.m_mutex), NULL);
  std::cout <<"main created a new pthread mutex" << std::endl;
  pthread_mutex_destroy(&obj.m_mutex);

  std::cout <<"main::destroyed the mutex" << std::endl;

  return 0;
}
  


