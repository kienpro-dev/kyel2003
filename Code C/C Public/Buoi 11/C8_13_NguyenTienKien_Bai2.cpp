#include <iostream>

using namespace std;

void input(int &n)
{
    do
    {
        cin >> n;
    } while (n < 2 || n > 30);
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

void arrayHandling(int *a, int n)
{
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            for (int j = n - 1; j > i; j--)
            {
                if (*(a + j) % 2 == 0)
                {
                    cout << j - i << endl;
                    swap(*(a + i), *(a + j));
                    arrayOut(a, n);
                    check = true;
                    break;
                }
            }
            if (!check)
                cout << *(a+i) << endl;
            break;
        }
        if (*(a + i) % 2 != 0 && i == n - 1)
            cout << "FALSE" << endl;
    }
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

void sortAsc(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
                swap(*(a + i), *(a + j));
        }
    }
}

int findSecondMin(int *a, int n)
{
    int *b = new int[n];
    int j = 0;
    while (j < n)
    {
        *(b + j) = *(a + j);
        j++;
    }
    sortAsc(b, n);
    int firstMin = *(b + 0);
    int secondMin;
    for (int i = 1; i < n; i++)
    {
        if (*(b + i) > firstMin)
        {
            secondMin = *(b + i);
            break;
        }
    }
    delete[] b;
    return secondMin;
}
int main()
{
    int n;
    input(n);
    int *a = new int[n];
    arrayIn(a, n);
    int k;
    cin >> k;
    arrayOut(a, n);
    arrayHandling(a, n);
    if (k < 1 || k > n)
        cout << "NO";
    else
    {
        deleteElements(a, n, k - 1);
        arrayOut(a, n);
        int secondMin = findSecondMin(a, n);
        addElements(a, n, 1, secondMin);
        arrayOut(a, n);
    }
    delete[] a;
    return 0;
}