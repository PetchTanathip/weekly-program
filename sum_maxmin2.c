#include <stdio.h>

int main()
{
    int x, y, z, sum;
    scanf("%d %d %d", &x, &y, &z);

    while (x >= y && x >= z)
    {
        if (y <= z)
        {
            sum = x + y;
        }
        else
        {
            sum = x + z;
        }
        break;
    }
    while (y >= x && y >= z)
    {
        if (x <= z)
        {
            sum = y + x;
        }
        else
        {
            sum = y + z;
        }
        break;
    }
    while (z >= x && z >= y)
    {
        if (x <= y)
        {
            sum = z + x;
        }
        else
        {
            sum = z + y;
        }
        break;
    }

    printf("%d", sum);
    return 0;
}