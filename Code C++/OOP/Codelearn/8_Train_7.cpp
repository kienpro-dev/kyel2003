#include <iostream>
#include <vector>

using namespace std;

class People
{
private:
    string name;
    int age;
    string job;
    string id;

public:
    People()
    {
    }
    People(string name, int age, string job, string id) : name(name), age(age), job(job), id(id)
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
    string getJob()
    {
        return job;
    }
    string getId()
    {
        return id;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Job: " << job << endl;
        cout << "Id: " << id << endl;
    }
};

class Family
{
private:
    string nameF;
    string status;
    string add;
    vector<People> p;

public:
    Family()
    {
        nameF = p[0].getName();
    }
    Family(string add, string status, vector<People> p) : status(status), add(add), p(p)
    {
        nameF = p[0].getName();
    }
    string getNameF()
    {
        return nameF;
    }
    string getStatus()
    {
        return status;
    }
    string getAdd()
    {
        return add;
    }
    vector<People> getP()
    {
        return p;
    }
    void display()
    {
        cout << "Householder's name: " << nameF << endl;
        cout << "Number member: " << p.size() << endl;
        cout << "Address: " << add << endl;
        cout << "Status: " << status << endl;
        cout << "List Information Member: " << endl;
        for (int i = 0; i < p.size(); i++)
        {
            cout << i + 1 << ". ";
            p[i].display();
        }
    }
    static vector<Family> getPoorHousehold(vector<Family> fa)
    {
        vector<Family> res;
        for (int i = 0; i < fa.size(); i++)
            if (fa[i].getStatus() == "poor")
                res.push_back(fa[i]);
        return res;
    }
    static vector<Family> findFamilySurename(vector<Family> fa, string surename)
    {
        vector<Family> res;
        for (int i = 0; i < fa.size(); i++)
            if (fa[i].getNameF() == surename)
                res.push_back(fa[i]);
        return res;
    }
};

class Group
{
private:
    string nameGr;
    vector<Family> f;

public:
    Group()
    {
    }
    Group(string nameGr, vector<Family> f) : nameGr(nameGr), f(f)
    {
    }
    string getNameGr()
    {
        return nameGr;
    }
    vector<Family> getF()
    {
        return f;
    }
    int getNumberFamily()
    {
        return f.size();
    }
    static double avgAgeGroup(Group g)
    {
        vector<Family> f(g.getF());
        double sumAge = 0, cnt = 0;
        for (int i = 0; i < f.size(); i++)
        {
            vector<People> p(f[i].getP());
            for (int j = 0; j < p.size(); j++)
                sumAge += p[j].getAge();
            cnt += p.size();
        }
        return sumAge / cnt;
    }
    static vector<People> getPeopleHaveNotJob(Group g)
    {
        vector<People> res;
        vector<Family> f(g.getF());
        for (int i = 0; i < f.size(); i++)
        {
            vector<People> p(f[i].getP());
            for (int j = 0; j < p.size(); j++)
                if (p[j].getJob() == "" || p[j].getJob() == "Unknown")
                    res.push_back(p[j]);
        }
        return res;
    }
};

int main()
{
    vector<People> p1;
    p1.push_back(People("Kien", 19, "Student", "1"));
    p1.push_back(People("T.Henry", 20, "Student", "2"));
    vector<People> p2;
    p2.push_back(People("Tuan", 18, "", "1"));
    p2.push_back(People("Tu", 17, "Unknown", "2"));
    vector<People> p3;
    p3.push_back(People("Mai", 25, "Teacher", "1"));
    p3.push_back(People("Tung", 11, "Student", "2"));

    vector<Family> fml;
    fml.push_back(Family("Ha Noi", "Rich", p1));
    fml.push_back(Family("France", "Rich", p2));
    fml.push_back(Family("Ha Noi", "poor", p3));

    vector<Family> poorFamily = Family::getPoorHousehold(fml);
    cout << "Poor family: " << endl;
    for (int i = 0; i < poorFamily.size(); i++)
        poorFamily[i].display();

    cout << "Find family: Kien\n";
    vector<Family> findFamily = Family::findFamilySurename(fml, "Kien");
    for (int i = 0; i < poorFamily.size(); i++)
        findFamily[i].display();

    Group gr("Supreme", fml);
    cout << "Group name: " << gr.getNameGr() << endl;
    cout << "Average age: " << Group::avgAgeGroup(gr) << endl;

    vector<People> noJob = Group::getPeopleHaveNotJob(gr);
    for (int i = 0; i < noJob.size(); i++)
        cout << i + 1 << ". Name: " << noJob[i].getName() << endl;
    return 0;
}