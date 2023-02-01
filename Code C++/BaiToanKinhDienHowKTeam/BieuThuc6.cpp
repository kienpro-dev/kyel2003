//Tinh S(n) = 1-2+3-4+5+...+((-1)^(n+1))*n (n>0)
#include<iostream>

using namespace std;

int checkInput();
int Tinh();

int checkInput()
{
    int x;
    while (x<=0)
    {
        cin >> x;
        if(x<=0)
        {
            cout <<"Yeu cau nhap x>0:";
        }
    }
    return x;
}

int Tinh(int n)
{
    int tongle=0, hieuchan=0;
    for(int i=1;i<=n;i++)
    {
        if (i%2 != 0)
        {
            tongle+=i;
        }
        else 
        {
            hieuchan-=i;
        }
    }
    return tongle+hieuchan;
}

int main()
{
    int n;
    cout <<"Nhap n:";
    n=checkInput();
    int kq=Tinh(n);
    cout << "Ket qua S(n) = "<<kq;
    return 0;
}