// This program will use the structure to represent the complex number

#include<stdio.h>

typedef struct complex{
    int real;
    int ima;
}com;
void main()
{
   // struct complex a;
    com a;
    printf("Enter the real part of the complex number:\n");
    scanf("%d", &a.real );

    printf("Enter the imaginary part of the complex number:");
    scanf("%d", &a.ima);

    printf("The given complex number is \n %d + %di", a.real, a.ima);
}