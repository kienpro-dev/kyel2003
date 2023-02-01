#include<bits/stdc++.h>

//a[u]+=k
// a[v+1]-=k
// for 1->n
//    a[i]+=a[i-1]


using namespace std;

int ST[20][1000001];


int main()
{
    int n,m,u,v,k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> ST[0][i];
    for (int i = 1; i <= log2(n); i++)
        for (int j = 1; j + (1 << i) - 1 <= n; j++)
            ST[i][j] = max(ST[i - 1][j], ST[i - 1][j + (1 << (i - 1))]);
    while(m--)
    {
        cin >> u >> v >> k;
        ST[u][0]+=k;
        ST[0][v+2]-=k;
        
    }
    return 0;
}