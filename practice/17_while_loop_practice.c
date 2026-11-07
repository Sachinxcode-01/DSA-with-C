#include<stdio.h>

int main()
{

    int i=2;
    int sum=0;

    while(i<=10)
    {
        sum+=i;
        i+2;
    }
    printf("Sum = %d\n",sum);
    printf("Final i = %d\n",i);

    return 0;
}