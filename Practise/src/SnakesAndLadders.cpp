#include "SnakesAndLadders.h"
#include <string>
#include <iostream>

SnakesAndLadders::SnakesAndLadders(string playerName, int x, int y) {
    name = playerName;
    xLocation = x;
    yLocation = y;

}

SnakesAndLadders::displayDetails () {
    cout << "\n\t" << name << ", you are at position " << xLocation << "," << yLocation << ".\n";


}

SnakesAndLadders::throwDie () {



    cout << name << ", you threw a " << randomNum << ".\n";



}

void SnakesAndLadders::goUpLadder () {

}

void SnakesAndLadders::goDownSnake () {

}
