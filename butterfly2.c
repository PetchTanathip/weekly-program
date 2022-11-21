#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= 2 * n - 1; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= i && i <= n)
                printf("*");
            else if (j >= 2 * n - i && i <= n)
                printf("*");
            else if (j <= 2 * n - i && i > n)
                printf("*");
            else if (j >= i && i > n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}