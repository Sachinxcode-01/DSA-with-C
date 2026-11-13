#include<stdio.h>


//Function Declaration
int add(int a, int b);

//Main Function
int main()
{
    int result;

    result=add(10,20);

    printf("Sum =%d\n",result);


    return 0;

}

//Function Definition


int add(int a  ,int b) //return_type function_name()
{
    return a+b; //Return value
}
/*
output->
Sum=30
*/