#include <iostream>
#include <math.h>

using namespace std;

void Input(int &x)
{
    cout << "Nhap x:";
    do
    {
        cin >> x;
        if (x <= 0)
        {
            cout << "Khong thoa man, nhap lai: ";
        }
    } while (x <= 0);
}

bool CheckPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void OutputPrime(int x)
{
    int count = 0;
    int so;
    int i_mang = 0, a[99];
    for (int i = x; i > 0; i = i / 10)
    {
        so = i % 10;
        if (CheckPrime(so))
        {
            count++;
            a[i_mang] = so;
            i_mang++;
        }
    }
    cout << "So luong SNT: " << count << endl;
    cout << "SNT: ";
    for (int i = 0; i < i_mang; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int x;
    Input(x);
    OutputPrime(x);
    return 0;
}