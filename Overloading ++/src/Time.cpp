#include "Time.h"
#include <iostream>
// #include <iomanip>

using namespace std;

Time::Time(unsigned short mins, unsigned short secs) {
    this->minutes = mins;
    this->seconds = secs;

}

void Time::print () {//                                           setfill('0') << setw(2) <<
    cout << "\n\tThe current time is " << this->minutes << ":" <<                            this->seconds << ".\n";
}

Time Time::operator++ () {
    // Overloading the ++ operator - define how it is to behave if it has a Time object as an operand

    seconds--;
    if (seconds == 60) {
        seconds = 0;
        minutes ++;
    }
}
