#include<stdio.h>

int main()
{
    // Variable declarations with appropriate data types

    char Name[]="Sachin";
    int age=19;
    float height=5.7;
    char Grade='A';

    // Printing the variables using printf() and format specifiers
    printf("Name : %s\n",Name);
    printf("Age : %d\n",age);
    printf("Height : %.1f\n",height);
    printf("Grade : %c\n",Grade);

    return 0;

}

/*
Name: Sachin
Age: 19
Height: 5.7
Grade: A
*/