#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a)
{
  vector<int>::iterator it;

  for(it = a.begin(); it != a.end(); ++it)
  {
     cout <<"  " << *it;
  }
  endl(cout);
}

int main()
{
  vector<int> a(5, 10);
  cout <<"print the vector" << endl;
  print(a);

  endl(cout);

  cout << "insert at the first location" << endl;
  vector<int>::iterator it = a.insert(a.begin(), 12);
  print(a);

  endl(cout);

  cout <<"insert at what ever iter we have got" << endl;
  it = a.insert(it,13);
  print(a);

  endl(cout);

  cout <<"insert multiple objects into the vector" << endl;
  a.insert(it, 3, 14);
  print(a);

  endl(cout);

  cout <<"insert multiple objects into vector again" << endl;
  a.insert(a.begin(), 2, 15);
  print(a);  

  endl(cout);
  
  return 0;
}
