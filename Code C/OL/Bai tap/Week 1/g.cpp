#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    int *res = new int[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a == b)
            res[i] = a * b * 4;
        else
        {
            if(a>b)
                swap(a,b);
            if(a*2<=b)
                res[i] = b*b;
            else
                res[i] = 4*a*a;
        }
        
    }
    for (int i = 0; i < t; i++)
        cout << res[i] << endl;
    delete[] res;
    return 0;
}