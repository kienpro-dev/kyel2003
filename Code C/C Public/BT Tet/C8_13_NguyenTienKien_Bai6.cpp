#include <iostream>
#include <string.h>

using namespace std;

#define MAX 255

void Input(char s[], char &c)
{
    gets(s);
    cin >> c;
}

void Find(char s[], char c)
{
    bool check = false;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            cout << i + 1 << " ";
            check = true;
        }
    }
    if (!check)
    {
        cout << "NO";
    }
}

int main()
{
    char s[MAX], c;
    Input(s, c);
    Find(s, c);
    return 0;
}