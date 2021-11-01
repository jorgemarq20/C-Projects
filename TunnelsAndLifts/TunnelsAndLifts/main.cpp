#include <iostream>
#include <cstdlib>
#include "Player.h"

using namespace std;

int main()
{
    Player player1,
           player2;

    bool gameOver = false;

    do {
        player1.throwDie ();
        player1.printLocation ();
        if (!gameOver) {
            player1.winner ();
            player2.throwDie ();
            player2.printLocation ();
            player2.winner ();
        }

        system ("Pause");
    }
    while (!gameOver);
    return 0;
}
