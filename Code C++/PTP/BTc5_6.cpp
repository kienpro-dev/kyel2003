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
    cout << "Mang "<<n<<" phan tu ngau nhien: "<<endl;
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        cout << a[i]<<" ";
    }
    int sole=0,sochan=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sole++;
        }
        else
        {
            sochan++;
        }
    }
    if(sole==0)
    {
        cout<<"Mang tren khong co so le nao";
    }
    else 
    {
        cout<<"\nCac so le trong mang: "<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n==>Mang co "<<sole<<" so le"<<endl;
    }
    if(sochan==0)
    {
        cout<<"Mang tren khong co so chan nao";
    }
    else 
    {
        cout<<"Cac so chan trong mang: "<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n==>Mang co "<<sochan<<" so chan"<<endl;
    }
    cout <<"Cac so nguyen to trong mang: "<<endl;
    for(int i=0;i<n;i++)
    {
        int souoc=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                souoc++;
            }
        }
        if(souoc==2)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}