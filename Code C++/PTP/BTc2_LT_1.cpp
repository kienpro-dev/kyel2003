// in ra ma ASCII cua 1 ki tu
#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Nhap ki tu: ";
    cin >> c;
    cout << "Ki tu " << c << " trong ma ASCII la: " << int(c) << endl;
    char c2 = c + 1;
    cout << "KI tu ke tiep la: " << c2 << " voi ma ASCII la: " << c + 1;
    system("PAUSE");
    return 0;
}