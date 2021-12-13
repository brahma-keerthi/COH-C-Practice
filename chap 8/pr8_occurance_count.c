// This program will count the occurance of the given character in the given string

#include<stdio.h>
#include<ctype.h>

void main()
{
    char st[50], a;
    int i, count;

    printf("Enter the string:\n");
    gets(st);

    printf("Enter the character:\n");
    scanf("%c", &a);

    a = tolower(a);

    for(i=0, count=0; st[i]!='\0'; i++)
    {
        char c = st[i];
        c = tolower(c);
        if(c==a)
        count++;
    }

    printf("The character is repeated for %d times", count);
}