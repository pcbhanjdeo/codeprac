#include <iostream>
#include "bvec.h"

using namespace std;

int main()
{
  bvec<int> a;
  cout << "main::puhing values" << endl;

  for(size_t i= 0; i < 10; ++ i)
  {
    a.push_back(i);
  }

  cout << "printing the vector" << endl;
  for(size_t i=0; i < 10; ++i)
  {
    cout <<"a[ " << i << "] = " << a[i] << endl;
  }

  bvec<int> b(a);
  cout << "printing the b vector" << endl;
  for(size_t i=0; i < 10; ++i)
  {
    cout <<"b[ " << i << "] = " << b[i] << endl;
  }

  try
  {
     b[13] = 10;
  }
  catch(exception& e)
  {
    cout <<"reason for this error is = " << e.what() << endl;
  }

  bvec<int> c(4);
  cout <<"c size of c = " << c.size() << " capacity of c = " << c.capacity() << endl;

  for(size_t i= 0; i < 10; ++ i)
  {
    c.push_back(i);
  }

  for(size_t i=0; i < 10; ++i)
  {
    cout <<"c[ " << i << "] = " << b[i] << endl;
  }

  cout <<"c size of c = " << c.size() << " capacity of c = " << c.capacity() << endl;


  return 0;
}
