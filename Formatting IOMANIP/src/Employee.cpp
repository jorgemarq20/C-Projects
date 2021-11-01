#include "Employee.h"
#include <string>
#include <iomanip>

Employee::Employee(unsigned short empNum, string empName, string empTitle, long bankAcc, float reg, float overtime, float hours, float minutes) {

    this->num = empNum;
    this->name = empName;
    this->jobTitle = empTitle;
    this->bankNumber = bankAcc;
    this->regularHours = reg;
    this->overtimeHours = overtime;
    hours = hours;
    minutes = minutes;

}

print() {
    const float regularPay = 12.45;
    const float overtimePay = regularPay * 1.5;

    cout << "Payslip was printed at " << hours << ":" << setw(2) << setfill ('0') << minutes ".\n"
    cout << left << setw(20) << "Employee Number: " << num << ".\n";
    cout << setw(20) << "Name: " << name << ".\n";
    cout << setw(20) << "Job Title: " << jobTitle << ".\n";
    cout << setw(20) << "Bank AC Number" << bankNumber << ".\n";
    cout << setw(20) << "Payment: " << "$" << fixed << setpercision (2) << pay << ".\n";
}
