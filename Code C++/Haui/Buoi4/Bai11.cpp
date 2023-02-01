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

void binary(int n)
{
    int a[100], i = 0;
    int temp;
    while (n > 0)
    {
        temp = n % 2;
        a[i] = temp;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << a[j];
}

int main()
{
    int n;
    input(n);
    binary(n);
    return 0;
}