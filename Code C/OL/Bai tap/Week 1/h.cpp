#include<iostream>

using namespace std;

int main()
{
    int t,a,b,c,d;
    cin >> t;
    int *res=new int[t];
    for(int i=0;i<t;i++)
    {
        cin >> a >> b >> c >> d;
        if(a==c && b+d==a || a==d && b+c==a || b==c && a+d==b || b==d && a+c==b)
            res[i]=1;
        else
            res[i]=0;
    }
    for(int i=0; i<t; i++)
    {
        if(res[i]==1)
            cout << "YES";
        else    
            cout << "NO";
        cout << endl;
    }
    delete[] res;
    return 0;
}