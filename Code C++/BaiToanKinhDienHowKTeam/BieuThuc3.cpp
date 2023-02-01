#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
    cout << "Tinh A=sqrt(1+sqrt(2+sqrt(n)))"<<endl;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    double A=0;
    while (n--)
    {
        A=sqrt((n+1)+A);
    }
    cout <<"Bieu thuc A co gia tri: " <<A;
    return 0;
}