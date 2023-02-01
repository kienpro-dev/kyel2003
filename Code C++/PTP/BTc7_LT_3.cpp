// xuat mang ngau nhien, sx tang dan (con trỏ)
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void input(int *&a, int n);
void output(int *&a, int n);
void tang(int *&a, int n);
void swap(int *&pa, int *&pb);

void input(int *&a, int n)
{
    srand(time(NULL));
    a=new int[n];
    for (int i=0;i<n;i++)
    {
        *(a+i)=10+rand()%90;
    }
}

void output(int *&a, int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<*(a+i)<<"\t";
    }
}

void tang(int *&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (*(a+i)>*(a+j))
            {
                int *a1=(a+i);
                int *a2=(a+j);
                swap(a1,a2);
            }
        }
    }
}

void swap(int *&pa, int *&pb)
{
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
}

int main()
{
    int *a;
    int n;
    cout << "Nhap so phan tu:";
    cin >> n;
    input(a,n);
    cout << "Mang con tro:"<<endl;
    output(a,n);
    cout <<endl;
    tang(a,n);
    cout << "Mang con tro tang dan:"<<endl;
    output(a,n);
    return 0;
}