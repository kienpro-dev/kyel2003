#include <iostream>
#include <string.h>
using namespace std;

class SV
{
    int MSV;
    char hoTen[100];
    char birth[20];
    char gender[10];
    char Class[10];

public:
    int getMSV()
    {
        return MSV;
    }
    char *getTen()
    {
        return hoTen;
    }
    friend istream &operator>>(istream &is, SV &a)
    {
        cout << "\n nhap ma sinh vien: ";
        cin >> a.MSV;
        cin.ignore();
        cout << "Nhap ho ten: ";
        fgets(a.hoTen, sizeof(a.hoTen) + 1, stdin);
        cout << "Nhap ngay sinh theo dang dd/mm/yyyy: ";
        fgets(a.birth, sizeof(a.birth) + 1, stdin);
        cout << "Nhap gioi tinh nam hoac nu  ";
        fgets(a.gender, sizeof(a.gender) + 1, stdin);
        cout << "Nhap lop: ";
        fgets(a.Class, sizeof(a.Class) + 1, stdin);
        return is;
    }
    friend ostream &operator<<(ostream &os, SV &a)
    {
        os << "\nMa sinh vien: " << a.MSV << " ten: " << a.hoTen << " ngay sinh: " << a.birth << " gioi tinh: " << a.gender << " lop: " << a.Class;
        return os;
    }
};
int main()
{
    SV a;
    cin >> a;
    cout << a;
}