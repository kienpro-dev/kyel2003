#include <iostream>
#include <string.h>

using namespace std;

void deleteExcessSpaces(char s[])
{
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
            s[j++] = s[i];
        else if (s[i + 1] != ' ' && j > 0)
            s[j++] = s[i];
    }
    if (s[j - 1] == ' ')
        s[j - 1] = '\0';
    else
        s[j] = '\0';
}

int countWords(char s[])
{
    int cnt = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ')
            cnt++;
    return cnt + 1;
}

int main()
{
    char str[1000];
    cout << "Nhap chuoi: ";
    fgets(str,1000,stdin);
    deleteExcessSpaces(str);
    cout << "So luong tu cua chuoi: " << countWords(str);
    return 0;
}