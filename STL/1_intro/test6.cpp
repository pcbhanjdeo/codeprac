#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>& a)
{
  endl(cout);
  vector<int>::iterator iter;
  for(iter = a.begin(); iter != a.end(); ++iter)
  {
    cout <<"  " << *iter;
  }

  endl(cout);
}

int main()
{
  vector<int> a;
  for(size_t i=0; i < 10; ++i)
  {
    a.push_back(i);
  }

  print(a);

  cout <<"using erase on 5th element" << endl;
  vector<int>::iterator it = a.erase(a.begin()+5);
  cout <<"vector after erasing the element" << endl;
  print(a);

  cout <<"iter that is returned after erase = " << *it << endl;

  cout << "erasing 3 rd element to 5th element" << endl;
  it = a.erase(a.begin() + 2, a.begin() +5);
  print(a);
  cout <<"iter that is returned after range erase = " << *it << endl;

  return 0;
}
