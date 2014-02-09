#include <iostream>
#include <string>

using namespace std;

class employee
{
  public:
  employee(const string& name, const int& id, const double& salary);
  string getName();
  void promote(const double& salary) const;

  private:
  string m_name;
  int    m_id;
  mutable double m_salary;
};

employee::employee(const string& name, const int& id, const double& salary) : m_name(name), m_id(id), m_salary(salary)
{
  cout <<"in employee constructor" << endl;
}

string employee::getName()
{
  return m_name;
}

void employee::promote(const double& salary) const
{
  cout <<"employee::promote initial salary = " << m_salary << endl;
  m_salary = salary;
  cout <<"employee::promote salary after promotion = " << m_salary << endl;
}

int main()
{
  const employee emp("bhanj", 123, 62000);
  cout <<"calling promote for a const object" << endl;
  emp.promote(90000);

  return 0;
}

