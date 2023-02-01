#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Input(float &x, int &n)
{
    do
    {
        cin >> x >> n;
    } while (n < 0);
}

int GiaiThua(int n)
{
    int giaiThua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaiThua *= i;
    }
    return giaiThua;
}

float LuyThua(float a, int b)
{
    return pow(a, b) + 2 * b;
}

float Output(float x, int n)
{
    float result;
    float tu;
    int mau;
    if (n % 2 != 0)
    {
        result = 2022;
        mau = 0;
        for (int i = 1; i <= n; i++)
        {
            tu = LuyThua(x, i);
            mau += i;
            result += tu / mau;
        }
    }
    else
    {
        result = 2021;
        for (int i = 1; i <= n; i++)
        {
            tu = LuyThua(x, i);
            mau = GiaiThua(i);
            result += tu / mau;
        }
    }
    return result;
}

int main()
{
    float x;
    int n;
    Input(x, n);
    if (n == 0)
    {
        cout << "Mau so bang 0, khong tinh duoc!";
    }
    else
    {
        cout << fixed << setprecision(4) << Output(x, n);
    }
    return 0;
}