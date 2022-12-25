#include <stdio.h>
void main()
{
    int i, n, fact = 1, sum = 0;
    printf("MAX NO. OF ELEMENTS IN SERIES\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("sum of series %d", sum);
}