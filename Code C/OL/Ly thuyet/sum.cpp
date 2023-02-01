#include <iostream>

using namespace std;

int sum(int a[], int left, int right)
{
    int mid = (left + right) / 2;
    if (left == right)
        return a[left]*a[left];
    return sum(a, left, mid) + sum(a, mid + 1, right);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    cout << sum(a, 0, 6) << endl;
    return 0;
}