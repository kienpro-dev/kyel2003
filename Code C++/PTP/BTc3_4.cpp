//bai toan kinh dien ga va cho
#include<iostream>
#include<math.h>

using namespace std;

int main() {
    cout << "Tinh so chan ga va chan cho!"<<endl;
    int sochan, socon;
    cout << "Nhap so chan: ";
    cin >> sochan;
    cout << "Nhap so con: ";
    cin >> socon;
    int dkxd=(sochan-2*socon);
    if (dkxd%2==0) {
        int socho=dkxd/2;
        int soga=socon-socho;
        cout << "So cho: "<<socho<<endl;
        cout << "So ga: "<<soga;
    } else {
        cout << "Du lieu khong hop le!";
    }
    return 0;
}