#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    // while(a*a<=1000)
    // {
    //     a++;
    // }
    do
    {
        a++;
    } while (a * a <= 1000);

    cout << "a min sao cho a^2 > 1000 la: " << a;
    return 0;
}