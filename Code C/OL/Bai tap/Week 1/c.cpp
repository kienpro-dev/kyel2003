#include<iostream>

using namespace std;

int main()
{
    int t,a,b,n,cnt,gt[100];
    cin >>t;
    for(int i=0;i<t;i++)
    {
        cin >> a >> b >> n;
        cnt=0;
        while(a<=n && b<=n)
        {
            if(a<b)
                a+=b;
            else
                b+=a;
            cnt++;
        }
        gt[i]=cnt;
    }
    for(int i=0;i<t;i++)
        cout << gt[i] << endl;
    return 0;
}