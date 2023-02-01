#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, x3, y1, y2, y3;
    cout << "Nhap toa do diem A(x,y): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B(x,y): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C(x,y): ";
    cin >> x3 >> y3;
    float AB = sqrt(pow(x2 - x1, 2) + pow((y2 - y1), 2));
    float BC = sqrt(pow(x3 - x2, 2) + pow((y3 - y2), 2));
    float CA = sqrt(pow(x3 - x1, 2) + pow((y3 - y1), 2));
    cout << "Do dai AB: " << AB << endl;
    cout << "Do dai BC: " << BC << endl;
    cout << "Do dai CA: " << CA << endl;
    float c = AB + BC + CA;
    float p = c / 2;
    float s = sqrt(fabs(p * (p - AB) * (p - BC) * (p - CA)));
    cout << "Chu vi: " << c << endl;
    cout << "Dien tich: " << s;
    return 0;
}