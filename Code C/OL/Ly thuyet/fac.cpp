#include <iostream>

using namespace std;

long long pow(int a, int b)
{
    if (b == 0)
        return 1;
    int temp = pow(a, b / 2);
    return (b % 2 == 0) ? temp * temp : temp * temp * a;
}

int main()
{
    cout << pow(2,5);
    return 0;
}