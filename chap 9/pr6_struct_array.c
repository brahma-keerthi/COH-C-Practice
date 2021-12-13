// This program will use the structure to represent the complex number

#include<stdio.h>

struct complex{
    int real;
    int ima;
};
void main()
{
    struct complex a[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the real part of the complex number %d: ", i+1);
        scanf("%d", &a[i].real );

        printf("Enter the imaginary part of the complex number %d: ", i+1);
        scanf("%d", &a[i].ima);
    }

    for(int i=0; i<5; i++)
    {
        printf("The complex number %d is %d + %di\n",i+1, a[i].real, a[i].ima);
    }
}