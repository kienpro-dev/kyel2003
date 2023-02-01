#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cout << "Nhap he so phuong trinh ax + b = 0: ";
    cin >> a >> b;
    if (a == 0 && b != 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if (a == 0 && b == 0)
    {
        cout << "Phuong trinh co vo so nghiem";
    }
    else
    {
        cout << "Phuong trinh co nghiem x = " << -b / a;
    }
    return 0;
}