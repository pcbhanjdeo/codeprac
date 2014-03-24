#include <iostream>

using namespace std;

int main()
{
  cout <<"in main() entry" << endl;
  
  #ifdef DEBUG
    cout <<"this is debug code" << endl;
  #else
    cout <<"this is not debug code" << endl;
  #endif

  return 0;
  
}
