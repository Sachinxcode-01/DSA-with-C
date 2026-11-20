#include<stdio.h>

int sum(int n)
{
    //Base Condition
    if (n==0)
    {
        return 0;
    }

    //Recurise Call
    return n*(n-1);
}

//Main Function
int main()
{
    int nor;

    printf("Enter the Nor : ");
    scanf("%d",&nor);

    if(nor<0)
    {
        printf("Please enter non-zero Nor!");

    }
    else
    {
        printf("Sum =%d\n",nor);
    }

    return 0;
}