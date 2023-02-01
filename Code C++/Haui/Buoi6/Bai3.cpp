#include <iostream>

using namespace std;

void input(int &n)
{
    do
    {
        cin >> n;
        if (n < 5 || n > 20)
            cout << "Khong thoa man, nhap lai: ";
    } while (n < 5 || n > 20);
}

void begin(int a[][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i][0] = i + 1;
        for (int j = 1; j < 9; j++)
            a[i][j] = 0;
    }
}

void swapRow(int a[][20], int row_1, int row_2)
{
    for (int i = 0; i < 9; i++)
        swap(a[row_1][i], a[row_2][i]);
}

void resOfMatch(int a[][20], int b[], int n, int &k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x, y;
            cout << "Doi " << i + 1 << " vs Doi " << j + 1 << ": ";
            cin >> x >> y;
            b[k] = x, b[k + 1] = y, k += 2;
            a[i][1]++, a[j][1]++, a[i][5] += x, a[i][6] += y, a[j][5] += y, a[j][6] += x;
            if (x > y)
                a[i][2]++, a[j][4]++, a[i][8] += 3;
            else if (x < y)
                a[j][2]++, a[i][4]++, a[j][8] += 3;
            else
                a[i][3]++, a[j][3]++, a[i][8]++, a[j][8]++;
        }
    }
    for (int i = 0; i < n; i++)
        a[i][7] += (a[i][5] - a[i][6]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][8] < a[j][8])
                swapRow(a, i, j);
            else if (a[i][8] == a[j][8] && a[i][7] < a[j][7])
                swapRow(a, i, j);
        }
    }
}

void outResOfMatch(int b[], int k, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "Doi " << i + 1 << "\t\t" << b[k] << "-" << b[k + 1] << "\t\t"
                 << "Doi " << j + 1 << endl;
            k += 2;
        }
    }
}

void outRanking(int a[][20], int n)
{
    for (int i = -1; i < n; i++)
    {
        if (i >= 0)
            cout << "Doi ";
        for (int j = 0; j < 9; j++)
        {
            if (i == -1)
            {
                cout << "\tTr\tTh\tH\tB\tBT\tBB\tHS\tD";
                break;
            }
            else if (j == 0)
                cout << a[i][j];
            else
                cout << "\t" << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n, a[20][20], b[100], k = 0;
    cout << "Nhap so doi bong: ";
    input(n);
    begin(a, n);
    resOfMatch(a, b, n, k);
    cout << "-----------------------Ket qua cac tran dau-----------------------"
         << "\n\n";
    outResOfMatch(b, 0, n);
    cout << "-------------------Bang tong ket sau 1 luot dau-------------------"
         << "\n\n";
    outRanking(a, n);
    cout << "Champion: Doi " << a[0][0];
    return 0;
}