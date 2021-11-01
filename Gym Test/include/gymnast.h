#ifndef GYMNAST_H
#define GYMNAST_H
#include <iostream>
#include <string>

using namespace std;

class Gymnast
{
    public:
        Gymnast(string, float, float, float, float, float);
        void printDetails ();
        void calcAndDisplayScore ();
    private:
        string name;
        float score1, score2, score3, score4, score5, overall;
};

#endif // GYMNAST_H
