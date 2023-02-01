//hotel
#include<iostream>

using namespace std;

int main()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    if(n>k)
        cout << x*k + y*(n-k);
    else
        cout << n*x;
    return 0;
}