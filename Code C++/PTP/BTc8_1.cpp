//khai báo, nhập, xuất,... về chuỗi 
#include<iostream>
#include<string.h>

using namespace std;

#define MAX 255

int main()
{
    char str1[MAX];
    cout << "Nhap chuoi ki tu: ";
    gets(str1);
    cout << "Chuoi ki tu vua nhap: ";
    puts(str1);
    cout << endl;
    char *str2=new char[MAX];
    cout << "Nhap chuoi ki tu: ";
    cin.getline(str2,MAX);
    cout << "Chuoi ki tu vua nhap: ";
    cout << str2;
    cout << endl;
    int sum=strlen(str1)+strlen(str2);
    int remain= MAX - sum;
    cout << "Cac chuoi tren su dung "<<sum<<" ki tu"<<endl;
    cout << "Con lai "<<remain<<" ki tu";
    return 0;
}