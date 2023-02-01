#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    if (n % m == 0)
    {
        cout << m << " la uoc cua " << n;
    }
    else
    {
        cout << m << " khong phai la uoc cua " << n;
    }
    return 0;
}