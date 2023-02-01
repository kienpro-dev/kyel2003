//Tinh bieu thuc A=x+(x^2/2!)+(x^3/3!+...+(x^n/n!))
#include<iostream>
#include<math.h>

using namespace std;

int main() {
    cout << "Tinh bieu thuc A=x+(x^2/2!)+(x^3/3!+...+(x^n/n!))"<<endl;
    cout << "Nhap x: ";
    double x;
    cin >> x;
    cout << "Nhap n: ";
    int n;
    cin >> n;
    double A;
    for (int i=1;i<=n;i++) {
        double tu=pow(x,i);
        int mau=1;
        for (int j=1;j<=i;j++) {
            mau*=j;
        }
        A+=tu/mau;
    }
    cout << "Gia tri bieu thuc A(x,n) = "<<A;
    return 0;
}