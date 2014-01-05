#include <iostream>

using namespace std;

template <typename T>
T maxi(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  maxi(4,4.5);
  return 0;
}

