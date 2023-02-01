#include<iostream> //tra ve tich cac so trong mang

using namespace std;

int show(int a[1000],int n) {
    int tich=1;
    for (int i=0;i<n;i++) {
        tich*=a[i];
    }
    return tich;
}
int main() {
    cout << "Nhap so ki tu toi da: ";
    int n,a[1000];
    cin >> n;
    cout << "Nhap cac gia tri: ";
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "Tich cac gia tri tren la: ";show(a,n);
    return 0;
}