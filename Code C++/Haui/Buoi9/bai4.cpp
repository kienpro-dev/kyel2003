#include <iostream>
#include <string>

using namespace std;

#define YEAR 2022

struct Date
{
    int day;
    int month;
    int year;
};

struct Officer
{
    int code;
    string name;
    Date dateOfBirth;
    string gender;
    int salaryScale;
    string position;
};

void input(int &n)
{
    do
    {
        cin >> n;
        if (n < 1)
            cout << "KHong thoa man, nhap lai";
    } while (n < 1);
}

void inputOfficer(Officer &x)
{
    cout << "Nhap ma: ";
    cin >> x.code;
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, x.name);
    cout << "Nhap gioi tinh: ";
    getline(cin, x.gender);
    cout << "Nhap chuc vu: ";
    getline(cin, x.position);
    cout << "Nhap ngay sinh: ";
    cin >> x.dateOfBirth.day >> x.dateOfBirth.month >> x.dateOfBirth.year;
    cout << "Nhap bac luong: ";
    cin >> x.salaryScale;
    cin.ignore();
}

void outputOfficier(Officer x)
{
    cout << setw(5) << left << x.code << setw(15) << left << x.name << setw(5) << left << x.gender << setw(15) << left << x.position;
    cout << x.dateOfBirth.day << "/" << x.dateOfBirth.month << "/" << x.dateOfBirth.year;
    cout << setw(15) << right << x.salaryScale * 1050000 << endl;
}

void inputListOfOfficers(Officer list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Can bo thu " << i + 1 << endl;
        inputOfficier(list[i]);
    }
}

void table()
{
    cout << setw(5) << left << "STT" <<setw(5)<<left<<"Ma so"<< setw(15) << left << "Ho Ten" << setw(15) << left << "Chuc Vu";
    cout << "Ngay Sinh" << setw(15) << right << "Luong" << endl;
}

void outputListOfOfficers(Officer list[], int n)
{
    table();
    for (int i = 0; i < n; i++)
    {
        if(list[i].dateOfBirth.year <= YEAR-60 && list[i].gender=="Nam" || list[i].dateOfBirth.year <= YEAR-55 && list[i].gender=="Nu" )
        {
            cout << setw(5) << left << i + 1;
            outputOfficier(list[i]);
        }
    }
}

void outputListOfOfficersRetired(Officer list[], int n)
{
    table();
    int j=0;
    for (int i = 0; i < n; i++)
    {

        cout << setw(5) << left << j++;
        outputOfficier(list[i]);
    }
}

int main()
{
    return 0;
}