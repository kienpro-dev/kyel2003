//lay so lon thu 2 hoac nho thu 2 trong mang

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
    int max1=a[0];
    int max2;
    cout << max2<<endl;
    cout << "AI chon "<<n<<" so ngau nhien: ";
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        cout<<a[i]<<" ";
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max1==a[i])
        {
            continue;
        }
        else if(max2<a[i])
        {
            max2=a[i];
        }
    }
    cout << "\nSo lon nhat mang: "<<max1<<endl;
    cout << "So lon thu 2 mang: "<<max2<<endl;
    return 0;
}