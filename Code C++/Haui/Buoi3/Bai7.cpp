#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 2)
            cout << "yeu cau nhap n>=2: ";
    } while (n < 2);
    int sumOfEven = 0, sumOfOdd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sumOfEven += i;
        else
            sumOfOdd += i;
    }
    cout << "Tong cua so chan: " << sumOfEven << endl;
    cout << "Tong cua so le: " << sumOfOdd;
    return 0;
}