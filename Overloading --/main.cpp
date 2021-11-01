#include <iostream>
#include "stopwatch.h"

using namespace std;

int main()
{
   do {
       stopwatch remainingTime (10, 0);
       --remainingTime;
       remainingTime.print ();
   }
    while (!(remainingTime.getMinutes () == 0 && remainingTime.getSeconds == 0));

    return 0;
}
