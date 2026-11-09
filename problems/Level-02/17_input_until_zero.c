#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        printf("You entered: %d\n", num);

        printf("\nEnter a number: ");
        scanf("%d", &num);
    }

    printf("Program stopped!\n");

    return 0;
}