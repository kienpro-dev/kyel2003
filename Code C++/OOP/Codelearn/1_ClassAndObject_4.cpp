//constructor có thêmn 1 loại nữa là construcor có tham số, cái kia là constructor không tham số
#include <iostream>

using namespace std;

class Student {
private:
    string name;
public:
    Student(string name) {
        cout << "My name is " << name;
    }
};

int main() {
    Student s("Kien"); // truyền biến vào constructor có tham số
    return 0;
}