#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a - b > 1)
            cout << "Yes"<<endl;
        else
            cout << "No"<<endl;
    }
    return 0;
}