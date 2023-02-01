#include <iostream>

using namespace std;

void input(int &n)
{
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n <= 10)
            cout << "Khong thoa man, nhap lai: ";
    } while (n <= 10);
}

void separateNum(int n)
{
    int temp = n, a[100], j = 0;
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
    for (int i = 0; i < j; i++)
    {
        if (i != j - 1)
            cout << a[i] << " x ";
        else
            cout << a[i];
    }
}

int main()
{
    int n;
    input(n);
    separateNum(n);
    return 0;
}