#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void input(int &m, int &n)
{
    do
    {
        cin >> m >> n;
        if (m < 1 || m > 20 || n < 1 || n > 20)
            cout << "Khong thoa man, nhap lai: ";
    } while (m < 1 || m > 20 || n < 1 || n > 20);
}

void matrixIn(int a[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 51;
}

void matrixOut(int a[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

void sumOfMatrixes(int a[][20], int m, int n, int b[][20], int p, int q, int c[][20])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void multiMatrixes(int a[][20], int m, int n, int b[][20], int p, int q, int d[][20])
{
    int sum;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            d[i][j] = sum;
        } 
    }
}

int main()
{
    srand(time(0));
    int m, n, q, p;
    int a[20][20], b[20][20], c[20][20], d[20][20];
    cout << "Nhap so hang, cot mt A: ";
    input(m, n);
    matrixIn(a, m, n);
    cout << "Ma tran A random: " << endl;
    matrixOut(a, m, n);
    cout << "Nhap so hang, cot mt B: ";
    input(p, q);
    matrixIn(b, p, q);
    cout << "Ma tran B random: " << endl;
    matrixOut(b, p, q);
    if (m != p || n != q)
        cout << "Khong the cong 2 ma tran" << endl;
    else
    {
        sumOfMatrixes(a, m, n, b, p, q, c);
        cout << "Ma tran tong c: " << endl;
        matrixOut(c, m, n);
    }
    if (n != p)
        cout << "Khong the nhan 2 ma tran";
    else
    {
        multiMatrixes(a, m, n, b, p, q, d);
        cout << "Tich ma tran d: " << endl;
        matrixOut(d, m, q);
    }
    return 0;
}