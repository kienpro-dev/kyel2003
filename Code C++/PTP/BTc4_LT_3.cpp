// liet ke cac chu so la so nto cua 1 so nguyen duong
#include <iostream>

using namespace std;

bool checkPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac chu so la so nguyen to: ";
    for (int i = n; i > 0; i /= 10)
        if (checkPrime(i % 10))
            cout << i % 10 << " ";
    return 0;
}