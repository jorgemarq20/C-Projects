#ifndef DISK_H
#define DISK_H


class disk
{
    public:
        void initialise ();
        void print ();
    private:
        int capacity, freeSpace, usedSpace;
};

#endif // DISK_H
