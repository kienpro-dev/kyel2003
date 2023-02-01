#include <iostream>
#include <cmath>

using namespace std;

void Input(int &n)
{
    do
    {
        cin >> n;
    } while (n < 1 || n > 100);
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

bool CheckSquare(int x)
{
    if (sqrt(x) == (int)sqrt(x))
    {
        return true;
    }
    return false;
}

bool CheckPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool CheckPerfect(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (sum == x)
    {
        return true;
    }
    return false;
}

int GreatestDivisorOfIt(int x)
{
    int max = 1;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0 && i >= max)
        {
            max = i;
        }
    }
    return max;
}

void AddElements(int a[], int &n, int idx, int val)
{
    for (int i = n; i > idx; i--)
    {
        a[i] = a[i - 1];
    }
    a[idx] = val;
    n++;
}

void DeleteElements(int a[], int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void AddElementsByCondition(int a[], int &n, int x)
{
    cin >> x;
    int countSqe = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckSquare(a[i]))
        {
            AddElements(a, n, i + 1, x);
            i++;
        }
        else
        {
            countSqe++;
        }
    }
    if (countSqe == n)
    {
        int countPr = 0;
        int max = a[0];
        int j;
        for (int i = 0; i < n; i++)
        {
            if (CheckPrime(a[i]) && a[i] >= max)
            {
                j = i;
            }
            else if (!CheckPrime(a[i]))
            {
                countPr++;
            }
        }
        if (countPr == n)
        {
            AddElements(a, n, n, x);
        }
        else
        {
            AddElements(a, n, j + 1, x);
        }
    }
}

void ChangeElements(int a[], int n)
{
    int countPef = 0;
    for (int i = 0; i < n; i++)
    {
        if (!CheckPerfect(a[i]))
        {
            countPef++;
        }
    }
    if (countPef == n)
    {
        ArrayOut(a, n);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (CheckPerfect(a[i]))
            {
                a[i] = GreatestDivisorOfIt(a[i]);
            }
        }
        ArrayOut(a, n);
    }
}

void DeleteElementsByCondition(int a[], int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 == 0 && a[i + 1] % 2 == 0 || a[i] % 2 == 1 && a[i + 1] % 2 == 1)
        {
            DeleteElements(a, n, i + 1);
            i--;
        }
    }
}

int main()
{
    int n;
    Input(n);
    int a[99];
    ArrayIn(a, n);
    int x;
    AddElementsByCondition(a, n, x);
    ArrayOut(a, n);
    cout << endl;
    ChangeElements(a, n);
    cout << endl;
    DeleteElementsByCondition(a, n);
    ArrayOut(a, n);
    return 0;
}