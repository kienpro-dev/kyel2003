#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255
int main()
{
    char str[MAX];
    cout << "Nhap chuoi ki tu bat ki: ";
    gets(str);
    cout << "Chuoi tren sau khi dau nguoc: ";
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}