#include <iostream>

using namespace std;

int main()
{
  static int a = 1;
  cout <<"call no " << a << " to main" << endl;
  a++;
  while(a < 5)
  {
    main();
  }
  return 0;
}


