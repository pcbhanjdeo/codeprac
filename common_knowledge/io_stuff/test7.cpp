#include <iostream>

int main()
{
  std::cout <<"endl() is a std function that takes a ostream object and returns a reference to the same" << std::endl;
  std::cout <<"the function signature = ostream& endl(ostream& cout)" << std::endl;
  std::cout <<"lets create 5 news lines with std::endl(std::cout) " << std::endl;
  std::endl(std::cout);
  std::endl(std::endl(std::endl(std::endl(std::cout))));

  std::cout <<"5 new lines are created by calling endl(cout)" << std::endl;

  
  return 0;
}
