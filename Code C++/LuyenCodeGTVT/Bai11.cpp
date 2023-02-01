//ban phim cua rambo
#include <iostream>
#include <string.h>

using namespace std;

void deleteChar(char a[], int &n, int idx)
{
    for (int i = idx; i < n; i++)
        a[i] = a[i + 1];
    n--;
}

int main()
{
    char a[100];
    cin >> a;
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        while (a[0] == 'B')
            deleteChar(a, n, 0);
        if (a[i] == 'B')
        {
            deleteChar(a, n, i);
            deleteChar(a, n, i - 1);
            i -= 2;
        }
    }
    cout << a;
    return 0;
}