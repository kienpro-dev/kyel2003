#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nhap n:");
        scanf("%d", &n);
    } while (n >= 0);
    printf("Ban vua nhap so am, chuong trinh ket thuc");
    return 0;
}