/*in ra ki tu thu k trong xau s
*/
#include<iostream> 

using namespace std;

int main() {
    cout << "Nhap du lieu: ";
    string s;
    cin >> s;
    cout << "Nhap thu tu: ";
    int k;
    cin >> k;
    if (k>=0 && k<=s.size()) {
        cout << "Ku tu thu "<<k<<" trong day "<<s<<" la: "<<s[k-1];
    } else {
        cout << "Ki tu thu "<<k<<" trong day "<<s<<" khong co";
    }
    return 0;
}
