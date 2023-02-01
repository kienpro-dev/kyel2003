#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void Input(int &n, float &x)
{
    cout << "Nhap n va x: ";
    cin >> n >> x;
}

float Output(int n, float x)
{
    float result;
    if (n % 2 == 0)
    {
        result = fabs(log(x) / log(2) + exp(n) + 2021);
    }
    else
    {
        int tu;
        float mau;
        result = 2021;
        for (int i = 1; i <= n; i++)
        {
            tu = 2 * i - 1;
            mau = pow(x, i);
            result += tu * 1.0 / mau;
        }
    }
    return result;
}

int main()
{
    int n;
    float x;
    Input(n, x);
    float result = Output(n, x);
    cout << "Ket qua la: " << fixed << setprecision(4) << result;
    return 0;
}