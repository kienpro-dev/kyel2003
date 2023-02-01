// Tính trừu tượng (abstraction)
// Tính trừu tượng là ẩn đi những thông tin không cần thiết của đối tượng khi làm việc để tập chung vào tính năng của đối tượng
// Khi sử dụng 1 đối tượng bạn k cần quan tâm đối tượng đó được code như thế nào mà cần uan tâm nó dùng để làm gì

// Đặc điểm của lớp trừu tượng
// 1, Có ít nhất 1 phương thức trừu tượng (Phương thức virtual với giá trị gán bằng 0) chỉ được khai báo, k được cài đặt pthuc trừu tượng
// 2, K thể khởi tạo đối tượng dùng lớp trừu tượng mà phải dùng khởi tạo qua lớp con (up casting)
// 3. Nếu có lớp con kế thừa lớp trừu tượng thì nó phải có phương thức để ghi đè pthuc trừu tượng của lớp cha

// ==> Tóm lại, khi nhìn vào các lớp trừu tượng thì thứ duy nhất mà bạn thấy đó là các tính năng của lớp đó (các phương thức trừu tượng)

#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sound() = 0; // (tính chất 1)
};

class Cat : public Animal
{
    // Lớp con k có pthuc ghi đè pthuc trừu tượng nên sẽ gây lỗi nếu sử dụng lớp này  (tính chất 3)
};

class Dog : public Animal
{
    void sound()
    {
        cout << "gou gou" << endl;
    }
};

int main()
{
    Animal *a = new Dog(); //đúng (k lỗi), trường hợp sử dụng khai báo Animal a; sẽ lỗi do vi phạm tính chất 2
    a->sound();
    return 0;
}