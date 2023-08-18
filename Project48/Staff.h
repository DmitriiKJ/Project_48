#pragma once
#include "Employee.h"

class Staff : public Employee
{
protected:
	float premium;

public:
	Staff();
	Staff(string n, string p, float s, float pr);

	virtual void show()const override;
	virtual float calcSalary()const override;
};

