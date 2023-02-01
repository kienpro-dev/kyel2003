// tro choi day so
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[100], sum_1=0, sum_2=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum_1+=a[i];
    }
    int num=round(sum_1*1.0/n);     
    for(int i=0;i<n;i++)
        sum_2+=pow(num-a[i],2);
    cout << sum_2;
    return 0;
}