/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018
*/
#include "header.h"

/*
    This function was provided by Dr. Lowe. It takes decimal input and outputs
     binary.
*/

void prt_bin(int value, int length)
{
    int i;
    for( i=(length-1); i>=0; i--){
        if((value>>i)&1) 
            putchar('1'); 
        else 
            putchar('0');
    }
}