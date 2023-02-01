#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int red = ((3 * n) % k == 0) ? (3 * n / k) : ((3 * n / k) + 1);
    int white = ((5 * n) % k == 0) ? (5 * n / k) : ((5 * n / k) + 1);
    int black = ((6 * n) % k == 0) ? (6 * n / k) : ((6 * n / k) + 1);
    int purple = ((8 * n) % k == 0) ? (8 * n / k) : ((8 * n / k) + 1);
    cout << red * 7 + white * 8 + black * 9 + purple * 10;
    return 0;
}