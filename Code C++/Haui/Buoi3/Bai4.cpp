#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 0)
            cout << "Yeu cau nhap n>=0: ";
    } while (n < 0);
    float f = 0;
    if (n % 2 == 0)
    {
        for (int i = 0; i <= n; i++)
            f += 1.0 / i;
    }
    else
        f = sqrt(n * n + 1);
    cout << "F = " << f;
    return 0;
}