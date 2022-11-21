#include <stdio.h>

void revStr(char str[]);

int main()
{
    char str[100];
    scanf("%s", &str);
    revStr(str);
    return 0;
}

void revStr(char str[])
{
    int i, j;
    int var = 0;

    for (i = 0; str[i] != 0; i++)
        ;
    for (j = 0; j < i / 2; j++)
    {
        var = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = var;
    }

    for (j = 0; j < i; j++)
    {
        printf("%c", str[j]);
    }
}