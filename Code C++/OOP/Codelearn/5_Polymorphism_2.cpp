// Variables hiding trong c++'
// Xảy ra khi lớp con khai báo thuộc tính trùng tên với lớp cha
// Lúc này thuộc tính của lớp con sẽ k ghi đè lên thuộc tính lớp cha mà bị ẩn đi
// Khi truy xuất đến thuộc tính đó thì sẽ là thuộc tính của lớp cha
// Nếu muốn truy xuất thuộc tính của lớp con thì p dùng up casting và gọi phương thức ỉn ra thuộc tính đó

#include <iostream>

using namespace std;

class SuperClass
{
public:
    int x = 10;
    virtual void display()
    {
        cout << x << endl;
    }
};

class SubClass : public SuperClass
{
public:
    int x = 20;
    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    SubClass s;
    SuperClass *a = &s;
    cout << a->x << endl;
    a->display();
    return 0;
}