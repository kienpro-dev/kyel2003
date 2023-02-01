#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check(char a[])
{
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            return true;
        }
    }
    return false;
}

void cau1_1(char a[])
{
    do
    {
        fgets(a, 100, stdin);
    } while (!check(a));
    
}

void cau1_2(char a[])
{
    int count;
    int i, j, k;
    int max=0;
    for(i=0;i<strlen(a)-1;i++)
    {
        count=1;
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[j]==a[i] && count > max)
            {
                max=count;
                count++;
                k=j;
            }
        }
    }
    printf("Ki tu xuat hien nhieu nhat: %c",a[k]);
    printf("\nSo lan xuat hien: %d", count);
}

struct cuaHang
{
    char ma[10];
    char diaChi[30];
    int soNhanVien;
    float doanhSo;
};

void cau2(cuaHang Cua_Hang)
{
    do
    {
        gets(Cua_Hang.diaChi);
        gets(Cua_Hang.ma);
        scanf("%d",&Cua_Hang.soNhanVien);
        scanf("%f",&Cua_Hang.doanhSo);
    } while (strlen(Cua_Hang.diachi) > 30 || strlen(Cua_Hang.ma) > 10 && !check(Cua_Hang.ma) 
    || Cua_Hang.soNhanVien >0 || Cua_Hang.doanhSo >=0 );
}

int main()
{
    struct cuaHang Cua_Hang;
    char a[100];
    cau1_1(a);
    char b[100];
    fgets(b, 100, stdin);
    cau1_2(b);
    cau2(Cua_Hang);
    return 0;
}