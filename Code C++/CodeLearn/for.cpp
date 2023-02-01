#include<iostream> // in ra cac so trong ab

using namespace std;

int main() {
    cout << "Nhap doan [a;b]: ";
    int a,b;
    cin >> a >> b;
    cout << "Cac so thuoc ["<<a<<";"<<b<<"] la: ";
    for (int i=a;i<=b;i++) {
        cout << i << " ";
    }
    return 0;
}