#include<iostream> //in ra a^b

using namespace std;

int main() 
{
    int a,b;
    cout << "Tinh a^b\nNhap a: ";
    cin >>a;
    cout << "Nhap b: ";
    cin >>b;
    int kq=1;
    while (b>=1) 
    {
        kq*=a;
        b--;
    } 
    cout << "Ket qua cua "<<a<<"^"<<b<<" la: "<< (long long)kq;
    return 0;
}