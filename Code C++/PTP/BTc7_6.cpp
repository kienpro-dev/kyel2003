//Mảng con trỏ
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu:";
    cin >> n;
    int *pn[n]; // Khai báo mảng con trỏ pn với n phần tử
    cout << "Mang con tro:"<<endl;
    for (int i=0;i<n;i++)
    {
        pn[i]=new int; // cấp phát bộ nhớ cho từng con trỏ trong mảng
        *pn[i]=2*i + 1; // gán giá trị quản lý cho con trỏ trong mảng
        cout <<pn[i]<<"-->"<<*pn[i]<<"\n";
    }
    return 0;
}