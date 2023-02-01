//số hoàn thiện, số thịnh vượng (tổng các ước không kể nó > nó)

#include<iostream>

using namespace std;

int Kiemtra();
int Tonguoc(int x);

int Kiemtra()
{
    int x;
    while(x<1)
    {
        cin >> x;
        if(x<1)
        {
            cout<<"Yeu cau nhap so nguyen duong:";
        }
    }
    return x;
}

int Tonguoc(int x)
{
    int tong=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            tong+=i;
        }
    }
    return tong;
}
int main()
{
    int n;
    cout << "Nhap n:";
    n=Kiemtra();
    int tong=Tonguoc(n);
    if(tong==n)
    {
        cout <<n<<" la so hoan thien";
    }
    else if(tong>n)
    {
        cout <<n<<" la so thinh vuong";
    }
    else 
    {
        cout <<n<<" khong phai so hoan thien cx khong phai so thinh vuong";
    }
    return 0;
}