//chu vi dien tich tam giac
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

bool Kiemtra(int a, int b, int c);
int Chuvi(int a, int b, int c);
double Dientich(int a, int b, int c);

bool Kiemtra(int a, int b, int c)
{
    if(a<=0 ||b<=0 ||c<=0 ||(a+b)<=c||(a+c)<=b||(b+c)<=0)
    {
        return false;
    }
    return true;
}

int Chuvi(int a, int b, int c)
{
    return a+b+c;
}

double Dientich(int a, int b, int c)
{
    double p=Chuvi(a,b,c)/2.0;
    double dt=sqrt(p*(p-a)*(p-b)*(p-c));
    return dt;
}

int main()
{
    int a,b,c;
    cout <<"Nhap a:";
    cin >> a;
    cout <<"Nhap b:";
    cin >> b;
    cout <<"Nhap c:";
    cin >> c;
    int kt=Kiemtra(a,b,c);
    if(kt==false)
    {
        cout <<"Tam giac khong ton tai";
        return -1;
    }
    cout<<"Chu vi = "<<Chuvi(a,b,c)<<endl;
    cout<<"Dien tich = "<<setprecision(5)<<Dientich(a,b,c);
    return 0;
}