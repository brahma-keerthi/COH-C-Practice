// This program will give the sum of the two vectors using a function of the structures

#include<stdio.h>

typedef struct vector{
    int x;
    int y;

}vec;

vec sum(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

void main()
{
    vec v1, v2, result;

    printf("Enter the x and y component of vector");
    scanf("%d%d", &v1.x, &v1.y);

    printf("Enter the x and y component of vector:");
    scanf("%d%d", &v2.x, &v2.y);

    result = sum(v1, v2);

    printf("The x components of the vector sum is %d\ny component is %d", result.x, result.y);
}