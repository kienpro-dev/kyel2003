#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    while (sum <= 1000)
    {
        sum += n;
        n++;
    }
    cout << "n min de 1 + 2 + ... + n > 1000 la: " << n;
    return 0;
}