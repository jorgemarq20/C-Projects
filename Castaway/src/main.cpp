#include <iostream>
#include "castaway.h"

using namespace std;

int main()
{
    Castaway Tom;

    Tom.setup (1,1,10,100,100);
    Tom.printStats ();

    return 0;
}
