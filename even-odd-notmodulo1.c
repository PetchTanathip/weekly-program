#include <stdio.h>

int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    (n / 2) * 2 == n ? printf("Even") : printf("Odd");
    // เลขคี่จะหาร 2 ไม่ลงตัว และเนื่องจาก n เป็น int จะปัดเศษเลง เมื่อคูณ 2 จะไม่ได้ค่าเดิม

    return 0;
}