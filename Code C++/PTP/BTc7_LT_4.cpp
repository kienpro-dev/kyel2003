// nhập xuất 2 ma trận vuông, trả về ma trận là tổng của 2 ma trận trên
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void input(int **&m, int n);
void output(int **&m, int n);
int **SumOfMatrixs(int **&m1,int **&m2, int n);

void input(int **&m, int n)
{
    m=new int*[n];
    for(int i=0;i<n;i++)
    {
        *(m+i)=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(m+i)+j)=rand()%101;
        }
    }
}
void output(int **&m, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(*(m+i)+j)<<"\t";
        }
        cout <<endl;
    }
}
int **SumOfMatrixs(int **&m1,int **&m2, int n)
{
    int **m3=new int*[n];
    for(int i=0;i<n;i++)
    {
        *(m3+i)=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(m3+i)+j)=*(*(m1+i)+j)+*(*(m2+i)+j);
        }
    }
    return m3;
}

int main()
{
    srand(time(NULL)); //nếu đặt lệnh này trong hàm input cho nó lấy giá trị ngẫu nhiên
                        // thì khi dùng 2 biến ma trận trở lên thì các ma trận giống hệt nhau
    int **m1, **m2;
    int n;
    cout << "Nhap canh ma tran vuong con tro:";
    cin >> n;
    input(m1,n);
    input(m2,n);
    cout << "Ma tran con tro 1:"<<endl;
    output(m1,n);
    cout << "Ma tran con tro 2:"<<endl;
    output(m2,n);
    int **m3=SumOfMatrixs(m1,m2,n);
    cout << "Tong 2 ma tran:"<<endl;
    output(m3,n);
    return 0;
}