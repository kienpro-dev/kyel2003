#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255

void DeleteExcessSpace(char s[])
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
    {
        s[j - 1] = '\0';
    }
    else
    {
        s[j] = '\0';
    }
}

void UpperFirstLetter(char s[])
{
    strlwr(s);
    s[0] -= 32;
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
        {
            s[i + 1] -= 32;
        }
    }
}

int main()
{
    char s[MAX];
    gets(s);
    DeleteExcessSpace(s);
    UpperFirstLetter(s);
    puts(s);
    return 0;
}