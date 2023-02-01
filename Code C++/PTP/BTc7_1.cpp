// cơ bản vêv con trỏ
#include<iostream>

using namespace std;

int main()
{
    int *p; // khai báo biến con trỏ p
    p= new int; // cấp phát bộ nhớ cho con trỏ p (lưu ý phải cùng kiểu dữ liệu)
    *p=100; //gán giá trị cho con trỏ p
    cout << "Dia chi cua con tro p la "<<p<<endl;
    cout << "Gia tri cua con tro p tai dia chi do la "<<*p;
    delete p; //thu hồi bộ nhớ con trỏ p
            // nếu không sẽ bị lỗi memory leak không an toàn
    return 0;
}