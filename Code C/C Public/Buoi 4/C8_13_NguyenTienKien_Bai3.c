#include <stdio.h>
#include <math.h>

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
    // so chinh phuong
    int count1 = 0;
    printf("So chinh phuong la: ");
    for (i = 0; i < n; i++)
    {
        if (sqrt(arr[i]) == (int)sqrt(arr[i]))
        {
            printf("%d ", arr[i]);
            count1++;
        }
    }
    printf("\nSo luong so chinh phuong la: %d", count1);
    // so hoan hao
    int count2 = 0;
    int sum;
    int j;
    printf("\nSo hoan hao la: ");
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 1; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                sum += j;
            }
        }
        if (sum == arr[i])
        {
            printf("%d ", arr[i]);
            count2++;
        }
    }
    printf("\nSo luong so hoan hao la: %d", count2);
    return 0;
}