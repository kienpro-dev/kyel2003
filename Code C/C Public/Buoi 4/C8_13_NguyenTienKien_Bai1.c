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
    int arr[99];
    printf("Nhap cac phan tu: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // kiem tra mang
    int increase = 0, decrease = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            increase++;
        }
        else if (arr[i + 1] < arr[i])
        {
            decrease++;
        }
    }
    // xuat ket qua
    if (increase == n - 1)
    {
        printf("YES");
    }
    else if (decrease == n - 1)
    {
        printf("NO");
    }
    else
    {
        printf("-1");
    }
    return 0;
}