// kiem tra chia het cho 3 bang tong cua cac chu so
#include <iostream>

using namespace std;

int sumOfEachNum(int n)
{
    int sum = 0;
    for (int i = n; i > 0; i /= 10)
        sum += i % 10;
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (sumOfEachNum(n) % 3 == 0)
        cout << "Chia het cho 3";
    else
        cout << "K chia het cho 3";
    return 0;
}