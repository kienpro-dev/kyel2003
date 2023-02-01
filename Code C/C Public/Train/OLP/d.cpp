#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'a')
        {
            for (int j = i + 1; j <= s.length(); j++)
            {
                if (s[j] == 'z')
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}