#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car car1 ,
        car2 ("Honda", "Civic", 19, 1.7),
        car3 ("VW", "Jetta", 20, 1.6),
        car4 ,
        car5 ("Jaguar");

    car1.print();
    car2.print();
    car3.print();
    car4.print();

    return 0;
}
