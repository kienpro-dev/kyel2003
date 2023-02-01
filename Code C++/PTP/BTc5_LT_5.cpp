// tong 2 ma tran cung cap
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void input(int a[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 51;
}

void output(int a[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    srand(time(0));
    int m, n;
    cout << "Nhap kich thuoc 2 ma tran: ";
    cin >> m >> n;
    int a[20][20], b[20][20], c[20][20];
    input(a, m, n);
    input(b, m, n);
    cout << "Ma tran a duoc chon: " << endl;
    output(a, m, n);
    cout << "Ma tran b duoc chon: " << endl;
    output(b, m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    cout << "Ma tran tong c la: " << endl;
    output(c, m, n);
    return 0;
}