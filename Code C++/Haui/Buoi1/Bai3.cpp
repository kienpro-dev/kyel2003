#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cout << "Nhap toa do diem A(x,y): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B(x,y): ";
    cin >> x2 >> y2;
    cout << "Khoang cach AB: " << sqrt(pow(x2 - x1, 2) + pow((y2 - y1), 2));
    return 0;
}