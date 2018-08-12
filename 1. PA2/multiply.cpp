/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018

    Description:
    This program takes command line arguments for binary multiplication. 
    It will demonstrate how hardware multiplies bits by printing the various 
    steps hardware takes to the terminal for 8-bit x 8-bit multiplication.
    
    
    NOTE: This program is modular, so ensure you have prt_init.cpp, header.h, 
    check_product.cpp, shift_right.cpp, prt_steps.cpp, prt_bin.cpp, and 
    checkValue.cpp. All function descriptions can be found in the individual 
    files.

*/

#include "header.h"

int main(int argc, char *argv[])
{
    int acc = 0, c = 0, mq = atoi(argv[2]), mdr = atoi(argv[1]), size = 8;
/*
    To be used for the binary representation.
*/
    int mqBinary[8] = {0}, mdrBinary[8] = {0};
/*
    Check_values checks to ensure our numbers fit our parameter (0 - 255)
*/
    check_values(mdr, mq);
    
/*
    lines 37 - 38 print the header of the program output.
*/
    cout << "\n\nmultiplicand: " << mdr << endl << "multiplier:   " << mq;
    prt_init(mdr, mq, size);

/*
    These functions print the individual steps and the last function call
    checks the answer to compare with step 8. 
*/
    prt_steps(c, acc, mdr, mq, size);
    check_product(mdr, mq, size);

    return 0;
}
