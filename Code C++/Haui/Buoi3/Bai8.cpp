#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Nhap n, m: ";
    do
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
            cout << "Yeu cau nhapn, m nguyen duong: ";
    } while (n <= 0 || m <= 0);
    int sumOfEvenPos = 0, sumOfOddNeg = 0, sumOfEvenNeg = 0, sumOfOddPos = 0;
    for (int i = -n; i <= m; i++)
    {
        if (i % 2 == 0)
        {
            if (i > 0)
                sumOfEvenPos += i;
            else
                sumOfEvenNeg += i;
        }
        else
        {
            if (i > 0)
                sumOfOddPos += i;
            else
                sumOfOddNeg += i;
        }
    }
    cout << "Tong cua so chan duong thuoc [" << -n << ", " << m << "] = " << sumOfEvenPos << endl;
    cout << "Tong cua so chan am thuoc [" << -n << ", " << m << "] = " << sumOfEvenNeg << endl;
    cout << "Tong cua so le duong thuoc [" << -n << ", " << m << "] = " << sumOfOddPos << endl;
    cout << "Tong cua so le am thuoc [" << -n << ", " << m << "] = " << sumOfOddNeg;
    return 0;
}