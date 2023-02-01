//truy xuat cac gia tri tren mang 1 chieu
#include<iostream>

using namespace std;

#define N 5 //giống như hằng số const dùng để gán N=5 trong suốt chương trình

int main() 
{
    int a[N];
    cout<<"Nhap cac gia tri cho mang: "<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin >> a[i];
    }
    cout<<"Ban muon xuat mang nguoc hay xuoi (n/x): ";
    char s;
    cin >> s;
    if (s=='x')
    {
        cout<<"Mang xuat gia tri xuoi: "<<endl;
        for(int i=0;i<N;i++)
        {
            cout<<"a["<<i<<"] = "<<a[i]<<"\t";
        }
    }
    else if (s=='n')
    {
        cout<<"Mang xuat gia tri nguoc: "<<endl;
        for(int i=N-1;i>=0;i--)
        {
            cout<<"a["<<i<<"] = "<<a[i]<<"\t";
        }
    }
    else 
    {
        cout<<"Khong hop le!!";
    }
    return 0;
}