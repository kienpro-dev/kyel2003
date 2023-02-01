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
        if (n <= 0)
            cout << "Yeu cau nhap n nguyen duong: ";
    } while (n <= 0);
    bool check = true;
    if (n < 2)
        check = false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                check = false;
        }
    }
    if (check)
    {
        cout << n << " la so nguyen to";
        return 0;
    }
    int temp = n;
    int a[100];
    int j = 0;
    while (temp > 1)
    {
        for (int i = 2; i <= temp; i++)
        {
            while (temp % i == 0)
            {
                a[j++] = i;
                temp /= i;
            }
        }
    }
    cout << "Phan tich thua so nguyen to " << n << " = ";
    for (int i = 0; i < j; i++)
    {
        if (i == j - 1)
            cout << a[i];
        else
            cout << a[i] << "x";
    }

    return 0;
}