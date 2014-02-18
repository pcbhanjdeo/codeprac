#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
  cout <<"enter main" << endl;
  cout <<"value of argc = " << argc << endl;
  char** p = argv;

  for(int i=0; i < argc; ++i)
  {
    cout <<"value of argv[" << i <<"] = " << *p << endl;
    ++p;
  }
  p = NULL;
  return 0;

}
