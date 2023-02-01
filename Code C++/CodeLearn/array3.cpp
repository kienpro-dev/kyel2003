#include<iostream> //in ra so cac phan tu co gia tri bang k

using namespace std;

int main() {
    cout << "So so hang khao sat: ";
    int n;
    cin >> n;
    cout << "Nhap cac so: ";
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    } 
    cout << "Nhap so can tim: ";
    int k;
    cin >> k;
    int tong;
    for (int i=0;i<n;i++) {
        if (a[i]==k) {
            tong++;
        }
    }
    cout << "So cac so co gia tri bang "<<k<<" la: "<<tong;
    return 0;
}