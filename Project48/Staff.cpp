#include "Staff.h"

Staff::Staff()
{
    premium = 0;
}

Staff::Staff(string n, string p, float s, float pr): Employee(n, p, s)
{
    premium = pr;
}

void Staff::show() const
{
    cout << name << endl;
    cout << position << endl;
    cout << salary << endl;
    cout << premium << endl;
}

float Staff::calcSalary() const
{
    return salary + premium;
}
