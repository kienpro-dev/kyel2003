#include<iostream> //xet tinh tang giam abc

using namespace std;

int main() {
    int a,b,c;
    cout << "Nhap day 3 so: ";
    cin >> a >> b >> c;
    if (a>b && b>c) {
        cout << "Day so giam";
    } else if (a<b && b<c) {
        cout << "Day so tang";
    } else {
        cout << "Day vo van";
    } 
    return 0;
}