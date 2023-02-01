#include<iostream>

using namespace std;

int sum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}

int main() 
{
    int a,b;
    cin >> a >> b;
    bool check=false;
    for(int i=a;i<=b;i++)
    {
        if(i%sum(i)==0)
        {
            cout << i << " ";
            check=true;
        }
    }
    if(!check) 
        cout << "-1";
    return 0;
}