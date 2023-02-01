#include <iostream>

using namespace std;

int main()
{
    long hoaDon;
    cout << "Nhap hoa don thanh toan: ";
    cin >> hoaDon;
    if (hoaDon >= 0)
    {
        cout << "So tien phai tra: ";
        if (hoaDon >= 200000 && hoaDon <= 300000)
        {
            hoaDon -= hoaDon * 20 / 100;
            cout << hoaDon << " (discount 20%)";
        }
        else if (hoaDon > 300000)
        {
            hoaDon -= hoaDon * 30 / 100;
            cout << hoaDon << " (discount 30%)";
        }
        else
        {
            cout << hoaDon;
        }
    }
    else
    {
        cout << "Hoa don khong lop le!!";
    }
    return 0;
}