#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void Input(float &x, int &n)
{
    do
    {
        cin >> x >> n;
    } while (n < 1);
}

float power(float a, int b)
{
    // de bai chi xet n nguyen duong
    float result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }
    return result;
}

float Output(float x, int n)
{
    float result;
    if (n % 2 == 0)
    {
        result = sqrt(exp(x) + n);
    }
    else
    {
        result = 2022;
        for (int i = 1; i <= n; i++)
        {
            result += (power(x, i) - i) / (2 * i - 1);
        }
    }
    return result;
}

int main()
{
    float x;
    int n;
    Input(x, n);
    cout << setprecision(2) << fixed << Output(2 * x, 3 * n);
    return 0;
}