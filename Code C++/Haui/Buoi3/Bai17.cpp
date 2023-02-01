#include <iostream>

using namespace std;

unsigned long long Factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int m, n;
    cout << "Nhap m, n: ";
    cin >> m >> n;
    if (m <= n)
        cout << "C(" << m << "," << n << ") = " << Factorial(n) / ((Factorial(m) * Factorial(n - m)));
    else
        cout << "Khong hop le!!";
    return 0;
}