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
    printf("Nhap phan tu: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // kiem tra so nguyen to va tong cua chung
    int j;
    int uoc;
    int tong = 0;
    printf("Cac so nguyen to trong mang: ");
    for (i = 0; i < n; i++)
    {
        uoc = 0;
        for (j = 2; j <= sqrt(arr[i]); j++) // chi can kiem tra den arr[i]/2 vi sau do khong chia het cho so nao nua
        {
            if (arr[i] % j == 0)
            {
                uoc++;
            }
        }
        if (uoc == 0 && arr[i] > 1)
        {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac so nguyen to la %d ", tong);
    return 0;
}