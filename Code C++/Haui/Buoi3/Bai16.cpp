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
    cout << "Nhap x: ";
    cin >> x;

    float result = 0;
    int i = 0;
    do
    {
        result += pow(x, i) / Factorial(i);
        i++;
    } while ((pow(x, i) / Factorial(i)) >= esp);
    cout << "e^" << x << " = " << result;
    return 0;
}