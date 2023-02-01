#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[100000];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int res=0,j=0,x;
    while(j<=n)
    {
        int max=a[j];
        for(int i=j;i<k;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                x=i;
            }   
        }
        j=x++;
        k+=x++;
        cout << max << " ";
    }
    cout << res;
    return 0;
}