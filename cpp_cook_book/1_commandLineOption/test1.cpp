#include <iostream>

using namespace std;

int main()
{
  cout <<"we are printing some thing based on -D option = DEBUG" << endl;
  #ifdef DEBUG
  cout <<"this is DEBUG line " << DEBUG << endl;
  #else 
  cout <<"this is not DEBUG" << DEBUG << endl;
  #endif

  return 0;
}
