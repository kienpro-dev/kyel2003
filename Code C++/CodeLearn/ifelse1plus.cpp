#include<iostream>

using namespace std;

int main() {
    cout << "Nhap 3 so: ";
    int a,b,c;
    cin >> a >> b >> c;
    cout <<"So lon nhat trong 3 so la: "<<((a>=b && a>=c)?a:(b>=c?b:c));
    return 0;
}