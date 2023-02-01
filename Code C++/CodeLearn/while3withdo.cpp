#include<iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    long long kq=1;
    do {
        kq*=a;
        b--;
    } while (b>=1);
    cout << (long long)kq;
    return 0;
}