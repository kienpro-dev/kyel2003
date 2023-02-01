//ngay hom sau
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char str[15];
    cin >> str;
    int i_1, i_2;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '/')
        {
            i_1 = i;
            for (int j = strlen(str) - 1; j > i; j--)
            {
                if (str[j] == '/')
                {
                    i_2 = j;
                    break;
                }
            }
            break;
        }
    }
    char str_2[5], str_3[5];
    int k = 0, m = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (i > i_1 && i < i_2)
        {
            str_2[k] = str[i];
            k++;
        }
        else if (i > i_2)
        {
            str_3[m] = str[i];
            m++;
        }
    }
    str_2[k] = '\0';
    str_3[m] = '\0';
    int day = atoi(str), month = atoi(str_2), year = atoi(str_3);
    int end_of_month;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        end_of_month = 30;
    else if (month == 2)
        end_of_month = 28 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    else
        end_of_month = 31;
    day = (day % end_of_month) + 1;
    if (day == 1)
    {
        month = (month % 12) + 1;
    }
    cout << day << "/" << month << "/" << year + (day == 1 && month == 1);
    return 0;
}