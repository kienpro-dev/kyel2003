// chuoi hoan hao
#include <iostream>
#include <string.h>

using namespace std;

void deleteChar(char a[], int &n, int idx)
{
    for (int i = idx; i < n; i++)
        a[i] = a[i + 1];
    n--;
}

void deleteDuplicateChar(char a[], int &n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                deleteChar(a, n, j);
}

int main()
{
    char a_1[100], a_2[100];
    cin >> a_1;
    int n_1 = strlen(a_1), n_2 = 0;
    for (int i = 0; i < n_1; i++)
    {
        a_2[n_2] = a_1[i];
        n_2++;
    }
    int cnt;
    deleteDuplicateChar(a_2, n_2);
    for (int i = 0; i < n_2; i++)
    {
        cnt = 0;
        for (int j = 0; j < n_1; j++)
        {
            if (a_2[i] == a_1[j])
                cnt++;
        }
        a_2[i] = cnt;
    }
    bool check = true;
    for (int i = 0; i < n_2; i++)
        if (a_2[i] % 2 != 0)
            check = false;
    if (!check)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}