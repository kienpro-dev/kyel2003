// diem trung binh 3 mon,lam tron 2 so thap phan
#include <iostream>
#include <iomanip> //thu vien de xet sl so tp

using namespace std;

int main()
{
    double toan, ly, anh;
    cout << "Nhap diem toan: ";
    cin >> toan;
    cout << "Nhap diem ly: ";
    cin >> ly;
    cout << "Nhap diem anh: ";
    cin >> anh;
    double dtb = (toan + ly + anh) / 3;
    cout << "Diem trung binh 3 mon la: " << setprecision(3) << dtb;
    return 0;
}