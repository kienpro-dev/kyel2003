//tinh so tien dien theo gia o moi muc dien
#include<iostream>

using namespace std;

int main() {
    cout << "Nhap so dien nang tieu thu: ";
    double x;
    cin >> x;
    double giatien=1;
    if (x>0) {
        if (x<=100) {
            giatien=x*600;
        } else if (x<=150) {
            giatien=(x-100)*700+100*600;
        } else if (x<=200) {
            giatien=(x-150)*900+50*700+60*100;
        } else {
            giatien=(x-200)*1100+50*900+50*700+100*600;
        }
        cout << "So tien phai tra: "<<giatien<<" VND";
    } else {
        cout << "So dien khong hop le!!!";
    }
    return 0;
}