#include<iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long a[10],b[10], product = 1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i]; 
        b[i]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        b[i]=1;
        for(int j=0; j<n; j++)
        {
            if(i!=j)
                b[i]*=a[j];
        }
    }
    for(int i=0; i<n; i++)
        cout << b[i] << " ";
    return 0;
}