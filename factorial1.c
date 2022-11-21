#include <stdio.h>

int getFact();

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", getFact(num));
    return 0;
}

int getFact(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}