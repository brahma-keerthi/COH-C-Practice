/* This program illustrates a misconception about thte user defined fuctions */

#include<stdio.h>

int change(int b);

void main()
{
    int a=8;
    change(a);
    printf("a = %d", a);

}// here a is not changed because b a copy of b is created and that is changed not actual. So the a is not assigned the change value

int change(int b)
{
    b = 55;
    return b;
}