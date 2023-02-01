#include <iostream>

using namespace std;

void input(float a[], int &n)
{
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1 || n == 100)
        {
            break;
        }
        n++;
    }
    if (n != 100 || n == 100 && a[n - 1] == -1)
        n--;
}

void output(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void search(float a[], int n, float x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            cnt++;
    cout << "So lan xuat hien cua " << x << " la: " << cnt << endl;
    cout << "Vi tri xuat hien: ";
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            cout << i + 1 << " ";
}

int main()
{
    int n = 1;
    float a[100], x;
    input(a, n);
    cout << "Mang ban dau: ";
    output(a, n);
    cout << "Nhap x: ";
    cin >> x;
    search(a, n, x);
    return 0;
}