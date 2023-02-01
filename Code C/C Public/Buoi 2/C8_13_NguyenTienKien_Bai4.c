#include <stdio.h>

int main()
{
    int soNguoi, soGoikeo, soKeo1goi;
    printf("Nhap du lieu (SoNguoi SoGoiKeo SoKeo1Goi):");
    scanf("%d%d%d", &soNguoi, &soGoikeo, &soKeo1goi);
    if (soNguoi >= 1 && soNguoi <= 20 && soGoikeo >= 1 && soGoikeo <= 5 && soKeo1goi >= 10 && soKeo1goi <= 50)
    {
        int tongKeo = soGoikeo * soKeo1goi;
        if (tongKeo % soNguoi == 0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        printf("Sai dieu kien du lieu de bai!!");
    }
    return 0;
}