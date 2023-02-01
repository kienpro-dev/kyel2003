#include<iostream> //tich cac chan am dc nhap vao

using namespace std;

int main() {
    int n;
    cout << "So cac so muon dung: ";
    cin >> n;
    int tich=1;
    cout << "Nhap cac so: ";
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        if (a[i]%2==0 && a[i]<0) {
            tich*=a[i];
        }
    }
    cout << "Tich cua chung la: " << tich;
    return 0;
}