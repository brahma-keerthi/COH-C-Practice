// This program will print the multiplication table of the number 3, 7, 9

#include<stdio.h>

void main()
{
    int arr[3][10], i, j, mul;

    for(i=0; i<3; i++)
    {
        if(i=0)
        mul=3;

        else if(i=1)
        mul=7;

        else if(i=2)
        mul=9;

        for(j=0; j<10; i++)
        {
            arr[i][j] = (j+1)*mul;
            printf("%d\t", arr[i][j]);
        }

        printf("\n");

    }
}