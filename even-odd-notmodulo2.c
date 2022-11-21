#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    n & 1 == 1 ? printf("Odd") : printf("Even");
    // ถ้าเป็นเลขคี่ บิตขวาสุดจะเป็น 1 เมื่อ n&1 จะได้ output=1

    return 0;
}