// Tính đa hình(Polymorphism) ( it means one thing in many form)
// - Nạp chồng phương thức (xem lại bài cộng 2 số nguyên, thực 3 số nguyên)
// - Ghi đè phương thức (xem lại bài lương manager)
// - Đa hình thông qua các đối tượng đa hình (Polymorphic objects) tương tự cách dụng up casting với nhiều class

#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "say something" << endl;
    }
};

class Cat : public Animal
{
    void sound()
    {
        cout << "mew mew" << endl;
    }
};

class Dog : public Animal
{
    void sound()
    {
        cout << "gou gou" << endl;
    }
};

class Duck : public Animal
{
    void sound()
    {
        cout << "quack quack" << endl;
    }
};

int main()
{
    Animal *animal = new Animal();
    animal->sound();
    animal = new Cat();
    animal->sound();
    animal = new Dog();
    animal->sound();
    animal = new Duck();
    animal->sound();
    return 0;
}