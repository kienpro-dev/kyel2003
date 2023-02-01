//ham trong cpp
#include<iostream>

using namespace std;

int SumOfNumbers(int a, int b);
int Sum(int x);
void Output(int x);
void Output2();

int SumOfNumbers(int a, int b)
{
    return a+b;
}

int Sum(int x)
{
    int tong=0;
    for(int i=1;i<=x;i++)
    {
        tong+=i;
    }
    return tong;
}

void Output(int x)
{
    for(int i=0;i<=x;i++)
    {
        cout <<i<<"  ";
    }
}

void Output2()
{
    int x=SumOfNumbers(10,11);
    Output(x);

}
int main()
{
    cout<<"Nhap a:";
    int a,b;
    cin >> a;
    cout<<"Nhap b:";
    cin >> b;
    cout<<a<<" + "<<b<<" = "<<SumOfNumbers(a,b)<<endl;
    int x;
    cout << "Nhap x:";
    cin >> x;
    cout<<"Tong cac so tu 1 den "<<x<<" la: "<<Sum(x)<<endl;
    int n;
    cout<<"Nhap n:";
    cin >> n;
    cout<<"Day so tu 0->"<<n<<" : "<<endl;
    Output(n);
    cout<<endl;
    Output2();
    return 0;
}