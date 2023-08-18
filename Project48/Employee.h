#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string name;
	string position;
	float salary;

public:
	Employee();
	Employee(string n, string p, float s);

	virtual void show()const;
	virtual float calcSalary()const;

};

