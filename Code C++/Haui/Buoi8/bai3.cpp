#include <iostream>

using namespace std;

void input(int &m, int &n)
{
    cout << "Nhap m, n: ";
    do
    {
        cin >> m >> n;
        if (m <= 0 || n <= 0)
            cout << "Khong thoa man, nhap lai: ";
    } while (m <= 0 || n <= 0);
}

void allocateMatrix(int **&a, int m, int n)
{
    a = new int *[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
}

void releaseMatrix(int **a, int m)
{
    for (int i = 0; i < m; i++)
        delete[] a[i];
    delete[] a;
}

void matrixIn(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void matrixOut(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int sumOfFirstRow(int **a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[0][i];
    return sum;
}

int smallestNegativeNumOfMatrix(int **a, int m, int n)
{
    int min = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0)
            {
                min = a[i][j];
                for (int k = i; k < m; k++)
                    for (int l = j+1; l < n; l++)
                        if (a[k][l] < 0 && a[k][l] > min)
                            min = a[k][l];
                return min;
            }
        }
    }
    return 0;
}

int **transposeMatrix(int **a, int m, int n, int **x)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            x[j][i] = a[i][j];
    return x;
}

int main()
{
    int m, n, **b;
    input(m, n);
    allocateMatrix(b, m, n);
    cout << "Nhap ma tran:\n";
    matrixIn(b, m, n);
    cout << "Ma tran vua nhap:\n";
    matrixOut(b, m, n);
    int z = sumOfFirstRow(b, n);
    cout << "Tong cua dong dau: " << z << endl;
    int y = smallestNegativeNumOfMatrix(b, m, n);
    if (y == 0)
        cout << "Khong co so am";
    else
        cout << "Gia tri am lon nhat mang: " << y;
    int **x;
    allocateMatrix(x, n, m);
    x = transposeMatrix(b, m, n, x);
    cout << "\nMa tran chuyen vi cua ma tran ban dau: \n";
    matrixOut(x, n, m);
    releaseMatrix(x, n);
    releaseMatrix(b, m);
    return 0;
}