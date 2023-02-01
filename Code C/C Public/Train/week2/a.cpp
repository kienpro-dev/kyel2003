#include <iostream>

using namespace std;

int main()
{
    int a, b, m, n, p;
    cin >> a >> b;
    m = a + 1, n = b + 1;
    if (m % 2 != 0 && n % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    else if (m % 2 != 0 && n % 2 == 0 || m % 2 == 0 && n % 2 == 0 && m > n)
        swap(m, n);
    p = m * 2 - 1;
    cout << "YES " << p;
    return 0;
}