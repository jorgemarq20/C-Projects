#include <iostream>
#include "castaway.h"

using namespace std;

void Castaway::setup () {
    string name = "Tom";
    int xLocation = yLocation = 1;
    int energy = hydration = 100;

}

void Castaway::printStats ()
{
    cout << "Tom is at position (" << locationX << "," << locationY << ").\n";
    cout << "Tom has " << drinksRemaining << " drinks remaining.\n";
    cout << "Tom's energy is at " << energy << "%\n";
    cout << "Tom's hydration is at " << hydration << "%\n";
}

void Castaway::moveNorth ()
{
    cout << "\nHow many positions: ";
    cin >> numPositions;
    locationY += numPositions;
    if (locationY > 10) {
            locationY = 10;
            energy *= .9;
     }
        energy *= .9;
        hydration *= .9;
}

void Castaway:: moveSouth ()
{
    cout << "\nHow many positions: ";
    cin >> numPositions;
    locationY -= numPositions;
     if (locationY > 10) {
            energy *= .9;
            locationY = 10;
     }
        energy *= .9;
        hydration *= .9;
}

void Castaway:: moveWest ()
{
    cout << "\nHow many positions: ";
    cin >> numPositions;
    locationX -= numPositions;
     if (locationX > 10) {
            energy *= .9;
            locationX = 10;
     }
        energy *= .9;
        hydration *= .9;
}

void Castaway:: moveEast ()
{
    cout << "\nHow many positions: ";
    cin >> numPositions;
    locationX += numPositions;
    if (locationX > 10) {
            energy *= .9;
            locationX = 10;
     }
        energy *= .9;
        hydration *= .9;
}

void Castaway:: drinkWater ()
{
    if (drinkWater == 0)
        cout << "Oh no !? Your out of water !!"
        drinkWater = 0;
    else
        drinkWater --;
}

void Castaway:: eatBerries () // If the Castaway crosses berries, he/she can eat those berries and energy will increase energy by .9%
{
    if (locationX == 3 || locationX == 6 || locationX == 8 && locationY == 10) {
        cout << "\n\tMmmmmmmmm yummy berries !!";
        energy *= 1.1;
    if (energy >= 100) {
         cout << "Your energy is full !!";
         energy == 100;
        }
    }
    else
        cout << "\n\tTom, there are no berries in this location !!";
}

float Castaway::getEnergy () {
    return energy;
}

float Castaway::getHydration () {
    return hydration;
}




