// this program will edecrypt the given string by subtracting 1 to all the characters in the string

#include<stdio.h>
#define decrypt 1

void main()
{
    char str[50], de[50];
    int i;

    printf("Enter a string which has to be decrypted:\n");
    gets(str);

    printf("\nAfter Decryption\n");
    for(i=0; str[i]!='\0'; i++)
    {
        de[i] = str[i] - decrypt;
        printf("%c", de[i]);
    }
    de[i]='\0';
}