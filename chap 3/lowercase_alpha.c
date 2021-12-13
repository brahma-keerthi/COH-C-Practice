/* This program tells the given alphabet is lower or not */

#include<stdio.h>

void main()
{
    char a;
    
    printf("Enter the alphabet:");
    AGAIN:
    scanf("%c", &a);

    if(a>=97 && a<=122)
    {
        printf("The alphabet %c is LOWER CASE LETTER", a);
    }

    else if(a>=65 && a<=90)
    {
        printf("The alphabet %c is UPPER CASE LETTER", a);
    }

    else
    {
        printf("Input invalid!!!\n\nEnter the English Alphabet:");
        goto AGAIN;
    }
}