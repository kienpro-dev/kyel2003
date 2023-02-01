// Phương thức khởi tạo (Constructor)
// trong oop có 1 phương thức đặc biệt là pt khởi tạo
// phương thức sẽ tự động được gọi khi tạo lớp đối tượng (k cần toán tử . hay ->)
// phương thức này sẽ ở trong lớp và tên gọi giống lớp của nó
// phải để phạm vi public khi khởi tạo nó
#include <iostream>

using namespace std;

class Student
{
public:
    string name = "Default";
    int age = -1;
    Student() // đây là phương thức khởi tạo và thực hiện hành động gán lại biến
    {
        name = "Kien";
        age = 19;
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Student student;
    student.display();
    return 0;
}

// #include <iostream>

// using namespace std;

// class Student
// {
// public:
//     Student() // đây là phương thức khởi tạo và thực hiện hành động in ra màn hình
//     {
//         cout << "Constructor is here";
//     }
// };

// int main()
// {
//     Student student;
//     return 0;
// }