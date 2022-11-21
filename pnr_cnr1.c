#include <stdio.h>

int getFact(int num)
{
    if (num >= 1)
        return num * getFact(num - 1);
    else
        return 1;
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