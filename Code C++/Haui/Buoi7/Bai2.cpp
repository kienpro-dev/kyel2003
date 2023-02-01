#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], s1[100];
    cout << "Nhap chuoi: ";
    gets(s);
    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            cnt_1++;
        else if (s[i] >= 97 && s[i] <= 122)
            cnt_2++;
        else if (s[i] >= 48 && s[i] <= 57)
            cnt_3++;
    }
    cout << "So luong chu cai hoa: " << cnt_1 << endl;
    cout << "So luong chu cai thuong: " << cnt_2 << endl;
    cout << "So luong chu so: " << cnt_3 << endl;
    int j = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
        s1[j++] = s[i];
    s1[j] = '\0';
    cout << "Chuoi dao nguoc: " << s1 << endl;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            if (s[i] == '0')
                cout << "khong";
            else if (s[i] == '1')
                cout << "mot";
            else if (s[i] == '2')
                cout << "hai";
            else if (s[i] == '3')
                cout << "ba";
            else if (s[i] == '4')
                cout << "bon";
            else if (s[i] == '5')
                cout << "nam";
            else if (s[i] == '6')
                cout << "sau";
            else if (s[i] == '7')
                cout << "bay";
            else if (s[i] == '8')
                cout << "tam";
            else if (s[i] == '9')
                cout << "chin";
        }
        else
            cout << s[i];
    }
    return 0;
}