/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018

*/

#include "header.h"
/*
    This function does the arthmetic to check the final answer in the 
    prt_steps.cpp file. It provides the correct decimal value and binary. 
*/

void check_product(int mdr, int mq, int size)
{
    cout << "check:" << setw(17) << " " << "binary   decimal" << endl;
    cout << setw(21) << " ";
    prt_bin(mdr, size);
    cout << setw(8) << " " << mdr << endl;
    cout << setw(12) << " " << "x" << setw(8) << " ";
    prt_bin(mq, size); 
    cout << "  x" << setw(5) << " " << mq << endl;
    cout << setw(14) << " " << "---------------" << setw(5) << " " << "------"
         << endl;
    cout << setw(13) << " ";
    mdr *= mq;
    prt_bin(mdr, 16);
    cout << setw(6) << " " << mdr << endl;
}