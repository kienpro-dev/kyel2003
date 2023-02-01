//tinh tong cac chu so trong 1 so nguyen duong bat ki
#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    int sum=0;
    int sd;//so khi chia n cho 10 va lay phan du chinh la chu so cuoi cung
    for (int i=n;i>0;) {
        sd=i%10;
        i=i/10;
        sum+=sd;
    }
    cout << "Tong cac chu so cua "<<n<<" la: "<<sum;
    return 0;
}