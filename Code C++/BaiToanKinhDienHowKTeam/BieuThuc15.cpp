// Tinh S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
#include <iostream>
#include <cmath>

using namespace std;

int Factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * Factorial(n - 1);
}

void Input(float &x, int &n)
{
    do
    {
        cin >> x >> n;
    } while (n <= 0);
}

float Output(float x, int n)
{
    float sum = 1;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, 2 * i + 1) * 1.0 / Factorial(2 * i + 1);
    }
    return sum;
}

int main()
{
    float x;
    int n;
    Input(x,n);
    cout << Output(x, n);
    return 0;
}