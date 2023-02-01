#include<iostream>

using namespace std;

int main() {
    cout << "Nhap day so: ";
    int a,b,c;
    cin >> a >> b >>c;
    cout << ((a>b && b>c)?"day so giam":((a<b && b<c)?"Day so tang":"Day vo van"));
    return 0;
}