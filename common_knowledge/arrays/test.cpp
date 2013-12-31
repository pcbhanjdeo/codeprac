#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class a
{
  public:
  char name[10];
  void printName();
};

void a::printName()
{
  cout <<"name in object : " << name << endl;
}

int main()
{
   a a1;
   strcpy(a1.name, "bhanj");
   cout << "name stored in a1 = ";
   a1.printName();

   a a2;
   strcpy(a2.name, "deo");

   cout << "name stored in a2 = ";
   a2.printName();

   a2 = a1;

   cout <<"we did a2 = a1 " << endl;

   cout << "name stored in a1 = ";
   a1.printName();

    cout << "name stored in a2 = ";
    a2.printName();

   return 0;
}

