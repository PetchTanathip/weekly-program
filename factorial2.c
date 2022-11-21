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
    if (num >= 1)
        return num * getFact(num - 1);
    else
        return 1;
}