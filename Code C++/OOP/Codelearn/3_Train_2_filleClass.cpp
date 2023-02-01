#include <iostream>

using namespace std;

class Time
{
private:
    int second;
    int minute;
    int hour;

public:
    Time(int hour, int minute, int second)
    {
        this->second = second;
        this->minute = minute;
        this->hour = hour;
    }
    void setTime(int hour, int minute, int second)
    {
        this->second = second;
        this->minute = minute;
        this->hour = hour;
    }
    void setHour(int hour)
    {
        this->hour = hour;
    }
    void setMinute(int minute)
    {
        this->minute = minute;
    }
    void setSecond(int second)
    {
        this->second = second;
    }
    int getSecond()
    {
        return second;
    }
    int getMinute()
    {
        return minute;
    }
    int getHour()
    {
        return hour;
    }
    void nextSecond()
    {
        second++;
        if (second == 60)
        {
            second = 0;
            minute++;
            if (minute == 60)
            {
                minute = 0;
                hour++;
                if (hour == 24)
                {
                    hour = 0;
                }
            }
        }
    }
    void previousSecond()
    {
        second--;
        if (second == -1)
        {
            second = 59;
            minute--;
            if (minute == -1)
            {
                minute = 59;
                hour--;
                if (hour == -1)
                {
                    hour = 23;
                }
            }
        }
    }
    void display()
    {
        if (hour < 10)
            cout << 0;
        cout << hour << ":";
        if (minute < 10)
            cout << 0;
        cout << minute << ":";
        if (second < 10)
            cout << 0;
        cout << second << endl;
    }
};