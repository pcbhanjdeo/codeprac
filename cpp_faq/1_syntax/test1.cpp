#include <iostream>

using namespace std;

int main(int a, int b, int c)
{
  cout <<"in over loaded main" << endl;
  return a+b+c;
}

int main()
{
  cout <<"in main" << endl;
  cout <<"calling over loaded main()" << endl;

  return 0;

}
