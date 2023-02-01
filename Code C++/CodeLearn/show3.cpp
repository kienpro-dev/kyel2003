#include<iostream> //sx lai cac so nhap vao tu nho den lon

using namespace std;

void show(int a[1000],int n) {
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[j]<=a[i]) {
                int c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
        cout << a[i] << " ";
    }
}
int main() {
    cout << "Nhap ki tu toi da: ";
    int n,a[1000];
    cin >> n;
    cout << "Nhap cac ki tu: ";
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << "Cac ki tu sx tu nho den lon: ";show(a,n);
    return 0;
}