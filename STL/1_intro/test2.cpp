#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iomanip>

using namespace std;
size_t const arr_size = 20;

void printArr(int* p)
{
  endl(cout);
  cout <<"printing array" << endl;

  for(size_t i=0; i < arr_size; ++i)
  {
    cout <<"p[ " << setw(2) << i << " ] = " << p[i] << endl; 
  }

  endl(cout);
}

int main()
{
  cout <<"seeding the rand function" << endl;
  srand(time(NULL));

  int a[arr_size];

  for(size_t i=0; i < arr_size; ++i)
  {
    a[i] = (1+ rand()%arr_size);
  }

  cout <<"printing array after initialization" << endl;
  printArr(a);

  cout <<"calling sort() function on int array" << endl;
  sort(a, a+(sizeof(a)/sizeof(a[0])));

  cout <<"printing array after sorting" << endl;
  printArr(a);

  return 0;
  
}

