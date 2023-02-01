#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int sum = 0, number = 0;
    bool haveNegNum=false;
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            if (str[i - 1] == '-')
                haveNegNum = true;
            number = number * 10 + (str[i] - '0');

        }
        else
        {
            if(haveNegNum==true)    
                number*=-1;
            sum += number;
            number = 0;
        }
    }
    cout << sum;
    return 0;
}