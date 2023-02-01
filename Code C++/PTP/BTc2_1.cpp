#include <iostream> //nhap giay, hien ra thoi gian ke tu 12h dem
#include <string>

using namespace std;

int main()
{
    cout << "Nhap so giay: ";
    int a;
    cin >> a;
    int hour, minute, second;
    hour = (a / 3600) % 24;
    minute = (a % 3600) / 60;
    second = (a % 3600) % 60;
    int hour2 = (hour > 12 ? hour - 12 : hour);
    string b = (hour > 12 ? "PM" : "AM");
    cout << "Bay gio la " << hour2 << ":" << minute << ":" << second << " " << b;
}