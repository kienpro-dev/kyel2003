#include <iostream>
#include <cmath>

using namespace std;

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Input(int &n, int &m)
{
    cin >> n >> m;
    if (n < m)
    {
        Swap(n, m);
    }
}

float Output(float x, int n)
{
    float result = 2020 * fabs(n * x);
    for (int i = 1; i <= n; i++)
    {
        result += x / (2 * n - i);
    }
    return result;
}

int main()
{
    int n, m;
    Input(n, m);
    float x;
    cin >> x;
    cout << Output(x, n) - Output(x, m); // test case co 1 chut sai so nho, em da thu lai bang casio
    return 0;
}
