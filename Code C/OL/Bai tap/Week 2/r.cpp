#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[250];
    cin >> s;
    int cnt = 0, j = 0;
    while (j <= 9)
    {
        bool check_r = false, check_g = false, check_b = false;
        for (int i = 1; i < strlen(s); i += 2)
        {
            if ((int)s[i] - 48 == j && s[i - 1] == 'R' && !check_r)
                check_r = true;
            if ((int)s[i] - 48 == j && s[i - 1] == 'G' && !check_g)
                check_g = true;
            if ((int)s[i] - 48 == j && s[i - 1] == 'B' && !check_b)
                check_b = true;
            if (check_b && check_g && check_r)
            {
                cnt++;
                break;
            }
        }
        j++;
    }
    cout << cnt;
    return 0;
}