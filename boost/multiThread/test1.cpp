#include <iostream>
#include <boost/thread/thread.hpp>
#include <boost/thread/xtime.hpp> 

void thread_func()
{
  std::cout <<"in thread func, now print 1000 numbers" << std::endl;
  for(int i=0; i < 1000; ++i)
  {
     std::cout << i <<", ";
  }
  std::cout << "1000" << std::endl;

  std::cout << "returning to main" << std::endl;

}

int main()
{
  std::cout <<"entered main" << std::endl;
  
  boost::thread myThread(&thread_func);

  boost::thread::yield();
  //myThread.join();

  std::cout <<"main func ends" << std::endl;

  return 0;
}

