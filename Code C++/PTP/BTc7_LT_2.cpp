// nhap xuat ma tran con tro cap 2 với n hàng m cột trong đoạn [-50.50], cho ra con trỏ quản lý giá trị lơn nhất
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void input(int **&a,int n,int m);
void output(int **&a,int n,int m);
int Max(int **&a,int n,int m);

void input(int **&a,int n,int m)
{
    srand(time(NULL));
    a=new int*[n];
    for(int i=0;i<n;i++)
    {
        *(a+i)=new int[m];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(a+i)+j)=-50+rand()%101;
        }
    }
}
void output(int **&a,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << *(*(a+i)+j)<<"\t";
        }
        cout <<endl;
    }
}
int Max(int **&a,int n,int m)
{
    int max=*(*(a+0)+0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<*(*(a+i)+j))
            {
                max=*(*(a+i)+j);
            }
        }
    }
    return max;
}

int main()
{
    int **a;
    int n,m;
    cout << "Nhap so mang con tro:";
    cin >> n;
    cout << "Nhap so con tro moi mang:";
    cin >> m;
    input(a,n,m);
    cout << "Ma tran con tro:"<<endl;
    output(a,n,m);
    int max=Max(a,n,m);
    cout << "MAX = "<<max;
    return 0;
}
