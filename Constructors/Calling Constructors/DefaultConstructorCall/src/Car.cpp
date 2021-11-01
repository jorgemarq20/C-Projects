#include "Car.h"
#include <iostream>

#include <string>
using namespace std;

Car::Car () {
    make = model = "Blank";
    year = 0;
    engineSize = 0;
}

Car::Car (string mk) {
    make = mk;
}

Car::Car (string mk, string mdl, int yr, float eng) {
    make = mk;
    model = mdl;
    year = yr;
    engineSize = eng;
}

void Car::print () {
// Print Car Details.
    cout << "\n\tMake: " << make
         << "\n\tModel: " << model
         << "\n\tYear: " << year
         << "\n\tEngine Size: " << engineSize << "\n";
}
