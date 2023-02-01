#include <iostream>
#include <math.h>

using namespace std;

void deleteElements(float a[], int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

int main()
{
    int n;
    float a[100];
    cout << "nhap n: ";
    do
    {
        cin >> n;
        if (n < 1 || n > 30)
            cout << "Khong thoa, nhap lai: ";
    } while (n < 1 || n > 30);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    float sum = 0, cnt = 0;
    cout << "Cac phan tu am co tri tuyet doi > 5: ";
    for (int i = 0; i < n; i++)
    {
        if (fabs(a[i]) > 5 && a[i] < 0)
        {
            cout << a[i] << " ";
            sum += a[i];
            cnt++;
        }
    }
    cout << "\nTBC = " << sum / cnt << endl;
    int k;
    cin >> k;
    if (k < 0 || k >= n)
        cout << "Khong hop le!!";
    else
    {
        deleteElements(a, n, k);
        cout << "Mang sau khi xoa: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    return 0;
}