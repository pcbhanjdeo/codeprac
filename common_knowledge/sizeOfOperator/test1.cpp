#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout <<"size of char       = " << setw(3) << sizeof(char) << endl;
  cout <<"size of int        = " << setw(3) << sizeof(int) << endl;
  cout <<"size of short int  = " << setw(3) << sizeof(short int) << endl;
  cout <<"size of long int   = " << setw(3) << sizeof(long int) << endl;
  cout <<"size of size_t     = " << setw(3) << sizeof(size_t) << endl;
  cout <<"size of long long  = " << setw(3) << sizeof(long long) << endl;
  cout <<"size of int[10]    = " << setw(3) << sizeof(int[10]) << endl;
  cout <<"size of float      = " << setw(3) << sizeof(float) << endl;
  cout <<"size of double     = " << setw(3) << sizeof(double) << endl;

  return 0;

}

