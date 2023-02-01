#include<iostream>

using namespace std;

int main()
{
    int n,a[1000][3],cnt_1,cnt_2=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cnt_1 = 0;
        for(int j=0;j<3;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
                cnt_1++;
        }
        if(cnt_1>=2)
            cnt_2++;
    }
    cout << cnt_2;
    return 0;
}