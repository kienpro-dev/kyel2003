#include <iostream>

using namespace std;

int main()
{
    int a;
    float x;
    cout << "Nhap a va x: ";
    cin >> a >> x;
    cout << "Dia chi cua a va x lan luot la: " << &a << "\t" << &x;
    cout << "\nGia tri cua a va x lan luot la: " << *&a << "\t\t" << *&x;
    return 0;
}