#include <iostream>
#include <climits>

using namespace std;


int main()
{

  size_t i = 5;
  size_t j = 0;
  size_t k = -1;

  cout <<"size of size_t type = " << sizeof(size_t) << endl;
  cout <<"size of long   type = " << sizeof(long) << endl;
  cout <<"value of i=5        = " << i << endl;
  cout <<"value of j=0        = " << j << endl;
  cout <<"value of k=-1       = " << k << endl;
  cout <<"value of ULONG_MAX  = " << ULONG_MAX << endl;
  //cout <<"value of ULONG_MIN  = " << ULONG_MIN << endl;
  

  return 0;
}
