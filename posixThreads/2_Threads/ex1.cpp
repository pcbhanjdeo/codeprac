#include <iostream>
#include <pthread.h>

using namespace std;

void* start(void* input)
{
  cout <<"start func" << endl;
  return input;
}

int main()
{
 
  cout <<"main entry" << endl;
  pthread_t t1;
  void* return_val;

  int status = pthread_create(&t1, NULL, start, NULL);

  if(0 != status)
  {
    cout <<"main failed to create thread" << endl;
  }
  else
  {
    cout <<"thread succesfully created" << endl;
  }

  pthread_join(t1, &return_val);

  if(NULL == return_val)
  {
    cout <<"thread executed succesfully" << endl;
  }
  else
  {
    cout <<"thread failed to execute properly" << endl;
  }

  return 0;
}


  
