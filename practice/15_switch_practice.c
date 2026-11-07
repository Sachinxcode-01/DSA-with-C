#include<stdio.h>

int main()
{
    //Declaration+Initialzatiion
    int choice=2;

    switch(choice)
    {
        case '1':
            printf("Add");
            break;

        case '2':
            printf("Update");
            break;

        case '3':
            printf("Delete");
            break;
        
            default:
                printf("Invalid Choice!");
    }
    return 0;

} // Output = Update