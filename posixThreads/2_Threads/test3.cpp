#include <iostream>
#include <pthread.h>

using namespace std;

void* start(void* arg)
{
  pthread_t pt1 = pthread_self();
  cout <<"start::thread running now = " << pt1 << endl;

  return NULL;
}

int main(int argc, char** argv)
{
  cout <<"main()::entry " << endl; 

  for(size_t i=1; i < 3; ++i)
  {
    pthread_t pt1;
    pthread_create(&pt1, NULL, start, NULL);
    cout <<"main::thread created = " << pt1 << " with address = " << &pt1 << endl;
    int j = pthread_join(pt1, NULL);
    cout <<"pthread_join return value for pthread = " << pt1 << " is  " << j << endl;
  }

  cout <<"returning from main()" << endl;
  return 0;
}
 
