#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    float p = (a + b + c) / 2; // nua chu vi
    float s = sqrt(fabs(p * (p - a) * (p - b) * (p - c)));
    cout << "Duong tron ngoai tiep: " << a * b * c / (4 * s);
    return 0;
}