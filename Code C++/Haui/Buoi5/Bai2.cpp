#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if(n < 1 || n > 30)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 1 || n > 30);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            cnt_1++;
        if (a[i] > a[i + 1])
            cnt_2++;
        if (a[i] == a[i + 1])
            cnt_3++;
    }
    if (cnt_1 == n - 1)
        cout << "Mang tang thuc su";
    else if (cnt_1 + cnt_3 == n - 1)
        cout << "Mang tang dan";
    else if (cnt_2 == n - 1)
        cout << "Mang giam thuc su";
    else if (cnt_2 + cnt_3 == n - 1)
        cout << "Mang giam dan";
    else
        cout << "Mang lon xon";
    return 0;
}