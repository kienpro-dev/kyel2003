#include<iostream>

using namespace std;

int main()
{
    int n,p,s=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> p;
        s+=p;
    }
    cout << s*1.0/n;
    return 0;
}