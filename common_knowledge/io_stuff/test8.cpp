#include <iostream>
//#include <ifstream>

using namespace std;

int main()
{
  ifstream inputFile; //("myFile.txt");
  inputFile.open("myFile.txt",ifstream::in);

  if(inputFile.fail())
  {
    cout <<"failed to open myFile.txt as it dosent exist" << endl;
  }
  else
  {
     cout <<"some thing is wrong here" << endl;
  }

  return 0;
}
