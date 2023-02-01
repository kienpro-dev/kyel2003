//sx mang tang hoac giam dan
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap gioi han ki tu mang: ";
    cin >> n;
    int a[n];
    cout << "Nhap cac gia tri cua mang: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout <<"Nhap a["<<i<<"]: ";
        cin >> a[i];
    }
    cout << "Ban muon sap xep mang theo thu tu nao (t/g): ";
    char c;
    cin >> c;
    if (c=='t')
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    int x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
        cout<<"Mang sau khi sap xep tu nho den lon: ";
        for(int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"] = "<<a[i]<<"   ";
        }
    }
    else if (c=='g')
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                {
                    int x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
        cout<<"Mang sau khi sap xep tu lon den nho: ";
        for(int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"] = "<<a[i]<<"   ";
        }
    }
    else
    {
        cout<<"Khong hop le!!";
    }
    return 0;
}