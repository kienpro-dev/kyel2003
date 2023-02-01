//hoan vi 1 ma tran(dong thanh cot, cot thanh dong)
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() 
{
    srand(time(NULL));
    int m,n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            a[i][j]=rand()%100;
        }
    }
    cout << "Mang ma tran ngau nhien: "<<endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int a2[n][m];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            a2[j][i]=a[i][j];//giải thuật giúp chuyển dòng thành cột
        }
    }
    cout<<"Mang ma tran sau khi hoan vi: "<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<a2[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}