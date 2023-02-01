#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s_1, s_2;
    cin >> s_1 >> s_2;
    if(s_1 == "#." && s_2 == ".#" || s_1 == ".#" && s_2 == "#.")
        cout << "No";
    else
        cout << "Yes";
    return 0;
}