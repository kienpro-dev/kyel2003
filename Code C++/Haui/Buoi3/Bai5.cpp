#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cout << "Nhap x: ";
    do
    {
        cin >> x;
        if (x < 1)
            cout << "Yeu cau nhap x>=1: ";
    } while (x < 1);
    float s = 0;
    if (x % 2 == 0)
    {
        for (int i = 1; i <= x; i++)
            s += pow(x, i) * 1.0 / pow(3, i - 1);
    }
    cout << "S = " << s;
    return 0;
}