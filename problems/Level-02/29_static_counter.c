#include<stdio.h>

void visitcounter()
{
    static int count=0;
    count++;

    printf("Function Called %d Times.!\n",count);
}

int main()
{
    visitcounter();
    visitcounter();
    visitcounter();
    visitcounter();


    return 0;
}