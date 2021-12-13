/* This program will give the sum and average using call by reference functions */

#include<stdio.h>

int sum(int *x, int *y)
{
    int sum= *x+*y;
    return sum;
}

float average(int *x, int *y)
{
    float average = (float)(*x + *y)/2;
    return average;
}

void main()
{
    int n=4, m=6;

    printf("The sum of the n and m is %d\n", sum(&n,&m));
    printf("The average of the n and m is %f", average(&n, &m));
}