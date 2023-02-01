#include <iostream>

using namespace std;

long long findGCD(long long a, long long b)
{
    if (a < b)
        swap(a, b);
    long long r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

long long findLCM(long long a, long long b)
{
    return (a / findGCD(a, b)) * b;
}

int main()
{
    long long n;
    cin >> n;
    for (long long a = 1; a <= n; a++)
    {
        for (long long b = 1; b <= n; b++)
        {
            for (long long c = 1; c <= n; c++)
            {
                for(long long d = 1; d <= n; d++)
                {
                    if (a + b + c + d == n && findGCD(a, b) == findLCM(c, d))
                    {
                        cout << a <<" "<<b<<" "<<c<<" "<<d;
                    }
                } 
            }
        }
        break;
    }
    return 0;
}