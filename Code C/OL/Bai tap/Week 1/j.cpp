#include<iostream>

using namespace std;

int main()
{
    long long n,a,b,cnt_1=0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        cnt_1+=(b-a);
    }
    cout <<cnt_1 + 1;
    return 0;
}