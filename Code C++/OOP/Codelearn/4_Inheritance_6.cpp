// Virtual destructor

// Khi k có virtual mà dùng up casting thì phương thức hủy lớp cha sẽ luôn được gọi tới và giải phóng bộ nhớ
// NHưng vấn đề ở đây là destructor lớp con không được gọi tới do trình biên dịch k xác định được gây rò rỉ bộ nhớ
// Để giải quyết điều này thì ta cần cho destructor lớp cha từ khóa virtual

// Lưu ý: nếu muốn 1 lớp được cho lớp khác kế thừa thì nê luôn luôn có virtual destructor
// nếu k có thì ngầm hiểu rằng class này k được cho kế thừa
#include <iostream>

using namespace std;

class Base
{
public:
    virtual ~Base() // nếu k có virtual chương trình sẽ chỉ giải phóng bộ nhớ 1 lần qua lệnh return mà bỏ qua giải phóng lớp con
    {
        cout << "This was destroyed" << endl;
    }
};

class Derived : public Base
{
private:
    int n;

public:
    Derived(int n)
    {
        this->n = n;
    }
    // some code here
    //      ................
    //      ................................
    ~Derived() // giải phóng bộ nhớ.........pthuc sẽ được gọi tới đúng địa điểm vì destructor lớp cha đã là ảo
    {
        cout << "This was destroyed" << endl;
    }
};

int main()
{
    Base *b = new Derived(5);
    delete b; // giải phóng nốt cho biến con trỏ b (gọi tới pthuc Base)
    return 0;
}