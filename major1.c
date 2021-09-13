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

        scanf("%d", &choice);

        while((choice < 1) || (choice > 5))
        {
            printf("Error: invalid option. Please try again\n");
            printf("Enter the menu option for the operation to perform:\n");
            printf("(1) Count Leading Zeroes\n");
            printf("(2) Endian Swap\n");
            printf("(3) Rotate-right\n");
            printf("(4) Parity\n");
            printf("(5) Exit\n");

            scanf("%d", &choice);
        }

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
