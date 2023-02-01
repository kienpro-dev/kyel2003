//sx cac so chan hoac le tang hoac giam dan trong mang
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
    cout<< "AI chon "<<n<<" so ngau nhien: "<<endl;
    for (int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        cout<<a[i]<<"  ";
    }
    string s1;
    cout << "\nNhap dang so: ";
    cin >> s1;
    if(s1=="chan" || s1=="sochan")
    {
        string s2;
        cout << "Nhap kieu: ";
        cin >> s2;
        if(s2=="tang")
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]<a[i])
                    {
                        int tam1=a[i];
                        a[i]=a[j];
                        a[j]=tam1;
                    }
                }
            }
            cout << "Cac so chan tang dan trong mang: "<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    cout<<a[i]<<"  ";
                }
            }
        }
        else if(s2=="giam")
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]>a[i])
                    {
                        int tam1=a[i];
                        a[i]=a[j];
                        a[j]=tam1;
                    }
                }
            }
            cout << "Cac so chan giam dan trong mang: "<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    cout<<a[i]<<"  ";
                }
            }
        }
        else
        {
            cout<<"Sai du lieu!!";
        }
    }
    else if(s1=="le" || s1=="sole")
    {
        string s3;
        cout << "Nhap kieu: ";
        cin >> s3;
        if(s3=="tang")
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]<a[i])
                    {
                        int tam1=a[i];
                        a[i]=a[j];
                        a[j]=tam1;
                    }
                }
            }
            cout << "Cac so le tang dan trong mang: "<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]%2!=0)
                {
                    cout<<a[i]<<"  ";
                }
            }
        }
        else if(s3=="giam")
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]>a[i])
                    {
                        int tam1=a[i];
                        a[i]=a[j];
                        a[j]=tam1;
                    }
                }
            }
            cout << "Cac so le giam dan trong mang: "<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]%2!=0)
                {
                    cout<<a[i]<<"  ";
                }
            }
        }
        else
        {
            cout<<"Sai du lieu!!";
        }
    }
    else 
    {
        cout << "Dinh dang so chua duoc cap nhat";
    }
    return 0;
}