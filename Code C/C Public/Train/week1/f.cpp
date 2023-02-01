#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[5];
    int cnt = 0;
    cin >> s;
    bool check = true;
    if (strlen(s) > 3)
    {
        cout << "Chat tay";
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
            cnt++;
        else if (s[i] >= 50 && s[i] <= 57)
            cnt += ((int)s[i] - 48);
        else
            check = false;
    }
    if (check)
        cout << cnt % 10;
    else
        cout << "Chat tay";
    return 0;
}