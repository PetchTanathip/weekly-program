#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], lwr[50], upr[50];
    int i, j = 0, k = 0;
    scanf("%s", &str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upr[j] = str[i];
            j++;
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            lwr[k] = str[i];
            k++;
        }
    }

    printf("Uppercase = %d\n", strlen(upr));
    printf("Lowercase = %d", strlen(lwr));
    return 0;
}