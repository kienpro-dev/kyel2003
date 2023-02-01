#include <iostream>
#include <math.h>

using namespace std;

bool checkPrime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n, a[100];
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 1 || n > 30)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 1 || n > 30);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0, cnt = 0;
    cout << "Cac phan tu mang la snt: ";
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(a[i]))
        {
            cout << a[i] << " ";
            sum += a[i];
            cnt++;
        }
    }
    cout << "\nSo phan tu: " << cnt << endl;
    cout << "Tong: " << sum;
    return 0;
}