#include "gymnast.h"
#include <iostream>
#include <string>

using namespace std;

Gymnast::Gymnast (string firstName, float firstScore, float secondScore, float thirdScore, float fourthScore, float fifthScore) {
    name = firstName;
    score1 = firstScore;
    score2 = secondScore;
    score3 = thirdScore;
    score4 = fourthScore;
    score5 = fifthScore;
}

 //   This method displays the gymnast's information - This is done with in the gymnast.h file, but can also be done here.
 /*   void Gymnast::printDetails () {
        cout << "\n\tGymnast: " << name;
        cout << "\n\tScore 1: " << score1;
        cout << "\n\tScore 2: " << score2;
        cout << "\n\tScore 3: " << score3;
        cout << "\n\tScore 4: " << score4;
        cout << "\n\tScore 5: " << score5 << "\n";

    } */

void Gymnast::calcAndDisplayScore () {
    float maxScore = score1, minScore = score1;

        if (score2 < minScore)
            minScore = score2;
        else if (score2 > maxScore)
            maxScore = score2;
        if (score3 < minScore)
            minScore = score3;
        else if (score3 > maxScore)
            maxScore = score3;
            if (score4 < minScore)
            minScore = score4;
        else if (score5 > maxScore)
            maxScore = score5;

    float average = (score1 + score2 + score3 + score4 + score5 - maxScore - minScore) / 3;

    cout << "\n\n" << name << "'s average score is " << average << ".";

}
