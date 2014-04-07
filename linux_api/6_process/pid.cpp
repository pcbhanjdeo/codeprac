#include <iostream>
//#include <unistd.h>

using namespace std;

int main()
{
  cout <<"get the pid of this process = " << getpid() << endl;
  cout <<"get ppid of this process    = " << getppid() << endl;
  
  cout <<"2nd call to the pid" << endl; 

  cout <<"get the pid2 of this process = " << getpid() << endl;
  cout <<"get ppid2 of this process    = " << getppid() << endl;

  return 0;
} 

