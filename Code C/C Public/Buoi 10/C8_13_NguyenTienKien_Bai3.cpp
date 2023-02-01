#include <iostream>

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

void sortAsc(int *a, int n, int &cnt)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                swap(*(a + i), *(a + j));
            }
        }
    }
    cnt++;
}

void convertNegativeToPositive(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) < 0)
        {
            *(a + i) *= -1;
        }
    }
}

void deleteElements(int *a, int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
    {
        *(a + i) = *(a + i + 1);
    }
    n--;
}

void getSumOfArray(int *a, int n, int &x, int &y)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            y += *(a + i);
        }
        else
        {
            x += *(a + i);
        }
    }
}

int greatestCommonDivisor(int x, int y)
{
    int result;
    if (x == 0 || y == 0)
    {
        result = x + y;
    }
    else
    {
        while (x != y)
        {
            if (x > y)
            {
                x -= y;
            }
            else
            {
                y -= x;
            }
        }
        result = x;
    }
    return result;
}

int main()
{
    int n;
    input(n);
    int *a = new int[n];
    arrayIn(a, n);
    int cnt = 0;
    sortAsc(a, n, cnt);
    arrayOut(a, n);
    convertNegativeToPositive(a, n);
    sortAsc(a, n, cnt);
    arrayOut(a, n);
    cout << cnt << endl;
    deleteElements(a, n, cnt);
    a = (int *)realloc(a, (n - 1) * (sizeof(float)));
    arrayOut(a, n);
    int sumOfEven = 0, sumOfOdd = 0;
    getSumOfArray(a, n, sumOfEven, sumOfOdd);
    cout << sumOfEven << endl << sumOfOdd << endl;
    int gcd = greatestCommonDivisor(sumOfEven, sumOfOdd);
    cout << gcd << endl;
    int s = sumOfEven + sumOfOdd;
    if (s - 19 * gcd > 0)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
    delete[] a;
    return 0;
}