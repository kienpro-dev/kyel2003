#include<iostream> //tinh n!

using namespace std;

int main() {
    cout << "Nhap so hang: ";
    int n;
    cin >> n;
    int gt=1;
    for (int i=1;i<=n;i++) {
        gt*=i;
    }
    cout << "Giai thua cua "<<n<<" la: " <<(long long)gt;
    return 0;
}