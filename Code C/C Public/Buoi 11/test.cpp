#include<iostream>
#include<string.h>

using namespace std;

struct DiaChi
{
    char thanhPho[20];
    char huyen[20];
};

struct NhanVien
{
    char ten[20];
    char maNV[10];
    int tuoi;
    DiaChi diaChiNha;
    DiaChi diaChiLamViec;
};

int main()
{
    NhanVien nv1;
    strcpy(nv1.ten,"Ngo Minh Hieu");
    strcpy(nv1.maNV,"S00GH2");
    nv1.tuoi=27;
    strcpy(nv1.diaChiNha.thanhPho,"Ha Noi");
    strcpy(nv1.diaChiNha.huyen,"Hai Ba Trung");
    cout << nv1.ten <<endl;
    cout << nv1.maNV <<endl;

    //cin.ignore();
    //fflush(stdin);
    return 0;
}