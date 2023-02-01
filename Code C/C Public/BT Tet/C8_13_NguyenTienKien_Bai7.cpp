#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255

void StringHandling(char s[])
{
    char result[MAX];
    char s1[MAX], s2[MAX], s3[MAX]; // bien luu xau
    int j1, j2;                     // bien luu lai chi so cua ki tu khoang trang (space)
    int i1 = 0, i2 = 0, i3 = 0;     // bien luu xau
    // lay tu cuoi
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            j1 = i;
            break;
        }
    }
    for (int i = j1 + 1; i < strlen(s); i++)
    {
        s1[i1] = s[i];
        i1++;
    }
    s1[i1] = '\0';
    strcpy(result, s1);
    // lay tu giua
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            j2 = i;
            break;
        }
    }
    for (int i = j2; i <= j1; i++)
    {
        s2[i2] = s[i];
        i2++;
    }
    s2[i2] = '\0';
    strcat(result, s2);
    // lay tu dau
    for (int i = 0; i < j2; i++)
    {
        s3[i3] = s[i];
        i3++;
    }
    s3[i3] = '\0';
    strcat(result, s3);
    puts(result);
}

int main()
{
    char s[MAX];
    gets(s);
    StringHandling(s);
    return 0;
}