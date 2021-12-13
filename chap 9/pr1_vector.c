// This program will give a vector using the structures

#include<stdio.h>

typedef struct vector{
    int x;
    int y;

}vec;

void main()
{
    vec v;
    printf("Enter the x compoment of the vector:\n");
    scanf("%d", &v.x);

    printf("Enter the y component of the vector:\n");
    scanf("%d", &v.y);

    printf("The given vector is  %di + %dj", v.x, v.y);
}