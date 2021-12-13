/* This function will calculate the factorial by the reccursion method */

#include<stdio.h>

int factorial (int x);

void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    printf("The factorial of %d is %d", a, factorial(a));
}

int factorial(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }

    else
    {
        int a = x*factorial(x-1);
        return a;
    }
}
