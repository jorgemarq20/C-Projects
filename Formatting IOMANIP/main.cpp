#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{

    Employee emp1 (1234, "Mary Smith", "Floor Manager", 1234567890, 40, 13.4, 12.3, 6.6);

    emp1.print();

    return 0;
}
