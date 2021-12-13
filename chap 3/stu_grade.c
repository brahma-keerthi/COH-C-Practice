/* This program gives the grade of the student based on his marks */

#include <stdio.h>
void main()
{
    int a;
    printf("Enter ht emarks of the student:");
    scanf("%d", &a);
    
    if(a>=90)
    printf("Grade A");

    else if(a>=80 && a<=89)
    printf("Grade B");

    else if(a>=70 && a<=79)
    printf("Grade C");

    else if(a>=60 && a<=69)
    printf("Grade D");

    else if(a>=50 && a<=59)
    printf("Grade E");

    else if(a>=40 && a<=49)
    printf("Grade F");
}
