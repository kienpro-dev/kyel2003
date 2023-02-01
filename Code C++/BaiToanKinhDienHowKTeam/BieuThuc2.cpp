//tinh ra gri bieu thuc
#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
    cout << "Tinh gia tri bieu thuc A(x,n) = x+(x^3)/3!+(x^5)/5!+...+(x^2n+1)/(2n+1)!"<<endl;
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double tu;
    double mau,maugt=1;
    double A=0;
    for (int i=1;i<=n;i++)
    {
        tu=pow(x,(2*i)+1);
        mau=(2*i)+1;
        maugt=maugt*mau*(mau-1);
        A+=tu/maugt;
    }
    cout <<"Gia tri bieu thuc A(x,n) = "<<A+x;
    return 0;
}