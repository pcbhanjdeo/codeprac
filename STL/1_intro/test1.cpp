#include <iostream>
#include <cassert>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
  char cstr[] = "bhanj is god";
  cout <<"input c string = " << cstr << endl;

  string stlStr("bhanj is god");
  cout <<"input stlStr = " << stlStr << endl;

  cout <<"using reverse algo on cstr" << endl;
  reverse(&cstr[0],&cstr[strlen(cstr)]);
  cout <<"cstring after reverse = " << cstr << endl;
  assert(string(cstr) == string("dog si jnahb"));

  cout <<"using reverse algo on stlStr" << endl;
  reverse(stlStr.begin(), stlStr.end());
  cout <<"stlStr after reverse = " << stlStr << endl;
  assert(stlStr == "dog si jnahb");

  return 0;  
  
}
