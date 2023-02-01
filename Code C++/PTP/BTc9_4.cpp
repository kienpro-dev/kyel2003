// con trỏ theo cấu trúc
//  nhập vào n nhân viên in ra danh sách
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct NhanVien
{
    int maNV;
    char name[255];
    int age;
};

int main()
{
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();
    NhanVien *p[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = new NhanVien;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Nhan vien thu " << i + 1 << endl;
        cout << "Ten: ";
        gets(p[i]->name);
        cout << "Ma NV: ";
        cin >> p[i]->maNV;
        cout << "Tuoi: ";
        cin >> p[i]->age;
        cin.ignore();
    }
    cout << "Bang danh sach nhan vien cong ty giai tri dau buoi" << endl;
    cout << setfill('_');
    cout << setw(60) << "_";
    cout << setfill(' ') << endl;
    cout << setw(5) << left << "STT";
    cout << setw(30) << left << "Name";
    cout << setw(15) << left << "ID";
    cout << setw(10) << right << "Age" << endl;
    cout << setfill('_');
    cout << setw(60) << "_";
    cout << setfill(' ') << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << left << i + 1;
        cout << setw(30) << left << p[i]->name;
        cout << setw(15) << left << p[i]->maNV;
        cout << setw(10) << right << p[i]->age;
        cout << endl;
    }
    return 0;
}