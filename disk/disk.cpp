#include "disk.h"
#include <iostream>

using namespace std;

void disk::initialise () {
        capacity = freeSpace = 100000;
        usedSpace = 0;
}

void disk::print () {
        cout << "Capacity: " << capacity << " MBs\n"
             << "Free Space: " << freeSpace << " MBs\n"
             << "Used Space: " << usedSpace << " MBs\n";

}

void disk::store () {
    int fileSize;

    cout << "\nEnter the size of the file: \n";
    cin << fileSize;

    usedSpace += fileSize;
    freeSpace -= fileSize;
}

void disk::deleteFile () {
     int fileSize;

   cout << "/n/tEnter the size of the file to be deleted: ";
   cin << fileSize

   usedSpace -= fileSize;
   freeSpace += fileSize;
}


