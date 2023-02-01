#include <iostream>
#include <string>

using namespace std;

int countStringInString(string s_1, string s_2)
{
    int cnt = 0, i = 0;
    while (true)
    {
        if (s_1.find(s_2, i) >= 0 && s_1.find(s_2, i) < s_1.length())
        {
            cnt++;
            i = (s_1.find(s_2, i) + 1);
        }
        else
            break;
    }
    return cnt;
}

void replaceString(string &s_1, string s_2, string s_3)
{
    int i = 0, j;
    while (true)
    {
        if (s_1.find(s_2, i) >= 0 && s_1.find(s_2, i) < s_1.length())
        {
            j = s_1.find(s_2, i);
            s_1.replace(j, s_2.length(), s_3);
            i = (j + 1);
        }
        else
            break;
    }
}

int main()
{
    string s_1, s_2, s_3;
    cout << "Nhap chuoi 1: ";
    getline(cin, s_1);
    cout << "Nhap chuoi 2: ";
    getline(cin, s_2);
    cout << "So lan xuat hien cua chuoi 2 trong chuoi 1: " << countStringInString(s_1, s_2);
    cout << "\nNhap chuoi 3: ";
    getline(cin, s_3);
    replaceString(s_1, s_2, s_3);
    cout << "Chuoi 1 sau khi thay chuoi 2 bang chuoi 3: " << s_1;
    return 0;
}