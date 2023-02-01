#include<iostream> //chuyen cac xau thsnh in hoa

using namespace std;

void show(string s) {
    for (int i=0;i<s.size();i++) {
        if (s[i]>='a' && s[i]<='z') {
            s[i]-=32;
        }
    }
    cout << s <<" ";
}
int main() {
    cout << "Nhap cac ki tu: ";
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    cout <<"Day ki tu sau khi chuyen doi: "; show(s1);show(s2);show(s3);
    return 0;
}