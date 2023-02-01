#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 2)
            cout << "Yeu cau nhap n>=2: ";
    } while (n < 2);
    int sum = 0, cnt = 0;
    bool check;
    for (int i = 2; i <= n; i++)
    {
        check = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                check = false;
        }
        if (check)
        {
            cnt++;
            sum += i;
        }
    }
    cout << "Tong cac snt thuoc [" << 2 << ", " << n << "] = " << sum << endl;
    cout << "So luong snt = " << cnt;
    return 0;
}