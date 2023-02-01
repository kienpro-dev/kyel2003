// Up casting và down casting trong oop
// Up casting là khi biến con trỏ của lớp cha tham chiếu đến biến lớp con
//            biến này chỉ có thể gọi tới thuộc tính và phương thức của lớp cha

// down casting là khi biến con trỏ của lớp con tham chiếu đến biến lớp cha
//            biến này chỉ có thể gọi tới thuộc tính và phương thức của lớp con


// Virtual function trong c++ oop

// Xét VD bài trước, đối với up casting khi biến lớp animal trỏ tới biến lớp cat 
// nhưng phương thức sử dụng lại là của lớp animal, điều này là do trình biên dịch
// không xác định được đối tượng animal dâng trỏ tới đối tượng thuộc lớp nào, hiển 
// nó sẽ mặc định phương thức của lớp cha, để dùng được các phương thức lớp con thì
// cần thêm từ khóa virtual để xác định cho lớp cha đối tượng trỏ tới

// hiểu đơn giản là virtual ở lớp cha để sử dụng đúng phương thức và thuộc tính đang trỏ tới đối tượng nào thuộc lớp nào


#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "something" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "mew mew" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "wof wof" << endl;
    }
};

int main()
{
    Cat cat;
    Animal *a = &cat; // up casting
    a->sound();
    Animal b;
    Dog *dog = (Dog *)&b; // down casting
    dog->sound();
    return 0;
}