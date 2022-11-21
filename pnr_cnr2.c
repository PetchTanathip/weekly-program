#include <stdio.h>

int getFact(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int pnr = getFact(n) / getFact(n - r);
    int cnr = getFact(n) / (getFact(n - r) * getFact(r));

    printf("Permutation : %ld\n", pnr);
    printf("Combination : %ld", cnr);

    return 0;
}