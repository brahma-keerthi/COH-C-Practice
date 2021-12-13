//This program will find the lenght of the string using the user defined funtion

#include<stdio.h>
#include<string.h>

void len(char *st)
{
    int len;
    for(len=0; *st!='\0'; st++ )
    len++;

    printf("The lenght of the given string is %d\n", len);
}

void main()
{
    char st[50];
    printf("Enter the string:");
    gets(st);
    len(st);

    printf("len of the givne string using the inbuilt function is %d", strlen(st));
}