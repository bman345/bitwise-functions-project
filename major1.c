#include "major1.h"


int main()
{
    int choice;

    //menu prompt
    while(choice != 5)
    {
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) Exit\n");
        printf("-->");

        scanf("%d", &choice);

        while((choice < 1) || (choice > 5))
        {
            printf("Error: invalid option. Please try again\n");
            printf("Enter the menu option for the operation to perform:\n");
            printf("(1) Count Leading Zeroes\n");
            printf("(2) Endian Swap\n");
            printf("(3) Rotate-right\n");
            printf("(4) Parity\n");
            printf("(5) Exit\n\n");
            printf("-->");

            scanf("%d", &choice);
        }

        unsigned long int temp;//used for input for function use
        unsigned long int max = 4294967295;//max value for input
        int min = 1;//min value for input
        switch(choice)
        {
            case 1:
                //counting leading zeros function
                break;
            case 2:
                //Endian swap function
                break;
            case 3:
                //Rotate-right function
                break;
            case 4:
                //Parity function
                printf("Enter a 32 bit number(>=1 and <=4294967295, inclusively):");
                scanf("%lu", &temp);
                //check for correct number
                if((temp > max) || (temp < min))
                {
                    while((temp > max) || (temp < min))
                    {
                        printf("Enter a 32 bit number(>=1 and <=4294967295, inclusively):");
                        scanf("%lu", &temp);
                    }
                }
                parity(temp);
                break;
            case 5:
                //exit choice
                printf("Program terminating. Goodbye....\n");
                return(0);
                break;
            default:
                printf("ERROR");
                break;
        }
    }

    return 0;
}
