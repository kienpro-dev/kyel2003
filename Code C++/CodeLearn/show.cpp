#include<iostream> //in ra so lon nhat trong mang

using namespace std;

void show(int a[1000],int n) {
    int max=a[0];
    for (int i=0;i<n;i++) {
        if (a[i]>=max) {
            max=a[i];
        }
    }
    cout << max;
}
int main() {
    cout << "Nhap so ki tu toi da: ";
    int n,a1[1000],a2[1000];
    cin >> n;
    cout << "Nhap cac so day 1: ";
    for (int i=0;i<n;i++) {
        cin >> a1[i];
    }
    cout << "Nhap cac so day 2: ";
    for (int i=0;i<n;i++) {
        cin >> a2[i];
    }
    cout << "Max cua day 1: \n"; 
    show(a1,n);
    cout << "Max cua day 2: ";
    show(a2,n);
    return 0;
}