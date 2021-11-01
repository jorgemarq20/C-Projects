#include <iostream>
#include "castaway.h"

using namespace std;

int main()
{
    Castaway Tom ();
    char choice;

      Tom.setup ();

    do {
        cout << "\n\tN: Move North";
        cout << "\n\tS: Move South";
        cout << "\n\tW: Move West";
        cout << "\n\tE: Move East";
        cout << "\n\tD: Have Drink";
        cout << "\n\tB: Eat Berries";
        cout << "\n";
        cin >> choice;

        switch (choice) {
                        case 'N': case 'n':Tom.moveNorth (); break;
                        case 'S': case 's':Tom.moveSouth (); break;
                        case 'W': case 'w':Tom.moveWest (); break;
                        case 'E': case 'e':Tom.moveEast (); break;
                        case 'D': case 'd':Tom.drinkWater (); break;
                        case 'B': case 'b':Tom.eatBerries (); break;
                        default: cout << "\n\tInvalid ommand.\n";
                        }

                Tom.printStats ();

        } while (Tom.getEnergy() > 0 && Tom.getHydration ());

    return 0;
}
