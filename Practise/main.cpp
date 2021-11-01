#include <iostream>
#include "SnakesAndLadders.h"
#include <cstdlib>

using namespace std;

int main()
{

    SnakesAndLadders player1("Jorge", 1, 1),
                     player2("Maura", 2, 3);

    player1.displayDetails();
    player2.displayDetails();

    return 0;
}
