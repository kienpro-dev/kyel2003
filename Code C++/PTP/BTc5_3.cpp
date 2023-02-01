//mang 2 chieu, cho ra cac so ngau nhien, thao tac trong mang 2 chieu
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int row,colum;
    cout << "Nhap dong: ";
    cin >> row;
    cout << "Nhap cot: ";
    cin >> colum;
    int arr[row][colum];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            arr[i][j]=rand()%100;
        }
    }
    cout <<"Mang 2 chieu trich xuat ngau nhien: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    if(row==colum)
    {
        cout<<"Tiep tuc thao tac (yes/no)?"<<endl;
        string s;
        cin >>s;
        if(s=="yes")
        {
            cout<<"Xuat ra hang: ";
            int h;
            cin >> h;
            for(int j=0;j<colum;j++)
            {
                cout<<arr[h][j]<<"\t";
            }
            cout<<"\nXuat ra cot: ";
            int c;
            cin >> c;
            for(int i=0;i<row;i++)
            {
                cout <<arr[i][c]<<"\n";
            }
        }
        else
        {
            cout <<"Ban da ngung thao tac!!";
        }
        cout<<"Tiep tuc thao tac khac (yes/no)?"<<endl;
        string s2;
        cin >>s2;
        if(s2=="yes")
        {
            cout<<"Xuat ra duong cheo chinh: "<<endl;
            for(int i=0;i<row;i++)
            {
                cout<<arr[i][i]<<"\t";
            }
            cout<<"\nXuat ra duong cheo phu: "<<endl;
            for(int i=0;i<row;i++)
            {
                cout<<arr[i][row-i-1]<<"\t";
            }
        }
        else
        {
            cout<<"Ban da ngung thao tac!!";
        }
    }
    return 0;
}