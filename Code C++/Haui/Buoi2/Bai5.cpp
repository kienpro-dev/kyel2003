#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float d;
    cout << "Nhap diem: ";
    cin >> d;
    if (fabs(round(d * 10) - d * 10) >= 0.5)
    {
        d = round(d * 10) - 1 / 10;
    }
    else
    {
        d = round(d * 10) / 10;
    }
    cout << "Diem chu: ";
    if (d >= 8.5)
    {
        cout << "A";
    }
    else if (d >= 7)
    {
        cout << "B";
    }
    else if (d >= 5.5)
    {
        cout << "C";
    }
    else if (d >= 4)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
    return 0;
}