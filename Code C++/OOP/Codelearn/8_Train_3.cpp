#include <iostream>
#include <vector>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string add;
    string tel;
    string sex;

public:
    Person()
    {
    }
    Person(string name, int age, string add, string tel, string sex) : name(name), age(age), add(add), tel(tel), sex(sex)
    {
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getAdd()
    {
        return add;
    }
    string getTel()
    {
        return tel;
    }
    string getSex()
    {
        return sex;
    }
    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Add: " << add << endl;
        cout << "Tel: " << tel << endl;
    }
    virtual long salary() = 0;
    static vector<Person *> findFemalePerson(vector<Person *> p)
    {
        vector<Person *> result;
        for (int i = 0; i < p.size(); i++)
            if (p[i]->getSex() == "nu")
                result.push_back(p[i]);
        return result;
    }
};

class EmployeePT : public Person
{
private:
    int hour;
    int money;

public:
    EmployeePT()
    {
    }
    EmployeePT(string name, int age, string add, string tel, string sex, int hour, int money) : Person(name, age, add, tel, sex), hour(hour), money(money)
    {
    }
    int getHour()
    {
        return hour;
    }
    int getMoney()
    {
        return money;
    }
    long salary()
    {
        return hour * money;
    }
    void display()
    {
        cout << "Employee Part Time" << endl;
        Person::display();
        cout << "Hour: " << getHour() << endl;
        cout << "Money: " << getMoney() << endl;
        cout << "Salary: " << salary() << endl;
    }
    static vector<EmployeePT> getMaxSalary(vector<EmployeePT> pt)
    {
        vector<EmployeePT> result;
        long maxSalary = pt[0].salary();
        result.push_back(pt[0]);
        for (int i = 1; i < pt.size(); i++)
        {
            if (maxSalary < pt[i].salary())
            {
                result.pop_back();
                maxSalary = pt[i].salary();
                result.push_back(pt[i]);
            }
        }
        return result;
    }
};

class EmployeeFT : public Person
{
private:
    int day;
    int money;

public:
    EmployeeFT()
    {
    }
    EmployeeFT(string name, int age, string add, string tel, string sex, int day, int money) : Person(name, age, add, tel, sex), day(day), money(money)
    {
    }
    int getDay()
    {
        return day;
    }
    int getMoney()
    {
        return money;
    }
    long salary()
    {
        return day * money;
    }
    void display()
    {
        cout << "Employee Full Time" << endl;
        Person::display();
        cout << "day: " << getDay() << endl;
        cout << "Money: " << getMoney() << endl;
        cout << "Salary: " << salary() << endl;
    }
    static vector<EmployeeFT> getMaxSalary(vector<EmployeeFT> ft)
    {
        vector<EmployeeFT> result;
        long maxSalary = ft[0].salary();
        result.push_back(ft[0]);
        for (int i = 1; i < ft.size(); i++)
        {
            if (maxSalary < ft[i].salary())
            {
                result.pop_back();
                maxSalary = ft[i].salary();
                result.push_back(ft[i]);
            }
        }
        return result;
    }
};

int main()
{
    Person **p = new Person *[5];
    p[0] = new EmployeeFT("Kien", 18, "HN", "09842", "nam", 30, 309200);
    p[1] = new EmployeePT("Tuan", 18, "HN", "09842", "nam", 7, 30000);
    p[2] = new EmployeeFT("Hai", 18, "HN", "09842", "nam", 30, 1200);
    p[3] = new EmployeePT("Thuy", 18, "HB", "09842", "nu", 6, 1200);
    p[4] = new EmployeeFT("Hong", 18, "NB", "09842", "nu", 30, 130200);
    vector<Person *> v;
    for (int i = 0; i < 5; i++)
        v.push_back(p[i]);
    vector<Person *> v2 = Person::findFemalePerson(v);
    for (int i = 0; i < v2.size(); i++)
        v2[i]->display();
    cout << "___________________________"<<endl;
    vector<EmployeePT> pt;
    pt.push_back(EmployeePT("John",18, "HN", "09842", "Male", 7, 30000));
    pt.push_back(EmployeePT("Eren",18, "HN", "09842", "Male", 7, 60000));
    vector<EmployeePT> pt2(EmployeePT::getMaxSalary(pt));
    for (int i = 0; i < pt2.size(); i++)
        pt2[i].display();
    cout << "___________________________"<<endl;
    return 0; 
}