/* This prgram tells the greatest amoung 4 numbers */

#include <stdio.h>

void main()
{
    int a, b, c, d, big;

    printf("Enter 4 distict integers which has to compared:");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a>b && a>c && a>d)
    {
        printf("Amoung %d, %d, %d and %d; \n%d is the biggest", a, b, c, d, a);
    }

    else if(b>a && b>c && b>d)
    {
        printf("Amoung %d, %d, %d and %d; \n%d is the biggest", a, b, c, d, b);
    }

    else if(c>a && c>b && c>d)
    {
        printf("Amoung %d, %d, %d and %d; \n%d is the biggest", a, b, c, d, c);
    }

    else 
    {
        printf("Amoung %d, %d, %d and %d; \n%d is the biggest", a, b, c, d, d);
    }


}