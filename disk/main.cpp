#include <iostream>

using namespace std;

int main()
{
    disk desktopDisk;

    desktopDisk.initialise ();
    desktopDisk.print ();
    desktopDisk.store ();
    desktopDisk.print ();
    desktopDisk.deleteFile ();
    desktopDisk.print ();

    return 0;
}
