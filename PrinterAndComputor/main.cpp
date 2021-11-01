#include <iostream>
#include "Computor.h"
#include "Printer.h"

using namespace std;

int main()
{

    Computor Room116_C1 ("Dell", "Inspiron");

        Room116_C1.print ();

    Printer Room116_p1 ("Brother", "HL-L2370DN", "Mono-Lasere", 0);

        Room116_p1.print ();

    return 0;
}
