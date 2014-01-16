#include <iostream>

using namespace std;

int main()
{
  typedef int points;
  
  //follwoing line is error
  //typedef static int points;
  
  points x = 10;

  cout <<"value of x = " << x << endl;

  return 0;
}

