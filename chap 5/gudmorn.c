/* This program illustrated the use of the functions in the main function*/

#include <stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

void main()
{
    good_morning();
    good_afternoon();
    good_evening();
}

void good_morning()
{
    printf("This displays GOOD morning\n");
}

void good_afternoon()
{
    printf("This displays GOOD afternoon\n");
}

void good_evening()
{
    printf("This displays GOOD evening\n");
}