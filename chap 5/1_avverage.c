/* This program calculated the averages of the 3 numbers */

#include<stdio.h>

float average(int x, int y, int z);

void main()
{
    int a,b,c;
    printf("Enter three numbers whose average needs to be calculated:");
    scanf("%d%d%d", &a,&b, &c);

    printf("The average of the numbers %d, %d and %d is \n\n   %f", a, b, c, average(a,b,c));
}

float average(x, y, z)
{
    float ave = (x+y+z)/3;
    return ave;
}