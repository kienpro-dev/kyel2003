#include <iostream> //ham luong giac
#include <math.h>   //thu vien dung de tinh luong giac

using namespace std;

int main()
{
    cout << "Nhap goc: ";
    double gocx;
    cin >> gocx;
    const double pi = 3.14;
    double rdax;
    rdax = gocx * pi / 180;
    cout << "Sinx = " << sin(rdax) << endl;
    cout << "Cosx = " << cos(rdax) << endl;
    cout << "Tanx = " << tan(rdax) << endl;
    cout << "Cotx = " << 1 / tan(rdax);
    return 0;
}