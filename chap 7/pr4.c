/* THis program prints the multiplication table for any input upto 10*/

#include<stdio.h>

void main()
{
    int arr[10], i, mul;

    printf("Enter the number whose multiplication table has to be printed:");
    scanf("%d", &mul);

    printf("The multiplication table of %d is\n", mul);
    
    for(i=1; i<=10; i++)
    {
        arr[i-1] = mul * i;
        printf("%d\n", arr[i-1]);
    }
}