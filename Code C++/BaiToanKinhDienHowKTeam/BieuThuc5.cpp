//Tinh bieu thuc S(n)=1*3*5*....*n (Cac so le tu 1->n(n>=0))
#include <iostream>
using namespace std;

int Kiemtra()
{
    int x;
    while (x<0)
    {
        cin >> x;
        if(x<0)
        {
            cout << "Yeu cau nhap x>=0:";
        }
    }
    return x;
}

int Tinh(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            s*=i;
        }
    }
    return s;
}

int main()
{
    int n;
    cout <<"Nhap n:";
    n=Kiemtra();
    cout << "Gia tri bieu thuc S(n)="<<Tinh(n);
    return 0;
}
/*
#include<iostream>
using namespace std;

int Nhap()
{
	int x;
	do
	{
		cin >> x;
		if (x < 0)
			cout << "Nhap sai, yeu cau nhap lai!";
	} while (x < 0);
	return x;
}

long Tinh(int n)
{
	long p = 1;
	for (int i = 0; i <= n; i++)
		p = p * (2 * i + 1);
	return p;
}

int main()
{
	int n; 
	cout << "Nhap so nguyen n: ";
	n = Nhap();
	cout << "Ket qua la: "<< Tinh(n);
	return 0;
}*/