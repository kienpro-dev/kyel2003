// nha soan nhac tai ba
#include <iostream>

using namespace std;

int main()
{
    int a[8];
    for (int i = 0; i < 8; i++)
        cin >> a[i];
    int cnt_1 = 0, cnt_2 = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > a[i + 1])
            cnt_1++;
        else if (a[i] < a[i + 1])
            cnt_2++;
    }
    if (cnt_1 == 7 )
        cout << "GIAM";
    else if (cnt_2 ==7)
        cout << "TANG";
    else
        cout << "KHONGBIET";
    return 0;
}