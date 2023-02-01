#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    int i = 0, j;
    while (true)
    {
        if (str.find("child", i) >= 0 && str.find("child", i) < str.length())
        {
            j = str.find("child", i);
            str.replace(j, 5, "children");
            i = (j + 1);
        }
        else
            break;
    }
    cout << "Chuoi sau khi thay the: " << str;
    return 0;
}