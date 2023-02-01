#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int m, n;
    cin >> m >> n;

    int **a = new int *[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 20;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    
    int k, sum = 0;
    cin >> k;
    for (int i = 0; i < m; i++)
        sum += a[i][k - 1];
    cout << sum;
    return 0;
}