// Constructor của lớp con luôn gọi tới constructor(k tham số) của lớp cha

// Khi lớp cha k rõ constructor mặc định mà lớp con gọi tới (Bằng toán tử : ) construcor thì sẽ gây lỗi
//                     (tức là lớp cha có constructor có tham số mà lớp con gọi là constructor k tham số)

// lúc này phải cho lớp con biết đang gọi tới constructor nào của lớp cha

#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int dob;

public:
    Person(string name, int dob)
    {
        this->name = name;
        this->dob = dob;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setDob(int dob)
    {
        this->dob = dob;
    }
    int getDob()
    {
        return dob;
    }
};

class Student : public Person
{
private:
    float gpa;

public:
    void setGpa(float gpa)
    {
        this->gpa = gpa;
    }
    float getGpa()
    {
        return gpa;
    }
    Student(string name, int dob, float gpa) : Person(name, dob) // cho lớp con biết đang gọi tới constructor có tham số
    {
        this->gpa = gpa;  // vì lớp Student có thêm tham số gpa
    }
};

int main()
{
    Student s("Hai", 1999, 8.8);
    cout << "Name: " << s.getName() << endl;
    cout << "Date of birth: " << s.getDob() << endl;
    cout << "GPA: " << s.getGpa() << endl;
    return 0;
}