#include <iostream> // in ra cac uoc cua n

using namespace std;

int main()
{
    cout << "Nhap so hang: ";
    int n;
    cin >> n;
    cout << "Cac uoc cua " << n << " la: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}