// thoi gian con lai
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int hour;
    if (a + b < 24)
        hour = a + b;
    else
        hour = (a + b) % 24;
    cout << hour;
    return 0;
}