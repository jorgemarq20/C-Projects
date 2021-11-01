#include "GettersAndSetters.h"
#include <iostream>
#include <string>

using namespace std;


GettersAndSetters::GettersAndSetters() {
        memberA = 5;
        day = "12";
        month = "3";
        year = "2021";
}

void GettersAndSetters::print () {
    cout << "\n\tThe value of member A is " << memberA << ".\n";
    cout << "\n\tThe date is " << objA.getDate << ".\n";
    cout << "\n\tThe value of member B is " << objA.setmemberB << ".\n";
}

int GettersAndSetters::getmemberA () {
    return memberA;
}

string GettersAndSetters::getDate () {
    return day + "/" + month + "/" + year;
}
