#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        string s = {};
        cin >> n;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                s += "B";
                n /= 2;
            }
            else
            {
                s += "A";
                n--;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--)
            cout << s[i];
        cout << endl;
    }
    return 0;
}