#include <iostream>
#include <cmath>

using namespace std;

void Input(int &n, float &x)
{
    do
    {
        cin >> n >> x;
    } while (n <= 0);
}

int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

float OutPut(int n, float x)
{
    float result;
    for (int i = 1; i <= n; i++)
    {
        result += pow(-1, i) * pow(x, i) / Factorial(i);
    }
    return result;
}

int main()
{
    int n;
    float x;
    Input(n, x);
    cout << OutPut(n, x);
    return 0;
}