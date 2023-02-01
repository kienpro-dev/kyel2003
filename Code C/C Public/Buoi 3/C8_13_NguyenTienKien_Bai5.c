#include <stdio.h>

int main()
{
    printf("Tinh cac phep tinh sau voi n nhap tu ban phim:\n");
    printf("A = 1 + 2 + 3 +...+ n\n");
    printf("B = 1 + 2 + 4 +...+ 2*n\n");
    printf("C = 1 + 3 + 5 +...+ (2*n + 1)\n");
    printf("----------------------------------------------\n");
    int n;
    printf("Nhap n:");
    do
    {
        scanf("%d", &n);
        if (n < 0 || n > 100)
        {
            printf("Nhap sai, yeu cau nhap lai:");
        }
    } while (n < 0 || n > 100);
    int sumOfA = 0;
    int sumOfB = 1; // dãy B bị lẻ số 1 ở đầu làm mất quy luật nên em khởi tạo B=1 luôn
    int sumOfC = 0;
    int i = 0;
    for (i; i <= n; i++)
    {
        sumOfA += i;
        sumOfB += (2 * i);
        sumOfC += (2 * i + 1);
    }
    printf("A = %d\nB = %d\nC = %d", sumOfA, sumOfB, sumOfC);
    return 0;
}