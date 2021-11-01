#ifndef GETTERSANDSETTERS_H
#define GETTERSANDSETTERS_H
#include <iostream>
#include <string>

using namespace std;

class GettersAndSetters
{
    public:
        GettersAndSetters();
        void setmemberB (int val) {memberA = val;};
        void print ();
        int getmemberA ();
        string getDate ();

    private:
        int memberA;
        string day, month, year;
};

#endif // GETTERSANDSETTERS_H
