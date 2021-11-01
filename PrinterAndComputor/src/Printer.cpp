#include "Printer.h"

Printer::Printer(string mk, string mdl, string descrip, bool onAndOff) {
    make = mk;
    model = mdl;
    description = descrip;
    status = onAndOff;
}

void Printer::print () {
    cout << "\n\tMake: " << make
         << "\n\tModel: " << mdl
         << "\n\tDescription: " << description
         << "Status: " << status;
}
