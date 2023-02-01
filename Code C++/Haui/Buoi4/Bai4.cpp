#include <iostream>

using namespace std;

void input(int &n)
{
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n <= 0)
            cout << "Yeu cau nhap n nguyen duong: ";
    } while (n <= 0);
}

int count(int n)
{
    if (n < 10)
        return 1;
    return 1 + count(n * 1.0 / 10);
}

int main()
{
    int n;
    input(n);
    cout << "So chu so cua " << n << " la: " << count(n);
    return 0;
}