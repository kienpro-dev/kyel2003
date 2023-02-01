// kiểu struct: ddùng để lưu trữ các kiểu dữ liệu và tạo ra kiểu dữ liệu cho mình biên dịch
#include <iostream>
#include <string.h>

using namespace std;

struct address
{
    char xa[10], huyen[10], tp[10];
};

struct Student
{
    char name[50];
    int age;
    address home;
    address school;
};

int main()
{
    Student sv1;
    cout << "Nhap ten sinh vien: ";
    gets(sv1.name);
    cout << "Nhap tuoi: ";
    cin >> sv1.age;
    cout << "Nhap dia chi nha(xa,huyen,tp): ";
    gets(sv1.home.xa);
    gets(sv1.home.huyen);
    gets(sv1.home.tp);
    cout << "Nhap dia chi truong(xa,huyen,tp): ";
    gets(sv1.school.xa);
    gets(sv1.school.huyen);
    gets(sv1.school.tp);
    return 0;
}