#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string in, out = "";
    getline(cin, in);
    for (int i = 0; i < in.length(); i++)
    {
        if (!out.empty() && in[i] == out.back())
            out.pop_back();
        else
            out.push_back(in[i]);
    }
    cout << out;
    return 0;
}