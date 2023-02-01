// con trỏ void và null
#include<iostream>

using namespace std;

int main()
{
    int a=20;
    float b=15.5;
    int *pa=&a;
    float *pb=&b;
    cout << "Dia chi con tro a dang quan ly "<<pa<<endl;
    void *p; // khai báo 1 con trỏ void p có thể tham chiếu đến tất cả các kiểu dũ liệu để quản lý
    p=&a;
    (*(int *)p)+=10; // vì con trỏ void tham chiếu đc tất cả kiểu dữ liệu
                    // nên khi muốn truy xuất con trỏ void đến giá trị nó đang quản lý 
                    // thì cần ép kiểu về cho đúng (*(type *)p) ((type *)p)
    cout << "a = "<<a<<endl;
    p=&b;
    (*(float *)p)--;
    cout << "b = "<<b<<endl;

    /*
    int *c;                                                 sai vi khi khai báo con trỏ mà không cấp phát bộ nhớ sẽ bị gọi là con trỏ NULL
    cout << "Gia tri con tro c dang quan ly "<<*c;          dùng lệnh new hoặc trỏ đến biến có sẵn để không bị NULL
    */
    int *c=new int;
    *c=234;
    cout << "Dia chi con tro c dang quan ly "<<c<<endl;
    cout << "Gia tri con tro c dang quan ly "<<*c;   //random giá trị nếu không trỏ đến biến cụ thể
    return 0;
}