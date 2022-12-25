#include <stdio.h>
void main()
{
    int i, n, x, p, fact = 1;
    float sum = 0;
    printf("MAX NO. OF ELEMENTS IN SERIES:\n");
    scanf("%d", &n);
    printf("ENTER THE VALUE OF X:\n");
    scanf("%d", &x);
    for (i = 1; i < n; i++)
    {
        p = pow(x, i);
        fact = fact * i;
        sum = sum + (p * (1.0)) / fact;
    }
    if (n == 1)
    {
        printf("1");
    }
    else
        printf("sum of series %f", sum + 1);
}
