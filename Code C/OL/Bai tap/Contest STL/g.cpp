#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> st;
    string s;
    int n;
    cin >> n;
    int cnt = 0, num_box_to_cmp = 1;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> s;
        int num_box;
        if (s.compare("add") == 0)
        {
            cin >> num_box;
            st.push(num_box);
        }
        else
        {
            if (!st.empty())
            {
                if (st.top() == num_box_to_cmp)
                    st.pop();
                else
                {
                    cnt++;
                    while (!st.empty())
                        st.pop();
                }
            }
            num_box_to_cmp++;
        }
    }
    cout << cnt;
    return 0;
}