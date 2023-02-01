#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int cnt = 0, round = 0, square = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                round++;
            else if (s[i] == ')' && round > 0)
            {
                cnt++;
                round--;
            }
            else if (s[i] == '[')
                square++;
            else if (s[i] == ']' && square > 0)
            {
                cnt++;
                square--;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}