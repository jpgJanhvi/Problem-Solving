#include <stdio.h>
int main()
{
    int arr[5][5] = {0};
    int r = 0, c = 2;
    arr[r][c] = 1;
    for (int i = 2; i <= 25; i++)
    {
        r--;
        c++;
        if (c == 5)
        {
            c = 0;
        }
        if (r == -1)
        {
            r = 4;
            if (arr[r][c] != 0)
                r++;
        }
        if (r == -1 && c == 5)
            r++;
        if (arr[r][c] != 0)
            r++;

        arr[r][c] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}