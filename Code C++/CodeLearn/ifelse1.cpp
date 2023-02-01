#include<iostream> //in ra so lon nhat trong 3so

using namespace std;

int main() {
    cout << "nhap 3 so hang: ";
    int a,b,c,max;
    cin >> a >> b >> c;
    if (a>=b && a>=c) {
        max=a;
    } else if (b>=c) {
        max=b;
    } else {
        max=c;
    }
    cout << "So lon nhat trong 3 so tren la: "<<max;
    return 0;
}