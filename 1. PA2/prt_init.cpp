/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018

*/

#include "header.h"

/*
    This function prints the first part of the multiplication process before 
    step 1. mdr and mq come from the command line. 
*/

void prt_init(int mdr, int mq,int size)
{
    cout << "\n\nc and acc set to 0" << endl << "mq set to multiplier    = " 
         << mq << " decimal and ";
    prt_bin(mq, size);
    cout << " binary." << endl;

    cout << "mdr set to multiplicand = " << mdr << " decimal and ";
    prt_bin(mdr, size);
    cout << " binary." << endl;
    cout << "---------------------------------------------------";
    cout << endl;

}