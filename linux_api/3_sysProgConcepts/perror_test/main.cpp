#include <iostream>
#include <cstdlib>
#include <errno.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
  cout <<"try to open a non existing file and see what happens" << endl;
  FILE* fl = NULL;
  errno = 0;
  if(NULL == (fl = fopen("bhanj.txt", "r")))
  {
    cout <<"as expected file failed to open" << endl;
    cout <<"errno = " << errno << endl;
    cout <<"perror func = " << endl;
    perror("the error = ");
    cout << endl;

    cout <<"now using strerror()" << endl;
    cout <<"error that occured = " << strerror(errno) << endl;
  }

  return 0;
}
