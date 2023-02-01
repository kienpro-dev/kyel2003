// tối ưu cụm từ nhập vào: xóa khoảng trắng k cần thiết, viết hoa chữ cái đầu môi từ
#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255

void deleteSpace(char s[]);
void upperFirstLetter(char s[]);

int main()
{
    char fullName[MAX];
    cout << "Nhap ten: ";
    gets(fullName);
    deleteSpace(fullName);
    upperFirstLetter(fullName);
    cout << "Ten cua ban la: " << fullName;
    return 0;
}

void deleteSpace(char s[])
{
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            s[j] = s[i];
            j++;
        }
        else if (s[i + 1] != ' ' && j > 0)
        {
            s[j] = s[i];
            j++;
        }
    }
    if (s[j - 1] == ' ')
        s[j - 1] = '\0';
    else
        s[j] = '\0';
}
void upperFirstLetter(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    if (s[0] != ' ')
    {
        s[0] -= 32;
        for (int i = 1; i < strlen(s); i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
            {
                s[i + 1] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
            {
                s[i + 1] -= 32;
            }
        }
    }
}