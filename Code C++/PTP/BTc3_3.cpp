//tinh cv, dt tam giac bang herong
#include<iostream>
#include<math.h>

using namespace std;

int main() {
    double a,b,c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;
    double cv=a+b+c;
    double p=cv/2;
    double dt;
    if (a>0 && b>0 && c>0) {
        if ((a+b)>c && (a+c)>b && (b+c)>a) {
            cout << "Chu vi cua tam giac: "<<cv<<endl;
            dt=sqrt(p*(p-a)*(p-b)*(p-c));
            cout << "Dien tich tam giac: "<<dt;
        } else {
            cout << "Cac canh khong tao thanh tam giac.";
        }
    } else {
        cout << "Cac canh tam giac phai lon hon 0";
    }
    return 0;
}