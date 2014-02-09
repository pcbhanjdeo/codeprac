#include <iostream>
#include <string>

using namespace std;


int main()
{

  endl(endl(cout));
  cout <<"creating a string using a default constructor string()" << endl;
  string str1 = string();
  cout <<"string created through default constructor str1 = " << str1 << endl;

  endl(endl(cout));
  cout <<"creating a string by passing a c string to constructor string(const char* a) " << endl;
  string str2("bhanj is god");
  cout <<"string created by passing cstring str2 = " << str2 << endl;

  endl(endl(cout));
  cout <<"creating a string using a copy constructor string(const string& )" << endl;
  string str3(str2);
  cout <<"string created by copy constructor str3 = " << str3 << endl;

  endl(endl(cout));
  cout <<"creating a string using a substring : string(const string& ,size_t pos, size_t len = npos) " << endl;
  string str4(str3, 5, 4);
  string str5(str3, 5);
  cout <<" strings formed using substring str4 = " << str4 << endl << "and str5 = " << str5 << endl;

  endl(endl(cout));
  cout <<"creating a string from sequence of charecters : string(const char* c, size_t n)" << endl;
  string str6("bhanj is the greatest god", 8);
  cout <<"string created using sequence = " << str6 << endl;

  endl(endl(cout));
  cout <<"creating string from fill : string(size_t n, char c)" << endl;
  string str7(10, 'x');
  string str8(10, 42);
  cout <<"string created from fill str7 = " << str7 << endl << " and str8 = " << str8 << endl;

  endl(endl(cout));
  cout <<"creating string through iterators : string(inputIterator first, inputIterator last) " << endl;
  string str9(str2.begin(), str2.begin() + 6);
  cout <<"string created from iterator = " << str9 << endl;

  endl(endl(cout));

  return 0;
  
}

