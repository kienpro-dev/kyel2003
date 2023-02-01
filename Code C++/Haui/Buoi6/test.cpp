#include <iostream>

using namespace std;

void arrayIn(int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << "VDV thu " << i + 1 << ": " << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "Lan " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }
}

void arrayOut(int a[][10], int m, int n)
{
    for (int i = -1; i < m; i++)
    {
        if (i >= 0)
            cout << "VDV " << i + 1;
        for (int j = 0; j < n; j++)
        {
            if (i == -1)
                cout << "\tLan " << j + 1;
            else
                cout << "\t" << a[i][j];
        }
        cout << endl;
    }
}

void maxArray(int a[][10], int m, int n)
{
    int Max = a[0][0], vdv=1;
    for (int i = 0; i < m; i++)
        for (int j = 0;j < n; j++)
            if (a[i][j] > Max)
            {
                Max = a[i][j];
                vdv = i + 1;
            }
    cout << "Muc ta cao nhat: " << Max << endl;
    cout << "Ky luc cua vdv thu: " << vdv << endl;
}

int champion(int a[][10], int m, int n)
{
    int sum, cp, Max = 0;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
            if (sum > Max)
            {
                Max = sum;
                cp = i + 1;
            }
        }
    }
    return cp;
}

int main()
{
    int a[10][10];
    int m, n;
    cout << "Nhap so vdv: ";
    cin >> m;
    cout << "Nhap so lan: ";
    cin >> n;
    arrayIn(a, m, n);
    arrayOut(a, m, n);
    maxArray(a, m, n);
    cout << "VDV vo dich la van dong vien thu: " << champion(a, m, n);
    return 0;
}