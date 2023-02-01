#include <stdio.h>

int main()
{
    printf("CHUONG TRINH TINH GIAI THUA CUA MOT SO\n");
    int n;
    printf("Nhap n:");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Nhap sai, yeu cau nhap lai:");
        }
        else if (n > 20)
        {
            printf("Ket qua lon co the sai so, nhap lai:");
        }
    } while (n <= 0 || n > 20);
    int i = 1;
    long long int giaiThua = 1;
    for (i; i <= n; i++)
    {
        giaiThua *= i;
    }
    printf("Ket qua %d! = %lli", n, giaiThua);
    return 0;
}