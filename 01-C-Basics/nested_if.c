#include<stdio.h>

int main()
{
    //Decalaration + Initialization
    int username=1;
    int password=1234;

    // nestes if Statements
    if (username==1)
    {
        if(password==1234)
        {
            printf("Login Succesfully");
        }
        else 
        {
            printf("Error");
        }
    }
    else 
    {
        printf("User Not Found!");
    }
    
    return 0;
}