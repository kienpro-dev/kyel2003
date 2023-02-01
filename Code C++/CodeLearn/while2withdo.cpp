#include<iostream>

using namespace std;

int main() {
    int n;
    int i=1;
    int sl=0;
    cout << "Nhap so hang: ";
    cin >> n;
    do {
        if (n%i==0) {
            sl++;
        }
        i++;
    } while (i<=n);
    cout << "So "<<n<<" co "<<sl<<" uoc";
    return 0;
}