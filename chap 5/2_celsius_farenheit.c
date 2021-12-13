/* This program conversts the given temperature in cesius to the farenheit scale*/

#include<stdio.h>

float convert(float cel)
{
    float far = (((float)9/5)*cel) + 32;
    return far;
}

void main()
{
    float a;
    printf("Enter the temprature in the celsius scale:");
    scanf("%f", &a);

    printf("%f celsius = %f farenheit", a, convert(a));
}