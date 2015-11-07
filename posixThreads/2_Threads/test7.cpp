#include <iostream>
#include <pthread.h>
#include <string>

struct obj
{
  std::string m_msg;
  obj(std::string msg):m_msg(msg) {}
};

void* start(void* input)
{
  obj* p = reinterpret_cast<obj*>(input);
  std::cout <<"start value of msg = " << p->m_msg << std::endl;
  p->m_msg = "this is return value";
  void* n = reinterpret_cast<void*>(p);
  std::cout <<"returning from start with message this is return value" << std::endl;

  return n;
}

int main()
{
  std::cout <<"main entry" << std::endl;
  pthread_t t1;
  void* p1;

  obj* p = new obj("this is input value");
  
  pthread_create(&t1, NULL, start, p);
  pthread_join(t1, &p1);

  std::cout <<"main after pthread join" << std::endl;

  obj* p2 = reinterpret_cast<obj*>(p1);

  std::cout <<"main return value from pthread_join = " << p2->m_msg << std::endl;

  return 0;

}
  
 
