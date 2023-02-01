#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[1000];
    fgets(s,1000,stdin);
    long long sum = 0, num = 0, cnt = 0;
    bool haveNegativeNum = false;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            num = num * 10 + (s[i] - 48);
            if (i > 0 && s[i - 1] == '-')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] != '-')
                        break;
                    else
                        cnt++;
                }
                if (cnt % 2 != 0)
                {
                    haveNegativeNum = true;
                    cnt = 0;
                }
            }
        }
        else
        {
            if (haveNegativeNum)
            {
                num *= (-1);
                haveNegativeNum = false;
            }
            sum += num;
            num = 0;
        }
    }
    cout << sum;
    return 0;
}