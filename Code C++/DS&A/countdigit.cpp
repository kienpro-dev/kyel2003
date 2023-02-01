#include <iostream>

using namespace std;

int countDigits(int a)
{
    if (a < 10)
        return 1;
    return 1 + countDigits(a / 10);
}

int main()
{
    cout << countDigits(245289) << endl;
    return 0;
}