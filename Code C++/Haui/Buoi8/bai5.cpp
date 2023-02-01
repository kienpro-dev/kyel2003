#include <iostream>
#include <cstring>

using namespace std;

void convert(char *c)
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] -= 32;
        else if (c[i] >= 'A' && c[i] < 'z')
            c[i] += 32;
    }
}

int countNum(char *c)
{
    int cnt = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= '0' && c[i] <= '9')
            cnt++;
        while (c[i] >= '0' && c[i] <= '9')
            i++;
    }
    return cnt;
}

int main()
{
    char *s = new char[80];
    cout << "Nhap chuoi: ";
    gets(s);
    cout << "Chuoi vua nhap: ";
    puts(s);
    convert(s);
    cout << "Chuoi thay the: ";
    puts(s);
    cout << "So luong so nguyen cua chuoi: " << countNum(s);
    return 0;
}