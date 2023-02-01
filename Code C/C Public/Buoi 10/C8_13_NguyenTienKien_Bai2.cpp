#include <iostream>

using namespace std;

void arrayIn(float *&a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
        a = (float *)realloc(a, (n + 1) * sizeof(float));
        if (*(a + i) == -1 || n == 50)
        {
            break;
        }
        n++;
    }
    if (n != 50 || n == 50 && *(a + n - 1) == -1)
    {
        n--;
    }
}

void arrayOut(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

void deleteElements(float *a, int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
    {
        *(a + i) = *(a + i + 1);
    }
    n--;
}

void deleteDuplicateElements(float *&a, int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) == *(a + j))
            {
                deleteElements(a, n, j);
                a = (float *)realloc(a, (n - 1) * (sizeof(float)));
                j--;
            }
        }
    }
}

void arrayHandling(float *a, int n)
{
    int m = 0, q = 0;
    float *b = new float[m], *c = new float[q];
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > 0)
        { 
            b = (float *)realloc(b, (m + 1) * sizeof(float));
            *(b + m) = *(a + i);
            m++;
        }
        else if (*(a + i) < 0)
        {
            c = (float *)realloc(c, (q + 1) * sizeof(float));
            *(c + q) = *(a + i);
            q++;
        }
    }
    arrayOut(b, m);
    arrayOut(c, q);
    delete[] b, c;
}

int main()
{
    int n = 1;
    float *a = new float[n];
    arrayIn(a, n);
    arrayOut(a, n);
    deleteDuplicateElements(a, n);
    arrayOut(a, n);
    arrayHandling(a, n);
    delete[] a;
    return 0;
}