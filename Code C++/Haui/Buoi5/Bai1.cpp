#include <iostream>

using namespace std;

int Fibonucci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonucci(n - 1) + Fibonucci(n - 2);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 1 || n > 30)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 1 || n > 30);
    int a[100], sum = 0;
    for (int i = 0; i < n; i++)
        a[i] = Fibonucci(i + 1);
    cout << "Mang tao duoc: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        sum += a[i];
    }
    cout << "\nTong cua mang: " << sum;
    return 0;
}