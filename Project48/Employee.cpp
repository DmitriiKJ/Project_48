#include "Employee.h"

Employee::Employee()
{
    name = "NoName";
    position = "Empty";
    salary = 0;
}

Employee::Employee(string n, string p, float s)
{
    name = n;
    position = p;
    salary = s;
}

void Employee::show() const
{
    cout << name << endl;
    cout << position << endl;
    cout << salary << endl;
}

float Employee::calcSalary() const
{
    return salary;
}
