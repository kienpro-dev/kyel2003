/*in ra vi tri dau tien cua chu x trong xau s
*/
#include<iostream> 

using namespace std;

int main() {
    cout << "Nhap du lieu: ";
    string s;
    cin >> s;
    int vt=0;
    cout << "Nhap ki tu: ";
    char x;
    cin >> x;
    for (int i=0;i<s.size();i++) {
        if (s[i]==x) {
            vt=i;
            break;
        }
    }
    cout << "Ki tu "<<x<<" xuat hien o vi tri thu "<<vt;
    return 0;
}