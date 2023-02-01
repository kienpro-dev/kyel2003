#include <iostream>

using namespace std;

void input(int &x)
{
    do
    {
        cin >> x;
        if (x <= 0)
            cout << "Yeu cau nhap so nguyen duong: ";
    } while (x <= 0);
}

int Factorial(int k)
{
    if (k == 0 || k == 1)
        return 1;
    return k * Factorial(k - 1);
}

int Combination(int k, int n)
{
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}

int main()
{
    int n, k;
    cout << "Nhap n: ";
    input(n);
    cout << "Nhap k: ";
    input(k);
    if (k > n)
    {
        cout << "Khong ton tai to hop chap "<<k<<" cua "<<n;
        return 0;
    }    
    cout << "To hop chap " << k << " cua " << n << " = " << Combination(k, n);
    return 0;
}