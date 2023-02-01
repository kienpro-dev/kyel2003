#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int res_1 = a[0] * a[1] * a[2], res_2 = a[0] * a[n - 2] * a[n - 1];
    if (res_1 > res_2)
        cout << res_1;
    else
        cout << res_2;
    return 0;
}