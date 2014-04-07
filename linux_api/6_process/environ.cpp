#include <iostream>

using namespace std;


extern char** environ;

int main()
{
  char** p = environ;
  for(p = environ; *p != NULL; ++p)
  {
    cout <<"print val = " << *p << endl;
  }

  return 0;
}

