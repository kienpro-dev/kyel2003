#include <iostream>

using namespace std;

void Input(int &n, int &x)
{
    do
    {
        cin >> n >> x;
    } while (n <= 0 || x <= 0);
}

void ArrayIn(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

float Output(float a[], int n, int x)
{
    float sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if ((i + 1) % 2 == 0 && count < x)
        {
            sum += a[i];
            count++;
        }
    }
    if (count == x)
    {
        return sum;
    }
    return -1;
}

int main()
{
    int n, x;
    Input(n, x);
    float a[99];
    ArrayIn(a, n);
    cout << Output(a, n, x);
    return 0;
}