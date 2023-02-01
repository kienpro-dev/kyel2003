#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Nhap 4 so nguyen: ";
    cin >> a >> b >> c >> d;
    cout << "Tong: " << a + b + c + d << endl;
    cout << "Tich: " << (long)a * b * c * d << endl;
    cout << "TBC: " << (a + b + c + d) * 1.0 / 4 << endl;
    cout << "Min: " << min(a, min(b, min(c, d)));
    return 0;
}