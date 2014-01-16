#include <iostream>

using namespace std;

int initializationFunc()
{
  static int i = 0;
  ++i;
  cout <<"initialization func call = " << i << endl;
  return i;
}

int truthValFunc()
{
  static int i = 4;
  static int j = 0;

  cout <<"truth val func call = " << ++j << " and returning " << --i << endl;
  return i;
}

int incrementFunc()
{
  static int i = 0;
  cout <<"increment func call = " << ++i << endl << endl << endl;
  return i;
}

int main()
{
  cout << endl << endl;
  cout << "calling for loop" << endl << endl;
  int i = 0;
  for(initializationFunc(); truthValFunc(); incrementFunc())
  {
    cout <<"executing body of for loop for " << ++i << endl;
  }

  return 0;
}
