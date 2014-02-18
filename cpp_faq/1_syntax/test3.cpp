#include <iostream>

using namespace std;

//int a = 1;

int callMain();


int main()
{
  cout <<"calling callMain()" << endl;
  //if(a)
  {
    callMain();
  }
  //else
  {
    cout <<"we have reached the end" << endl;
  }

  return 0;
}

int callMain()
{
  cout <<"calling main()" << endl;
  //--a;
  return main();
}

