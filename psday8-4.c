#include <stdio.h>
#include <math.h>
int sum(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s + (n % 10);
        n /= 10;
    }
    return s;
}
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
void main()
{
    int a;
    printf("Enter a no.\n");
    scanf("%d", &a);
    int x = a, c = 0;
    while (x > 0)
    {
        c++;
        x /= 10;
    }
    printf("%d\n", c);
    if (c % 2 == 0)
        printf("Wrong No.");
    else
    {
        int p = sum(a % (power(10, c / 2)));
        a = a / (power(10, c / 2 + 1));
        int j = sum(a);
        if (p == j)
            printf("Balanced No.");
        else
            printf("Not Balanced");
    }
}