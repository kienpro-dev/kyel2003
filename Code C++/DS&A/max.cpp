#include <iostream>

using namespace std;

int maxx(int a[], int l, int r)
{
    if (l == r)
        return a[l];
    else if (l + 1 == r)
    {
        if (a[l] > a[r])
            return a[l];
        else
            return a[r];
    }
    else
    {
        int m = (l + r) / 2;
        int max_l = maxx(a, l, m);
        int max_r = maxx(a, m + 1, r);
        if (max_l > max_r)
            return max_l;
        else
            return max_r;
    }
}

int main()
{
    int a[9] = {2, 4, 1, 6, 7, 4, 3, 6, 1};
    cout << maxx(a, 0, 8);
    return 0;
}