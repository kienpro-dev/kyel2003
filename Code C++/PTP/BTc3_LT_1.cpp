//xem 1 thang co bao nhieu ngay
#include<iostream>

using namespace std;

int main() {
    cout << "Nhap thang trong nam: ";
    int month;
    cin >> month;
    if (month>=1 && month<=12) {
        if (month==1 || month==3 || month==5 || month == 7 || month==8 || month==10 || month==12) {
            cout << "Thang "<<month<<" co 31 ngay";
        } else if (month==4 || month==6 || month==9 || month==11) {
            cout << "Thang "<<month<<" co 30 ngay";
        } else {
            cout << "Kiem tra nam nhuan: ";
            int year;
            cin >> year;
            if (year%4==0 && year%100!=0) {
                cout << "Nam nhuan"<<endl;
                cout << "Thang "<<month<<" co 29 ngay";
            } else {
                cout << "Nam khong nhuan"<<endl;
                cout << "Thang "<<month<<" co 28 ngay";
            }
        }
    } else {
        cout << "Thang ban nhap khong hop le!!!";
        return 0;
    }
}