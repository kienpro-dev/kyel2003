// nhap xuat ds học sinh
// loc ds hs theo lop
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Classes
{
    int codeC;
    char nameC[10];
};

struct Students
{
    char nameS[50];
    int codeS;
    int ageS;
    Classes lop;
};

void nhapHocSinh(Students &hs);
void xuatHocSinh(Students hs);
void nhapDSHocSinh(Students hs[], int &n);
void xuatDSHocSinh(Students hs[], int n);
void filterStudentsByClass(Students hs[], int n, char lop[]);

int main()
{
    int n;
    Students hs[100];
    nhapDSHocSinh(hs, n);
    xuatDSHocSinh(hs, n);
    char lop1[10];
    cout << "Nhap lop: ";
    gets(lop1);
    filterStudentsByClass(hs, n, lop1);
    return 0;
}

void nhapHocSinh(Students &hs)
{
    cout << "Name: ";
    gets(hs.nameS);
    cout << "ID: ";
    cin >> hs.codeS;
    cout << "Age: ";
    cin >> hs.ageS;
    cin.ignore();
    cout << "Class: ";
    gets(hs.lop.nameC);
    cout << "ID (class): ";
    cin >> hs.lop.codeC;
    cin.ignore();
}

void xuatHocSinh(Students hs)
{
    cout << setw(10) << left << hs.codeS;
    cout << setw(25) << left << hs.nameS;
    cout << setw(10) << left << hs.ageS;
    cout << setw(10) << left << hs.lop.nameC;
    cout << setw(10) << right << hs.lop.codeC << endl;
}

void nhapDSHocSinh(Students hs[], int &n)
{
    cout << "Nhap so hoc sinh: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "STT " << i + 1 << endl;
        nhapHocSinh(hs[i]);
    }
}

void xuatDSHocSinh(Students hs[], int n)
{
    cout << setfill('_');
    cout << setw(70) << "_";
    cout << setfill(' ') << endl;
    cout << setw(5) << left << "STT";
    cout << setw(10) << left << "ID";
    cout << setw(25) << left << "Name";
    cout << setw(10) << left << "Age";
    cout << setw(10) << left << "Class";
    cout << setw(10) << right << "ID(class)" << endl;
    cout << setfill('_');
    cout << setw(70) << "_";
    cout << setfill(' ') << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << left << i + 1;
        xuatHocSinh(hs[i]);
    }
    cout << setfill('_');
    cout << setw(70) << "_";
    cout << setfill(' ') << endl;
}

void filterStudentsByClass(Students hs[], int n, char lop[])
{
    cout << "DS hoc sinh lop " << lop << endl;
    cout << setfill('_');
    cout << setw(70) << "_";
    cout << setfill(' ') << endl;
    cout << setw(5) << left << "STT";
    cout << setw(10) << left << "ID";
    cout << setw(25) << left << "Name";
    cout << setw(10) << left << "Age";
    cout << setw(10) << left << "Class";
    cout << setw(10) << right << "ID(class)" << endl;
    cout << setfill('_');
    cout << setw(70) << "_";
    cout << setfill(' ') << endl;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(lop, hs[i].lop.nameC) == 0)
        {
            cout << setw(5) << left << i + 1;
            xuatHocSinh(hs[i]);
        }
    }
    cout << setfill('_');
    cout << setw(70) << "_";
    cout << setfill(' ') << endl;
}