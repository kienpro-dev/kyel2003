//Hàm nối chuỗi strcat, strncat
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    const int MAX=255;
    char firstName[MAX], surName[MAX], lastName[MAX], fullName[MAX];
    cout << "Nhap ten:";
    gets(firstName);
    cout << "Nhap ten dem:";
    gets(surName);
    cout << "Nhap ho:";
    gets(lastName);
    strcpy(fullName, ""); //gán chuỗi này mặc định là rỗng để khi nối và xuất thì k bị lỗi
    strcat(fullName, lastName);
    strcat(fullName, " ");
    strcat(fullName, surName);
    strcat(fullName, " ");
    strcat(fullName, firstName);
    puts(fullName);
    cout << endl;
    char str[MAX], str1[MAX], str2[MAX];
    strcpy(str1, "Sieu nhan ");
    strcpy(str2, "DM sieu nhan");
    strcpy(str, "");
    strncat(str, str1, 5);
    strncat(str, str2, 7);
    puts(str);
}