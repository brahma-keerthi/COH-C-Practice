// This program will illlustrate the use of a pointer

#include<stdio.h>

void main()
{
    char a[] = "Benne";
    char *ptr = a;

    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    } 
}