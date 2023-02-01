// ta có thể gán biến trong constructor có tham số như sau:
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Student(string n, int a)
    // {
    //     name = n;
    //     age = a;
    // }
    // nếu tên tham số đầu vào n và a ở trên muốn đặt trùng với tên thuộc tính thì có thể truy xuất bằng từ khóa this và toán tử ->
    Student(string name, int age)
    {
        this->name = name; // this là 1 con trỏ lên cần kí tự -> chứ kp kí tự .
        this->age = age;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student a("Kien", 19);
    Student b("Khang", 19);
    a.display();
    b.display();
    return 0;
}