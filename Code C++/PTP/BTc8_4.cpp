// hàm tìm kiếm chuỗi strchr, strstr
// Khi tìm kiêm kí tự hoặc chuỗi thì kết quả trả về sẽ là con trỏ
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char fullName[50];
    cout << "Nhap ten cua ban:";
    gets(fullName);
    puts(fullName);
    cout << "Nhap ki tu muon tim:";
    char find;
    cin >> find;
    char *p = strchr(fullName, find);
    if (p == NULL)
    {
        cout << "Khong tim thay";
    }
    else
    {
        cout << "Xuat hien o vi tri thu " << p - fullName; // chuỗi sẽ luôn trỏ vào kí tự đầu tiên [0], p lúc này trỏ đến kí tự find
                                                           //  lấy p-fullname sẽ ra vị trí
    }
    cout << endl;
    cout << "Nhap tu muon tim:";
    char find2[10];
    cin >> find2;
    char *p2 = strstr(fullName, find2);
    if (p2 == NULL)
    {
        cout << "Khong tim thay";
    }
    else
    {
        cout << "Xuat hien o vi tri thu " << p2 - fullName;
    }
    return 0;
}