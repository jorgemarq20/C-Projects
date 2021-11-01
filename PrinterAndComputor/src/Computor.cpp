#include "Computor.h"
#include <string>
#include <iostream>

using namespace std;

Computor::Computor(string mk, string mdl) {
    make = mk;
    model = mdl;
}

void Computor::print () {
    cout << "\n\tMake: " << make
         << "\n\tModel " << model;
}
