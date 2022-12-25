#include <stdio.h>
void main()
{
    int i, j;
    for (i = 6; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = 1; j <= 11 - (2 * i); j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            if (j != 6)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}