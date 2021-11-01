#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Employee
{
    public:
        Employee(unsigned short, string, string, long, float, float, float, float);
        print();
    private:
        unsigned short num;
        string name, jobTitle;
        long bankNumber;
        float regularHours, overtimeHours, hours, minutes;
};

#endif // EMPLOYEE_H
