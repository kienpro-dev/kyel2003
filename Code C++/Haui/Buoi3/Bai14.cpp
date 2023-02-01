#include <iostream>
#include <math.h>

using namespace std;

#define esp 0.00001

unsigned long long Factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    float x;
    cout << "Nhap goc(do): ";
    cin >> x;
    float temp = x * 3.14159 / 180;
    float result = 0, sum = 0;
    int i = 0;
    do
    {
        result = pow(temp, 2 * i + 1) * 1.0 / Factorial(2 * i + 1);
        sum += pow(-1, i) * result;
        i++;
    } while (result >= esp);
    cout << "Sin(" << x << ") = " << sum;
    return 0;
}