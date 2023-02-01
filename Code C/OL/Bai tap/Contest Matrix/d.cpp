#include <iostream>

using namespace std;

long long mod = 1e9 + 7;

struct Matrix
{
    long long mat[101][101];
};

void defineMatrix(Matrix &a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a.mat[i][j] = 0;
}

long long sumMatrix(Matrix a, int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += a.mat[i][j];
    return sum;
}

Matrix matMultiple(Matrix a, Matrix b, int n)
{
    Matrix res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res.mat[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                res.mat[i][j] += ((a.mat[i][k] % mod) * (b.mat[k][j] % mod));
                res.mat[i][j] %= mod;
            }
        }
    }
    return res;
}

Matrix matPower(Matrix a, long long n, int y)
{
    if (n == 1)
        return a;
    Matrix x = matPower(a, n / 2, y);
    if (n & 1)
        return matMultiple(matMultiple(x, x, y), a, y);
    else
        return matMultiple(x, x, y);
}

int main()
{
    int n, m;
    long long k;
    cin >> n >> m >> k;
    Matrix single;
    defineMatrix(single, n);
    while (m--)
    {
        int e, z;
        cin >> e >> z;
        single.mat[e - 1][z - 1]++;
    }
    single = matPower(single, k, n);
    cout << sumMatrix(single, n) % mod << endl;
    return 0;
}