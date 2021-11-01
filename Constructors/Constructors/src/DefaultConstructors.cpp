#include "DefaultConstructors.h"

DefaultConstructors::DefaultConstructors()
{
    cout << "\n\tCreated an instance of my class...\n";
    x = 1;
    y = 5;
}

DefaultConstructors :: DefaultConstructors (int)
{
    x = y = num1;
}

DefaultConstructors::DefaultConstructors (int,int)
{
    x = num1;
    y = num2;
}
