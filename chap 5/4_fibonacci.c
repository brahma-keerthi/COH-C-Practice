/* This program will give the nth term of the fibonacci series by recurssions */

#include <stdio.h>

int fibonacci(int x);

void main()
{
    int a;
    printf("Give the number which has to be displayed in the fibonacci series: ");
    scanf("%d", &a);

    printf("The %d th number in the fibonacci series is %d", a, fibonacci(a));
}

int fibonacci(int x)
{
    if (x==1)
    {
        return 0;
    }

    if (x==2)
    {
        return 1;
    }

    else
    {
        int a = fibonacci(x - 1) + fibonacci(x - 2);
        return a;
    }
}