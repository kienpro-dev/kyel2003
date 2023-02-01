#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[10000], t[10000];
    cin >> s >> t;
    int n = strlen(s);
    if (n != strlen(t))
    {
        cout << "NO";
        return 0;
    }
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - i - 1])
        {
            check = false;
            break;
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}