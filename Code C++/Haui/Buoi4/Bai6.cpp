#include<iostream>

using namespace std;

void input(int &n)
{
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if(n<2)
            cout << "Yeu cau nhap n > 1: ";
    } while (n<2);
}

int Fibonucci(int n)
{
    if(n<=2)    
        return 1;
    return Fibonucci(n-1)+Fibonucci(n-2);
}

void fiboArray(int k)
{
    for(int i=1;i<=k;i++)
        cout << Fibonucci(i)<<" ";
    cout << endl;
}

int main()
{
    int n;
    input(n);
    fiboArray(n);
    return 0;
}