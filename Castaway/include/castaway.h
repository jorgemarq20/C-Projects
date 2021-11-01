#ifndef CASTAWAY_H
#define CASTAWAY_H


class Castaway
{
    public: // Methods
        void setup ();
        void printStats ();
        void moveNorth ();
        void moveSouth ();
        void moveWest ();
        void moveEast ();
        void drinkWater ();
        void eatBerries ();
        float getEnergy ();
        float getHydration ();
    protected: // Members
        unsigned short drinksRemaining;
        short locationX, locationY;
        float hydration, energy;
};

#endif // CASTAWAY_H
