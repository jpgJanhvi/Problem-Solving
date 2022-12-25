#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    while (a > 9)
    {
        int sum = 0;
        int m = a;
        while (m > 0)
        {
            sum = sum + (m % 10);
            m /= 10;
        }
        a = sum;
    }
    printf("%d", a);
}