#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;

struct Matrix
{
    long long mat[2][2];
};

Matrix matMultiple(Matrix a, Matrix b)
{
    Matrix res;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res.mat[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res.mat[i][j] += ((a.mat[i][k] % mod) * (b.mat[k][j] % mod));
                res.mat[i][j] %= mod;
            }
        }
    }
    return res;
}

Matrix matPower(Matrix a, long long n)
{
    if (n == 1)
        return a;
    Matrix x = matPower(a, n / 2);
    if (n & 1)
        return matMultiple(matMultiple(x, x), a);
    else
        return matMultiple(x, x);
}

int main()
{
    Matrix a;
    long long n;
    cin >> n;
    a.mat[0][0] = 19;
    a.mat[0][1] = 7;
    a.mat[1][0] = 6;
    a.mat[1][1] = 20;
    if (n == 0)
        cout << 0;
    else
    {
        Matrix x = matPower(a, n);
        cout << x.mat[0][0];
    }
    return 0;
}