#include <iostream>
#include "classA.h"
#include "classB.h"

using namespace std;

int main()
{
  cout <<"inside main()" << endl;
  classA* pA = new classA();
  delete pA;
  pA = NULL;

  return 0;
}

