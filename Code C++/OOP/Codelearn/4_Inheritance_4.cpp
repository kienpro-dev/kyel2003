// Khi dùng phương thức display để xuất thông tin cần lưu ý
// - Thường thì lớp cha sẽ xuất thông tin ít hơn lớp con 
// - Nếu lớp con cx dùng display(trùng tên lớp cha) thì phương thức display của lớp cha bị thay thế
// - Thay vào đó thì t thường xuất thông tin của lớp cha trước rồi mới đến lớp con
// - Thay vì dùng 2 phương thức display thì chỉ cần 1 và ở lớp con display sẽ gọi đến display của lớp cha trước

// Cú pháp:
            // class subclass_name
            // {
            // public:
            //     void display()
            //     {
            //         Parentclass_name::display(); // display này của lớp cha coi như đã có trước
            //         // some code....
            //     }
            // };

// toán tử :: giúp lớp con truy xuất tới phương thức lớp cha 
// Kế thừa là có chung phương thức vs lớp khác chứ lớp này k thể tự tiện gọi đến phương thức lớp đó

#include<iostream>

using namespace std;

class Person {
private:
	string name;
	string gender;

public:
	Person(string name, string gender) {
		this->name = name;
		this->gender = gender;
	}

	

	void display() {
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
	}
};

class Student : Person {
private:
	int salary;
public:
	void setSalary(int salary)
	{
		this->salary=salary;
	}
	int getSalary()
	{
		return salary;
	}
	Student(string name, string gender,int salary):Person(name,gender)
	{	
		this->salary=salary;
	}
	void display()
	{
		Person::display();
		cout << "Salary: "<<salary<<endl; 

	}
};

int main() {
	Student s("Trung", "Male", 1700);
	s.display();
	return 0;
}