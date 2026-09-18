#include <iostream>
using namespace std;

void updateSalary(float &salary)
{
  salary = salary + (salary * 10 / 100);
}

void printSalary(float salary)
{
  cout << "Salary: " << salary << endl;
}

int main()
{
  float salary = 50000;

  updateSalary(salary);
  printSalary(salary);

  return 0;
}