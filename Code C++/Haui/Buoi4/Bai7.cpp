#include <iostream>

using namespace std;

void input(float &r)
{
    cout << "Nhap ban kinh hinh tron: ";
    do
    {
        cin >> r;
        if (r <= 0)
            cout << "Khong thoa man, nhap lai: ";
    } while (r <= 0);
}

void tinhChuViDienTich(float r)
{
    cout << "Chu vi = " << 2 * 3.14 * r << endl;
    cout << "Dien tich = " << 3.14 * r * r << endl;
}

int main()
{
    float r;
    char c;
    while (true)
    {
        input(r);
        tinhChuViDienTich(r);
        cout << "Tiep tuc khong (c,k): ";
        cin >> c;
        if (c == 'k')
            break;
        else if (c != 'c')
        {
            cout << "Khong hop le, thoat chuong trinh!!";
            break;
        }
    }

    return 0;
}