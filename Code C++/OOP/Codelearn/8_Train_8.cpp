#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Book
{
private:
    string nameBook;
    string nameAuthor;
    int nummberBook;

public:
    Book()
    {
    }
    Book(string nameBook, string nameAuthor, int nummberBook) : nameBook(nameBook), nameAuthor(nameAuthor), nummberBook(nummberBook)
    {
    }
    string getNameBook()
    {
        return nameBook;
    }
    string getNameAuthor()
    {
        return nameAuthor;
    }
    int getNummberBook()
    {
        return nummberBook;
    }
    void display()
    {
        cout << "Name Book: " << nameBook << endl;
        cout << "Name Author: " << nameAuthor << endl;
        cout << "Nummber Book: " << nummberBook << endl;
    }
};

class Person
{
private:
    string name;
    int age;
    string add;
    vector<Book> vb;

public:
    Person()
    {
    }
    Person(string name, int age, string add, vector<Book> vb) : name(name), age(age), add(add), vb(vb)
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
    vector<Book> getVB()
    {
        return vb;
    }
    virtual long moneyPay() = 0;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Add: " << add << endl;
        cout << "List Book Borrowed: ";
        for (int i = 0; i < vb.size(); i++)
            cout << vb[i].getNameBook() << " ";
        cout << "\nMoney Pay: " << moneyPay() << endl;
    }
    static void sortPersonAge(vector<Person *> &vp)
    {
        for (int i = 0; i < vp.size() - 1; i++)
            for (int j = i + 1; j < vp.size(); j++)
                if (vp[i]->age > vp[j]->age)
                    swap(vp[i], vp[j]);
    }
    static vector<int> getListAge(vector<Person *> vp)
    {
        vector<int> res;
        for (int i = 0; i < vp.size(); i++)
            if (find(res.begin(), res.end(), vp[i]->getAge()) == res.end())
                res.push_back(vp[i]->getAge());
        return res;
    }
    static vector<Book> getMaxBookBorrowed(vector<Person *> vp, vector<Book> vb) // tim ds sach duoc muon nhieu nhat tu ds sach dau vao
    {
        vector<int> count; // vector dem so luong sach cua tung nguoi theo ds sach dau vao
        for (int i = 0; i < vb.size(); i++)
        {
            count.push_back(0);
            for (int j = 0; j < vp.size(); j++)
            {
                vector<Book> vb2(vp[j]->getVB());    // vector lay cac Book cua tung nguoi
                for (int k = 0; k < vb2.size(); k++) // kiem tra moi cuon sach dau vao voi tat ca sach cua 1 nguoi
                    if (vb[i].getNameBook() == vb2[k].getNameBook())
                        count[i]++;
            }
        }
        int max = count[0];
        for (int i = 1; i < count.size(); i++)
            if (count[i] > max)
                max = count[i];
        vector<Book> res;
        for (int i = 0; i < count.size(); i++)
            if (count[i] == max)
                res.push_back(vb[i]);
        return res;
    }
};

class Children : public Person
{
public:
    Children()
    {
    }
    Children(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb)
    {
    }
    long moneyPay()
    {
        return 5000 * Person::getVB().size();
    }
    void display()
    {
        cout << "Children!" << endl;
        Person::display();
    }
};

class Adult : public Person
{
public:
    Adult()
    {
    }
    Adult(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb)
    {
    }
    long moneyPay()
    {
        return 10000 * Person::getVB().size();
    }
    void display()
    {
        cout << "Adult!" << endl;
        Person::display();
    }
};

int main()
{
    vector<Book> b1;
    b1.push_back(Book("Coding Life", "Kyel Nguyen", 6869));

    vector<Book> b2;
    b2.push_back(Book("Code is not hard like you think", "Kyel Nguyen", 8698));

    vector<Book> b3;
    b3.push_back(Book("How to win people in life","Chawin Laff",1432));

    Person *p[4];
    p[0] = new Adult("Nguyen Kien", 19, "Ha Noi", b1);
    p[1] = new Adult("Thuan Nguyen", 19, "Ha Noi", b2);
    p[2] = new Adult("Hai Minh", 26, "Ha Giang", b1);
    p[3] = new Children("Minh Anh", 11, "Ha Dong", b3);
        
    vector<Person *> allCustomers;
    for(int i = 0; i < 4; i++)
    {
        cout << i+1 << ". ";
        p[i]->display();
        allCustomers.push_back(p[i]);
    }
        
    Person::sortPersonAge(allCustomers);
    vector<int> listAge = Person::getListAge(allCustomers);
    cout << "\nAge list: ";
    for(int i = 0; i < listAge.size(); i++)
        cout << listAge[i] << " ";
    cout <<endl; 

    vector<Book> allBooks;
    allBooks.push_back(Book("Coding Life", "Kyel Nguyen", 6869));
    allBooks.push_back(Book("Code is not hard like you think", "Kyel Nguyen", 8698));
    allBooks.push_back(Book("How to win people in life","Chawin Laff",1432));
    vector<Book> maxBookBorrowed = Person::getMaxBookBorrowed(allCustomers, allBooks);
    cout << "\nBook was borrowed the most\n";
    for(int i = 0; i < maxBookBorrowed.size(); i++)
        maxBookBorrowed[i].display();
    return 0;
}