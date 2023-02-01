#include<stdio.h>

int main()
{
    int year, month;
    printf("Nhap nam:");
    scanf("%d",&year);
    printf("Nhap thang:");
    scanf("%d",&month);
    if(year>0)
    {
        switch (month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Thang %d co 31 ngay",month);
                break;
            case 4: case 6: case 9: case 11:
                printf("Thang %d co 30 ngay",month);
                break;
            case 2:
                if(year%400==0 || year%4==0 && year%100!=0)
                {
                    printf("Thang %d co 29 ngay",month);
                }
                else
                {
                    printf("Thang %d co 28 ngay",month);
                }
                break;
            default:
                printf("Thang khong hop le");
        }
    }
    else
    {
        printf("Nam khong hop le");
    }
    return 0;
}