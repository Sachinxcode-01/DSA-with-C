#include<stdio.h>

int main()
{
    //Declaration + Initialization
    int age=20;
    int marks=85;

    //nested-if Statements
    if(age >=18)
    {
        if(marks>=60)
        {
            printf("Your Are Eligible.!");
        }
        else
        {
            printf("Not Eligible:Low Marks");
        }
        
    }
    else
    {
        printf("Not Eligible:Age");
    }
    return 0;
}