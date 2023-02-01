#include <iostream>

using namespace std;

void Input(int &n)
{
    do
    {
        cin >> n;
    } while (n < 0);
}

void ArrayIn(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void GetDifferenceArray(int a[], int b[], int n)
{
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        b[k] = a[i + 1] - a[i];
        k++;
    }
}

int GetTheMostAppearingElement(int b[], int n)
{
    int max = 1;
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    return max;
}

int main()
{
    int n;
    Input(n);
    if (n == 1)
    {
        cout << "Khong tim thay mang so hoc vi khong du phan tu!!";
        return 0;
    }
    int a[99];
    ArrayIn(a, n);
    int b[99]; // mang luu tru hieu cua cac phan tu lien tiep
    GetDifferenceArray(a, b, n);
    int max = GetTheMostAppearingElement(b, n) + 1; // bien max luu tru so luong phan tu toi da thoa man mang so hoc
    cout << max;
    return 0;
}