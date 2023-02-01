#include <bits/stdc++.h>

using namespace std;

struct Matrix
{
    double mat[2][2];
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
                res.mat[i][j] += (a.mat[i][k] * b.mat[k][j]);
        }
    }
    return res;
}

Matrix matPower(Matrix a, int n)
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
    int n;
    double p;
    cin >> n >> p;
    a.mat[0][0] = 1 - p;
    a.mat[0][1] = p;
    a.mat[1][0] = p;
    a.mat[1][1] = 1 - p;
    if (n == 0)
        cout << 0;
    else
    {
        Matrix x = matPower(a, n);
        cout << setprecision(10) << fixed << x.mat[0][0];
    }
    return 0;
}