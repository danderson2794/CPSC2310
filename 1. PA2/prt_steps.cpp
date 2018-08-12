/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018

*/

#include "header.h"

/* 
    This function immulates the steps for 8-bit x 8-bit multiplication.
*/

void prt_steps(int c, int acc, int mdr, int mq, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << endl << "step " << i + 1 << ":   " << c << " ";
        prt_bin(acc, size);
        cout << " ";
        prt_bin(mq, size);
        cout << endl << "          " << "+ ";

    /*
        By mod-ing by 2, I can find out if the last binary digit is a 1 or 0. 
        If it is a 1, I know I am going to add my mdr. 
    */
        if (mq % 2 == 1)
        {
            prt_bin(mdr, size);
            cout << setw(8) << " " << "^ add based on lsb=1" << endl;
            cout << setw(10) << " " << "----------" << endl;
            //This does the shifting. 
            acc += mdr; 
            
            
            if (acc > 255)
            {
            //If accumulator is over 255, it's going to add 1 to the carry. 
                c = 1;
                acc -= 255;
            }

            cout << setw(10) << " " << c <<  " ";
            prt_bin(acc, size);
            cout << " ";
            prt_bin(mq, size);
            cout << endl << setw(7) << " " << ">>" << setw(21) <<  " " 
                 << "shift right" << endl;
            shift_right(&acc, &mq, &c);
            cout << setw(10) << " " << c << " ";
            prt_bin(acc, size);
            cout << " ";
            prt_bin(mq, size);
            cout << endl 
                 << "---------------------------------------------------" 
                 << endl;
        }

    /*
        This else if statement checks to see if the binary ends in a 0. 
        If it does, it will not add to the accumulator and will print 0 to be 
        added.
    */

        else if (mq % 2 == 0)
        {
            prt_bin(0, size);
            cout << setw(8) << " " << "^ no add based on lsb=0" << endl;
            cout << setw(10) << " " << "----------" << endl;
            cout << setw(10) << " " << c <<  " ";
            prt_bin(acc, size);
            cout << " ";
            prt_bin(mq, size);
            cout << endl << "       " << ">>" << "                     " 
                 << "shift right" << endl;
            
            //I pass the values by reference in order to shift right effeciently
            shift_right(&acc, &mq, &c);
            cout << "          " << c << " ";
            prt_bin(acc, size);
            cout << " ";
            prt_bin(mq, size);
            cout << endl;
            cout << "---------------------------------------------------" 
                 << endl;

        }
    }
}