#include <stdio.h>

void clock90(int B[4][4])
{
    printf("\n");
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        int a = 0, b = 3;
        while (a < b)
        {
            int t = B[i][a];
            B[i][a] = B[i][b];
            B[i][b] = t;
            a++;
            b--;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
}

void anticlock90(int B[4][4])
{
    printf("\n");
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        int a = 0, b = 3;
        while (a < b)
        {
            int t = B[a][i];
            B[a][i] = B[b][i];
            B[b][i] = t;
            a++;
            b--;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int A[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int B[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            B[i][j] = A[j][i];
        }
    }
    clock90(B);
    anticlock90(B);
}