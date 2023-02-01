#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255
int main()
{
    char fullName[MAX];
    cout << "Nhap ten cua ban: ";
    gets(fullName);
    for (int i = 0; i < strlen(fullName); i++)
    {
        cout << "Ma ASCII cua " << fullName[i] << " la: " << (int)fullName[i] << endl;
    }
    return 0;
}