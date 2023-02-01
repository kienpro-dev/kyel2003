#include<iostream>

using namespace std;

int main() {
    int n,a,b;
    cout << "Nhap doan [a;b]: ";
    cin >> a >> b;
    cout << "nhap so khao sat: ";
    cin >> n;
    cout << ((n>=a && n<=b)?"n thuoc ab":"n k thuoc ab");
    return 0;
}