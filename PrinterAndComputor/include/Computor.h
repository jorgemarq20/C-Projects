#ifndef COMPUTOR_H
#define COMPUTOR_H
#include <string>

using namespace std;

class Computor
{
    public:
        Computor(string, string);
        void print ();

    private:
        string make, model;
};

#endif // COMPUTOR_H
