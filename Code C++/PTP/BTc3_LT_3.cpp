// in ra ngay mai va hom qua trong nam
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int day, month, year;
    int day1, month1, year1;
    cin >> day >> month >> year;
    day1 = day;
    month1 = month;
    year1 = year;
    int cuoithang;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        cuoithang = 30;
    else if (month == 2)
        cuoithang = 28 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    else
        cuoithang = 31;
    day = (day % cuoithang) + 1;
    if (day == 1)
        month = (month % 12) + 1;
    cout << "Ngay mai la ngay " << day << ":" << month << ":" << year + (day == 1 && month == 1) << endl;
    if (day1 == 1)
    {
        if (month1 - 1 == 4 || month1 - 1 == 6 || month1 - 1 == 9 || month1 - 1 == 11)
            day1 = 30;
        else if (month1 == 2)
            day1 = 28 + ((year % 4 == 0 && year != 100) || year % 400 == 0);
        else
            day1 = 31;
        if (month1 == 1)
        {
            month1 = 12;
            year1--;
        }
        else
        {
            month1--;
        }
    }
    else
        day1--;
    cout << "Ngay hom qua la ngay " << day1 << ":" << month1 << ":" << year1 << endl;
    return 0;
}