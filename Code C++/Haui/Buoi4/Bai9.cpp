#include <iostream>

using namespace std;

void toLower(char &c)
{
    c += 32;
    cout << "Ki tu chuyen thanh in thuong: " << c;
}

void toUpper(char &c)
{
    c -= 32;
    cout << "Ki tu chuyen thanh in hoa: " << c;
}

void check(char &c)
{
    if (c >= 65 && c <= 90)
    {
        cout << "Ki tu vua nhap la in hoa" << endl;
        toLower(c);
    }
    else if (c >= 97 && c <= 122)
    {
        cout << "Ki tu vua nhap la in thuong"<<endl;
        toUpper(c);
    }
    else
    {
        cout << "Ki tu vua nhap khong phai chu cai";
    }
}

int main()
{
    char c;
    cout << "Nhap ki tu: ";
    cin >> c;
    check(c);
    return 0;
}