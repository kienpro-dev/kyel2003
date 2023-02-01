#include <iostream>

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
    long result = 1;
    for (int i = n; i > 0; i--)
        result *= i;
    cout << "Ket qua " << n << "! = " << result;
    return 0;
}