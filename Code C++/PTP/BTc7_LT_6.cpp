// thao tác con trỏ cấp 2
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int **capphat(int n, int m);
void input(int **&a, int n, int m);
void output(int **&a, int n, int m);
void dcc(int **&a, int n, int m);
void dcp(int **&a, int n, int m);
int sum(int **&a, int n, int m);

int **capphat(int n, int m)
{
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        *(a + i) = new int[m];
    }
    return a;
}

void input(int **&a, int n, int m)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(a + i) + j) = rand() % 100;
        }
    }
}

void output(int **&a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << *(*(a + i) + j) << "\t";
        }
        cout << endl;
    }
}

void dcc(int **&a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(*(a + i) + i) << "\t";
    }
}

void dcp(int **&a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(*(a + i) + n - i - 1) << "\t";
    }
}

int sum(int **&a, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += *(*(a + i) + j);
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cout << "Nhap so mang con tro:";
    cin >> n;
    cout << "Nhap so con tro moi mang:";
    cin >> m;
    int **a = capphat(n, m);
    input(a, n, m);
    cout << "Mang con tro cap 2 ngau nhien:[0,99]" << endl;
    output(a, n, m);
    if (n == m)
    {
        cout << "Duong cheo chinh:" << endl;
        dcc(a, n, m);
        cout << endl;
        cout << "Duong cheo phu:" << endl;
        dcp(a, n, m);
    }
    int kq = sum(a, n, m);
    cout << "Tong cac gia tri con tro cap 2:" << kq;
    return 0;
}