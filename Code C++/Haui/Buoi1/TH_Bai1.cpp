#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;
    cout << "Tong = " << a + b << endl;
    cout << "Hieu = " << a - b << endl;
    cout << "Tich = " << a * b << endl;
    cout << "Thuong = " << a * 1.0 / b << endl;
    cout << "Dong du = " << a % b;
    return 0;
}