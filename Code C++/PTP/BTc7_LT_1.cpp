// hàm đổi giá trị 2 biến con trỏ
#include<iostream>

using namespace std;

void swap(double *&pa, double *&pb);

void swap(double *&pa, double *&pb)
{
    double temp=*pa;
    *pa=*pb;
    *pb=temp;
}

int main()
{
    double a,b;
    cout <<"Nhap a:";
    cin >> a;
    cout <<"Nhap b:";
    cin >> b;
    swap(a,b);
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;
    return 0;
}