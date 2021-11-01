#ifndef SNAKESANDLADDERS_H
#define SNAKESANDLADDERS_H
#include <string>

using namespace std;

class SnakesAndLadders
{
    public:
        SnakesAndLadders(string, int, int);
        displayDetails ();
        throwDie ();
        goUpLadder ();
        goDownSnake ();
    private:
        string name;
        int xLocation, yLocation, randomNum;
};

#endif // SNAKESANDLADDERS_H
