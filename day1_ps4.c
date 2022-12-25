#include <stdio.h>
void main()
{
    int year;
    printf("enter a year");
    scanf("%d", &year);
    year = year % 4 == 0 && year % 100 != 0 || year % 400 ? printf("leap year") : printf("not a leap year");
}