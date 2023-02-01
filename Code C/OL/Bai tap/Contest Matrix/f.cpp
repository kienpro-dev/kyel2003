#include <iostream>

using namespace std;

struct Matrix
{
    long long mat[101][101];
};

Matrix matMultiple(Matrix a, Matrix b, int n)
{
    Matrix res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res.mat[i][j] = min(a.mat[i][k], b.mat[j][k]);
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
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        single.mat[a - 1][b - 1] = c;
    }
    Matrix second = matPower(single, k, n);
    long long res = second.mat[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            res = min(res, second.mat[i][j]);
    cout << res << endl;
    return 0;
}