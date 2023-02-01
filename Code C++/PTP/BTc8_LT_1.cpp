// kiem tra chuoi doi xung
#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255

int kiemTraChuoiDoiXung(char a[]);

int main()
{
    char a[MAX];
    cout << "Nhap chuoi ki tu:";
    gets(a);
    int kt = kiemTraChuoiDoiXung(a);
    if (kt == 0)
        cout << "Chuoi tren khong phai chuoi doi xung";
    else
        cout << "Chuoi tren la chuoi doi xung";
    return 0;
}

int kiemTraChuoiDoiXung(char a[])
{
    // 0-->k doixung
    // 1-->doi xung
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
            return 0;
    }
    return 1;
}