#include <iostream>

using namespace std;

#define mulErr(a,b) (a*b)
#define mulPro(a,b) ((a)*(b))

int main()
{
  cout <<"mulErr macro = mulErr(a,b) (a*b)" << endl;
  cout <<"mulPro macro = mulPro(a,b) ((a)*(b))" << endl;

  cout <<"value of mulErr(2+4, 3+3) = " << mulErr(2+4,3+3) << endl;
  cout <<"value of mulPro(2+4, 3+3) = " << mulPro(2+4,3+3) << endl;

  return 0;

}

