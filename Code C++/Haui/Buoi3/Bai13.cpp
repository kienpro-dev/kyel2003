#include <iostream>
#include <math.h>

using namespace std;

#define esp 0.00001

int main()
{
    int a;
    cout << "Nhap a: ";
    do
    {
        cin >> a;
        if (a < 0)
            cout << "Yeu cau nhap a>=0: ";
    } while (a < 0);
    float result = 1.0;
    while (fabs(result * result - a) / a >= esp)
        result = (result * result + a) / (2 * result);
    cout << "Sqrt(" << a << ") = " << result;
    return 0;
}