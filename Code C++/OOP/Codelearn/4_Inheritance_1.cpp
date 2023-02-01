// - Tính kế thừa(Inheritance) trong oop là 1 lớp thừa hưởng lại những thuộc tính và tính chất của 1 lớp khác
// - Lớp được thừa hưởng gọi là lớp dẫn xuất(Derived Class) hay lớp con(Subclass),
//   còn lớp thừa hưởng gọi là lớp cơ sở(Base Class) hay lớp cha(Parent Class)

// - Cú pháp:
//             class class_name_1 : public class_name_2
//             {
//             ...
//             }

// Thuộc tính và phương thích private k thể truy cập từ lớp con
// nên tách 2 class 2 file riêng
#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;

public:
    Person(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    string getAddress()
    {
        return address;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
};

class Student : Person
{
private:
    int gpa;

public:
    void setGpa(int gpa)
    {
        this->gpa = gpa;
    }
    int getGpa()
    {
        return gpa;
    }
};

int main()
{
    return 0;
}