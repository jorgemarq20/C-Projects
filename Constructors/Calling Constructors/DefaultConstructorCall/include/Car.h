#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
    public:
        Car ();
        Car (string);
        Car(string, string, int, float);
        void print();
    private:
        string make, model;
        unsigned short year;
        float engineSize;
};

#endif // CAR_H
