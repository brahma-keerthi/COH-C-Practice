// This program will check for the availability of a particular character

#include <stdio.h>
#include<stdlib.h>

void main()
{
    char st[50], a;

    printf("Enter the string:\n");
    gets(st);

    printf("Enter the character which has to be checked whether it is present in the given string of not:");
    scanf("%c", &a);

    for(int i=0; st[i]!='\0'; i++)
    {
        if(st[i] == a)
        {
            printf("The given character %c is present in the string\a",a);
            exit(0);
        }
    }

    printf("The given cahracter %c is not present in the string", a);
}