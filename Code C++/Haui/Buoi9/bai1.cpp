#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Where
{
    string province, city;
    void input()
    {
        cout << "Nhap huyen: ";
        getline(cin, province);
        cout << "Nhap thanh pho: ";
        getline(cin, city);
    }
};

struct Score
{
    float math, phys, chemis, total;
    void input()
    {
        cout << "Nhap diem toan ly hoa: ";
        cin >> math >> phys >> chemis;
        total = (math + phys + chemis);
        cin.ignore();
    }
};

struct Student
{
    string id, name, dateOfBirth, sex;
    int age;
    Where comeFrom;
    Score scores;
};

void sortByTotal(Student list[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (list[i].scores.total > list[j].scores.total)
                swap(list[i], list[j]);
}

void input(Student list[], int &n)
{
    while (true)
    {
        cout << "Nhap SBD: ";
        getline(cin, list[n].id);
        if (list[n].id.length() == 0 || list[n].id[0] == ' ')
            break;
        cout << "Nhap ten: ";
        getline(cin, list[n].name);
        cout << "Nhap ngay sinh: ";
        getline(cin, list[n].dateOfBirth);
        cout << "Nhap gioi tinh: ";
        getline(cin, list[n].sex);
        list[n].comeFrom.input();
        cout << "Nhap tuoi: ";
        cin >> list[n].age;
        list[n].scores.input();
        cout << "TB: " << list[n].scores.total << endl;
        n++;
    }
}

void output(Student list[], int n)
{
    cout << setw(10) << left << "SBD" << setw(15) << left << "Ho Ten" << setw(15) << left << "Ngay Sinh";
    cout << setw(5) << left << "GT" << setw(10) << left << "Huyen" << setw(10) << left << "TP" << setw(5) << left << "Tuoi";
    cout << setw(5) << left << "Toan" << setw(5) << left << "Ly" << setw(5) << left << "Hoa" << setw(5) << right << "TB" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << left << list[i].id << setw(15) << left << list[i].name;
        cout << setw(15) << left << list[i].dateOfBirth << setw(5) << left << list[i].sex;
        cout << setw(10) << left << list[i].comeFrom.province;
        cout << setw(10) << left << list[i].comeFrom.city;
        cout << setw(5) << left << list[i].age;
        cout << setw(5) << left << list[i].scores.math;
        cout << setw(5) << left << list[i].scores.phys;
        cout << setw(5) << left << list[i].scores.chemis;
        cout << setw(5) << right << list[i].scores.total << endl;
    }
}

int main()
{
    Student listOfStudent[100];
    int n = 0;
    input(listOfStudent, n);
    cout << "DS thi sinh: " << endl;
    output(listOfStudent, n);
    cout << "Nhung thi sinh nu co diem >= 25:\n";
    for (int i = 0; i < n; i++)
        if (listOfStudent[i].scores.total >= 25)
            if (listOfStudent[i].sex == "Nu" || listOfStudent[i].sex == "nu")
                cout << listOfStudent[i].name << endl;
    int admissionScore, cnt = 0;
    cout << "Nhap diem trung tuyen: ";
    cin >> admissionScore;
    for (int i = 0; i < n; i++)
        if (listOfStudent[i].scores.total >= admissionScore && listOfStudent[i].comeFrom.city == "Ha Noi")
            cnt++;
    if (cnt == 0)
        cout << "Khong co thi sinh trung tuyen o Ha Noi\n";
    else
    {
        cout << "Nhung thi sinh o Ha Noi trung tuyen:\n";
        for (int i = 0; i < n; i++)
            if (listOfStudent[i].scores.total >= admissionScore && listOfStudent[i].comeFrom.city == "Ha Noi")
                cout << listOfStudent[i].name << endl;
    }
    sortByTotal(listOfStudent, n);
    cout << "DS thi sinh diem tang dan: " << endl;
    output(listOfStudent, n);
    return 0;
}