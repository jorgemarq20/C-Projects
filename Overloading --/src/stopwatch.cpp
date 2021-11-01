#include "stopwatch.h"
#include <iomanip>
#include <iostream>

using namespace std;

stopwatch::stopwatch(unsigned short mins, unsigned short secs)
{
    this->minutes = mins;
    this->seconds = secs;
}

stopwatch stopwatch::operator-- () {
    --seconds;

    if (seconds == -1) {
        seconds == 59;
        minutes--;
    }
}

void stopwatch::print () {
    cout << "\n\tThe current time is " << minutes << ":" << setfill('0') << setw(2) << seconds << "\t\n";
}
