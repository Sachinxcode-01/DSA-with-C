#include<stdio.h>

void printnor(int n)
{
    if (n>5)
    {
        return ;
    }
    printf("%d\n",n);

    printnor(n+1);
}

int main()
{
    printnor(1);

    return 0;
}

/*
1
2
3
4
5
*/