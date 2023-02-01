#include <iostream>

using namespace std;

int main()
{
    int n, a, d;
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Nhap phan tu dau: ";
    cin >> a;
    cout << "Nhap cong sai: ";
    cin >> d;
    cout << "Tong CSC =  " << (a + a + (n - 1) * d) * n / 2;
    return 0;
}