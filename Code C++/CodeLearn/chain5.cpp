/*bien ki tu x trong xau s thanh ki tu k
*/
#include<iostream>

using namespace std;

int main() {
    cout << "Nhap du lieu: ";
    string s;
    cin >> s;
    cout << "Nhap ki tu trong xau: ";
    char x,k;
    cin >> x;
    cout << "Nhap ki tu chuyen thanh: ";
    cin >> k;
    for (int i=0;i<s.size();i++) {
        if (s[i]==x) {
            s[i]=k;
        }
    }
    cout << "Day ki tu sau khi chuyen doi: "<<s;
    return 0;
}