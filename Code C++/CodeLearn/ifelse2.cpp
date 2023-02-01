#include<iostream> //kiem tra so n trong doan ab

using namespace std;

int main() {
    cout << "Nhap doan [a;b]: ";
    int a,b,n;
    cin >> a >> b;
    cout << "Nhap so khao sat: ";
    cin >> n;
    if (n>=a && n<=b) {
        cout << "n thuoc ab";
    } else {
        cout << "n k thuoc ab";
    } 
    return 0;
}