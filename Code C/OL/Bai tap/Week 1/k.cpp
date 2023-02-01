#include<iostream>

using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    if(m <n || k<n)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}