/*
    Damion Anderson
    CPSC2310 - section 001
    PA2
    16 July, 2018
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;


void check_values(int mdr, int mq);
void prt_bin( int value, int length);
void prt_init(int mq, int mdr,int size);
void prt_steps(int c, int acc, int mdr, int mq, int size);
void shift_right(int *acc, int *mq, int *c);
void check_product(int mdr, int mq, int size);