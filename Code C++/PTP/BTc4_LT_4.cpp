//viet chuong trinh dao nguoc 1 so
#include<iostream>

using namespace std;

int main() 
{
    cout << "Nhap so duong bat ki: ";
    int n;
    cin >> n;
    int sd;
    int so=0;
    for (int i=n;i>0;) {
        sd=i%10;
        so=so*10+sd;
        i=i/10;
    }
    cout << "So sau khi dau nguoc la: "<<so;
    return 0;
}