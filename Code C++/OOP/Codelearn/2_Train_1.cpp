#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    char gender;

public:
    Student()
    {
        name = "Unknown";
        gender = 'u';
    }
    Student(string name)
    {
        this->name = name;
        gender = 'u';
    }
    Student(char gender)
    {
        this->gender = gender;
        name = "Unknown";
    }
    Student(string name, char gender)
    {
        this->gender = gender;
        this->name = name;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Gender: ";
        if (gender == 'm')
            cout << "Male" << endl;
        else if (gender == 'f')
            cout << "Female" << endl;
        else
            cout << "Unknown" << endl;
    }
    friend ostream &operator<<(ostream &out, Student s) // nap chong toan tu nhap
    {
        cout << "Name: " << s.name << endl;
        cout << "Gender: ";
        if (s.gender == 'm')
            cout << "Male" << endl;
        else if (s.gender == 'f')
            cout << "Female" << endl;
        else
            cout << "Unknown" << endl;
        return out;
    }
};
int main()
{
    Student s1;
    Student s2("Khuong");
    Student s3('f');
    Student s4("Kien", 'm');
    cout << s1 << s2 << s3 << s4 << endl;
    return 0;
}