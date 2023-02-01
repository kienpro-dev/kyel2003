//dao nguoc cac so 1 mang
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int a[n];
    cout << "AI chon "<<n<<" so ngau nhien:"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        cout <<a[i]<<"  ";
    }
    for(int i=0;i<(n/2);i++)
    {
        int t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    cout << "\nMang tren duoc dao nguoc thanh: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}