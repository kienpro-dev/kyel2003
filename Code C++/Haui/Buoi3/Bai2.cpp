#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    bool check = true;
    if (n < 2)
        check = false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                check = false;
    }
    if (check)
        cout << n << " la so nguyen to";
    else
        cout << n << " khong phai la so nguyen to";
}