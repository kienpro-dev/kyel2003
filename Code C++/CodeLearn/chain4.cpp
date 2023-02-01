/*chuyen xau s tu in thuong xang in hoa
*/
#include<iostream> 

using namespace std;

int main() {
    cout << "Nhap du lieu: ";
    string s;
    cin >> s;
    cout << "Day ki tu sau khi chuyen doi: ";
    for (int i=0;i<s.size();i++) {
        if (s[i]>='a' && s[i]<='z') {
            s[i]-=32;
        }
        cout << s[i];
    }
    return 0;
}
