#include <iostream>
using namespace std;

int main()
{
    int salary = 50000;
    int *newsalary = &salary;
    *newsalary = *newsalary + *newsalary / 10;
    cout << salary;

    return 0;
}