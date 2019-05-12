#include "header.h"
#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 60

void printProgress (double volume,double percentage)
{  
    printf("\r%20.2lf%%", (percentage/volume)*100);
    fflush (stdout);
}