#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= 2 * (n - i) - 1; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= 2 * (n - i) - 1; j++)
            printf(" ");

        j = 1;
        if (i == n)
            j = 2;

        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;
}