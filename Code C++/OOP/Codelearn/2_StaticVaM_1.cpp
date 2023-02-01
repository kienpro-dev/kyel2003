// - Biến tĩnh là biến được khai báo với từ khóa static
// - Giá trị của biến tĩnh được chia sẻ với tất cả các đối tượng chung 1 lớp
// - Biến tĩnh là biến dùng chung không thuộc bất kì đối tượng nào của 1 lớp
// - Biến tĩnh static thường dùng để lưu các biến dùng chung của các đối tượng cùng 1 lớp
#include <iostream>

using namespace std;

class Student
{
private:
    int age;
    string name;

public:
    static string teacher; // khai báo biến tĩnh(kp thuộc tính của lớp), dùng chung cho mọi đối tượng
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
        teacher += "x";
    }
};

string Student::teacher = ""; // vì là biến dùng chung nên không thể khởi tạo giá trị trong constructor mà phải khởi tạo ở ngoài với toán tử ::

int main()
{
    Student a("Jax", 19);
    Student b("Jennie", 19);
    cout << a.teacher << " " << b.teacher;
    return 0;
}