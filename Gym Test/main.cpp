#include <iostream>
#include "gymnast.h"
#include <string>

using namespace std;

int main()
{
    Gymnast gymnast1 ("James", 7.5, 3.5, 8.0, 6.5, 9.0),
            gymnast2 ("Josephine", 8.5, 4.5, 6.0, 3.5, 10.0);

    gymnast1.printDetails ();
    gymnast1.calcAndDisplayScore();
    gymnast2.printDetails () {
           cout << "\n\tGymnast: " << name;
           cout << "\n\tScore 1: " << score1;
           cout << "\n\tScore 2: " << score2;
           cout << "\n\tScore 3: " << score3;
           cout << "\n\tScore 4: " << score4;
           cout << "\n\tScore 5: " << score5 << "\n";
    };
    gymnast2.calcAndDisplayScore();

    return 0;
}
