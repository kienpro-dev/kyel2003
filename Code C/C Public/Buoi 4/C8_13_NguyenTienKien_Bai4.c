#include <stdio.h>

int main()
{
    // dieu kien nhap
    int n;
    printf("Nhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n >= 100)
        {
            printf("Khong thoa man, nhap lai: ");
        }
    } while (n <= 0 || n >= 100);
    // nhap mang n phan tu
    int i;
    double arr[99];
    printf("Nhap cac phan tu: ");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }
    // kiem tra so lon nhat
    double max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] >= arr[0])
        {
            max = arr[i];
        }
    }
    // in ra vi tri cac so lon nhat
    printf("Vi tri co so lon nhat: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            printf("%d ", i + 1);
        }
    }
    return 0;
}