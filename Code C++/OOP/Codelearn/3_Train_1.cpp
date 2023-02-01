#include<iostream>

using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    string address;
    int score;
public:
    Student()
    {

    }
    Student(int id, string name, int age, string address, int score)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this->setScore(score);
    } 
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void setScore(int score)
    {
        if(score>10)
            this->score = 10;
        if(score<0)
            this->score = 0;
        this->score = score;
    }
    int getScore()
    {
        return score;
    }
};

int main()
{
    Student S(1,"Kien",19,"Ha Noi",9);
    cout << "ID: "<<S.getId()<<endl;
    cout << "Name: "<<S.getName()<<endl;
    cout << "Age: "<<S.getAge()<<endl;
    cout << "Address: "<<S.getAddress()<<endl;
    cout << "Score: "<<S.getScore()<<endl;
    S.setScore(10);
    cout << "Final Score: "<<S.getScore()<<endl;
    S.setAddress("Ha Nam");
    cout << "Final Address: "<<S.getAddress();
    return 0;
}