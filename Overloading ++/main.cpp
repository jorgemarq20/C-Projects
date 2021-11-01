#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time present (15, 50);

    do {
        ++present;

        present.print();
        system ("pause");

    }
        while (true);

    return 0;
}
