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

void deleteChar(char s[], int &n, int idx)
{
    for (int i = idx; i < n - 1; i++)
        s[i] = s[i + 1];
    n--;
}

void toLowerCase(char s[], int n)
{
    for (int i = 0; i < n; i++)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
}

void standardizeString(char s[], int &n)
{
    deleteExcessSpaces(s);
    toLowerCase(s, n);
    s[0] -= 32;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && s[i] == ',' && s[i - 1] == ' ' || i > 0 && s[i] == '.' && s[i - 1] == ' ' ||
            i > 0 && s[i] == '!' && s[i - 1] == ' ' || i > 0 && s[i] == ';' && s[i - 1] == ' ' ||
            i > 0 && s[i] == '?' && s[i - 1] == ' ' || i > 0 && s[i] == ':' && s[i - 1] == ' ')
            deleteChar(s, n, i - 1);
        if (s[i] == ' ')
        {
            if (s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?')
                s[i + 1] -= 32;
        }
    }
}

int main()
{
    char str[1000];
    cout << "Nhap chuoi: ";
    gets(str);
    int n = strlen(str);
    standardizeString(str, n);
    cout << "Chuoi sau khi chuan hoa: ";
    puts(str);
    return 0;
}