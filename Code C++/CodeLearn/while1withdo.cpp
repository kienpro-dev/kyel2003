#include<iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    do {
        if (a%4==0) {
            cout << a <<" ";
        }
        a++;
    } while (a<=b);
    return 0;
}