#include<iostream> //sx cac so tu nho den lon

using namespace std;

int main() {
    cout << "So cac so muon khao sat: ";
    int n;
    cin >> n;
    cout << "Nhap cac so: ";
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "Thu tu sau khi sap xep: ";
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[j]<a[i]) {
                int c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
        cout << a[i] << " ";
    }
    return 0;
}