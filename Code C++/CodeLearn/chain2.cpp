/*so lan xuat hien cua chu x trong xau s
*/
#include<iostream> 

using namespace std;

int main() {
    cout <<"Nhap du lieu: ";
    string s;
    cin >> s;
    cout << "Nhap ki tu: ";
    char x;
    cin >> x;
    int sl=0;
    for (int i=0;i<s.size();i++) {
        if (s[i]==x) {
            sl++;
        }
    }
    cout << "So lan xuat hien cua ki tu '"<<x<<"' la ("<<sl<<") lan";
    return 0;
}