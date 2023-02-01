#include<iostream> //hien thi nhung so chia het cho k

using namespace std;

int main() {
    cout << "So so hang muon khao sat: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Nhap cac so: ";
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "So muon chia: ";
    int k;
    cin >> k;
    cout << "Cac so chia het cho "<<k<<" la: ";
    for (int i=0;i<n;i++) {
        if (a[i]%k==0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}