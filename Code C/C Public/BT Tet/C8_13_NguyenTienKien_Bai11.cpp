#include <iostream>

using namespace std;

void Input(int &n)
{
    do
    {
        cin >> n;
    } while (n < 1 || n > 99);
}

bool CheckAscArray(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

void ArrayIn(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void ArrayOut(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void ArrayHandling(float a[], float b[], float c[], int n, int m, int &k)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    // vong while dung lai den mang it phan tu hon, nen can them cac so con lai cua mang nhieu phan tu hon vao mang c
    // luc nay i van se nho hon n hoac j van se nho hon m
    while (i < n)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < m)
    {
        c[k] = b[j];
        k++;
        j++;
    }
}

int main()
{
    int n, m;
    Input(n);
    Input(m);
    float a[99], b[99];
    do
    {
        ArrayIn(a, n);
        ArrayIn(b, m);
    } while (!CheckAscArray(a, n) || !CheckAscArray(b, m));
    int k = 0;
    float c[198];
    ArrayHandling(a, b, c, n, m, k);
    ArrayOut(c, k);
    return 0;
}