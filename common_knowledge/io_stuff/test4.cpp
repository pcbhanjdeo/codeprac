#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  int a = 10;
  cout << "with all sets value of a = " << setw(3) << setw(10) << setw(30) << a << endl;
  cout << "with setw(30) value of a = " << setw(30) << a << endl;
  cout << "with setw(10) value of a = " << setw(10) << a << endl;
  cout << "with setw(3)  value of a = " << setw(3) << a << endl;

  cout <<"trying the opposite putting the max value in first and min value at last" << endl;

  cout << "with all sets value of a = " << setw(30) << setw(10) << setw(3) << a << endl;
  cout << "with setw(3)  value of a = " << setw(3) << a << endl;
  cout << "with setw(10) value of a = " << setw(10) << a << endl;
  cout << "with setw(30) value of a = " << setw(30) << a << endl;

  return 0;

}
