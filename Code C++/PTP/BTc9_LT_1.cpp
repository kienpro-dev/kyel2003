// nhập xuất danh sách sinh viên
// lọc sinh viên theo năm sinh
#include <iostream>
#include <string.h>

using namespace std;

struct SinhVien
{
    int maSV;
    char name[255];
    int year;
};

void nhapSV(SinhVien &sv);
void xuatSV(SinhVien sv);
void nhapxuatDSSV(SinhVien sv[], int slSV);
void listDOB(SinhVien sv[], int slSV);

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien arrSV[n];
    nhapxuatDSSV(arrSV, n);
    listDOB(arrSV, n);
    return 0;
}

void nhapSV(SinhVien &sv)
{
    cin.ignore();
    cout << "Nhap ten: ";
    gets(sv.name);
    cout << "Nhap ma sinh vien: ";
    cin >> sv.maSV;
    cout << "Nhap nam sinh: ";
    cin >> sv.year;
}

void nhapxuatDSSV(SinhVien sv[], int slSV)
{
    for (int i = 0; i < slSV; i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        nhapSV(sv[i]);
    }
    for (int i = 0; i < slSV; i++)
    {
        cout << "STT " << i + 1 << endl;
        xuatSV(sv[i]);
    }
}

void xuatSV(SinhVien sv)
{
    cout << "Name: " << sv.name << endl;
    cout << "Date of birth: " << sv.year << endl;
    cout << "Code: " << sv.maSV << endl;
}

void listDOB(SinhVien sv[], int slSV)
{
    int dob;
    cout << "Loc theo nam sinh: ";
    cin >> dob;
    cout << "Danh sach sinh vien sinh nam " << dob << ": ";
    for (int i = 0; i < slSV; i++)
    {
        if (dob == sv[i].year)
        {
            xuatSV(sv[i]);
        }
        else
        {
            cout << "Khong co sinh vien sinh nam " << dob;
            break;
        }
    }
}