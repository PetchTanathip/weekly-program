#include <stdio.h>

int main()
{
    char *p, str[100];
    p = str;
    int count_upr = 0, count_lwr = 0;
    scanf("%s", &str);
    while (*p != '\0')
    {
        if (*p >= 'A' && *p <= 'Z')
            count_upr += 1;
        if (*p >= 'a' && *p <= 'z')
            count_lwr += 1;

        p++;
    }

    printf("Uppercase = %d\n", count_upr);
    printf("Lowercase = %d", count_lwr);
    return 0;
}