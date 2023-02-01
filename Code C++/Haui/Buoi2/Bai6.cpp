#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

#define PI 3.14

int main()
{
    int x;
    cout << "Nhap lua chon (1-5): ";
    cin >> x;
    if (x == 1)
    {
        cout << "Chuong trinh tinh chu vi, dien tich HCN" << endl;
        float chieuDai, chieuRong;
        cout << "Nhap kich thuoc HCN: ";
        cin >> chieuDai >> chieuRong;
        if (chieuDai < chieuRong)
        {
            swap(chieuDai, chieuRong);
        }
        if (chieuDai > 0 && chieuRong > 0 && chieuDai != chieuRong)
        {
            cout << "Chu vi HCN = " << (chieuDai + chieuRong) * 2 << endl;
            cout << "Dien tich HCN = " << chieuDai * chieuRong;
        }
        else
        {
            cout << "Kich thuoc khong hop le!!";
        }
    }
    else if (x == 2)
    {
        cout << "Chuong trinh tinh chu vi, dien tich tam giac" << endl;
        float a, b, c; // 3 canh tam giac
        cout << "Nhap kich thuoc tam giac: ";
        cin >> a >> b >> c;
        if (a + b > c || a + c > b || b + c > a)
        {
            cout << "Chu vi tam giac = " << a + b + c << endl;
            float p = (a + b + c) / 2;
            cout << "Dien tich tam giac = " << sqrt(p * (p - a) * (p - b) * (p - c));
        }
        else
        {
            cout << "Kich thuoc khong hop le!!";
        }
    }
    else if (x == 3)
    {
        cout << "Chuong trinh tinh dien tich hinh thang" << endl;
        float a, b, h; // 2 day va chieu cao
        cout << "Nhap kich thuoc hinh thang: ";
        cin >> a >> b >> h;
        if (a > 0 && b > 0 && h > 0)
        {
            cout << "Dien tich hinh thang = " << (a + b) * h / 2;
        }
        else
        {
            cout << "Kich thuoc khong hop le!!";
        }
    }
    else if (x == 4)
    {
        cout << "Chuong trinh tinh chu vi, dien tich inh tron" << endl;
        float banKinh;
        cout << "Nhap ban kinh hinh tron: ";
        cin >> banKinh;
        cout << "Chu vi hinh tron = " << 2 * PI * banKinh << endl;
        cout << "Dien tich hinh tron = " << PI * pow(banKinh, 2);
    }
    else if (x == 5)
    {
        cout << "Ban lua chon thoat chuong trinh!!";
        exit(1);
    }
    else
    {
        cout << "Cu pap khong hop le!!";
    }
    return 0;
}