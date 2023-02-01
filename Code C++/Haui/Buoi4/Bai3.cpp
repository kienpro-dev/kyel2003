#include <iostream>

using namespace std;

void input(int &a, int &b)
{
    cout << "Nhap a, b: ";
    do
    {
        cin >> a >> b;
        if (a <= 0 || b <= 0)
            cout << "Yeu cau nhap a, b > 0: ";
    } while (a <= 0 || b <= 0);
}

int findGCD(int a, int b)
{
    if (a < b)
        swap(a, b);
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    int a, b;
    input(a, b);
    cout << "UCLN cua " << a << " va " << b << " la " << findGCD(a, b);
    return 0;
}