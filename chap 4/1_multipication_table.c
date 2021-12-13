/* This program prints the multication of given integer */

#include<stdio.h>

void main()
{
    int n, product, i;

    printf("Enter the number whose multiplication table has to be found out:");
    scanf("%d", &n);

    for(i=1; i<=10; ++i)
    {
        product = n*i;
        printf("%d * %d = %d\n", n, i, product);
    }
}