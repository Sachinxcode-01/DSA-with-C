#include<stdio.h>

void counter()
{
    static int count;
    count++;

    printf("Res = %d\n",count);
}

int main()
{
    counter();
    counter();
    counter();


    return 0;
}