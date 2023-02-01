#include<iostream>

using namespace std;

#define P 1440

int main()
{
    int t,h,m;
    cin >> t;
    int *res=new int[t];
    for (int i = 0; i < t; i++)
    {
        cin >> h >>m;
        res[i]=P-(h*60+m);
    }
    for (int i = 0; i < t; i++)
        cout << res[i] << endl;
    delete[] res;
    return 0;
}