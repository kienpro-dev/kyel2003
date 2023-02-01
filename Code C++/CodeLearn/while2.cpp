#include<iostream> //tim uoc cua 1 so

using namespace std;

int main() {
    int n;
    int i=1;
    int sl=0;
    cin >>n;
    while (i<=n) {
        if (n%i==0) {
            sl++;
        }
        i++;
    }
    cout << sl;
    return 0;
}