#include <iostream>
#include "Player.h"
#include <stdlib.h> // srand, rand
#include <time.h> // time
#include <string>

using namespace std;

Player::Player () {
    locationOnBoard = 1;
    cout << "\n\tEnter your name here: ";
    cin >> name;
}

bool Player::winner () {
    if (locationOnBoard >= 100)
        cout << "\n\t" << name << " has won!!!";
}

void Player::throwDie () {

     // Initialise seed
    srand (time (NULL));

     // Generate a move between 1 and 6.
    short dieThrow = rand() % 6 + 1;

    cout << "\n\t" << name << " - it's your go!";

     // Updates players location
    locationOnBoard += dieThrow;
    cout << "\n\tYou rolled a " << dieThrow << ".";

    switch(locationOnBoard) {

        case 18: locationOnBoard -= 10; fellDownTunnel (10); break;
        case 23: locationOnBoard -= 15; fellDownTunnel (15); break;
        case 35: locationOnBoard -= 20; fellDownTunnel (20); break;
        case 68: locationOnBoard -= 30; fellDownTunnel (30); break;
        case 98: locationOnBoard -= 45; fellDownTunnel (45); break;
        case 5: locationOnBoard += 20; wentUpLift (20); break;
        case 21: case 37: case 81: wentUpLift (10); locationOnBoard += 10; break;
        case 45: locationOnBoard += 23; wentUpLift (23); break;
        case 64: locationOnBoard += 11; wentUpLift (11); break;
    }
}

void Player::printLocation () {
    cout << "\n\t" << name << " is at square " << locationOnBoard << ".\n";
}

void Player::fellDownTunnel (unsigned short numSquaresFell) {
    cout << "\n\tOh no !! " << name << " fell down a tunnel and fell " << numSquaresFell << ".\n";
}

void Player::wentUpLift (unsigned short numSquaresUp) {
    cout << "\n\tYAY !! " << name << " went up a lift and went up " << numSquaresUp << ".\n";
}


