/*  This program will give the sum of the first n natural numbers using the recurssions  */

#include<stdio.h>

int sum( int n);

void main()
{
    int a;
    printf("Enter the term upto which the sum has to be calculated:");
    scanf("%d", &a);

    printf("The sum of first %d natural numbers is \n           %d", a, sum(a));
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    
    else
    {
    int a = n + sum(n-1);
    return a;
    }
}