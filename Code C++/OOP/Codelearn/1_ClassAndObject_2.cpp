// trong oop c++ có 3 phạm vi truy cập bao gồm phạm vi public:
// public: các thuộc tính và phương thức của phạm vi này có thể truy xuất tù bất kì đâu
// private: các thuộc tính và phương thức của phạm vi này chỉ có thể truy xuất trong lớp đó
// protected: các thuộc tính và phương thức của phạm vi này có thể truy cập trong lớp đó và lớp con của nó
#include <iostream>

using namespace std;

class Student
{
private:
    string name = "default";
    int age = -1;

public:
    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Student s;
    s.display();
    // VD: s.name="..."; --> sai vì phạm vi private k cho phép truy cập dữ liệu tù hàm khác
    return 0;
}