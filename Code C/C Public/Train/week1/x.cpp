#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int l, r;
    cin >> l >> r;
    int x = rand() % (r - l + 1) + l;
    cout << x;
    return 0;
}