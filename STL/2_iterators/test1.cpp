#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <algorithm> 

#define SIZE 10

using namespace std;

void printList(list<int>& a)
{
  size_t i = 0;
  for(list<int>::iterator it = a.begin(); it != a.end(); ++it)
  {
    cout <<"a[ " << i << " ] = " << *it << endl;
    ++i;
  }
}

int main()
{
  list<int> a(SIZE, 0);

  srand(time(NULL));

  cout <<"fill the list" << endl;
  for(list<int>::iterator it = a.begin(); it != a.end(); ++it)
  {
     *it = 1 + rand()%10;
  }

  cout <<"print the list" << endl;
  printList(a);

  cout <<"using sort algo on a list" << endl;
  //a.sort(); // works fine

  sort(a.begin(), a.end()); //throws random error.

  cout <<"print list after sort" << endl;
  printList(a);

  return 0;

}

