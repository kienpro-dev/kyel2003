//ve hinh tam giac vuong can
#include<iostream>

using namespace std;

int main() {
    cout << "Nhap canh goc vuong: ";
    int h;
    cin >> h;
    cout << "Ve tam giac canh = "<<h<<endl;
    for (int i=0;i<h;i++) {
        for(int j=0;j<h;j++) {
            if (j==0 || i==h-1 || i==j) {
                cout << ".";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}