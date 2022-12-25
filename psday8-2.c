#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, k;
    scanf("%d%d", &a, &b);
    printf("Enter the digit no.");
    scanf("%d", &k);
    int c = pow(a, b);
    c = c / pow(10, k - 1);
    printf("%d", (c % 10));
}