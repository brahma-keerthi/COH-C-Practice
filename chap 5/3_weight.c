/*This program is used to calculate the weight of the body on Earth */

#include<stdio.h>

float weight(int mass)
{
    float force = 9.8 * mass;
    return force;
}

void main()
{
    int a;
    printf("Enter the mass of the body in kilo grams:");
    scanf("%d", &a);

    printf("The weight of the body of mass %d kg on Earth is:\n      %f N", a, weight(a));
}