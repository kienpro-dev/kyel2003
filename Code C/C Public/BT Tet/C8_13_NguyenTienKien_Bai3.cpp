#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Input(int &n, int &m)
{
    do
    {
        cin >> n >> m;
    } while (n <= 4 || n >= m);
}

int Output_1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int Output_2(int n, int m)
{
    int sum = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

float Output_3(int n)
{
    float result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = sqrt(i + result);
    }
    return result;
}

int main()
{
    int n, m;
    Input(n, m);
    cout << Output_1(n);
    cout << endl;
    cout << Output_2(n, m);
    cout << endl;
    cout << setprecision(3) << fixed << Output_3(n);
    return 0;
}