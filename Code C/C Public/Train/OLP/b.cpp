#include <iostream>

using namespace std;

long long maxOfArray(long long a[], long long n)
{
    long long max = a[0];
    for (long long i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

int main()
{
    long long n, sum;
    cin >> n;
    long long a[100000], b[100000], k = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++)
    {
        sum = 0;
        for (long long j = i; j < n; j++)
        {
            sum += a[j];
            b[k++] = sum;
        }
    }
    cout << maxOfArray(b, k);
    return 0;
}