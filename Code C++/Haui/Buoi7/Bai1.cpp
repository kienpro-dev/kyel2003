#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[100], s2[100];
    cout << "Nhap chuoi 1: ";
    gets(s1);
    cout << "Nhap chuoi 2: ";
    gets(s2);
    if (strcmp(s1, s2) == 0)
        cout << "Hai chuoi bang nhau(co pb hoa hay thuong)";
    else
        cout << "Hai chuoi khong bang nhau(co pb hoa hay thuong)";
    cout << endl;
    if (strcmpi(s1, s2) == 0)
        cout << "Hai chuoi bang nhau(khong pb hoa thuong)";
    else
        cout << "Hai chuoi khong bang nhau(khong pb hoa thuong)";
    cout << endl;
    if (strncmp(s1, s2, 3) == 0)
        cout << "Hai chuoi bang nhau(3 ki tu dau)";
    else
        cout << "Hai chuoi khong bang nhau(3 ki tu dau)";
    return 0;
}