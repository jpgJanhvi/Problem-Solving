#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the sides of triangle");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c && c == a)
        printf("equilateral triangle");
    else if (a == b || b == c && c == a)
        printf("isosceles triangle");
    else
        printf("scalene triangle");
}