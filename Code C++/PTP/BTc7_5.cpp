// tương quan giữa mảng và con trỏ
#include<iostream>

using namespace std;

int main()
{
    int a[]={5,6,3,9,12,0};
    cout << "Truy xuat mang a:"<<endl;
    for (int i=0;i<6;i++)
    {
        cout <<a[i]<<"\t";
    }
    cout <<endl;
    int *p=a; // gán mảng a cho con trỏ thì không cần dấu &
    cout << "Truy xuat gia tri con tro quan ly mang:"<<endl;
    for (int i=0;i<6;i++)
    {
        cout <<*(p+i)<<"\t";
    }
    cout <<endl;
    cout << "(Co the truy xuat theo cach khac)"<<endl;
    for (int i=0;i<6;i++)
    {
        cout <<p[i]<<"\t";
    }
    cout <<endl;
    cout << "Truy xuat nhung thay doi cac gia tri tang gap 3 lan:"<<endl;
    for (int i=0;i<6;i++)
    {
        *(p+i)*=3;
        cout <<*(p+i)<<"\t";
    }
    return 0;
}