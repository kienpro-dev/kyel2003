#include <iostream>
#include <math.h>

using namespace std;

void input(int &n)
{
    do
    {
        cin >> n;
    } while (n < 1 || n > 50);
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

void sortDesc(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) < *(a + j))
            {
                swap(*(a + i), *(a + j));
            }
        }
    }
}

void addElements(int *a, int &n, int idx, int val)
{
    for (int i = n; i > idx; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + idx) = val;
    n++;
}

void searchArray(int *a, int n)
{
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) < 0 && abs(*(a + i)) < 8)
        {
            cout << *(a + i) << " ";
            sum += *(a + i);
            cnt++;
        }
    }
    if (cnt > 0)
    {
        cout << sum * 1.0 / cnt;
    }
    else
    {
        cout << 0;
    }
}

int findSecondMax(int *a, int n)
{
    int *b = (int *)calloc(n, sizeof(int));
    int j = 0;
    while (j < n)
    {
        *(b + j) = *(a + j);
        j++;
    }
    sortDesc(b, n);
    int firstMax = *(b + 0);
    int secondMax;
    for (int i = 1; i < n; i++)
    {
        if (*(b + i) < firstMax)
        {
            secondMax = *(b + i);
            break;
        }
    }
    return secondMax;
}

void addElementsByCondition(int *&a, int &n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) < val)
        {
            a = (int *)realloc(a, (n + 1) * sizeof(int));
            addElements(a, n, i + 1, val);
            i++;
        }
    }
}

int main()
{
    int n;
    input(n);
    int *a = (int *)calloc(n, sizeof(int));
    arrayIn(a, n);
    arrayOut(a, n);
    searchArray(a, n);
    cout << "\n" << findSecondMax(a, n) << "\n";
    int x;
    cin >> x;
    addElementsByCondition(a, n, x);
    arrayOut(a, n);
    free(a);
    return 0;
}