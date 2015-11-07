#include <iostream>
#include <pthread.h>
#include <string>

struct obj
{
  std::string m_msg;
  obj(std::string msg):m_msg(msg) 
  {}
};

struct resObj
{
  std::string m_msg;
  resObj(std::string msg):m_msg(msg)
  { }
};



void* start(void* inStruct)
{
  obj* p = reinterpret_cast<obj*>(inStruct);
  std::cout <<"start::string message = " << p->m_msg << std::endl;

  for(int i=0; i < 1000; ++i)
  {
    std::cout << i << " ";
  }
  std::endl(std::cout);
  return NULL;
}

int main()
{
  std::cout <<"in the main() " << std::endl;
  std::cout <<"main creating a new thread" << std::endl;

  pthread_t t1;
  obj* p = new obj("this is a first string");

  pthread_create(&t1, NULL, start, p);
  pthread_join(t1, NULL);
  pthread_exit(NULL);

  delete p;
  
  return 0;
 }


  
