/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018

*/
#include "header.h"

/*
    This function ships right one binary digit by mod 2. If there is a remainder
    for the accumulator, it will add 128 to mq, which is essentially passing 1 
    over to it. If carry has a 1 in it, it will add the 1 to the accumulator. 
*/

void shift_right(int *acc, int *mq, int *c)
{
    if (*acc % 2 == 1)
    {
    /*
        When we shift, we're simply dividing decimal value by 2. So that's how
        this function works. It also checks to see if there's anything in the
        carry. If there is, we add 128 to acc and reset the carry to 0.
        Additionally, if acc % 2 == 1, we know we need to add 128 to mq. This
        is adding the 1 from 2^0 power in acc to 2^8 in mq.
    */
        *acc /= 2;
        if (*c == 1)
        {
            *acc += 128;
            *c = 0;
        }
        *mq /=2;
        *mq += 128;
    }
    else if (*acc % 2 == 0)
    {
    /*
        If acc % 2 == 0, we know there's a 0 in the lsb. So we do not need to 
        add a 1 in the 2^8 bit in the mq. Therefore, we do the same algorithm
        above in regards to checking the carry and dividing everything by 2. 
    */
        *acc /= 2;
        if (*c == 1)
        {
            *acc += 128;
            *c = 0;
        }
        *mq /= 2;
    }
}