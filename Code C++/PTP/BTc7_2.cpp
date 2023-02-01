// Các toán tử trong con trỏ (* và &)
//Toán tử & để lưu trữ địa chỉ 1 biến và dùng địa chỉ đó cho con trỏ
//Toán tử * để lấy giá trị của 1 con trỏ cho 1 biến
#include<iostream>

using namespace std;

int main()
{
    int count=100; //Giá trị biến count là 100 và count có 1 địa chỉ nào đó
    int *m=&count; //lấy địa chỉ của count cho con trỏ m quản lý 
    cout << "Dia chi cua bien count="<<&count<<endl;
    cout << "Gia tri cua bien count="<<count<<endl;
    cout << "Dia chi ma con tro m tro toi="<<m<<endl;
    cout << "Gia tri cua con tro m="<<*m<<endl;
    int p=*m; //Khai báo biến p và gán giá trị cho p bằng giá trị con trỏ m
    cout << "Gia tri cua bien p="<<p<<endl;
    cout << "Dia chi cua bien p="<<&p<<endl; //Khác địa chỉ với count và m vì lệnh p=*m chỉ lấy giá trị của m cho p

    int *x=m; // con trỏ x và m quản lý cùng 1 ô nhỡ lên cùng địa chỉ và giá trị
    cout << "Dia chi ma con tro x tro toi="<<x<<endl;
    cout << "Gia tri cua con tro x="<<*x<<endl;
    *x=200; // khi đổi giá trị cho x thì m cx đỏi vì x và m cùng quản lý 1 địa chỉ
    cout << "Gia tri con tro m="<<*m<<endl;
    cout << "Gia tri bien count="<<count<<endl; // biến count cx đổi từ 100 thành 200 vì x và m cùng quản lý địa chỉ của count
    return 0;
}