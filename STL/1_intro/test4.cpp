#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string s1("bhanj is god");
  string s2(s1.begin(), s1.begin() + 5);

  cout <<"value of s1 = " << s1 << endl;
  cout <<"value of s2 = " << s2 << endl;

  vector<int> vec(8,10);

  cout <<"print the vector" << endl;

  for(size_t i = 0; i < vec.size(); ++i)
  {
    cout <<"vec[" << i << "] = " << vec[i] << endl;
  }

  endl(cout);

  string s3(vec.begin(), vec.begin() + 5);
  cout <<"value of s3 = " << s3 << endl;

  return 0;
}
