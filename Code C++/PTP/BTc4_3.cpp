//kiem tra 1 so co p so hoan thien k, so hoan thien: tong cac uoc cua no, khong tinh no thi bang chinh no
#include<iostream>

using namespace std;

int main() {
    int n;
    int tong=0;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            tong+=i;
        }
    } 
    if (tong==n) {
        cout << "So "<<n<<" la so hoan thien.";
    } else {
        cout << "So "<<n<<" khong phai so hoan thien.";
    }
    return 0;
}