#include<iostream>
#include<math.h>

using namespace std;

int main() {
    double A;
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double tu;
    double mau=1;
    for (int i=1;i<=n;i++) {
        tu=pow(x,i);
        mau*=i;
        A+=tu/mau;
    }
    cout << "Gia tri bieu thuc A = "<<A;
    return 0;
}