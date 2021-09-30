
//Name:Brandon Castro
//This section of code is my contribution to the project in this class, no other function has my contribution other than the main file and the makefile
#include "major1.h"

void parity(unsigned long int value)
{
    unsigned long int start = value;//used to print out givin value after parity is calculated
    int count = 0;//used for counting of bits equal to 1

    //loop to cycle through each bit
    for(int i = 0; i < 32; i++)
    {
        if(value & 1 == 1)
            count++;//increments count by 1 if current bit is equal to 1
        value >>= 1;//shifts right by one bit
    }

    int result = count % 2;//finds parity of number

    //prints parity of given number
    switch(result)
    {
        case 0:
            printf("Parity of %lu is %d\n",start, result);
            break;
        case 1:
            printf("Parity of %lu is %d\n", start, result);
            break;
        default:
            printf("ERROR");
            break;
    }

}
