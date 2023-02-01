// hàm và mảng theo cấu trúc
#include<iostream>
#include<string.h>

using namespace std;

struct sinhVien
{
    char name[50];
    int maSV;
};

void input(sinhVien a[], int slSV);
void output(sinhVien a[], int slSV);

int main()
{
    int sl=3;
    sinhVien cntt7[sl];
    input(cntt7,sl);
    output(cntt7,sl);
    return 0;
}

void input(sinhVien a[], int slSV)
{
    for(int i=0;i<slSV;i++)
    {
        cout << "SV thu "<<i+1<<endl;
        cout << "Nhap ma: ";
        cin >> a[i].maSV;
        cin.ignore();
        cout << "Nhap ten: ";
        gets(a[i].name);
    }
}

void output(sinhVien a[], int slSV)
{
    cout << "Danh sach sinh vien"<<endl;
    for(int i=0;i<slSV;i++)
    {
        cout <<i+1<<"\t"<<a[i].maSV<<"\t"<<a[i].name<<endl;
    }
}