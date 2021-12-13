/* This year predicts the given year is a leap year or not */
#include <stdio.h>

void main()
{
    int a;

    printf("Enter the year:");
    scanf("%d", &a);

    if (a % 4 == 0 && a % 100 != 0)
    {
        printf("The given year %d is a LEAP YEAR", a);
    }

    else if (a % 100 == 0 && a % 400 == 0)
    {
        printf("The given year %d is a LEAP YEAR", a);
    }

    else
    {
        printf("The given year %d is NOT a leap year", a);
    }
}