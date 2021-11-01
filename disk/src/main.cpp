#include <iostream>
#include "disk.h"

using namespace std;

int main()
{
    disk desktopdisk; // Creates object called desktopdisk which is a disk.
                     // desktopdisk is an instance of the disk class.

    desktopdisk.initialise ();
    desktopdisk.print ();
    return 0;
};
