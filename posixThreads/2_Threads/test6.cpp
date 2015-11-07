#include <iostream>
#include <pthread.h>
#include <ctime>
#include <fstream>
#include <cstdlib>


using namespace std;

void* start(void* input)
{
  std::cout <<"inside start function" << endl;

  //open a file.
  std::ofstream os("thread_test6.txt", std::ofstream::out);
  
  //get curr time:
  struct tm tm;
  char s[20];
  char intVal[20];
  
  std::cout <<"start about to start for loop" << std::endl;
  for(int i=0; i < 1000; ++i)
  {
     sprintf(intVal, "%d", i);
     strftime(s, 20, "%F %H:%M:%S", &tm);
     os << "print " << intVal << s << std::endl;
  }

  std::cout <<"start:: finished for loop" << std::endl;
  os.close();
  return NULL;
}


int main()
{
  cout <<"in main func" << endl;
  
  //open a file
  std::ofstream os("main_test6.txt", std::ofstream::out);
  
  //get curr time
  struct tm tm;
  char s[20];
  char intVal[20];

  //create a thread.
  pthread_t t1;
  pthread_create(&t1, NULL, start, NULL);
  
  strftime(s, 20, "%F %H:%M:%S", &tm);
 // std::cout <<"main just crossed pthread_join() time = " << s << std::endl;

  //run its own for loop
  std::cout <<"main about to call for loop" << std::endl;
  for(int i=1; i < 1000; ++i)
  {
    sprintf(intVal, "%d", i);
    strftime(s, 20, "%F %H:%M:%S", &tm);
    os <<"print " << intVal << s << std::endl;
  }

    
  os.close();

  pthread_join(t1, NULL);
  strftime(s, 20, "%F %H:%M:%S", &tm);
  std::cout <<"main finsihed for loop time = " << s << std::endl;

  return 0;
}



