#include <iostream>

using namespace std;

void arrayIn(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Dong thu " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}

void arrayOut(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int tongDCC(int a[][10], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][i];
    return sum;
}

bool check_1(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0 && i > j)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Nhap canh: ";
    cin >> n;
    int a[10][10];
    arrayIn(a, n);
    cout << "Ma tran vuong cap " << n << endl;
    arrayOut(a, n);
    cout << "Tong cua duong cheo chinh: " << tongDCC(a, n);
    cout << endl;
    if (!check_1(a,n))
        cout << "Khong phai ma tran tam giac";
    else
        cout << "La ma tran tam giac";
    return 0;
}