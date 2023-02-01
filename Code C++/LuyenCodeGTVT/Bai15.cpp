// dem mau vo non monster energy
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 3;
    if (a == b)
        cnt--;
    if (a == c)
        cnt--;
    else if (b == c)
        cnt--;
    cout << cnt;
    return 0;
}