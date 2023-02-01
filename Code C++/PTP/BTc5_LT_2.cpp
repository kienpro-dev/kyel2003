//tao 2 mang, gop 2 mang, in ra cac so giam hoac tang trong mang moi
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int m,n;
    cout << "So luong phan tu mang 1: ";
    cin >> m;
    cout << "So luong phan tu mang 2: ";
    cin >> n;
    int a1[m],a2[n];
    int a3[m+n];
    int phantu=0;
    for(int i=0;i<m;i++)
    {
        a1[i]=rand()%100;
        a3[phantu]=a1[i];
        phantu++;
    }
    for(int i=0;i<n;i++)
    {
        a2[i]=rand()%100;
        a3[phantu]=a2[i];
        phantu++;
    }
    cout<<"AI chon "<<m<<" so cho mang 1:"<<endl;
    for (int i=0;i<m;i++)
    {
        cout<<a1[i]<<"  ";
    }
    cout<<"\nAI chon "<<n<<" so cho mang 2:"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a2[i]<<"  ";
    }
    cout << "\nAI da tron 2 mang lai\nNhap kieu xuat ra: ";
    string s;
    cin >> s;
    if(s=="tang")
    {
        for(int i=0;i<(m+n)-1;i++)
        {
            for(int j=i+1;j<(m+n);j++)
            {
                if(a3[j]<=a3[i])
                {
                    int tam1=a3[i];
                    a3[i]=a3[j];
                    a3[j]=tam1;
                }
            }
        }
        cout << "Xuat mang sau khi tron tang dan: "<<endl;
        for(int i=0;i<(m+n);i++)
        {
            cout<<a3[i]<<"  ";
        }
    }
    else if(s=="giam")
    {
        for(int i=0;i<(m+n)-1;i++)
        {
            for(int j=i+1;j<(m+n);j++)
            {
                if(a3[j]>=a3[i])
                {
                    int tam1=a3[i];
                    a3[i]=a3[j];
                    a3[j]=tam1;
                }
            }
        }
        cout << "Xuat mang sau khi tron giam dan: "<<endl;
        for(int i=0;i<(m+n);i++)
        {
            cout<<a3[i]<<"  ";
        }
    }
    else
    {
        cout<<"loi du lieu!!";
    }
    return 0;
}