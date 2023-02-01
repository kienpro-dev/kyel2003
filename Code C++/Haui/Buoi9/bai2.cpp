#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

struct Officer
{
    string name;
    string position;
    Date dateOfBirth;
    int salaryScale;
};

void input(int &n)
{
    do
    {
        cin >> n;
        if (n < 1)
            cout << "Khong thoa man, nhap lai";
    } while (n < 1);
}

void inputOfficier(Officer &x)
{
    cout << "Nhap ten: ";
    getline(cin, x.name);
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
    cout << setw(15) << left << x.name << setw(15) << left << x.position;
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

void outputListOfOfficers(Officer list[], int n)
{

    cout << setw(5) << left << "STT" << setw(15) << left << "Ho Ten" << setw(15) << left << "Chuc Vu";
    cout << "Ngay Sinh" << setw(15) << right << "Luong" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << left << i + 1;
        outputOfficier(list[i]);
    }
}

bool checkAge(Officer a, Officer b)
{
    if (a.dateOfBirth.year < b.dateOfBirth.year)
        return false;
    else if (a.dateOfBirth.year == b.dateOfBirth.year)
    {
        if (a.dateOfBirth.month < b.dateOfBirth.month)
            return false;
        else if (a.dateOfBirth.month == b.dateOfBirth.month)
        {
            if (a.dateOfBirth.day < b.dateOfBirth.day)
                return false;
        }
    }
    return true;
}

void sortByName(Officer list[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[i].name.compare(list[j].name) > 0)
                swap(list[i], list[j]);
            else if (list[i].name.compare(list[j].name) == 0)
            {
                if (checkAge(list[i], list[j]))
                    swap(list[i], list[j]);
            }
        }
    }
}

int searchOfficer(Officer list[], Officer x, int left, int right) // binarySearch
{
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (list[mid].name.compare(x.name) == 0)
        return mid;
    if (list[mid].name.compare(x.name) < 0)
        return searchOfficer(list, x, mid + 1, right);
    return searchOfficer(list, x, left, mid - 1);
}

int main()
{
    int n;
    cout << "Nhap so can bo: ";
    input(n);
    cin.ignore();
    Officer listOfOfficiers[100];
    inputListOfOfficers(listOfOfficiers, n);
    sortByName(listOfOfficiers, n);
    cout << "Danh sach can bo: " << endl;
    outputListOfOfficers(listOfOfficiers, n);
    Officer x;
    cout << "Tim kiem can bo theo ten: ";
    getline(cin, x.name);
    if (searchOfficer(listOfOfficiers, x, 0, n - 1) == -1)
        cout << "Khong co can bo trong danh sach";
    else
        cout << "Can bo co trong danh sach";
    return 0;
}