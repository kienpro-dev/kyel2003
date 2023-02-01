#include<stdio.h>

int main()
{
    int soTuoi;
    printf("Nhap tuoi cua ban:");
    scanf("%d",&soTuoi);
    (soTuoi>=18)?printf("Ban da du tuoi di tu"):printf("Ban chua du tuoi di tu");
    /*if(soTuoi>=18)
    {
        printf("Ban da du tuoi di tu");
    }
    else if(soTuoi<=0)
    {
        printf("Chua phai la nguoi");
    }
    else
    {
        printf("Ban chua du tuoi di tu");
    }*/
    return 0;
}