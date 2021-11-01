#include <iostream>
#include "GettersAndSetters.h"

using namespace std;

int main()
{
    GettersAndSetters objA;

    objA.print ();

    /* cout << "The value of object A is " << objA.getmemberA () << ".\n";
       cout << "\n\tThe date is " << objA.getDate << ".\n"; */

    objA.setmemberB (135);

    return 0;
}
