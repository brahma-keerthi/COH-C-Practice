/* This program will increase the value of the variable 10 times using function by call by value */

#include<stdio.h>

void function(int x)
{
    x = 10*x;
    printf("The value of the variable when the value is increased 10 times is %d", x);
}

void main()
{
    int n=3;
    printf("The value of the variable is %d\n", n);
    function(n);
}