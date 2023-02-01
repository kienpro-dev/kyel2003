//toán tử trong con trỏ, chỉ gồm + và -
#include<iostream>

using namespace std;

int main()
{
    int a=20, b=15;
    int *pa, *pb;
    pa=&a;
    pb=&b;
    cout << "Dia chi con tro a dang quan ly: "<<pa<<endl;
    cout << "Dia chi con tro b dang quan ly: "<<pb<<endl;
    int temp=*pa; // khai báo biến temp và gán cho temp giá trị mà pa đang quản lý là a
    *pa=*pb; // gán giá trị mà con trỏ b đang quản lý cho con trỏ a
            // Khác lệnh pa=pb; thì lúc này con trỏ a sẽ quản lý vùng dữ liệu mà con trỏ b quản lý
    *pb=temp;
    cout << "a = "<<a<<endl;
    cout << "b = "<<b<<endl;
    cout << "Thuc hien thay doi bo nho:"<<endl;
    pa++, pb--;
    cout << "Dia chi con tro a dang quan ly: "<<pa<<endl;
    cout << "Dia chi con tro b dang quan ly: "<<pb<<endl;
    return 0;
}