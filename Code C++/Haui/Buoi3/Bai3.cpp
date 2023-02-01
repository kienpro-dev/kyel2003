#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 1)
            cout << "Yeu cau nhap n>=1: ";
    } while (n < 1);
    float s = 0;
    for (int i = 1; i <= n; i++)
        s += 1.0 / i;
    cout << "S = " << s;
    return 0;
}