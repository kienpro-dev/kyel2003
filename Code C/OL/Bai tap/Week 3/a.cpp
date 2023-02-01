#include <iostream>

using namespace std;

void standardOutput(int s_h, int s_m)
{
    if (s_h < 10)
        cout << "0" << s_h << ":";
    else
        cout << s_h << ":";
    if (s_m < 10)
        cout << "0" << s_m;
    else
        cout << s_m;
}

int main()
{
    int s_h, s_m, t_h, t_m, p_h, p_m;
    char c;
    cin >> s_h >> c >> s_m >> t_h >> c >> t_m;
    if (t_h == 0 && t_m == 0)
        standardOutput(s_h, s_m);
    else
    {
        if (s_h >= t_h && s_m >= t_m)
        {
            p_h = s_h - t_h;
            p_m = s_m - t_m;
        }
        else if (s_h >= t_h)
        {
            p_h = s_h - t_h - 1;
            if (p_h < 0)
                p_h += 24;
            p_m = 60 - t_m + s_m;
        }
        else if (s_m >= t_m)
        {
            p_m = s_m - t_m;
            p_h = 24 - t_h + s_h;
        }
        else
        {   
            p_m = 60 - t_m + s_m;
            p_h = 24 - (t_h - s_h + 1);
        }
        standardOutput(p_h, p_m);
    }
    return 0;
}