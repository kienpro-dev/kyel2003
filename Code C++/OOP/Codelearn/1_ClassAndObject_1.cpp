#include <iostream>

using namespace std;

class Student
{
public:
    string name;  // các biến gọi là thuộc tính của lớp student
    int age;
    void getInformation() // các hàm khác nhau gọi là phương thức để thực hiện 1 hành động trong lớp
    {
        cin >> name >> age;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age;
    }
};

int main()
{
    Student s1;
    s1.getInformation();
    s1.display();
    return 0;
}