#ifndef DISK_H
#define DISK_H

class disk
{
public: // Methods
    void initialise ();
    void print ();
    void deleteFile ();
private: // Members
    int capacity, usedSpace, freeSpace;
};

#endif // DISK_H
