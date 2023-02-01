#include<iostream> //tra ve so phan tu le

using namespace std;

int show(int a[1000],int n) {
    int sl=0;
    for (int i=0;i<n;i++) {
        if (a[i]%2==1) {
            sl++;
        }
    }
    return sl;
}
int main() {
    cout <<"Nhap so ki tu toi da: ";
    int n,a[1000];
    cin >> n;
    cout << "Nhap cac ki tu: ";
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "So luong so le la: ";
    cout << show(a,n);
    return 0;
}