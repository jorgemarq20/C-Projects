#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
    public:
        Player(); // Pass in String arguement
        void throwDie ();
        bool gameOver ();
        void printLocation ();
        void fellDownTunnel (unsigned short);
        void wentUpLift (unsigned short);
        bool winner ();
    private:
        unsigned short locationOnBoard;
        string name;
};

#endif // PLAYER_H
