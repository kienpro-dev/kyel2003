// hàm in hoa in thường toupper, tolower
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char fullName[255];
    cout << "Nhap ten cua ban: ";
    gets(fullName);
    cout << "Ten cua ban in hoa: ";
    for (int i = 0; i < strlen(fullName); i++)
    {
        char c = fullName[i];
        putchar(toupper(c));
    }
    cout << endl;
    cout << "Ten cua ban in thuong: ";
    for (int i = 0; i < strlen(fullName); i++)
    {
        char c = fullName[i];
        putchar(tolower(c));
    }
    return 0;
}