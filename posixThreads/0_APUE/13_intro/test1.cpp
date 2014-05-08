#include <iostream>
#include <pthread.h>
#include <string>

using namespace std;

typedef struct data_tag
{
  int m_i;
  string m_str;
  data_tag(int i, string str):m_i(i),m_str(str)
} data_t;
  

//void* start(void* obj)
//{
  

int main()
{
  data_t a(10, string("this is a test"));
  cout <<"value of a = " << a.m_i << "  " << a.m_str << endl;
  return 0;
}
