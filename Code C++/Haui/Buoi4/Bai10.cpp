#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so thu can giao: ";
    cin >> n;
    int cnt = 0, i = 0;
    int mail = n;
    while (mail > 0)
    {
        cnt++;
        n /= 2;
        mail -= n;
        if (n == 0)
        {
            cnt++;
            break;
        }
    }
    cout << "Phai giao trong " << cnt << " ngay";
    return 0;
}