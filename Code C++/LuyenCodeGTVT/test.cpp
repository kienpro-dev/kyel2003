#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void arrayRandom(int a[][100], int m, int n)
{
    srand(time(NULL));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 10;
}

void arrayOut(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));
    int row_1, col_1, row_2, col_2;
    int a_1[100][100], a_2[100][100];
    cout << "Nhap hang va cot cua mt A: ";
    cin >> row_1 >> col_1;
    arrayRandom(a_1, row_1, col_1);
    cout << "Mt A ngau nhien: " << endl;
    arrayOut(a_1, row_1, col_1);
    cout << "Nhap hang va cot cua mt B: ";
    cin >> row_2 >> col_2;
    arrayRandom(a_2, row_2, col_2);
    cout << "Mt B ngau nhien: " << endl;
    arrayOut(a_2, row_2, col_2);
    if (col_1 != row_2)
    {
        cout << "Khong the tinh phep nhan ma tran!!";
        return 0;
    }
    int a_3[100][100], sum;
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            sum = 0;
            for (int k = 0; k < col_1; k++)
            {
                sum += a_1[i][k] * a_2[k][j];
            }
            a_3[i][j] = sum;
        }
    }
    cout << "Ma tran tich A*B: " << endl;
    arrayOut(a_3, row_1, col_2);
    return 0;
}