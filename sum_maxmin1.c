#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && x >= z)
    {
        y <= z ? printf("%d", x + y) : printf("%d", x + z);
    }
    else if (y >= x && y >= z)
    {
        x <= z ? printf("%d", y + x) : printf("%d", y + z);
    }
    else
    {
        x <= y ? printf("%d", z + x) : printf("%d", z + y);
    }
    return 0;
}