#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap canh huyen va canh goc vuong: ";
    cin >> a >> b;
    cout << "Ban kinh duong tron noi tiep: " << sqrt(a * a + b * b) / 2;
    return 0;
}