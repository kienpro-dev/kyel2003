#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool check=false;
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(a[i]==a[j])
                {
                    check=true;
                    break;
                }
            }
            if(check)
                break;
        }
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        delete[] a;
    }
    return 0;
}