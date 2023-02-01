#include <iostream>

using namespace std;

void Input(int &n)
{
    do
    {
        cin >> n;
    } while (n <= 3 || n > 100);
}

void ArrayIn(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void ArrayOut(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SortDesc(int a[], int iStart, int iEnd)
{
    for (int i = iStart; i < iEnd - 1; i++)
    {
        for (int j = i + 1; j < iEnd; j++)
        {
            if (a[i] < a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}

void SortAsc(int a[], int iStart, int iEnd)
{
    for (int i = iStart; i < iEnd - 1; i++)
    {
        for (int j = i + 1; j < iEnd; j++)
        {
            if (a[i] > a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}

void SegregatesOddAndEven(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] % 2 != 0)
            {
                Swap(a[i], a[j]);
                break;
            }
        }
        for (int j = n - i - 1; j >= 0; j--)
        {
            if (a[j] % 2 == 0 && a[j] != 0)
            {
                Swap(a[j], a[n - i - 1]);
                break;
            }
        }
    }
}

void Sort(int a[], int n)
{
    int iLe;
    int i = 0;
    while (a[i] % 2 != 0)
    {
        i++;
        iLe = i;
    }
    SortDesc(a, 0, iLe);
    for (int i = 0; i < n; i++)// muc dich em dung vong lap de test case dung voi nhieu so 0
    {
        if (a[iLe + i] != 0)
        {
            SortAsc(a, iLe + i, n);
            break;
        }
    }
}

int main()
{
    int n;
    Input(n);
    int a[99];
    ArrayIn(a, n);
    SegregatesOddAndEven(a, n);
    Sort(a, n);
    ArrayOut(a, n);
    return 0;
}