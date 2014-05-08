#include <pthread.h>
//#include "errors.h"
#include <unistd.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

void* thread_routine(void* arg)
{
    return arg;
}

int main(int argc, char* argv[])
{
  pthread_t thread_id;
  void* thread_result = NULL;
  
  int status;
  
  status = pthread_create(&thread_id, NULL, thread_routine, NULL);

  if(status != 0)
  {
    cout <<"error has occured at create thread, calling abort() function" << endl;
    abort();
  }

  status = pthread_join(thread_id, &thread_result);

  if(status != 0)
  {
    cout <<"error at join thread call abort" << endl;
    abort();
  }

  if(thread_result == NULL)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

