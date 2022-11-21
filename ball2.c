#include <stdio.h>

int main()
{
    int count = 0;
    float height, distance = 0;
    printf("Height = ");
    scanf("%f", &height);
    distance += height;

    for (int i = 1; i > count; i++)
    {
        if (height > 1)
        {
            height = (0.4) * height;
            distance += 2 * height;
            count += 1;
        }
    }

    printf("Distance = %0.2f\n", distance);
    printf("Bounce count = %d", count);
    return 0;
}