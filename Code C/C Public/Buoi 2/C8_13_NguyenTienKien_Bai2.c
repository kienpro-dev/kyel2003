#include<stdio.h>
#include<math.h>

int main()
{
    int soNguyen;
    printf("Nhap so nguyen a (2<=a<=50):");
    scanf("%d",&soNguyen);
    if(soNguyen>=2 && soNguyen<=50)
    {
        double ketQua=pow(soNguyen*1.0/3,4);
        printf("Ket qua phep tinh (%d/3)^4 la %.3lf",soNguyen,ketQua);
    }
    else
    {
        printf("Sai dieu kien du lieu de bai!!");
    }
    return 0;
}