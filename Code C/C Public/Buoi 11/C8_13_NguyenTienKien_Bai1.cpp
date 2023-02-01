#include <iostream>
#include <math.h>

using namespace std;

void input(int &n)
{
    do
    {
        cin >> n;
    } while (n <= 0);
}

void arrayIn(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}

void arrayOut(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

void searchArray(int *a, int n)
{
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 5 == 0 && *(a + i) % 3 == 0)
        {
            sum += *(a + i);
            cnt++;
        }
    }
    if (cnt > 0)
        cout << sum << " " << sum * 1.0 / cnt << endl;
    else
        cout << "NO" << endl;
}

bool checkSquare(int x)
{
    if (sqrt(x) == (int)sqrt(x))
        return true;
    return false;
}

void deleteElements(int *&a, int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
    {
        *(a + i) = *(a + i + 1);
    }
    n--;
    a = (int *)realloc(a, (n - 1) * sizeof(int));
}

void deleteSquareNumbers(int *&a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkSquare(*(a + i)))
            deleteElements(a, n, i);
    }
}

void addElements(int *&a, int &n, int idx, int val)
{
    a = (int *)realloc(a, (n + 1) * sizeof(int));
    for (int i = n; i > idx; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + idx) = val;
    n++;
}

int findMax(int *a, int n)
{
    int Max = *(a + 0);
    for (int i = 1; i < n; i++)
    {
        if (*(a + i) > Max)
            Max = *(a + i);
    }
    return Max;
}

int findMin(int *a, int n)
{
    int Min = *(a + 0);
    for (int i = 1; i < n; i++)
    {
        if (*(a + i) < Min)
            Min = *(a + i);
    }
    return Min;
}

void addElementsByCondition(int *&a, int &n)
{
    int Max = findMax(a, n), Min = findMin(a, n);
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == Min)
        {
            addElements(a, n, i, Max);
            i++;
        }
    }
}

int main()
{
    int n;
    input(n);
    int *a = new int[n];
    arrayIn(a, n);
    arrayOut(a, n);
    searchArray(a, n);
    deleteSquareNumbers(a, n);
    arrayOut(a, n);
    addElementsByCondition(a, n);
    arrayOut(a, n);
    delete[] a;
    return 0;
}