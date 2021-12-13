/* This program will tell whether the student is pass or fail
****************************************************************
      Requirements 33% in each subject and 40% over all
************************************************************* */

#include <stdio.h>
void main()
{
    int a, b, c;
    float totalPer;

    printf("Enter the marks of subject1:");
    scanf("%d", &a);

    printf("Enter the marks of subject2:");
    scanf("%d", &b);

    printf("Enter the marks of subject3:");
    scanf("%d", &c);

    totalPer = (a + b + c)/3;

    if ((a < 33) || (b < 33) || (c < 33) || (totalPer < 40))
        printf("The student is failed with percentage of %f ", totalPer);

    else
        printf("The student is passed with the percentage of %f", totalPer);
}