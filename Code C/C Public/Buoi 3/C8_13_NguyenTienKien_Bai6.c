#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n:");
    do
    {
        scanf("%d", &n);
        if (n < 2 || n > 9)
        {
            printf("Bang cua chuong nay chua duoc ho tro, nhap lai:");
        }
    } while (n < 2 || n > 9);
    printf("Bang cua chuong cua %d\n", n);
    int i = 1;
    for (i; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}