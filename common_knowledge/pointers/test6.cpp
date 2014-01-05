#include <iostream>

using namespace std;

class vehicle
{
  public:
  vehicle();
  virtual ~vehicle();
};


vehicle::vehicle()
{
  cout <<"in vehicle constructor" << endl;
}

vehicle::~vehicle()
{
  cout <<"in vehicle destrucror" << endl;
}

class car:public vehicle
{
  public:
  car();
  ~car();
};

car::car()
{
  cout <<"in car constructor" << endl;
}

car::~car()
{
  cout <<"in car destructor" << endl;
}

int main()
{
  cout <<"main entry" << endl;

  car*         pCar = new car();
  vehicle*     pVeh = NULL;

  pVeh = pCar; //legal, since car is a type of vehicle.
  delete pVeh;

  cout <<"main creating a new pointer" << endl;

  pCar = new car();
  // invalid conversion from ‘car**’ to ‘vehicle**’
  vehicle** pVehRef = &pCar; //illegal  

  return 0;
}
