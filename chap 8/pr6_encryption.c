// this program will encrypt the given string by adding 1 to all the characters in the string

#include<stdio.h>
#define encrypt 1

void main()
{
    char str[50], en[50];
    int i;

    printf("Enter a string which has to be encrypted:\n");
    gets(str);

    printf("\nAfter Encryption\n");
    for(i=0; str[i]!='\0'; i++)
    {
        en[i] = str[i] + encrypt;
        printf("%c", en[i]);
    }
    en[i]='\0';
}