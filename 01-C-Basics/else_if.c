#include<stdio.h>

int main()
{
    //Declaration
    int marks;

    printf("Enter the Marks : ");
    scanf("%d",&marks);

    if (marks>=90)
    {
        printf("Grade A");

    }
    //else if ladder
    else if (marks>=85)
    {
        printf("Grade B");

    }
    else if (marks>=75)

    {
        printf("Grade C");
        
    }
    else if (marks >40)
    {
        printf("Grade D");

    }
    else
    {
        printf("Fail!");
    }
}