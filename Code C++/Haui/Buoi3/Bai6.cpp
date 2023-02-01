#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 10 || n > 20)
            cout << "Yeu cau nhap n thuoc [10,20]: ";
    } while (n < 10 || n > 20);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Tong cac so tu 1->" << n << " = " << sum;
    return 0;
}
