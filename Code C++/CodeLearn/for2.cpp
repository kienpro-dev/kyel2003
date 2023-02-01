#include<iostream> //tong cac so %n trong ab

using namespace std;

int main() {
    cout << "Nhap doan [a;b]: ";
    int a,b;
    cin >> a >> b;
    int tong=0;
    cout << "Nhap so chia: ";
    int n;
    cin >> n;
    cout << "Cac so thuoc ["<<a<<";"<<b<<"] chia het cho "<<n<<" la: ";
    for (int i=a;i<=b;i++) {
        if (i%n==0) {
            cout << i << " ";
        }
    }
    return 0;
}