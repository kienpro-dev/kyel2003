#include<iostream>

using namespace std;

int main()
{
    int a,b,c,cnt=0;
    cin >> a >> b >> c;
    while(a+b<=c || a+c<=b || b+c<=a)
    {
        cnt++;
        if(a==min(a,min(b,c)))
            a++;
        else if(b==min(b,min(a,c)))
            b++;
        else
            c++;
    }
    cout << cnt;
    return 0;
}