//hàm và mảng
#include<iostream>

using namespace std;

void ShowIn(int a[], int n);
void ShowOut(int a[], int n);
int ReturnK(int a[],int n, int k);
void Arrange(int a[],int n);

void ShowIn(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}

void ShowOut(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}

int ReturnK(int a[],int n, int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
        }
    }
    return -1;
}

void Arrange(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

int main()
{
    cout<<"Nhap so luong phan tu:";
    int n;
    cin >> n;
    int a[n];
    ShowIn(a,n);
    cout<<"Mang sau khi nhap:"<<endl;
    ShowOut(a,n);
    int k;
    cout << "\nNhap so muon tim:";
    cin >> k;
    int kq=ReturnK(a,n,k);
    if(kq==-1)
    {
        cout << "Khong tim thay "<<k<<" trong mang";
    }
    else
    {
        cout << "Thay "<<k<<" o vi tri thu "<<kq;
    }
    cout<<endl;
    cout<<"Mang sap xep tang dan:"<<endl;
    Arrange(a,n);
    cout<<"Mang sau khi sap xep:"<<endl;
    ShowOut(a,n);
    return 0;
}