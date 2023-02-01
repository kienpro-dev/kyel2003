#include<iostream> //in ra cax so %n

using namespace std;

int main() {
    cout << "Nhap so doan [a;b]: ";
    int a,b,n;
    cin >>a>>b;
    cout << "Nhap so chia: ";
    cin >> n;
    cout << "Cac so thuoc ["<<a<<";"<<b<<"] chia het cho "<<n<<" la: ";
    while (a<=b) {
        if (a%n==0) {
            cout << a << " ";
        }
        a++;
    }
    return 0;
}