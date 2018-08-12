#include "header.h"

/*
    This function simply checks to ensure our numbers from the command line
    are within our needed boundaries for 8-bit arthmetic (0-255). The function
    will tell you which value is incorrect, then exit the program. 
*/

void check_values(int mdr, int mq)
{
     if (mq > 255 || mq < 0)
    {
        cout << "Your first input is invalid. Input ranges are 0 - 255. Try again" << endl << endl;
        exit(1); 
    }
    if (mdr > 255 || mdr < 0)
    {
        cout << "Your second input is invalid. Input ranges are 0 - 255. Try again" << endl << endl;
        exit(1); 
    }
}