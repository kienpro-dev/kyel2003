// nhập xuất mảng con trỏ 1 chiều, lấy ra 3 số lớn nhất
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int *capphat(int n);
void input(int *pM, int n);
void output(int *pM, int n);
int *ListMax(int *pM,int n);
void giam(int *pM,int n);

int *capphat(int n)
{
    int *pM=new int[n];
    return pM;
}

void input(int *pM, int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        *(pM+i)=rand()%100;
    }
}

void output(int *pM, int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<*(pM+i)<<"\t";
    }
}

int *ListMax(int *pM,int n)
{
    int m=n>3?3:n; //với danh sách lớn hơn 3 con trỏ thì chỉ trả về 3, còn 1.2.3 con trỏ thì trả về hết 
    int *pX=capphat(m);
    giam(pM,n);
    for(int i=0;i<m;i++)     // sau khi sx giam dan, ta lấy 3 phần tử đầu tiên của con trỏ pM
    {                        // rồi gán nó cho con trỏ pX chỉ có tối đa 3 phần tử
        *(pX+i)=*(pM+i);
    }
    return pX;

}
void giam(int *pM,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(pM+i)<*(pM+j))
            {
                int temp=*(pM+i);
                *(pM+i)=*(pM+j);
                *(pM+j)=temp;
            }
        }
    }
}

int main()
{
    int n;
    int *pM=capphat(n);
    cout << "Nhap so con tro:";
    cin >> n;
    input(pM,n);
    cout << "Cac gia tri con tro tro toi:"<<endl;
    output(pM,n);
    cout <<endl;
    cout << "3 gia tri lon nhat cua cac con tro:"<<endl;
    int *pX=ListMax(pM,n);
    output(pX,3);
    return 0;
}