#include<stdio.h>
int main()
{
    //Declaraion +Initialization
    int age = 19;
    float height = 5.4;
    double pi = 3.1415926535;
    char grade ='A';
    
    //Displaying Details from printf() statement
    printf("Age=%d\n",age);
    printf("Height=%.1f\n",height);
    printf("PI=%.10lf\n",pi);
    printf("Grade=%c\n",grade);

    return 0;
}