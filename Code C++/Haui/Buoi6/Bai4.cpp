#include <iostream>

using namespace std;

void input(int &n)
{
    do
    {
        cin >> n;
        if (n < 3 || n > 10)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 3 || n > 10);
}

void matrixIn(float a[][10], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void matrixOut(float a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

bool checkIdentityMatrix(float a[][10], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j && a[i][j] != 1 || i != j && a[i][j] != 0)
                return false;
    return true;
}

void swapRow(float a[][10], int n, int row_1, int row_2)
{
    for (int i = 0; i < n; i++)
        swap(a[row_1][i], a[row_2][i]);
}

void getTriangularMatrix(float a[][10], int n, bool &check)
{
    int k;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i][i] == 0)
        {
            k = i + 1;
            while (a[k][i] == 0 && k < n)
                k++;
            swapRow(a, n, k, i);
            check = true;
        }
        for (int k = i + 1; k < n; k++)
        {
            float tmp = -a[k][i] * 1.0 / a[i][i];
            for (int j = i; j < n; j++)
                a[k][j] += tmp * a[i][j];
        }
    }
}

int detOfMatrix(float a[][10], int n)
{
    int det = 1;
    for (int i = 0; i < n; i++)
        det *= a[i][i];
    return det;
}

int main()
{
    float a[10][10];
    int n;
    cout << "Nhap n: ";
    input(n);
    cout << "Nhap ma tran: " << endl;
    matrixIn(a, n);
    cout << "Ma tran vua nhap: " << endl;
    matrixOut(a, n);
    if (checkIdentityMatrix(a, n))
        cout << "Ma tran vua nhap la ma tran don vi";
    else
        cout << "Ma tran vua nhap khong phai la ma tran don vi";
    bool haveSwap = false;
    getTriangularMatrix(a, n, haveSwap);
    int det = detOfMatrix(a, n);
    if (haveSwap)
        det *= -1;
    cout << "\nDinh thuc ma tran det = " << det;
    return 0;
}